// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include <TrustWalletCore/TWHRP.h>

#include <cstring>

const char* stringForHRP(enum TWHRP hrp) {
    switch (hrp) {
    case TWHRPBitcoin: return HRP_BITCOIN;
    case TWHRPLitecoin: return HRP_LITECOIN;
    case TWHRPViacoin: return HRP_VIACOIN;
    case TWHRPBitcoinCash: return HRP_BITCOINCASH;
    case TWHRPBinance: return HRP_BINANCE;
    case TWHRPBinanceTest: return HRP_BINANCE_TEST;
    case TWHRPCosmos: return HRP_COSMOS;
    case TWHRPGroestlcoin: return HRP_GROESTLCOIN;
    default: return nullptr;
    }
}

enum TWHRP hrpForString(const char *_Nonnull string) {
    if (std::strcmp(string, HRP_BITCOIN) == 0) {
        return TWHRPBitcoin;
    } else if (std::strcmp(string, HRP_LITECOIN) == 0) {
        return TWHRPLitecoin;
    } else if (std::strcmp(string, HRP_VIACOIN) == 0) {
        return TWHRPViacoin;
    } else if (std::strcmp(string, HRP_BITCOINCASH) == 0) {
        return TWHRPBitcoinCash;
    } else if (std::strcmp(string, HRP_BINANCE) == 0) {
        return TWHRPBinance;
    } else if (std::strcmp(string, HRP_BINANCE_TEST) == 0) {
        return TWHRPBinanceTest;
    } else if (std::strcmp(string, HRP_COSMOS) == 0) {
        return TWHRPCosmos;
    } else if (std::strcmp(string, HRP_GROESTLCOIN) == 0) {
        return TWHRPGroestlcoin;
    } else {
        return TWHRPUnknown;
    }
}
