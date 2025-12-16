# Build stage
FROM gcc:latest AS build
WORKDIR /app
COPY Arrays/ .
RUN g++ fortune_teller.cpp random_array.cpp -static -o fortune_teller

# Runtime stage
FROM alpine
WORKDIR /app
COPY --from=build /app/fortune_teller .

# This app requires interactive input
# Run with: docker run -it <image_name>
STOPSIGNAL SIGINT
ENTRYPOINT ["./fortune_teller"]