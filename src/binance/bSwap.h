#ifndef BSWAP_H
#define BSWAP_H

#include "bSwapUtils.h"
#include "binanceAPI.h"

namespace Binance
{
    class BSwap : public BinanceAPI
    {

    public:
        BSwap() : BinanceAPI(){};

        // https://binance-docs.github.io/apidocs/spot/en/#list-all-swap-pools-market_data
        void ListAllSwapPools(json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-liquidity-information-of-a-pool-user_data
        void GetLiquidityInfo(BSwapLiquidityInfoParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#add-liquidity-trade
        void AddLiquidity(BSwapAddLiquidityParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#remove-liquidity-trade
        void RemoveLiquidity(BSwapRemoveLiquidityParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-liquidity-operation-record-user_data
        void GetLiquidityOpRecord(BSwapLiquidityOpRecordParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#request-quote-user_data
        void RequestQuote(BSwapQuoteParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#swap-trade
        void Swap(BSwapQuoteParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-swap-history-user_data
        void GetSwapHistory(BSwapHistoryParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-pool-configure-user_data
        void GetPoolConfig(BSwapPoolParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#add-liquidity-preview-user_data
        void AddLiquidityPreview(BSwapAddLiquidityPreviewParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#remove-liquidity-preview-user_data
        void RemoveLiquidityPreview(BSwapRemoveLiquidityPreviewParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-unclaimed-rewards-record-user_data
        void GetUnclaimedRewardsRecord(BSwapRewardsParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#claim-rewards-trade
        void ClaimRewards(BSwapRewardsParams params, json &result);

        // https://binance-docs.github.io/apidocs/spot/en/#get-claimed-history-user_data
        void GetClaimedHistory(BSwapClaimedHistoryParams params, json &result);
    };
}
#endif