#ifndef SET_FUNCTION_H
#define SET_FUNCTION_H
#include <unordered_set>
typedef long long int ll;

class SetFunction
{
    public:
    virtual double evaluate(std::unordered_set<ll> const &X);
    virtual double evaluateWithMemoization(std::unordered_set<ll> const &X);
    virtual double marginalGain(std::unordered_set<ll> const &X, ll item);
    virtual double marginalGainWithMemoization(std::unordered_set<ll> const &X, ll item);
    virtual void updateMemoization(std::unordered_set<ll> const &X, ll item);
    virtual std::unordered_set<ll> getEffectiveGroundSet();
    virtual std::vector<std::pair<ll, double>> maximize(std::string optimizer, ll budget, bool stopIfZeroGain, bool stopIfNegativeGain, float epsilon, bool verbose, bool showProgress, const std::vector<int>& costs, bool costSensitiveGreedy);
    virtual void cluster_init(ll n_, std::vector<std::vector<float>>const &k_dense_, std::unordered_set<ll> const &ground_, bool partial, float lambda);
    virtual void setMemoization(std::unordered_set<ll> const &X);
    virtual void clearMemoization();
    virtual SetFunction * clone();
};
#endif