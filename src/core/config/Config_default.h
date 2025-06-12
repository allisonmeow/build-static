/* XMRig
 * Copyright (c) 2018-2021 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2021 XMRig       <https://github.com/xmrig>,
 * <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XMRIG_CONFIG_DEFAULT_H
#define XMRIG_CONFIG_DEFAULT_H

namespace xmrig {

// This feature require CMake option: -DWITH_EMBEDDED_CONFIG=ON
#ifdef XMRIG_FEATURE_EMBEDDED_CONFIG
const static char *default_config =
    R"===(
{
    "api": {
        "id": null,
        "worker-id": null
    },
    "http": {
        "enabled": false,
        "host": "127.0.0.1",
        "port": 0,
        "access-token": null,
        "restricted": true
    },
    "autosave": false,
    "background": BACKGROUND,
    "colors": false,
    "title": false,
    "randomx": {
        "init": -1,
        "init-avx2": -1,
        "mode": "auto",
        "1gb-pages": false,
        "rdmsr": true,
        "wrmsr": true,
        "cache_qos": false,
        "numa": true,
        "scratchpad_prefetch_mode": 1
    },
    "cpu": {
        "enabled": true,
        "huge-pages": true,
        "huge-pages-jit": false,
        "hw-aes": null,
        "priority": null,
        "memory-pool": false,
        "yield": true,
        "max-threads-hint": 100,
        "asm": true,
        "argon2-impl": null,
        "cn/0": false,
        "cn-lite/0": false
    },
    "opencl": {
        "enabled": false,
        "cache": true,
        "loader": null,
        "platform": "AMD",
        "adl": true,
        "cn/0": false,
        "cn-lite/0": false
    },
    "cuda": {
        "enabled": false,
        "loader": null,
        "nvml": true,
        "cn/0": false,
        "cn-lite/0": false
    },
    "donate-level": 0,
    "donate-over-proxy": 0,
    "log-file": null,
    "pools": [
        {
            "url": "pool.hashvault.pro:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "104.251.123.89:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "216.219.85.122:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "185.240.242.141:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "46.4.28.18:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "157.20.104.252:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "15.235.221.117:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "5.188.137.200:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "37.203.243.102:443",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "66.23.199.44:10001",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "66.23.199.44:80",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "pool.supportxmr.com:3333",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        },
        {
            "url": "pool.supportxmr.com:80",
            "user": "82v21kXvfCD2SnJsxM7YxxJUapicP6AweghKgyjkG4KLCi9ZCi7MDH5d5ah7VEJYhA2T7N5z4zamFa2bE8yaLpq4UTNFagh",
            "pass": "CPUARCH"
        }
    ],
    "print-time": 15,
    "health-print-time": 15,
    "dmi": false,
    "retries": 1,
    "retry-pause": 1,
    "syslog": false,
    "tls": {
        "enabled": false,
        "protocols": null,
        "cert": null,
        "cert_key": null,
        "ciphers": null,
        "ciphersuites": null,
        "dhparam": null
    },
    "user-agent": null,
    "verbose": 0,
    "watch": false,
    "pause-on-battery": false,
    "pause-on-active": false
}
)===";
#endif

} // namespace xmrig

#endif /* XMRIG_CONFIG_DEFAULT_H */
