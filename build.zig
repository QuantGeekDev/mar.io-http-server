const std = @import("std");

pub fn build(b: *std.build.Builder) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const exe = b.addExecutable(.{
        .name = "server",
        .target = target,
        .optimize = optimize,
    });
    exe.addCSourceFile(.{ .file = .{ .path = "src/main.c" }, .flags = &.{
        "-Wall",
        "-Wextra",
        "-Werror",
    } });
    exe.linkLibC();
    b.installArtifact(exe);
}
