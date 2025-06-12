# Build stage
FROM gcc:latest AS build
WORKDIR /app
COPY Arrays/declaring_and_using.cpp .
RUN g++ declaring_and_using.cpp -static -o declaring_and_using

# Runtime stage
FROM alpine
WORKDIR /app
COPY --from=build /app/declaring_and_using .
ENTRYPOINT ["./declaring_and_using"]
