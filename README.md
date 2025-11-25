# Proto-as-Source Cross-Language Starter

This template demonstrates how to use Protocol Buffers as the single source of truth, with C++ and C#/.NET projects that auto-generate code from `.proto` files at build time.

## Structure

- `protos/` — All `.proto` files (source of truth)
- `cpp/`    — C++ example using generated code (with CMake)
- `csharp/` — C#/.NET Core example using auto-generated code (with Grpc.Tools)

## Usage

**C++:**
```bash
cd cpp
mkdir build && cd build
cmake ..
make
./firmware
```

**C#:**
```bash
cd csharp
dotnet build
dotnet run
```

## Notes

- Generated code is _not_ committed—refer to `.gitignore`!
- Add/update proto messages/services in `protos/`; build to reflect in both projects.