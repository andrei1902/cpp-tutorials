# Build stage
FROM gcc:latest AS build
WORKDIR /app
COPY Arrays/ .
RUN g++ random_numbers.cpp random_array.cpp -static -o random_numbers

# Runtime stage
FROM alpine
WORKDIR /app
COPY --from=build /app/random_numbers .
ENTRYPOINT ["./random_numbers"]