# Build stage
FROM gcc:latest AS build
WORKDIR /app
COPY Arrays/ .
RUN g++ size_of_array_demo.cpp random_array.cpp -static -o size_of_array_demo

# Runtime stage
FROM alpine
WORKDIR /app
COPY --from=build /app/size_of_array_demo .
ENTRYPOINT ["./size_of_array_demo"]
