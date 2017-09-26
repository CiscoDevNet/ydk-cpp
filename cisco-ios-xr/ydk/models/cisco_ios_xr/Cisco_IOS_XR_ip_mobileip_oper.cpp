
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_mobileip_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_mobileip_oper {

Pmipv6::Pmipv6()
    :
    lma(std::make_shared<Pmipv6::Lma>())
{
    lma->parent = this;

    yang_name = "pmipv6"; yang_parent_name = "Cisco-IOS-XR-ip-mobileip-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Pmipv6::~Pmipv6()
{
}

bool Pmipv6::has_data() const
{
    return (lma !=  nullptr && lma->has_data());
}

bool Pmipv6::has_operation() const
{
    return is_set(yfilter)
	|| (lma !=  nullptr && lma->has_operation());
}

std::string Pmipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lma")
    {
        if(lma == nullptr)
        {
            lma = std::make_shared<Pmipv6::Lma>();
        }
        return lma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lma != nullptr)
    {
        children["lma"] = lma;
    }

    return children;
}

void Pmipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pmipv6::clone_ptr() const
{
    return std::make_shared<Pmipv6>();
}

std::string Pmipv6::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pmipv6::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pmipv6::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pmipv6::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pmipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma")
        return true;
    return false;
}

Pmipv6::Lma::Lma()
    :
    bindings(std::make_shared<Pmipv6::Lma::Bindings>())
	,config_variables(std::make_shared<Pmipv6::Lma::ConfigVariables>())
	,heartbeats(std::make_shared<Pmipv6::Lma::Heartbeats>())
	,statistics(std::make_shared<Pmipv6::Lma::Statistics>())
{
    bindings->parent = this;
    config_variables->parent = this;
    heartbeats->parent = this;
    statistics->parent = this;

    yang_name = "lma"; yang_parent_name = "pmipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::~Lma()
{
}

bool Pmipv6::Lma::has_data() const
{
    return (bindings !=  nullptr && bindings->has_data())
	|| (config_variables !=  nullptr && config_variables->has_data())
	|| (heartbeats !=  nullptr && heartbeats->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Pmipv6::Lma::has_operation() const
{
    return is_set(yfilter)
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (config_variables !=  nullptr && config_variables->has_operation())
	|| (heartbeats !=  nullptr && heartbeats->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Pmipv6::Lma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<Pmipv6::Lma::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "config-variables")
    {
        if(config_variables == nullptr)
        {
            config_variables = std::make_shared<Pmipv6::Lma::ConfigVariables>();
        }
        return config_variables;
    }

    if(child_yang_name == "heartbeats")
    {
        if(heartbeats == nullptr)
        {
            heartbeats = std::make_shared<Pmipv6::Lma::Heartbeats>();
        }
        return heartbeats;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Pmipv6::Lma::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bindings != nullptr)
    {
        children["bindings"] = bindings;
    }

    if(config_variables != nullptr)
    {
        children["config-variables"] = config_variables;
    }

    if(heartbeats != nullptr)
    {
        children["heartbeats"] = heartbeats;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Pmipv6::Lma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindings" || name == "config-variables" || name == "heartbeats" || name == "statistics")
        return true;
    return false;
}

Pmipv6::Lma::Bindings::Bindings()
{

    yang_name = "bindings"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Bindings::~Bindings()
{
}

bool Pmipv6::Lma::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool Pmipv6::Lma::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pmipv6::Lma::Bindings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Bindings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Bindings::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::Bindings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Bindings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Bindings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

Pmipv6::Lma::Bindings::Binding::Binding()
    :
    apn{YType::str, "apn"},
    att{YType::uint16, "att"},
    customer_name{YType::str, "customer-name"},
    customer_name_xr{YType::str, "customer-name-xr"},
    dflt{YType::str, "dflt"},
    down_stream_grekey{YType::uint32, "down-stream-grekey"},
    hnps{YType::str, "hnps"},
    hoa{YType::str, "hoa"},
    ignore_home_address{YType::boolean, "ignore-home-address"},
    imsi_string{YType::str, "imsi-string"},
    liferem{YType::uint32, "liferem"},
    lifetime{YType::uint32, "lifetime"},
    llid{YType::str, "llid"},
    mag_name{YType::str, "mag-name"},
    mnnai{YType::str, "mnnai"},
    nai_string{YType::str, "nai-string"},
    num_coa{YType::uint8, "num-coa"},
    num_dmnp_v4{YType::uint8, "num-dmnp-v4"},
    num_dmnp_v6{YType::uint8, "num-dmnp-v6"},
    num_hnps{YType::uint8, "num-hnps"},
    peer_id{YType::str, "peer-id"},
    phyintf{YType::str, "phyintf"},
    prefix_len{YType::uint8, "prefix-len"},
    refresh{YType::uint32, "refresh"},
    refresh_rem{YType::uint32, "refresh-rem"},
    state{YType::str, "state"},
    tunnel{YType::str, "tunnel"},
    up_stream_grekey{YType::uint32, "up-stream-grekey"},
    vrfid{YType::uint32, "vrfid"}
{

    yang_name = "binding"; yang_parent_name = "bindings"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Bindings::Binding::~Binding()
{
}

bool Pmipv6::Lma::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<coa.size(); index++)
    {
        if(coa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dmnp_v4.size(); index++)
    {
        if(dmnp_v4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dmnp_v6.size(); index++)
    {
        if(dmnp_v6[index]->has_data())
            return true;
    }
    return apn.is_set
	|| att.is_set
	|| customer_name.is_set
	|| customer_name_xr.is_set
	|| dflt.is_set
	|| down_stream_grekey.is_set
	|| hnps.is_set
	|| hoa.is_set
	|| ignore_home_address.is_set
	|| imsi_string.is_set
	|| liferem.is_set
	|| lifetime.is_set
	|| llid.is_set
	|| mag_name.is_set
	|| mnnai.is_set
	|| nai_string.is_set
	|| num_coa.is_set
	|| num_dmnp_v4.is_set
	|| num_dmnp_v6.is_set
	|| num_hnps.is_set
	|| peer_id.is_set
	|| phyintf.is_set
	|| prefix_len.is_set
	|| refresh.is_set
	|| refresh_rem.is_set
	|| state.is_set
	|| tunnel.is_set
	|| up_stream_grekey.is_set
	|| vrfid.is_set;
}

bool Pmipv6::Lma::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<coa.size(); index++)
    {
        if(coa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dmnp_v4.size(); index++)
    {
        if(dmnp_v4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dmnp_v6.size(); index++)
    {
        if(dmnp_v6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(apn.yfilter)
	|| ydk::is_set(att.yfilter)
	|| ydk::is_set(customer_name.yfilter)
	|| ydk::is_set(customer_name_xr.yfilter)
	|| ydk::is_set(dflt.yfilter)
	|| ydk::is_set(down_stream_grekey.yfilter)
	|| ydk::is_set(hnps.yfilter)
	|| ydk::is_set(hoa.yfilter)
	|| ydk::is_set(ignore_home_address.yfilter)
	|| ydk::is_set(imsi_string.yfilter)
	|| ydk::is_set(liferem.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(llid.yfilter)
	|| ydk::is_set(mag_name.yfilter)
	|| ydk::is_set(mnnai.yfilter)
	|| ydk::is_set(nai_string.yfilter)
	|| ydk::is_set(num_coa.yfilter)
	|| ydk::is_set(num_dmnp_v4.yfilter)
	|| ydk::is_set(num_dmnp_v6.yfilter)
	|| ydk::is_set(num_hnps.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(phyintf.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(refresh.yfilter)
	|| ydk::is_set(refresh_rem.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(up_stream_grekey.yfilter)
	|| ydk::is_set(vrfid.yfilter);
}

std::string Pmipv6::Lma::Bindings::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/bindings/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Bindings::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (apn.is_set || is_set(apn.yfilter)) leaf_name_data.push_back(apn.get_name_leafdata());
    if (att.is_set || is_set(att.yfilter)) leaf_name_data.push_back(att.get_name_leafdata());
    if (customer_name.is_set || is_set(customer_name.yfilter)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (customer_name_xr.is_set || is_set(customer_name_xr.yfilter)) leaf_name_data.push_back(customer_name_xr.get_name_leafdata());
    if (dflt.is_set || is_set(dflt.yfilter)) leaf_name_data.push_back(dflt.get_name_leafdata());
    if (down_stream_grekey.is_set || is_set(down_stream_grekey.yfilter)) leaf_name_data.push_back(down_stream_grekey.get_name_leafdata());
    if (hnps.is_set || is_set(hnps.yfilter)) leaf_name_data.push_back(hnps.get_name_leafdata());
    if (hoa.is_set || is_set(hoa.yfilter)) leaf_name_data.push_back(hoa.get_name_leafdata());
    if (ignore_home_address.is_set || is_set(ignore_home_address.yfilter)) leaf_name_data.push_back(ignore_home_address.get_name_leafdata());
    if (imsi_string.is_set || is_set(imsi_string.yfilter)) leaf_name_data.push_back(imsi_string.get_name_leafdata());
    if (liferem.is_set || is_set(liferem.yfilter)) leaf_name_data.push_back(liferem.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (llid.is_set || is_set(llid.yfilter)) leaf_name_data.push_back(llid.get_name_leafdata());
    if (mag_name.is_set || is_set(mag_name.yfilter)) leaf_name_data.push_back(mag_name.get_name_leafdata());
    if (mnnai.is_set || is_set(mnnai.yfilter)) leaf_name_data.push_back(mnnai.get_name_leafdata());
    if (nai_string.is_set || is_set(nai_string.yfilter)) leaf_name_data.push_back(nai_string.get_name_leafdata());
    if (num_coa.is_set || is_set(num_coa.yfilter)) leaf_name_data.push_back(num_coa.get_name_leafdata());
    if (num_dmnp_v4.is_set || is_set(num_dmnp_v4.yfilter)) leaf_name_data.push_back(num_dmnp_v4.get_name_leafdata());
    if (num_dmnp_v6.is_set || is_set(num_dmnp_v6.yfilter)) leaf_name_data.push_back(num_dmnp_v6.get_name_leafdata());
    if (num_hnps.is_set || is_set(num_hnps.yfilter)) leaf_name_data.push_back(num_hnps.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (phyintf.is_set || is_set(phyintf.yfilter)) leaf_name_data.push_back(phyintf.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (refresh.is_set || is_set(refresh.yfilter)) leaf_name_data.push_back(refresh.get_name_leafdata());
    if (refresh_rem.is_set || is_set(refresh_rem.yfilter)) leaf_name_data.push_back(refresh_rem.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (up_stream_grekey.is_set || is_set(up_stream_grekey.yfilter)) leaf_name_data.push_back(up_stream_grekey.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coa")
    {
        for(auto const & c : coa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Bindings::Binding::Coa>();
        c->parent = this;
        coa.push_back(c);
        return c;
    }

    if(child_yang_name == "dmnp-v4")
    {
        for(auto const & c : dmnp_v4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Bindings::Binding::DmnpV4>();
        c->parent = this;
        dmnp_v4.push_back(c);
        return c;
    }

    if(child_yang_name == "dmnp-v6")
    {
        for(auto const & c : dmnp_v6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Bindings::Binding::DmnpV6>();
        c->parent = this;
        dmnp_v6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : coa)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : dmnp_v4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : dmnp_v6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::Bindings::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "apn")
    {
        apn = value;
        apn.value_namespace = name_space;
        apn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "att")
    {
        att = value;
        att.value_namespace = name_space;
        att.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-name")
    {
        customer_name = value;
        customer_name.value_namespace = name_space;
        customer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-name-xr")
    {
        customer_name_xr = value;
        customer_name_xr.value_namespace = name_space;
        customer_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dflt")
    {
        dflt = value;
        dflt.value_namespace = name_space;
        dflt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-stream-grekey")
    {
        down_stream_grekey = value;
        down_stream_grekey.value_namespace = name_space;
        down_stream_grekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hnps")
    {
        hnps = value;
        hnps.value_namespace = name_space;
        hnps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hoa")
    {
        hoa = value;
        hoa.value_namespace = name_space;
        hoa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-home-address")
    {
        ignore_home_address = value;
        ignore_home_address.value_namespace = name_space;
        ignore_home_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imsi-string")
    {
        imsi_string = value;
        imsi_string.value_namespace = name_space;
        imsi_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "liferem")
    {
        liferem = value;
        liferem.value_namespace = name_space;
        liferem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "llid")
    {
        llid = value;
        llid.value_namespace = name_space;
        llid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-name")
    {
        mag_name = value;
        mag_name.value_namespace = name_space;
        mag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnnai")
    {
        mnnai = value;
        mnnai.value_namespace = name_space;
        mnnai.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nai-string")
    {
        nai_string = value;
        nai_string.value_namespace = name_space;
        nai_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-coa")
    {
        num_coa = value;
        num_coa.value_namespace = name_space;
        num_coa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmnp-v4")
    {
        num_dmnp_v4 = value;
        num_dmnp_v4.value_namespace = name_space;
        num_dmnp_v4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmnp-v6")
    {
        num_dmnp_v6 = value;
        num_dmnp_v6.value_namespace = name_space;
        num_dmnp_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-hnps")
    {
        num_hnps = value;
        num_hnps.value_namespace = name_space;
        num_hnps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phyintf")
    {
        phyintf = value;
        phyintf.value_namespace = name_space;
        phyintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh")
    {
        refresh = value;
        refresh.value_namespace = name_space;
        refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-rem")
    {
        refresh_rem = value;
        refresh_rem.value_namespace = name_space;
        refresh_rem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-stream-grekey")
    {
        up_stream_grekey = value;
        up_stream_grekey.value_namespace = name_space;
        up_stream_grekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Bindings::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "apn")
    {
        apn.yfilter = yfilter;
    }
    if(value_path == "att")
    {
        att.yfilter = yfilter;
    }
    if(value_path == "customer-name")
    {
        customer_name.yfilter = yfilter;
    }
    if(value_path == "customer-name-xr")
    {
        customer_name_xr.yfilter = yfilter;
    }
    if(value_path == "dflt")
    {
        dflt.yfilter = yfilter;
    }
    if(value_path == "down-stream-grekey")
    {
        down_stream_grekey.yfilter = yfilter;
    }
    if(value_path == "hnps")
    {
        hnps.yfilter = yfilter;
    }
    if(value_path == "hoa")
    {
        hoa.yfilter = yfilter;
    }
    if(value_path == "ignore-home-address")
    {
        ignore_home_address.yfilter = yfilter;
    }
    if(value_path == "imsi-string")
    {
        imsi_string.yfilter = yfilter;
    }
    if(value_path == "liferem")
    {
        liferem.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "llid")
    {
        llid.yfilter = yfilter;
    }
    if(value_path == "mag-name")
    {
        mag_name.yfilter = yfilter;
    }
    if(value_path == "mnnai")
    {
        mnnai.yfilter = yfilter;
    }
    if(value_path == "nai-string")
    {
        nai_string.yfilter = yfilter;
    }
    if(value_path == "num-coa")
    {
        num_coa.yfilter = yfilter;
    }
    if(value_path == "num-dmnp-v4")
    {
        num_dmnp_v4.yfilter = yfilter;
    }
    if(value_path == "num-dmnp-v6")
    {
        num_dmnp_v6.yfilter = yfilter;
    }
    if(value_path == "num-hnps")
    {
        num_hnps.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "phyintf")
    {
        phyintf.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "refresh")
    {
        refresh.yfilter = yfilter;
    }
    if(value_path == "refresh-rem")
    {
        refresh_rem.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "up-stream-grekey")
    {
        up_stream_grekey.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Bindings::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coa" || name == "dmnp-v4" || name == "dmnp-v6" || name == "apn" || name == "att" || name == "customer-name" || name == "customer-name-xr" || name == "dflt" || name == "down-stream-grekey" || name == "hnps" || name == "hoa" || name == "ignore-home-address" || name == "imsi-string" || name == "liferem" || name == "lifetime" || name == "llid" || name == "mag-name" || name == "mnnai" || name == "nai-string" || name == "num-coa" || name == "num-dmnp-v4" || name == "num-dmnp-v6" || name == "num-hnps" || name == "peer-id" || name == "phyintf" || name == "prefix-len" || name == "refresh" || name == "refresh-rem" || name == "state" || name == "tunnel" || name == "up-stream-grekey" || name == "vrfid")
        return true;
    return false;
}

Pmipv6::Lma::Bindings::Binding::Coa::Coa()
    :
    att{YType::uint16, "att"},
    cdma_nai{YType::str, "cdma-nai"},
    coa_v4{YType::str, "coa-v4"},
    coa_v6{YType::str, "coa-v6"},
    color{YType::str, "color"},
    dnkey{YType::uint32, "dnkey"},
    e_label{YType::str, "e-label"},
    imsi{YType::str, "imsi"},
    lifetime{YType::uint32, "lifetime"},
    lifetime_remaining{YType::uint32, "lifetime-remaining"},
    llid{YType::str, "llid"},
    msisdn{YType::str, "msisdn"},
    peer_name{YType::str, "peer-name"},
    pgw_apn{YType::str, "pgw-apn"},
    pgw_trans_vrf{YType::str, "pgw-trans-vrf"},
    pstate{YType::str, "pstate"},
    refresh{YType::uint32, "refresh"},
    refresh_rem{YType::uint32, "refresh-rem"},
    roa_min_tf{YType::str, "roa-min-tf"},
    tunnel{YType::str, "tunnel"},
    upkey{YType::uint32, "upkey"}
{

    yang_name = "coa"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Bindings::Binding::Coa::~Coa()
{
}

bool Pmipv6::Lma::Bindings::Binding::Coa::has_data() const
{
    return att.is_set
	|| cdma_nai.is_set
	|| coa_v4.is_set
	|| coa_v6.is_set
	|| color.is_set
	|| dnkey.is_set
	|| e_label.is_set
	|| imsi.is_set
	|| lifetime.is_set
	|| lifetime_remaining.is_set
	|| llid.is_set
	|| msisdn.is_set
	|| peer_name.is_set
	|| pgw_apn.is_set
	|| pgw_trans_vrf.is_set
	|| pstate.is_set
	|| refresh.is_set
	|| refresh_rem.is_set
	|| roa_min_tf.is_set
	|| tunnel.is_set
	|| upkey.is_set;
}

bool Pmipv6::Lma::Bindings::Binding::Coa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(att.yfilter)
	|| ydk::is_set(cdma_nai.yfilter)
	|| ydk::is_set(coa_v4.yfilter)
	|| ydk::is_set(coa_v6.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(dnkey.yfilter)
	|| ydk::is_set(e_label.yfilter)
	|| ydk::is_set(imsi.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(lifetime_remaining.yfilter)
	|| ydk::is_set(llid.yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| ydk::is_set(peer_name.yfilter)
	|| ydk::is_set(pgw_apn.yfilter)
	|| ydk::is_set(pgw_trans_vrf.yfilter)
	|| ydk::is_set(pstate.yfilter)
	|| ydk::is_set(refresh.yfilter)
	|| ydk::is_set(refresh_rem.yfilter)
	|| ydk::is_set(roa_min_tf.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(upkey.yfilter);
}

std::string Pmipv6::Lma::Bindings::Binding::Coa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/bindings/binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Bindings::Binding::Coa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Bindings::Binding::Coa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (att.is_set || is_set(att.yfilter)) leaf_name_data.push_back(att.get_name_leafdata());
    if (cdma_nai.is_set || is_set(cdma_nai.yfilter)) leaf_name_data.push_back(cdma_nai.get_name_leafdata());
    if (coa_v4.is_set || is_set(coa_v4.yfilter)) leaf_name_data.push_back(coa_v4.get_name_leafdata());
    if (coa_v6.is_set || is_set(coa_v6.yfilter)) leaf_name_data.push_back(coa_v6.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (dnkey.is_set || is_set(dnkey.yfilter)) leaf_name_data.push_back(dnkey.get_name_leafdata());
    if (e_label.is_set || is_set(e_label.yfilter)) leaf_name_data.push_back(e_label.get_name_leafdata());
    if (imsi.is_set || is_set(imsi.yfilter)) leaf_name_data.push_back(imsi.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (lifetime_remaining.is_set || is_set(lifetime_remaining.yfilter)) leaf_name_data.push_back(lifetime_remaining.get_name_leafdata());
    if (llid.is_set || is_set(llid.yfilter)) leaf_name_data.push_back(llid.get_name_leafdata());
    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());
    if (peer_name.is_set || is_set(peer_name.yfilter)) leaf_name_data.push_back(peer_name.get_name_leafdata());
    if (pgw_apn.is_set || is_set(pgw_apn.yfilter)) leaf_name_data.push_back(pgw_apn.get_name_leafdata());
    if (pgw_trans_vrf.is_set || is_set(pgw_trans_vrf.yfilter)) leaf_name_data.push_back(pgw_trans_vrf.get_name_leafdata());
    if (pstate.is_set || is_set(pstate.yfilter)) leaf_name_data.push_back(pstate.get_name_leafdata());
    if (refresh.is_set || is_set(refresh.yfilter)) leaf_name_data.push_back(refresh.get_name_leafdata());
    if (refresh_rem.is_set || is_set(refresh_rem.yfilter)) leaf_name_data.push_back(refresh_rem.get_name_leafdata());
    if (roa_min_tf.is_set || is_set(roa_min_tf.yfilter)) leaf_name_data.push_back(roa_min_tf.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (upkey.is_set || is_set(upkey.yfilter)) leaf_name_data.push_back(upkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Bindings::Binding::Coa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Bindings::Binding::Coa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Bindings::Binding::Coa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "att")
    {
        att = value;
        att.value_namespace = name_space;
        att.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdma-nai")
    {
        cdma_nai = value;
        cdma_nai.value_namespace = name_space;
        cdma_nai.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-v4")
    {
        coa_v4 = value;
        coa_v4.value_namespace = name_space;
        coa_v4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-v6")
    {
        coa_v6 = value;
        coa_v6.value_namespace = name_space;
        coa_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnkey")
    {
        dnkey = value;
        dnkey.value_namespace = name_space;
        dnkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e-label")
    {
        e_label = value;
        e_label.value_namespace = name_space;
        e_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imsi")
    {
        imsi = value;
        imsi.value_namespace = name_space;
        imsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime-remaining")
    {
        lifetime_remaining = value;
        lifetime_remaining.value_namespace = name_space;
        lifetime_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "llid")
    {
        llid = value;
        llid.value_namespace = name_space;
        llid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-name")
    {
        peer_name = value;
        peer_name.value_namespace = name_space;
        peer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgw-apn")
    {
        pgw_apn = value;
        pgw_apn.value_namespace = name_space;
        pgw_apn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgw-trans-vrf")
    {
        pgw_trans_vrf = value;
        pgw_trans_vrf.value_namespace = name_space;
        pgw_trans_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pstate")
    {
        pstate = value;
        pstate.value_namespace = name_space;
        pstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh")
    {
        refresh = value;
        refresh.value_namespace = name_space;
        refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-rem")
    {
        refresh_rem = value;
        refresh_rem.value_namespace = name_space;
        refresh_rem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roa-min-tf")
    {
        roa_min_tf = value;
        roa_min_tf.value_namespace = name_space;
        roa_min_tf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upkey")
    {
        upkey = value;
        upkey.value_namespace = name_space;
        upkey.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Bindings::Binding::Coa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "att")
    {
        att.yfilter = yfilter;
    }
    if(value_path == "cdma-nai")
    {
        cdma_nai.yfilter = yfilter;
    }
    if(value_path == "coa-v4")
    {
        coa_v4.yfilter = yfilter;
    }
    if(value_path == "coa-v6")
    {
        coa_v6.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "dnkey")
    {
        dnkey.yfilter = yfilter;
    }
    if(value_path == "e-label")
    {
        e_label.yfilter = yfilter;
    }
    if(value_path == "imsi")
    {
        imsi.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "lifetime-remaining")
    {
        lifetime_remaining.yfilter = yfilter;
    }
    if(value_path == "llid")
    {
        llid.yfilter = yfilter;
    }
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
    if(value_path == "peer-name")
    {
        peer_name.yfilter = yfilter;
    }
    if(value_path == "pgw-apn")
    {
        pgw_apn.yfilter = yfilter;
    }
    if(value_path == "pgw-trans-vrf")
    {
        pgw_trans_vrf.yfilter = yfilter;
    }
    if(value_path == "pstate")
    {
        pstate.yfilter = yfilter;
    }
    if(value_path == "refresh")
    {
        refresh.yfilter = yfilter;
    }
    if(value_path == "refresh-rem")
    {
        refresh_rem.yfilter = yfilter;
    }
    if(value_path == "roa-min-tf")
    {
        roa_min_tf.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "upkey")
    {
        upkey.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Bindings::Binding::Coa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "att" || name == "cdma-nai" || name == "coa-v4" || name == "coa-v6" || name == "color" || name == "dnkey" || name == "e-label" || name == "imsi" || name == "lifetime" || name == "lifetime-remaining" || name == "llid" || name == "msisdn" || name == "peer-name" || name == "pgw-apn" || name == "pgw-trans-vrf" || name == "pstate" || name == "refresh" || name == "refresh-rem" || name == "roa-min-tf" || name == "tunnel" || name == "upkey")
        return true;
    return false;
}

Pmipv6::Lma::Bindings::Binding::DmnpV4::DmnpV4()
    :
    pfxlen{YType::uint8, "pfxlen"},
    prefix{YType::str, "prefix"}
{

    yang_name = "dmnp-v4"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Bindings::Binding::DmnpV4::~DmnpV4()
{
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV4::has_data() const
{
    return pfxlen.is_set
	|| prefix.is_set;
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlen.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Pmipv6::Lma::Bindings::Binding::DmnpV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/bindings/binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Bindings::Binding::DmnpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmnp-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Bindings::Binding::DmnpV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlen.is_set || is_set(pfxlen.yfilter)) leaf_name_data.push_back(pfxlen.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Bindings::Binding::DmnpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Bindings::Binding::DmnpV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Bindings::Binding::DmnpV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxlen")
    {
        pfxlen = value;
        pfxlen.value_namespace = name_space;
        pfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Bindings::Binding::DmnpV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxlen")
    {
        pfxlen.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxlen" || name == "prefix")
        return true;
    return false;
}

Pmipv6::Lma::Bindings::Binding::DmnpV6::DmnpV6()
    :
    pfxlen{YType::uint8, "pfxlen"},
    prefix{YType::str, "prefix"}
{

    yang_name = "dmnp-v6"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Bindings::Binding::DmnpV6::~DmnpV6()
{
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV6::has_data() const
{
    return pfxlen.is_set
	|| prefix.is_set;
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlen.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Pmipv6::Lma::Bindings::Binding::DmnpV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/bindings/binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Bindings::Binding::DmnpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmnp-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Bindings::Binding::DmnpV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlen.is_set || is_set(pfxlen.yfilter)) leaf_name_data.push_back(pfxlen.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Bindings::Binding::DmnpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Bindings::Binding::DmnpV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Bindings::Binding::DmnpV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxlen")
    {
        pfxlen = value;
        pfxlen.value_namespace = name_space;
        pfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Bindings::Binding::DmnpV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxlen")
    {
        pfxlen.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Bindings::Binding::DmnpV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxlen" || name == "prefix")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::ConfigVariables()
    :
    customer_variables(std::make_shared<Pmipv6::Lma::ConfigVariables::CustomerVariables>())
	,global_variables(std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables>())
{
    customer_variables->parent = this;
    global_variables->parent = this;

    yang_name = "config-variables"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::~ConfigVariables()
{
}

bool Pmipv6::Lma::ConfigVariables::has_data() const
{
    return (customer_variables !=  nullptr && customer_variables->has_data())
	|| (global_variables !=  nullptr && global_variables->has_data());
}

bool Pmipv6::Lma::ConfigVariables::has_operation() const
{
    return is_set(yfilter)
	|| (customer_variables !=  nullptr && customer_variables->has_operation())
	|| (global_variables !=  nullptr && global_variables->has_operation());
}

std::string Pmipv6::Lma::ConfigVariables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-variables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-variables")
    {
        if(customer_variables == nullptr)
        {
            customer_variables = std::make_shared<Pmipv6::Lma::ConfigVariables::CustomerVariables>();
        }
        return customer_variables;
    }

    if(child_yang_name == "global-variables")
    {
        if(global_variables == nullptr)
        {
            global_variables = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables>();
        }
        return global_variables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(customer_variables != nullptr)
    {
        children["customer-variables"] = customer_variables;
    }

    if(global_variables != nullptr)
    {
        children["global-variables"] = global_variables;
    }

    return children;
}

void Pmipv6::Lma::ConfigVariables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::ConfigVariables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::ConfigVariables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-variables" || name == "global-variables")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariables()
{

    yang_name = "customer-variables"; yang_parent_name = "config-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::~CustomerVariables()
{
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::has_data() const
{
    for (std::size_t index=0; index<customer_variable.size(); index++)
    {
        if(customer_variable[index]->has_data())
            return true;
    }
    return false;
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::has_operation() const
{
    for (std::size_t index=0; index<customer_variable.size(); index++)
    {
        if(customer_variable[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::CustomerVariables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::CustomerVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-variables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::CustomerVariables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::CustomerVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-variable")
    {
        for(auto const & c : customer_variable)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable>();
        c->parent = this;
        customer_variable.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::CustomerVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : customer_variable)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-variable")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::CustomerVariable()
    :
    customer_name{YType::str, "customer-name"},
    auth_option{YType::boolean, "auth-option"},
    cust_name{YType::str, "cust-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    mll_service(std::make_shared<Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService>())
{
    mll_service->parent = this;

    yang_name = "customer-variable"; yang_parent_name = "customer-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::~CustomerVariable()
{
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::has_data() const
{
    return customer_name.is_set
	|| auth_option.is_set
	|| cust_name.is_set
	|| vrf_name.is_set
	|| (mll_service !=  nullptr && mll_service->has_data());
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(customer_name.yfilter)
	|| ydk::is_set(auth_option.yfilter)
	|| ydk::is_set(cust_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (mll_service !=  nullptr && mll_service->has_operation());
}

std::string Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/customer-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-variable" <<"[customer-name='" <<customer_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_name.is_set || is_set(customer_name.yfilter)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (auth_option.is_set || is_set(auth_option.yfilter)) leaf_name_data.push_back(auth_option.get_name_leafdata());
    if (cust_name.is_set || is_set(cust_name.yfilter)) leaf_name_data.push_back(cust_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mll-service")
    {
        if(mll_service == nullptr)
        {
            mll_service = std::make_shared<Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService>();
        }
        return mll_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mll_service != nullptr)
    {
        children["mll-service"] = mll_service;
    }

    return children;
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "customer-name")
    {
        customer_name = value;
        customer_name.value_namespace = name_space;
        customer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-option")
    {
        auth_option = value;
        auth_option.value_namespace = name_space;
        auth_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cust-name")
    {
        cust_name = value;
        cust_name.value_namespace = name_space;
        cust_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "customer-name")
    {
        customer_name.yfilter = yfilter;
    }
    if(value_path == "auth-option")
    {
        auth_option.yfilter = yfilter;
    }
    if(value_path == "cust-name")
    {
        cust_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mll-service" || name == "customer-name" || name == "auth-option" || name == "cust-name" || name == "vrf-name")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::MllService()
    :
    ignore_hoa{YType::boolean, "ignore-hoa"},
    mnp_cust_max{YType::uint32, "mnp-cust-max"},
    mnp_ipv4_cust_cur{YType::uint32, "mnp-ipv4-cust-cur"},
    mnp_ipv4_cust_max{YType::uint32, "mnp-ipv4-cust-max"},
    mnp_ipv4_lmn_max{YType::uint16, "mnp-ipv4-lmn-max"},
    mnp_ipv6_cust_cur{YType::uint32, "mnp-ipv6-cust-cur"},
    mnp_ipv6_cust_max{YType::uint32, "mnp-ipv6-cust-max"},
    mnp_ipv6_lmn_max{YType::uint16, "mnp-ipv6-lmn-max"},
    mnp_lmn_max{YType::uint16, "mnp-lmn-max"}
{

    yang_name = "mll-service"; yang_parent_name = "customer-variable"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::~MllService()
{
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::has_data() const
{
    return ignore_hoa.is_set
	|| mnp_cust_max.is_set
	|| mnp_ipv4_cust_cur.is_set
	|| mnp_ipv4_cust_max.is_set
	|| mnp_ipv4_lmn_max.is_set
	|| mnp_ipv6_cust_cur.is_set
	|| mnp_ipv6_cust_max.is_set
	|| mnp_ipv6_lmn_max.is_set
	|| mnp_lmn_max.is_set;
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_hoa.yfilter)
	|| ydk::is_set(mnp_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv4_cust_cur.yfilter)
	|| ydk::is_set(mnp_ipv4_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv4_lmn_max.yfilter)
	|| ydk::is_set(mnp_ipv6_cust_cur.yfilter)
	|| ydk::is_set(mnp_ipv6_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv6_lmn_max.yfilter)
	|| ydk::is_set(mnp_lmn_max.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mll-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_hoa.is_set || is_set(ignore_hoa.yfilter)) leaf_name_data.push_back(ignore_hoa.get_name_leafdata());
    if (mnp_cust_max.is_set || is_set(mnp_cust_max.yfilter)) leaf_name_data.push_back(mnp_cust_max.get_name_leafdata());
    if (mnp_ipv4_cust_cur.is_set || is_set(mnp_ipv4_cust_cur.yfilter)) leaf_name_data.push_back(mnp_ipv4_cust_cur.get_name_leafdata());
    if (mnp_ipv4_cust_max.is_set || is_set(mnp_ipv4_cust_max.yfilter)) leaf_name_data.push_back(mnp_ipv4_cust_max.get_name_leafdata());
    if (mnp_ipv4_lmn_max.is_set || is_set(mnp_ipv4_lmn_max.yfilter)) leaf_name_data.push_back(mnp_ipv4_lmn_max.get_name_leafdata());
    if (mnp_ipv6_cust_cur.is_set || is_set(mnp_ipv6_cust_cur.yfilter)) leaf_name_data.push_back(mnp_ipv6_cust_cur.get_name_leafdata());
    if (mnp_ipv6_cust_max.is_set || is_set(mnp_ipv6_cust_max.yfilter)) leaf_name_data.push_back(mnp_ipv6_cust_max.get_name_leafdata());
    if (mnp_ipv6_lmn_max.is_set || is_set(mnp_ipv6_lmn_max.yfilter)) leaf_name_data.push_back(mnp_ipv6_lmn_max.get_name_leafdata());
    if (mnp_lmn_max.is_set || is_set(mnp_lmn_max.yfilter)) leaf_name_data.push_back(mnp_lmn_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-hoa")
    {
        ignore_hoa = value;
        ignore_hoa.value_namespace = name_space;
        ignore_hoa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-cust-max")
    {
        mnp_cust_max = value;
        mnp_cust_max.value_namespace = name_space;
        mnp_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-cust-cur")
    {
        mnp_ipv4_cust_cur = value;
        mnp_ipv4_cust_cur.value_namespace = name_space;
        mnp_ipv4_cust_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-cust-max")
    {
        mnp_ipv4_cust_max = value;
        mnp_ipv4_cust_max.value_namespace = name_space;
        mnp_ipv4_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-lmn-max")
    {
        mnp_ipv4_lmn_max = value;
        mnp_ipv4_lmn_max.value_namespace = name_space;
        mnp_ipv4_lmn_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-cust-cur")
    {
        mnp_ipv6_cust_cur = value;
        mnp_ipv6_cust_cur.value_namespace = name_space;
        mnp_ipv6_cust_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-cust-max")
    {
        mnp_ipv6_cust_max = value;
        mnp_ipv6_cust_max.value_namespace = name_space;
        mnp_ipv6_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-lmn-max")
    {
        mnp_ipv6_lmn_max = value;
        mnp_ipv6_lmn_max.value_namespace = name_space;
        mnp_ipv6_lmn_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-lmn-max")
    {
        mnp_lmn_max = value;
        mnp_lmn_max.value_namespace = name_space;
        mnp_lmn_max.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-hoa")
    {
        ignore_hoa.yfilter = yfilter;
    }
    if(value_path == "mnp-cust-max")
    {
        mnp_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-cust-cur")
    {
        mnp_ipv4_cust_cur.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-cust-max")
    {
        mnp_ipv4_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-lmn-max")
    {
        mnp_ipv4_lmn_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-cust-cur")
    {
        mnp_ipv6_cust_cur.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-cust-max")
    {
        mnp_ipv6_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-lmn-max")
    {
        mnp_ipv6_lmn_max.yfilter = yfilter;
    }
    if(value_path == "mnp-lmn-max")
    {
        mnp_lmn_max.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-hoa" || name == "mnp-cust-max" || name == "mnp-ipv4-cust-cur" || name == "mnp-ipv4-cust-max" || name == "mnp-ipv4-lmn-max" || name == "mnp-ipv6-cust-cur" || name == "mnp-ipv6-cust-max" || name == "mnp-ipv6-lmn-max" || name == "mnp-lmn-max")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::GlobalVariables()
    :
    aaa_accounting{YType::boolean, "aaa-accounting"},
    apn{YType::boolean, "apn"},
    apn_name{YType::str, "apn-name"},
    count{YType::uint32, "count"},
    customers{YType::uint32, "customers"},
    ddp{YType::uint32, "ddp"},
    ddr{YType::uint8, "ddr"},
    ddt{YType::uint32, "ddt"},
    default_mn{YType::boolean, "default-mn"},
    discover_mn{YType::boolean, "discover-mn"},
    domain{YType::str, "domain"},
    learn_mag{YType::boolean, "learn-mag"},
    local_routing{YType::boolean, "local-routing"},
    num_network{YType::uint32, "num-network"},
    peers{YType::uint32, "peers"},
    profile{YType::str, "profile"},
    role{YType::enumeration, "role"},
    selfid{YType::str, "selfid"},
    service{YType::uint8, "service"},
    session_mgr{YType::boolean, "session-mgr"}
    	,
    mll_service(std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService>())
	,parameters(std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters>())
{
    mll_service->parent = this;
    parameters->parent = this;

    yang_name = "global-variables"; yang_parent_name = "config-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::~GlobalVariables()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::has_data() const
{
    for (std::size_t index=0; index<cust.size(); index++)
    {
        if(cust[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<intf.size(); index++)
    {
        if(intf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return aaa_accounting.is_set
	|| apn.is_set
	|| apn_name.is_set
	|| count.is_set
	|| customers.is_set
	|| ddp.is_set
	|| ddr.is_set
	|| ddt.is_set
	|| default_mn.is_set
	|| discover_mn.is_set
	|| domain.is_set
	|| learn_mag.is_set
	|| local_routing.is_set
	|| num_network.is_set
	|| peers.is_set
	|| profile.is_set
	|| role.is_set
	|| selfid.is_set
	|| service.is_set
	|| session_mgr.is_set
	|| (mll_service !=  nullptr && mll_service->has_data())
	|| (parameters !=  nullptr && parameters->has_data());
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::has_operation() const
{
    for (std::size_t index=0; index<cust.size(); index++)
    {
        if(cust[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<intf.size(); index++)
    {
        if(intf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aaa_accounting.yfilter)
	|| ydk::is_set(apn.yfilter)
	|| ydk::is_set(apn_name.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(customers.yfilter)
	|| ydk::is_set(ddp.yfilter)
	|| ydk::is_set(ddr.yfilter)
	|| ydk::is_set(ddt.yfilter)
	|| ydk::is_set(default_mn.yfilter)
	|| ydk::is_set(discover_mn.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(learn_mag.yfilter)
	|| ydk::is_set(local_routing.yfilter)
	|| ydk::is_set(num_network.yfilter)
	|| ydk::is_set(peers.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(selfid.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(session_mgr.yfilter)
	|| (mll_service !=  nullptr && mll_service->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-variables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_accounting.is_set || is_set(aaa_accounting.yfilter)) leaf_name_data.push_back(aaa_accounting.get_name_leafdata());
    if (apn.is_set || is_set(apn.yfilter)) leaf_name_data.push_back(apn.get_name_leafdata());
    if (apn_name.is_set || is_set(apn_name.yfilter)) leaf_name_data.push_back(apn_name.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (customers.is_set || is_set(customers.yfilter)) leaf_name_data.push_back(customers.get_name_leafdata());
    if (ddp.is_set || is_set(ddp.yfilter)) leaf_name_data.push_back(ddp.get_name_leafdata());
    if (ddr.is_set || is_set(ddr.yfilter)) leaf_name_data.push_back(ddr.get_name_leafdata());
    if (ddt.is_set || is_set(ddt.yfilter)) leaf_name_data.push_back(ddt.get_name_leafdata());
    if (default_mn.is_set || is_set(default_mn.yfilter)) leaf_name_data.push_back(default_mn.get_name_leafdata());
    if (discover_mn.is_set || is_set(discover_mn.yfilter)) leaf_name_data.push_back(discover_mn.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (learn_mag.is_set || is_set(learn_mag.yfilter)) leaf_name_data.push_back(learn_mag.get_name_leafdata());
    if (local_routing.is_set || is_set(local_routing.yfilter)) leaf_name_data.push_back(local_routing.get_name_leafdata());
    if (num_network.is_set || is_set(num_network.yfilter)) leaf_name_data.push_back(num_network.get_name_leafdata());
    if (peers.is_set || is_set(peers.yfilter)) leaf_name_data.push_back(peers.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (selfid.is_set || is_set(selfid.yfilter)) leaf_name_data.push_back(selfid.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (session_mgr.is_set || is_set(session_mgr.yfilter)) leaf_name_data.push_back(session_mgr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cust")
    {
        for(auto const & c : cust)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust>();
        c->parent = this;
        cust.push_back(c);
        return c;
    }

    if(child_yang_name == "intf")
    {
        for(auto const & c : intf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf>();
        c->parent = this;
        intf.push_back(c);
        return c;
    }

    if(child_yang_name == "mll-service")
    {
        if(mll_service == nullptr)
        {
            mll_service = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService>();
        }
        return mll_service;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters>();
        }
        return parameters;
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cust)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : intf)
    {
        children[c->get_segment_path()] = c;
    }

    if(mll_service != nullptr)
    {
        children["mll-service"] = mll_service;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-accounting")
    {
        aaa_accounting = value;
        aaa_accounting.value_namespace = name_space;
        aaa_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apn")
    {
        apn = value;
        apn.value_namespace = name_space;
        apn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apn-name")
    {
        apn_name = value;
        apn_name.value_namespace = name_space;
        apn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customers")
    {
        customers = value;
        customers.value_namespace = name_space;
        customers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddp")
    {
        ddp = value;
        ddp.value_namespace = name_space;
        ddp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddr")
    {
        ddr = value;
        ddr.value_namespace = name_space;
        ddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddt")
    {
        ddt = value;
        ddt.value_namespace = name_space;
        ddt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-mn")
    {
        default_mn = value;
        default_mn.value_namespace = name_space;
        default_mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discover-mn")
    {
        discover_mn = value;
        discover_mn.value_namespace = name_space;
        discover_mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-mag")
    {
        learn_mag = value;
        learn_mag.value_namespace = name_space;
        learn_mag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-routing")
    {
        local_routing = value;
        local_routing.value_namespace = name_space;
        local_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-network")
    {
        num_network = value;
        num_network.value_namespace = name_space;
        num_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peers")
    {
        peers = value;
        peers.value_namespace = name_space;
        peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selfid")
    {
        selfid = value;
        selfid.value_namespace = name_space;
        selfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-mgr")
    {
        session_mgr = value;
        session_mgr.value_namespace = name_space;
        session_mgr.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-accounting")
    {
        aaa_accounting.yfilter = yfilter;
    }
    if(value_path == "apn")
    {
        apn.yfilter = yfilter;
    }
    if(value_path == "apn-name")
    {
        apn_name.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "customers")
    {
        customers.yfilter = yfilter;
    }
    if(value_path == "ddp")
    {
        ddp.yfilter = yfilter;
    }
    if(value_path == "ddr")
    {
        ddr.yfilter = yfilter;
    }
    if(value_path == "ddt")
    {
        ddt.yfilter = yfilter;
    }
    if(value_path == "default-mn")
    {
        default_mn.yfilter = yfilter;
    }
    if(value_path == "discover-mn")
    {
        discover_mn.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "learn-mag")
    {
        learn_mag.yfilter = yfilter;
    }
    if(value_path == "local-routing")
    {
        local_routing.yfilter = yfilter;
    }
    if(value_path == "num-network")
    {
        num_network.yfilter = yfilter;
    }
    if(value_path == "peers")
    {
        peers.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "selfid")
    {
        selfid.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "session-mgr")
    {
        session_mgr.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cust" || name == "intf" || name == "mll-service" || name == "network" || name == "parameters" || name == "peer" || name == "aaa-accounting" || name == "apn" || name == "apn-name" || name == "count" || name == "customers" || name == "ddp" || name == "ddr" || name == "ddt" || name == "default-mn" || name == "discover-mn" || name == "domain" || name == "learn-mag" || name == "local-routing" || name == "num-network" || name == "peers" || name == "profile" || name == "role" || name == "selfid" || name == "service" || name == "session-mgr")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::Cust()
    :
    auth_option{YType::boolean, "auth-option"},
    cust{YType::boolean, "cust"},
    cust_name{YType::str, "cust-name"},
    heart_beat{YType::boolean, "heart-beat"},
    reg_time{YType::uint32, "reg-time"},
    t_vrf{YType::boolean, "t-vrf"},
    t_vrf_name{YType::str, "t-vrf-name"},
    vrf{YType::boolean, "vrf"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "cust"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::~Cust()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::has_data() const
{
    return auth_option.is_set
	|| cust.is_set
	|| cust_name.is_set
	|| heart_beat.is_set
	|| reg_time.is_set
	|| t_vrf.is_set
	|| t_vrf_name.is_set
	|| vrf.is_set
	|| vrf_name.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_option.yfilter)
	|| ydk::is_set(cust.yfilter)
	|| ydk::is_set(cust_name.yfilter)
	|| ydk::is_set(heart_beat.yfilter)
	|| ydk::is_set(reg_time.yfilter)
	|| ydk::is_set(t_vrf.yfilter)
	|| ydk::is_set(t_vrf_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_option.is_set || is_set(auth_option.yfilter)) leaf_name_data.push_back(auth_option.get_name_leafdata());
    if (cust.is_set || is_set(cust.yfilter)) leaf_name_data.push_back(cust.get_name_leafdata());
    if (cust_name.is_set || is_set(cust_name.yfilter)) leaf_name_data.push_back(cust_name.get_name_leafdata());
    if (heart_beat.is_set || is_set(heart_beat.yfilter)) leaf_name_data.push_back(heart_beat.get_name_leafdata());
    if (reg_time.is_set || is_set(reg_time.yfilter)) leaf_name_data.push_back(reg_time.get_name_leafdata());
    if (t_vrf.is_set || is_set(t_vrf.yfilter)) leaf_name_data.push_back(t_vrf.get_name_leafdata());
    if (t_vrf_name.is_set || is_set(t_vrf_name.yfilter)) leaf_name_data.push_back(t_vrf_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-option")
    {
        auth_option = value;
        auth_option.value_namespace = name_space;
        auth_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cust")
    {
        cust = value;
        cust.value_namespace = name_space;
        cust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cust-name")
    {
        cust_name = value;
        cust_name.value_namespace = name_space;
        cust_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heart-beat")
    {
        heart_beat = value;
        heart_beat.value_namespace = name_space;
        heart_beat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-time")
    {
        reg_time = value;
        reg_time.value_namespace = name_space;
        reg_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t-vrf")
    {
        t_vrf = value;
        t_vrf.value_namespace = name_space;
        t_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t-vrf-name")
    {
        t_vrf_name = value;
        t_vrf_name.value_namespace = name_space;
        t_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-option")
    {
        auth_option.yfilter = yfilter;
    }
    if(value_path == "cust")
    {
        cust.yfilter = yfilter;
    }
    if(value_path == "cust-name")
    {
        cust_name.yfilter = yfilter;
    }
    if(value_path == "heart-beat")
    {
        heart_beat.yfilter = yfilter;
    }
    if(value_path == "reg-time")
    {
        reg_time.yfilter = yfilter;
    }
    if(value_path == "t-vrf")
    {
        t_vrf.yfilter = yfilter;
    }
    if(value_path == "t-vrf-name")
    {
        t_vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-option" || name == "cust" || name == "cust-name" || name == "heart-beat" || name == "reg-time" || name == "t-vrf" || name == "t-vrf-name" || name == "vrf" || name == "vrf-name")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::Intf()
    :
    apn{YType::boolean, "apn"},
    apn_name{YType::str, "apn-name"},
    interface{YType::str, "interface"}
{

    yang_name = "intf"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::~Intf()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::has_data() const
{
    return apn.is_set
	|| apn_name.is_set
	|| interface.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(apn.yfilter)
	|| ydk::is_set(apn_name.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (apn.is_set || is_set(apn.yfilter)) leaf_name_data.push_back(apn.get_name_leafdata());
    if (apn_name.is_set || is_set(apn_name.yfilter)) leaf_name_data.push_back(apn_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "apn")
    {
        apn = value;
        apn.value_namespace = name_space;
        apn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apn-name")
    {
        apn_name = value;
        apn_name.value_namespace = name_space;
        apn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "apn")
    {
        apn.yfilter = yfilter;
    }
    if(value_path == "apn-name")
    {
        apn_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apn" || name == "apn-name" || name == "interface")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::MllService()
    :
    ignore_hoa{YType::boolean, "ignore-hoa"},
    mnp_cust_max{YType::uint32, "mnp-cust-max"},
    mnp_ipv4_cust_cur{YType::uint32, "mnp-ipv4-cust-cur"},
    mnp_ipv4_cust_max{YType::uint32, "mnp-ipv4-cust-max"},
    mnp_ipv4_lmn_max{YType::uint16, "mnp-ipv4-lmn-max"},
    mnp_ipv6_cust_cur{YType::uint32, "mnp-ipv6-cust-cur"},
    mnp_ipv6_cust_max{YType::uint32, "mnp-ipv6-cust-max"},
    mnp_ipv6_lmn_max{YType::uint16, "mnp-ipv6-lmn-max"},
    mnp_lmn_max{YType::uint16, "mnp-lmn-max"}
{

    yang_name = "mll-service"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::~MllService()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::has_data() const
{
    return ignore_hoa.is_set
	|| mnp_cust_max.is_set
	|| mnp_ipv4_cust_cur.is_set
	|| mnp_ipv4_cust_max.is_set
	|| mnp_ipv4_lmn_max.is_set
	|| mnp_ipv6_cust_cur.is_set
	|| mnp_ipv6_cust_max.is_set
	|| mnp_ipv6_lmn_max.is_set
	|| mnp_lmn_max.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_hoa.yfilter)
	|| ydk::is_set(mnp_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv4_cust_cur.yfilter)
	|| ydk::is_set(mnp_ipv4_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv4_lmn_max.yfilter)
	|| ydk::is_set(mnp_ipv6_cust_cur.yfilter)
	|| ydk::is_set(mnp_ipv6_cust_max.yfilter)
	|| ydk::is_set(mnp_ipv6_lmn_max.yfilter)
	|| ydk::is_set(mnp_lmn_max.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mll-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_hoa.is_set || is_set(ignore_hoa.yfilter)) leaf_name_data.push_back(ignore_hoa.get_name_leafdata());
    if (mnp_cust_max.is_set || is_set(mnp_cust_max.yfilter)) leaf_name_data.push_back(mnp_cust_max.get_name_leafdata());
    if (mnp_ipv4_cust_cur.is_set || is_set(mnp_ipv4_cust_cur.yfilter)) leaf_name_data.push_back(mnp_ipv4_cust_cur.get_name_leafdata());
    if (mnp_ipv4_cust_max.is_set || is_set(mnp_ipv4_cust_max.yfilter)) leaf_name_data.push_back(mnp_ipv4_cust_max.get_name_leafdata());
    if (mnp_ipv4_lmn_max.is_set || is_set(mnp_ipv4_lmn_max.yfilter)) leaf_name_data.push_back(mnp_ipv4_lmn_max.get_name_leafdata());
    if (mnp_ipv6_cust_cur.is_set || is_set(mnp_ipv6_cust_cur.yfilter)) leaf_name_data.push_back(mnp_ipv6_cust_cur.get_name_leafdata());
    if (mnp_ipv6_cust_max.is_set || is_set(mnp_ipv6_cust_max.yfilter)) leaf_name_data.push_back(mnp_ipv6_cust_max.get_name_leafdata());
    if (mnp_ipv6_lmn_max.is_set || is_set(mnp_ipv6_lmn_max.yfilter)) leaf_name_data.push_back(mnp_ipv6_lmn_max.get_name_leafdata());
    if (mnp_lmn_max.is_set || is_set(mnp_lmn_max.yfilter)) leaf_name_data.push_back(mnp_lmn_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-hoa")
    {
        ignore_hoa = value;
        ignore_hoa.value_namespace = name_space;
        ignore_hoa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-cust-max")
    {
        mnp_cust_max = value;
        mnp_cust_max.value_namespace = name_space;
        mnp_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-cust-cur")
    {
        mnp_ipv4_cust_cur = value;
        mnp_ipv4_cust_cur.value_namespace = name_space;
        mnp_ipv4_cust_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-cust-max")
    {
        mnp_ipv4_cust_max = value;
        mnp_ipv4_cust_max.value_namespace = name_space;
        mnp_ipv4_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-lmn-max")
    {
        mnp_ipv4_lmn_max = value;
        mnp_ipv4_lmn_max.value_namespace = name_space;
        mnp_ipv4_lmn_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-cust-cur")
    {
        mnp_ipv6_cust_cur = value;
        mnp_ipv6_cust_cur.value_namespace = name_space;
        mnp_ipv6_cust_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-cust-max")
    {
        mnp_ipv6_cust_max = value;
        mnp_ipv6_cust_max.value_namespace = name_space;
        mnp_ipv6_cust_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-lmn-max")
    {
        mnp_ipv6_lmn_max = value;
        mnp_ipv6_lmn_max.value_namespace = name_space;
        mnp_ipv6_lmn_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-lmn-max")
    {
        mnp_lmn_max = value;
        mnp_lmn_max.value_namespace = name_space;
        mnp_lmn_max.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-hoa")
    {
        ignore_hoa.yfilter = yfilter;
    }
    if(value_path == "mnp-cust-max")
    {
        mnp_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-cust-cur")
    {
        mnp_ipv4_cust_cur.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-cust-max")
    {
        mnp_ipv4_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-lmn-max")
    {
        mnp_ipv4_lmn_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-cust-cur")
    {
        mnp_ipv6_cust_cur.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-cust-max")
    {
        mnp_ipv6_cust_max.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-lmn-max")
    {
        mnp_ipv6_lmn_max.yfilter = yfilter;
    }
    if(value_path == "mnp-lmn-max")
    {
        mnp_lmn_max.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-hoa" || name == "mnp-cust-max" || name == "mnp-ipv4-cust-cur" || name == "mnp-ipv4-cust-max" || name == "mnp-ipv4-lmn-max" || name == "mnp-ipv6-cust-cur" || name == "mnp-ipv6-cust-max" || name == "mnp-ipv6-lmn-max" || name == "mnp-lmn-max")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::Network()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mrnet{YType::uint8, "mrnet"},
    network{YType::str, "network"},
    v4pfx_len{YType::uint8, "v4pfx-len"},
    v4pool{YType::boolean, "v4pool"},
    v6pfx_len{YType::uint8, "v6pfx-len"},
    v6pool{YType::boolean, "v6pool"}
{

    yang_name = "network"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::~Network()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| mrnet.is_set
	|| network.is_set
	|| v4pfx_len.is_set
	|| v4pool.is_set
	|| v6pfx_len.is_set
	|| v6pool.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mrnet.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(v4pfx_len.yfilter)
	|| ydk::is_set(v4pool.yfilter)
	|| ydk::is_set(v6pfx_len.yfilter)
	|| ydk::is_set(v6pool.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mrnet.is_set || is_set(mrnet.yfilter)) leaf_name_data.push_back(mrnet.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (v4pfx_len.is_set || is_set(v4pfx_len.yfilter)) leaf_name_data.push_back(v4pfx_len.get_name_leafdata());
    if (v4pool.is_set || is_set(v4pool.yfilter)) leaf_name_data.push_back(v4pool.get_name_leafdata());
    if (v6pfx_len.is_set || is_set(v6pfx_len.yfilter)) leaf_name_data.push_back(v6pfx_len.get_name_leafdata());
    if (v6pool.is_set || is_set(v6pool.yfilter)) leaf_name_data.push_back(v6pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrnet")
    {
        mrnet = value;
        mrnet.value_namespace = name_space;
        mrnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4pfx-len")
    {
        v4pfx_len = value;
        v4pfx_len.value_namespace = name_space;
        v4pfx_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4pool")
    {
        v4pool = value;
        v4pool.value_namespace = name_space;
        v4pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6pfx-len")
    {
        v6pfx_len = value;
        v6pfx_len.value_namespace = name_space;
        v6pfx_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6pool")
    {
        v6pool = value;
        v6pool.value_namespace = name_space;
        v6pool.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mrnet")
    {
        mrnet.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "v4pfx-len")
    {
        v4pfx_len.yfilter = yfilter;
    }
    if(value_path == "v4pool")
    {
        v4pool.yfilter = yfilter;
    }
    if(value_path == "v6pfx-len")
    {
        v6pfx_len.yfilter = yfilter;
    }
    if(value_path == "v6pool")
    {
        v6pool.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "mrnet" || name == "network" || name == "v4pfx-len" || name == "v4pool" || name == "v6pfx-len" || name == "v6pool")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::Parameters()
    :
    auth_option{YType::boolean, "auth-option"},
    bri_init{YType::uint16, "bri-init"},
    bri_max{YType::uint16, "bri-max"},
    bri_retries{YType::uint16, "bri-retries"},
    create_time{YType::uint16, "create-time"},
    delete_time{YType::uint16, "delete-time"},
    down_grekey{YType::uint32, "down-grekey"},
    encap{YType::enumeration, "encap"},
    hnp{YType::uint8, "hnp"},
    max_bindings{YType::uint32, "max-bindings"},
    ref_time{YType::uint32, "ref-time"},
    reg_time{YType::uint32, "reg-time"},
    ret_max{YType::uint16, "ret-max"},
    retx{YType::uint16, "retx"},
    timestamp{YType::boolean, "timestamp"},
    up_grekey{YType::uint32, "up-grekey"},
    window{YType::uint64, "window"}
    	,
    self_id(std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId>())
{
    self_id->parent = this;

    yang_name = "parameters"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::~Parameters()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::has_data() const
{
    return auth_option.is_set
	|| bri_init.is_set
	|| bri_max.is_set
	|| bri_retries.is_set
	|| create_time.is_set
	|| delete_time.is_set
	|| down_grekey.is_set
	|| encap.is_set
	|| hnp.is_set
	|| max_bindings.is_set
	|| ref_time.is_set
	|| reg_time.is_set
	|| ret_max.is_set
	|| retx.is_set
	|| timestamp.is_set
	|| up_grekey.is_set
	|| window.is_set
	|| (self_id !=  nullptr && self_id->has_data());
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_option.yfilter)
	|| ydk::is_set(bri_init.yfilter)
	|| ydk::is_set(bri_max.yfilter)
	|| ydk::is_set(bri_retries.yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(delete_time.yfilter)
	|| ydk::is_set(down_grekey.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(hnp.yfilter)
	|| ydk::is_set(max_bindings.yfilter)
	|| ydk::is_set(ref_time.yfilter)
	|| ydk::is_set(reg_time.yfilter)
	|| ydk::is_set(ret_max.yfilter)
	|| ydk::is_set(retx.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(up_grekey.yfilter)
	|| ydk::is_set(window.yfilter)
	|| (self_id !=  nullptr && self_id->has_operation());
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_option.is_set || is_set(auth_option.yfilter)) leaf_name_data.push_back(auth_option.get_name_leafdata());
    if (bri_init.is_set || is_set(bri_init.yfilter)) leaf_name_data.push_back(bri_init.get_name_leafdata());
    if (bri_max.is_set || is_set(bri_max.yfilter)) leaf_name_data.push_back(bri_max.get_name_leafdata());
    if (bri_retries.is_set || is_set(bri_retries.yfilter)) leaf_name_data.push_back(bri_retries.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (delete_time.is_set || is_set(delete_time.yfilter)) leaf_name_data.push_back(delete_time.get_name_leafdata());
    if (down_grekey.is_set || is_set(down_grekey.yfilter)) leaf_name_data.push_back(down_grekey.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (hnp.is_set || is_set(hnp.yfilter)) leaf_name_data.push_back(hnp.get_name_leafdata());
    if (max_bindings.is_set || is_set(max_bindings.yfilter)) leaf_name_data.push_back(max_bindings.get_name_leafdata());
    if (ref_time.is_set || is_set(ref_time.yfilter)) leaf_name_data.push_back(ref_time.get_name_leafdata());
    if (reg_time.is_set || is_set(reg_time.yfilter)) leaf_name_data.push_back(reg_time.get_name_leafdata());
    if (ret_max.is_set || is_set(ret_max.yfilter)) leaf_name_data.push_back(ret_max.get_name_leafdata());
    if (retx.is_set || is_set(retx.yfilter)) leaf_name_data.push_back(retx.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (up_grekey.is_set || is_set(up_grekey.yfilter)) leaf_name_data.push_back(up_grekey.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "self-id")
    {
        if(self_id == nullptr)
        {
            self_id = std::make_shared<Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId>();
        }
        return self_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(self_id != nullptr)
    {
        children["self-id"] = self_id;
    }

    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-option")
    {
        auth_option = value;
        auth_option.value_namespace = name_space;
        auth_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bri-init")
    {
        bri_init = value;
        bri_init.value_namespace = name_space;
        bri_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bri-max")
    {
        bri_max = value;
        bri_max.value_namespace = name_space;
        bri_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bri-retries")
    {
        bri_retries = value;
        bri_retries.value_namespace = name_space;
        bri_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-time")
    {
        delete_time = value;
        delete_time.value_namespace = name_space;
        delete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-grekey")
    {
        down_grekey = value;
        down_grekey.value_namespace = name_space;
        down_grekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hnp")
    {
        hnp = value;
        hnp.value_namespace = name_space;
        hnp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bindings")
    {
        max_bindings = value;
        max_bindings.value_namespace = name_space;
        max_bindings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-time")
    {
        ref_time = value;
        ref_time.value_namespace = name_space;
        ref_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-time")
    {
        reg_time = value;
        reg_time.value_namespace = name_space;
        reg_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ret-max")
    {
        ret_max = value;
        ret_max.value_namespace = name_space;
        ret_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retx")
    {
        retx = value;
        retx.value_namespace = name_space;
        retx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-grekey")
    {
        up_grekey = value;
        up_grekey.value_namespace = name_space;
        up_grekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-option")
    {
        auth_option.yfilter = yfilter;
    }
    if(value_path == "bri-init")
    {
        bri_init.yfilter = yfilter;
    }
    if(value_path == "bri-max")
    {
        bri_max.yfilter = yfilter;
    }
    if(value_path == "bri-retries")
    {
        bri_retries.yfilter = yfilter;
    }
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "delete-time")
    {
        delete_time.yfilter = yfilter;
    }
    if(value_path == "down-grekey")
    {
        down_grekey.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "hnp")
    {
        hnp.yfilter = yfilter;
    }
    if(value_path == "max-bindings")
    {
        max_bindings.yfilter = yfilter;
    }
    if(value_path == "ref-time")
    {
        ref_time.yfilter = yfilter;
    }
    if(value_path == "reg-time")
    {
        reg_time.yfilter = yfilter;
    }
    if(value_path == "ret-max")
    {
        ret_max.yfilter = yfilter;
    }
    if(value_path == "retx")
    {
        retx.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "up-grekey")
    {
        up_grekey.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "self-id" || name == "auth-option" || name == "bri-init" || name == "bri-max" || name == "bri-retries" || name == "create-time" || name == "delete-time" || name == "down-grekey" || name == "encap" || name == "hnp" || name == "max-bindings" || name == "ref-time" || name == "reg-time" || name == "ret-max" || name == "retx" || name == "timestamp" || name == "up-grekey" || name == "window")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::SelfId()
    :
    addr_type{YType::enumeration, "addr-type"},
    address{YType::str, "address"},
    entity_{YType::str, "entity"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "self-id"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::~SelfId()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::has_data() const
{
    return addr_type.is_set
	|| address.is_set
	|| entity_.is_set
	|| ipv4_address.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "address" || name == "entity" || name == "ipv4-address")
        return true;
    return false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::Peer()
    :
    auth{YType::boolean, "auth"},
    encap{YType::enumeration, "encap"},
    interface{YType::str, "interface"},
    peer{YType::str, "peer"},
    statictunnel{YType::boolean, "statictunnel"},
    vrf{YType::boolean, "vrf"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "peer"; yang_parent_name = "global-variables"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::~Peer()
{
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::has_data() const
{
    return auth.is_set
	|| encap.is_set
	|| interface.is_set
	|| peer.is_set
	|| statictunnel.is_set
	|| vrf.is_set
	|| vrf_name.is_set;
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(statictunnel.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/config-variables/global-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (statictunnel.is_set || is_set(statictunnel.yfilter)) leaf_name_data.push_back(statictunnel.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statictunnel")
    {
        statictunnel = value;
        statictunnel.value_namespace = name_space;
        statictunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "statictunnel")
    {
        statictunnel.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth" || name == "encap" || name == "interface" || name == "peer" || name == "statictunnel" || name == "vrf" || name == "vrf-name")
        return true;
    return false;
}

Pmipv6::Lma::Heartbeats::Heartbeats()
{

    yang_name = "heartbeats"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Heartbeats::~Heartbeats()
{
}

bool Pmipv6::Lma::Heartbeats::has_data() const
{
    for (std::size_t index=0; index<heartbeat.size(); index++)
    {
        if(heartbeat[index]->has_data())
            return true;
    }
    return false;
}

bool Pmipv6::Lma::Heartbeats::has_operation() const
{
    for (std::size_t index=0; index<heartbeat.size(); index++)
    {
        if(heartbeat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pmipv6::Lma::Heartbeats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Heartbeats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Heartbeats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Heartbeats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "heartbeat")
    {
        for(auto const & c : heartbeat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Heartbeats::Heartbeat>();
        c->parent = this;
        heartbeat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Heartbeats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : heartbeat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::Heartbeats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Heartbeats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Heartbeats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "heartbeat")
        return true;
    return false;
}

Pmipv6::Lma::Heartbeats::Heartbeat::Heartbeat()
    :
    peer_addr{YType::str, "peer-addr"},
    customer_name{YType::str, "customer-name"},
    destination_ipv4_address{YType::str, "destination-ipv4-address"},
    destination_ipv6_address{YType::str, "destination-ipv6-address"},
    destination_port{YType::uint32, "destination-port"},
    ipv6_path{YType::boolean, "ipv6-path"},
    source_ipv4_address{YType::str, "source-ipv4-address"},
    source_ipv6_address{YType::str, "source-ipv6-address"},
    source_port{YType::uint32, "source-port"},
    status{YType::boolean, "status"},
    vrf{YType::str, "vrf"}
{

    yang_name = "heartbeat"; yang_parent_name = "heartbeats"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Heartbeats::Heartbeat::~Heartbeat()
{
}

bool Pmipv6::Lma::Heartbeats::Heartbeat::has_data() const
{
    return peer_addr.is_set
	|| customer_name.is_set
	|| destination_ipv4_address.is_set
	|| destination_ipv6_address.is_set
	|| destination_port.is_set
	|| ipv6_path.is_set
	|| source_ipv4_address.is_set
	|| source_ipv6_address.is_set
	|| source_port.is_set
	|| status.is_set
	|| vrf.is_set;
}

bool Pmipv6::Lma::Heartbeats::Heartbeat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_addr.yfilter)
	|| ydk::is_set(customer_name.yfilter)
	|| ydk::is_set(destination_ipv4_address.yfilter)
	|| ydk::is_set(destination_ipv6_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(ipv6_path.yfilter)
	|| ydk::is_set(source_ipv4_address.yfilter)
	|| ydk::is_set(source_ipv6_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Pmipv6::Lma::Heartbeats::Heartbeat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/heartbeats/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Heartbeats::Heartbeat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeat" <<"[peer-addr='" <<peer_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Heartbeats::Heartbeat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_addr.is_set || is_set(peer_addr.yfilter)) leaf_name_data.push_back(peer_addr.get_name_leafdata());
    if (customer_name.is_set || is_set(customer_name.yfilter)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (destination_ipv4_address.is_set || is_set(destination_ipv4_address.yfilter)) leaf_name_data.push_back(destination_ipv4_address.get_name_leafdata());
    if (destination_ipv6_address.is_set || is_set(destination_ipv6_address.yfilter)) leaf_name_data.push_back(destination_ipv6_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (ipv6_path.is_set || is_set(ipv6_path.yfilter)) leaf_name_data.push_back(ipv6_path.get_name_leafdata());
    if (source_ipv4_address.is_set || is_set(source_ipv4_address.yfilter)) leaf_name_data.push_back(source_ipv4_address.get_name_leafdata());
    if (source_ipv6_address.is_set || is_set(source_ipv6_address.yfilter)) leaf_name_data.push_back(source_ipv6_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Heartbeats::Heartbeat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Heartbeats::Heartbeat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Heartbeats::Heartbeat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-addr")
    {
        peer_addr = value;
        peer_addr.value_namespace = name_space;
        peer_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-name")
    {
        customer_name = value;
        customer_name.value_namespace = name_space;
        customer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address = value;
        destination_ipv4_address.value_namespace = name_space;
        destination_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address = value;
        destination_ipv6_address.value_namespace = name_space;
        destination_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-path")
    {
        ipv6_path = value;
        ipv6_path.value_namespace = name_space;
        ipv6_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address = value;
        source_ipv4_address.value_namespace = name_space;
        source_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv6-address")
    {
        source_ipv6_address = value;
        source_ipv6_address.value_namespace = name_space;
        source_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Heartbeats::Heartbeat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-addr")
    {
        peer_addr.yfilter = yfilter;
    }
    if(value_path == "customer-name")
    {
        customer_name.yfilter = yfilter;
    }
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "ipv6-path")
    {
        ipv6_path.yfilter = yfilter;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "source-ipv6-address")
    {
        source_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Heartbeats::Heartbeat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-addr" || name == "customer-name" || name == "destination-ipv4-address" || name == "destination-ipv6-address" || name == "destination-port" || name == "ipv6-path" || name == "source-ipv4-address" || name == "source-ipv6-address" || name == "source-port" || name == "status" || name == "vrf")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Statistics()
    :
    customer_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics>())
	,global(std::make_shared<Pmipv6::Lma::Statistics::Global>())
	,license(std::make_shared<Pmipv6::Lma::Statistics::License>())
	,mag_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics>())
{
    customer_statistics->parent = this;
    global->parent = this;
    license->parent = this;
    mag_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::~Statistics()
{
}

bool Pmipv6::Lma::Statistics::has_data() const
{
    return (customer_statistics !=  nullptr && customer_statistics->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (mag_statistics !=  nullptr && mag_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (customer_statistics !=  nullptr && customer_statistics->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (mag_statistics !=  nullptr && mag_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-statistics")
    {
        if(customer_statistics == nullptr)
        {
            customer_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics>();
        }
        return customer_statistics;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Pmipv6::Lma::Statistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Pmipv6::Lma::Statistics::License>();
        }
        return license;
    }

    if(child_yang_name == "mag-statistics")
    {
        if(mag_statistics == nullptr)
        {
            mag_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics>();
        }
        return mag_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(customer_statistics != nullptr)
    {
        children["customer-statistics"] = customer_statistics;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(mag_statistics != nullptr)
    {
        children["mag-statistics"] = mag_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-statistics" || name == "global" || name == "license" || name == "mag-statistics")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistics()
{

    yang_name = "customer-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::~CustomerStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::has_data() const
{
    for (std::size_t index=0; index<customer_statistic.size(); index++)
    {
        if(customer_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::has_operation() const
{
    for (std::size_t index=0; index<customer_statistic.size(); index++)
    {
        if(customer_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer-statistic")
    {
        for(auto const & c : customer_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic>();
        c->parent = this;
        customer_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : customer_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::CustomerStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer-statistic")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::CustomerStatistic()
    :
    customer_name{YType::str, "customer-name"},
    bce_count{YType::uint32, "bce-count"},
    handoff_count{YType::uint32, "handoff-count"},
    ipv4_mnp_count{YType::uint32, "ipv4-mnp-count"},
    ipv6_mnp_count{YType::uint32, "ipv6-mnp-count"},
    lma_identifier{YType::str, "lma-identifier"}
    	,
    accounting_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics>())
	,protocol_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics>())
{
    accounting_statistics->parent = this;
    protocol_statistics->parent = this;

    yang_name = "customer-statistic"; yang_parent_name = "customer-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::~CustomerStatistic()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::has_data() const
{
    return customer_name.is_set
	|| bce_count.is_set
	|| handoff_count.is_set
	|| ipv4_mnp_count.is_set
	|| ipv6_mnp_count.is_set
	|| lma_identifier.is_set
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(customer_name.yfilter)
	|| ydk::is_set(bce_count.yfilter)
	|| ydk::is_set(handoff_count.yfilter)
	|| ydk::is_set(ipv4_mnp_count.yfilter)
	|| ydk::is_set(ipv6_mnp_count.yfilter)
	|| ydk::is_set(lma_identifier.yfilter)
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_operation())
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/customer-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer-statistic" <<"[customer-name='" <<customer_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_name.is_set || is_set(customer_name.yfilter)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (bce_count.is_set || is_set(bce_count.yfilter)) leaf_name_data.push_back(bce_count.get_name_leafdata());
    if (handoff_count.is_set || is_set(handoff_count.yfilter)) leaf_name_data.push_back(handoff_count.get_name_leafdata());
    if (ipv4_mnp_count.is_set || is_set(ipv4_mnp_count.yfilter)) leaf_name_data.push_back(ipv4_mnp_count.get_name_leafdata());
    if (ipv6_mnp_count.is_set || is_set(ipv6_mnp_count.yfilter)) leaf_name_data.push_back(ipv6_mnp_count.get_name_leafdata());
    if (lma_identifier.is_set || is_set(lma_identifier.yfilter)) leaf_name_data.push_back(lma_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-statistics")
    {
        if(accounting_statistics == nullptr)
        {
            accounting_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics>();
        }
        return accounting_statistics;
    }

    if(child_yang_name == "protocol-statistics")
    {
        if(protocol_statistics == nullptr)
        {
            protocol_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics>();
        }
        return protocol_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_statistics != nullptr)
    {
        children["accounting-statistics"] = accounting_statistics;
    }

    if(protocol_statistics != nullptr)
    {
        children["protocol-statistics"] = protocol_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "customer-name")
    {
        customer_name = value;
        customer_name.value_namespace = name_space;
        customer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bce-count")
    {
        bce_count = value;
        bce_count.value_namespace = name_space;
        bce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handoff-count")
    {
        handoff_count = value;
        handoff_count.value_namespace = name_space;
        handoff_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mnp-count")
    {
        ipv4_mnp_count = value;
        ipv4_mnp_count.value_namespace = name_space;
        ipv4_mnp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mnp-count")
    {
        ipv6_mnp_count = value;
        ipv6_mnp_count.value_namespace = name_space;
        ipv6_mnp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier = value;
        lma_identifier.value_namespace = name_space;
        lma_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "customer-name")
    {
        customer_name.yfilter = yfilter;
    }
    if(value_path == "bce-count")
    {
        bce_count.yfilter = yfilter;
    }
    if(value_path == "handoff-count")
    {
        handoff_count.yfilter = yfilter;
    }
    if(value_path == "ipv4-mnp-count")
    {
        ipv4_mnp_count.yfilter = yfilter;
    }
    if(value_path == "ipv6-mnp-count")
    {
        ipv6_mnp_count.yfilter = yfilter;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-statistics" || name == "protocol-statistics" || name == "customer-name" || name == "bce-count" || name == "handoff-count" || name == "ipv4-mnp-count" || name == "ipv6-mnp-count" || name == "lma-identifier")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::AccountingStatistics()
    :
    accounting_start_sent_count{YType::uint64, "accounting-start-sent-count"},
    accounting_stop_sent_count{YType::uint64, "accounting-stop-sent-count"},
    accounting_update_sent_count{YType::uint64, "accounting-update-sent-count"}
{

    yang_name = "accounting-statistics"; yang_parent_name = "customer-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::~AccountingStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::has_data() const
{
    return accounting_start_sent_count.is_set
	|| accounting_stop_sent_count.is_set
	|| accounting_update_sent_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting_start_sent_count.yfilter)
	|| ydk::is_set(accounting_stop_sent_count.yfilter)
	|| ydk::is_set(accounting_update_sent_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_start_sent_count.is_set || is_set(accounting_start_sent_count.yfilter)) leaf_name_data.push_back(accounting_start_sent_count.get_name_leafdata());
    if (accounting_stop_sent_count.is_set || is_set(accounting_stop_sent_count.yfilter)) leaf_name_data.push_back(accounting_stop_sent_count.get_name_leafdata());
    if (accounting_update_sent_count.is_set || is_set(accounting_update_sent_count.yfilter)) leaf_name_data.push_back(accounting_update_sent_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting-start-sent-count")
    {
        accounting_start_sent_count = value;
        accounting_start_sent_count.value_namespace = name_space;
        accounting_start_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-stop-sent-count")
    {
        accounting_stop_sent_count = value;
        accounting_stop_sent_count.value_namespace = name_space;
        accounting_stop_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-update-sent-count")
    {
        accounting_update_sent_count = value;
        accounting_update_sent_count.value_namespace = name_space;
        accounting_update_sent_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting-start-sent-count")
    {
        accounting_start_sent_count.yfilter = yfilter;
    }
    if(value_path == "accounting-stop-sent-count")
    {
        accounting_stop_sent_count.yfilter = yfilter;
    }
    if(value_path == "accounting-update-sent-count")
    {
        accounting_update_sent_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-start-sent-count" || name == "accounting-stop-sent-count" || name == "accounting-update-sent-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::ProtocolStatistics()
    :
    pba_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics>())
	,pbra_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics>())
	,pbra_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics>())
	,pbri_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics>())
	,pbri_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics>())
	,pbu_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics>())
{
    pba_send_statistics->parent = this;
    pbra_receive_statistics->parent = this;
    pbra_send_statistics->parent = this;
    pbri_receive_statistics->parent = this;
    pbri_send_statistics->parent = this;
    pbu_receive_statistics->parent = this;

    yang_name = "protocol-statistics"; yang_parent_name = "customer-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::~ProtocolStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::has_data() const
{
    return (pba_send_statistics !=  nullptr && pba_send_statistics->has_data())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_data())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_data())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_data())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_data())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (pba_send_statistics !=  nullptr && pba_send_statistics->has_operation())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_operation())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_operation())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_operation())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_operation())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pba-send-statistics")
    {
        if(pba_send_statistics == nullptr)
        {
            pba_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics>();
        }
        return pba_send_statistics;
    }

    if(child_yang_name == "pbra-receive-statistics")
    {
        if(pbra_receive_statistics == nullptr)
        {
            pbra_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics>();
        }
        return pbra_receive_statistics;
    }

    if(child_yang_name == "pbra-send-statistics")
    {
        if(pbra_send_statistics == nullptr)
        {
            pbra_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics>();
        }
        return pbra_send_statistics;
    }

    if(child_yang_name == "pbri-receive-statistics")
    {
        if(pbri_receive_statistics == nullptr)
        {
            pbri_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics>();
        }
        return pbri_receive_statistics;
    }

    if(child_yang_name == "pbri-send-statistics")
    {
        if(pbri_send_statistics == nullptr)
        {
            pbri_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics>();
        }
        return pbri_send_statistics;
    }

    if(child_yang_name == "pbu-receive-statistics")
    {
        if(pbu_receive_statistics == nullptr)
        {
            pbu_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics>();
        }
        return pbu_receive_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pba_send_statistics != nullptr)
    {
        children["pba-send-statistics"] = pba_send_statistics;
    }

    if(pbra_receive_statistics != nullptr)
    {
        children["pbra-receive-statistics"] = pbra_receive_statistics;
    }

    if(pbra_send_statistics != nullptr)
    {
        children["pbra-send-statistics"] = pbra_send_statistics;
    }

    if(pbri_receive_statistics != nullptr)
    {
        children["pbri-receive-statistics"] = pbri_receive_statistics;
    }

    if(pbri_send_statistics != nullptr)
    {
        children["pbri-send-statistics"] = pbri_send_statistics;
    }

    if(pbu_receive_statistics != nullptr)
    {
        children["pbu-receive-statistics"] = pbu_receive_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pba-send-statistics" || name == "pbra-receive-statistics" || name == "pbra-send-statistics" || name == "pbri-receive-statistics" || name == "pbri-send-statistics" || name == "pbu-receive-statistics")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::PbaSendStatistics()
    :
    accepted_count{YType::uint32, "accepted-count"},
    admin_failure_count{YType::uint32, "admin-failure-count"},
    authen_failure_count{YType::uint32, "authen-failure-count"},
    bad_sequence_failure_count{YType::uint32, "bad-sequence-failure-count"},
    gre_key_opt_required_count{YType::uint32, "gre-key-opt-required-count"},
    home_reg_failure_count{YType::uint32, "home-reg-failure-count"},
    home_subnet_failure_count{YType::uint32, "home-subnet-failure-count"},
    missing_access_tech_type_opt_count{YType::uint32, "missing-access-tech-type-opt-count"},
    missing_hi_opt_count{YType::uint32, "missing-hi-opt-count"},
    missing_hnp_opt_count{YType::uint32, "missing-hnp-opt-count"},
    missing_mn_id_opt_count{YType::uint32, "missing-mn-id-opt-count"},
    multiple_ipv4_ho_a_not_supported_count{YType::uint32, "multiple-ipv4-ho-a-not-supported-count"},
    no_author_for_hnp_count{YType::uint32, "no-author-for-hnp-count"},
    no_author_for_ipv4_hoa_count{YType::uint32, "no-author-for-ipv4-hoa-count"},
    no_author_for_ipv4_mobility_count{YType::uint32, "no-author-for-ipv4-mobility-count"},
    no_author_for_ipv6_mobility_count{YType::uint32, "no-author-for-ipv6-mobility-count"},
    no_author_for_proxy_reg_count{YType::uint32, "no-author-for-proxy-reg-count"},
    not_lma_for_this_mn_count{YType::uint32, "not-lma-for-this-mn-count"},
    pba_count{YType::uint64, "pba-count"},
    pba_drop_count{YType::uint32, "pba-drop-count"},
    proxy_reg_not_enabled_count{YType::uint32, "proxy-reg-not-enabled-count"},
    received_hnps_do_not_match_bce_hnps_count{YType::uint32, "received-hnps-do-not-match-bce-hnps-count"},
    reg_type_failure_count{YType::uint32, "reg-type-failure-count"},
    resource_failure_count{YType::uint32, "resource-failure-count"},
    timestamp_lower_than_previous_accepted_count{YType::uint32, "timestamp-lower-than-previous-accepted-count"},
    timestamp_mismatch_count{YType::uint32, "timestamp-mismatch-count"},
    unknown_count{YType::uint32, "unknown-count"},
    unspecified_failure_count{YType::uint32, "unspecified-failure-count"}
{

    yang_name = "pba-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::~PbaSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::has_data() const
{
    return accepted_count.is_set
	|| admin_failure_count.is_set
	|| authen_failure_count.is_set
	|| bad_sequence_failure_count.is_set
	|| gre_key_opt_required_count.is_set
	|| home_reg_failure_count.is_set
	|| home_subnet_failure_count.is_set
	|| missing_access_tech_type_opt_count.is_set
	|| missing_hi_opt_count.is_set
	|| missing_hnp_opt_count.is_set
	|| missing_mn_id_opt_count.is_set
	|| multiple_ipv4_ho_a_not_supported_count.is_set
	|| no_author_for_hnp_count.is_set
	|| no_author_for_ipv4_hoa_count.is_set
	|| no_author_for_ipv4_mobility_count.is_set
	|| no_author_for_ipv6_mobility_count.is_set
	|| no_author_for_proxy_reg_count.is_set
	|| not_lma_for_this_mn_count.is_set
	|| pba_count.is_set
	|| pba_drop_count.is_set
	|| proxy_reg_not_enabled_count.is_set
	|| received_hnps_do_not_match_bce_hnps_count.is_set
	|| reg_type_failure_count.is_set
	|| resource_failure_count.is_set
	|| timestamp_lower_than_previous_accepted_count.is_set
	|| timestamp_mismatch_count.is_set
	|| unknown_count.is_set
	|| unspecified_failure_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_count.yfilter)
	|| ydk::is_set(admin_failure_count.yfilter)
	|| ydk::is_set(authen_failure_count.yfilter)
	|| ydk::is_set(bad_sequence_failure_count.yfilter)
	|| ydk::is_set(gre_key_opt_required_count.yfilter)
	|| ydk::is_set(home_reg_failure_count.yfilter)
	|| ydk::is_set(home_subnet_failure_count.yfilter)
	|| ydk::is_set(missing_access_tech_type_opt_count.yfilter)
	|| ydk::is_set(missing_hi_opt_count.yfilter)
	|| ydk::is_set(missing_hnp_opt_count.yfilter)
	|| ydk::is_set(missing_mn_id_opt_count.yfilter)
	|| ydk::is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)
	|| ydk::is_set(no_author_for_hnp_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_hoa_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_ipv6_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_proxy_reg_count.yfilter)
	|| ydk::is_set(not_lma_for_this_mn_count.yfilter)
	|| ydk::is_set(pba_count.yfilter)
	|| ydk::is_set(pba_drop_count.yfilter)
	|| ydk::is_set(proxy_reg_not_enabled_count.yfilter)
	|| ydk::is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)
	|| ydk::is_set(reg_type_failure_count.yfilter)
	|| ydk::is_set(resource_failure_count.yfilter)
	|| ydk::is_set(timestamp_lower_than_previous_accepted_count.yfilter)
	|| ydk::is_set(timestamp_mismatch_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(unspecified_failure_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pba-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_count.is_set || is_set(accepted_count.yfilter)) leaf_name_data.push_back(accepted_count.get_name_leafdata());
    if (admin_failure_count.is_set || is_set(admin_failure_count.yfilter)) leaf_name_data.push_back(admin_failure_count.get_name_leafdata());
    if (authen_failure_count.is_set || is_set(authen_failure_count.yfilter)) leaf_name_data.push_back(authen_failure_count.get_name_leafdata());
    if (bad_sequence_failure_count.is_set || is_set(bad_sequence_failure_count.yfilter)) leaf_name_data.push_back(bad_sequence_failure_count.get_name_leafdata());
    if (gre_key_opt_required_count.is_set || is_set(gre_key_opt_required_count.yfilter)) leaf_name_data.push_back(gre_key_opt_required_count.get_name_leafdata());
    if (home_reg_failure_count.is_set || is_set(home_reg_failure_count.yfilter)) leaf_name_data.push_back(home_reg_failure_count.get_name_leafdata());
    if (home_subnet_failure_count.is_set || is_set(home_subnet_failure_count.yfilter)) leaf_name_data.push_back(home_subnet_failure_count.get_name_leafdata());
    if (missing_access_tech_type_opt_count.is_set || is_set(missing_access_tech_type_opt_count.yfilter)) leaf_name_data.push_back(missing_access_tech_type_opt_count.get_name_leafdata());
    if (missing_hi_opt_count.is_set || is_set(missing_hi_opt_count.yfilter)) leaf_name_data.push_back(missing_hi_opt_count.get_name_leafdata());
    if (missing_hnp_opt_count.is_set || is_set(missing_hnp_opt_count.yfilter)) leaf_name_data.push_back(missing_hnp_opt_count.get_name_leafdata());
    if (missing_mn_id_opt_count.is_set || is_set(missing_mn_id_opt_count.yfilter)) leaf_name_data.push_back(missing_mn_id_opt_count.get_name_leafdata());
    if (multiple_ipv4_ho_a_not_supported_count.is_set || is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)) leaf_name_data.push_back(multiple_ipv4_ho_a_not_supported_count.get_name_leafdata());
    if (no_author_for_hnp_count.is_set || is_set(no_author_for_hnp_count.yfilter)) leaf_name_data.push_back(no_author_for_hnp_count.get_name_leafdata());
    if (no_author_for_ipv4_hoa_count.is_set || is_set(no_author_for_ipv4_hoa_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_hoa_count.get_name_leafdata());
    if (no_author_for_ipv4_mobility_count.is_set || is_set(no_author_for_ipv4_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_mobility_count.get_name_leafdata());
    if (no_author_for_ipv6_mobility_count.is_set || is_set(no_author_for_ipv6_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv6_mobility_count.get_name_leafdata());
    if (no_author_for_proxy_reg_count.is_set || is_set(no_author_for_proxy_reg_count.yfilter)) leaf_name_data.push_back(no_author_for_proxy_reg_count.get_name_leafdata());
    if (not_lma_for_this_mn_count.is_set || is_set(not_lma_for_this_mn_count.yfilter)) leaf_name_data.push_back(not_lma_for_this_mn_count.get_name_leafdata());
    if (pba_count.is_set || is_set(pba_count.yfilter)) leaf_name_data.push_back(pba_count.get_name_leafdata());
    if (pba_drop_count.is_set || is_set(pba_drop_count.yfilter)) leaf_name_data.push_back(pba_drop_count.get_name_leafdata());
    if (proxy_reg_not_enabled_count.is_set || is_set(proxy_reg_not_enabled_count.yfilter)) leaf_name_data.push_back(proxy_reg_not_enabled_count.get_name_leafdata());
    if (received_hnps_do_not_match_bce_hnps_count.is_set || is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)) leaf_name_data.push_back(received_hnps_do_not_match_bce_hnps_count.get_name_leafdata());
    if (reg_type_failure_count.is_set || is_set(reg_type_failure_count.yfilter)) leaf_name_data.push_back(reg_type_failure_count.get_name_leafdata());
    if (resource_failure_count.is_set || is_set(resource_failure_count.yfilter)) leaf_name_data.push_back(resource_failure_count.get_name_leafdata());
    if (timestamp_lower_than_previous_accepted_count.is_set || is_set(timestamp_lower_than_previous_accepted_count.yfilter)) leaf_name_data.push_back(timestamp_lower_than_previous_accepted_count.get_name_leafdata());
    if (timestamp_mismatch_count.is_set || is_set(timestamp_mismatch_count.yfilter)) leaf_name_data.push_back(timestamp_mismatch_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (unspecified_failure_count.is_set || is_set(unspecified_failure_count.yfilter)) leaf_name_data.push_back(unspecified_failure_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-count")
    {
        accepted_count = value;
        accepted_count.value_namespace = name_space;
        accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count = value;
        admin_failure_count.value_namespace = name_space;
        admin_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count = value;
        authen_failure_count.value_namespace = name_space;
        authen_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count = value;
        bad_sequence_failure_count.value_namespace = name_space;
        bad_sequence_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count = value;
        gre_key_opt_required_count.value_namespace = name_space;
        gre_key_opt_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count = value;
        home_reg_failure_count.value_namespace = name_space;
        home_reg_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count = value;
        home_subnet_failure_count.value_namespace = name_space;
        home_subnet_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count = value;
        missing_access_tech_type_opt_count.value_namespace = name_space;
        missing_access_tech_type_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count = value;
        missing_hi_opt_count.value_namespace = name_space;
        missing_hi_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count = value;
        missing_hnp_opt_count.value_namespace = name_space;
        missing_hnp_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count = value;
        missing_mn_id_opt_count.value_namespace = name_space;
        missing_mn_id_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count = value;
        multiple_ipv4_ho_a_not_supported_count.value_namespace = name_space;
        multiple_ipv4_ho_a_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count = value;
        no_author_for_hnp_count.value_namespace = name_space;
        no_author_for_hnp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count = value;
        no_author_for_ipv4_hoa_count.value_namespace = name_space;
        no_author_for_ipv4_hoa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count = value;
        no_author_for_ipv4_mobility_count.value_namespace = name_space;
        no_author_for_ipv4_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count = value;
        no_author_for_ipv6_mobility_count.value_namespace = name_space;
        no_author_for_ipv6_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count = value;
        no_author_for_proxy_reg_count.value_namespace = name_space;
        no_author_for_proxy_reg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count = value;
        not_lma_for_this_mn_count.value_namespace = name_space;
        not_lma_for_this_mn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-count")
    {
        pba_count = value;
        pba_count.value_namespace = name_space;
        pba_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count = value;
        pba_drop_count.value_namespace = name_space;
        pba_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count = value;
        proxy_reg_not_enabled_count.value_namespace = name_space;
        proxy_reg_not_enabled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count = value;
        received_hnps_do_not_match_bce_hnps_count.value_namespace = name_space;
        received_hnps_do_not_match_bce_hnps_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count = value;
        reg_type_failure_count.value_namespace = name_space;
        reg_type_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count = value;
        resource_failure_count.value_namespace = name_space;
        resource_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count = value;
        timestamp_lower_than_previous_accepted_count.value_namespace = name_space;
        timestamp_lower_than_previous_accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count = value;
        timestamp_mismatch_count.value_namespace = name_space;
        timestamp_mismatch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count = value;
        unspecified_failure_count.value_namespace = name_space;
        unspecified_failure_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-count")
    {
        accepted_count.yfilter = yfilter;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count.yfilter = yfilter;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count.yfilter = yfilter;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count.yfilter = yfilter;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count.yfilter = yfilter;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count.yfilter = yfilter;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count.yfilter = yfilter;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count.yfilter = yfilter;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count.yfilter = yfilter;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count.yfilter = yfilter;
    }
    if(value_path == "pba-count")
    {
        pba_count.yfilter = yfilter;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count.yfilter = yfilter;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count.yfilter = yfilter;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count.yfilter = yfilter;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count.yfilter = yfilter;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-count" || name == "admin-failure-count" || name == "authen-failure-count" || name == "bad-sequence-failure-count" || name == "gre-key-opt-required-count" || name == "home-reg-failure-count" || name == "home-subnet-failure-count" || name == "missing-access-tech-type-opt-count" || name == "missing-hi-opt-count" || name == "missing-hnp-opt-count" || name == "missing-mn-id-opt-count" || name == "multiple-ipv4-ho-a-not-supported-count" || name == "no-author-for-hnp-count" || name == "no-author-for-ipv4-hoa-count" || name == "no-author-for-ipv4-mobility-count" || name == "no-author-for-ipv6-mobility-count" || name == "no-author-for-proxy-reg-count" || name == "not-lma-for-this-mn-count" || name == "pba-count" || name == "pba-drop-count" || name == "proxy-reg-not-enabled-count" || name == "received-hnps-do-not-match-bce-hnps-count" || name == "reg-type-failure-count" || name == "resource-failure-count" || name == "timestamp-lower-than-previous-accepted-count" || name == "timestamp-mismatch-count" || name == "unknown-count" || name == "unspecified-failure-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::PbraReceiveStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::~PbraReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::PbraSendStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::~PbraSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::PbriReceiveStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::~PbriReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::PbriSendStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::~PbriSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::PbuReceiveStatistics()
    :
    pbu_count{YType::uint64, "pbu-count"},
    pbu_drop_count{YType::uint32, "pbu-drop-count"}
{

    yang_name = "pbu-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::~PbuReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::has_data() const
{
    return pbu_count.is_set
	|| pbu_drop_count.is_set;
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbu_count.yfilter)
	|| ydk::is_set(pbu_drop_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbu-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbu_count.is_set || is_set(pbu_count.yfilter)) leaf_name_data.push_back(pbu_count.get_name_leafdata());
    if (pbu_drop_count.is_set || is_set(pbu_drop_count.yfilter)) leaf_name_data.push_back(pbu_drop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbu-count")
    {
        pbu_count = value;
        pbu_count.value_namespace = name_space;
        pbu_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count = value;
        pbu_drop_count.value_namespace = name_space;
        pbu_drop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbu-count")
    {
        pbu_count.yfilter = yfilter;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbu-count" || name == "pbu-drop-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::Global()
    :
    bce_count{YType::uint32, "bce-count"},
    handoff_count{YType::uint32, "handoff-count"},
    lma_identifier{YType::str, "lma-identifier"},
    multi_tenant_count{YType::uint32, "multi-tenant-count"},
    single_tenant_count{YType::uint32, "single-tenant-count"}
    	,
    accounting_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::AccountingStatistics>())
	,packet_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::PacketStatistics>())
	,protocol_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics>())
{
    accounting_statistics->parent = this;
    packet_statistics->parent = this;
    protocol_statistics->parent = this;

    yang_name = "global"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::~Global()
{
}

bool Pmipv6::Lma::Statistics::Global::has_data() const
{
    return bce_count.is_set
	|| handoff_count.is_set
	|| lma_identifier.is_set
	|| multi_tenant_count.is_set
	|| single_tenant_count.is_set
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (packet_statistics !=  nullptr && packet_statistics->has_data())
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bce_count.yfilter)
	|| ydk::is_set(handoff_count.yfilter)
	|| ydk::is_set(lma_identifier.yfilter)
	|| ydk::is_set(multi_tenant_count.yfilter)
	|| ydk::is_set(single_tenant_count.yfilter)
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_operation())
	|| (packet_statistics !=  nullptr && packet_statistics->has_operation())
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bce_count.is_set || is_set(bce_count.yfilter)) leaf_name_data.push_back(bce_count.get_name_leafdata());
    if (handoff_count.is_set || is_set(handoff_count.yfilter)) leaf_name_data.push_back(handoff_count.get_name_leafdata());
    if (lma_identifier.is_set || is_set(lma_identifier.yfilter)) leaf_name_data.push_back(lma_identifier.get_name_leafdata());
    if (multi_tenant_count.is_set || is_set(multi_tenant_count.yfilter)) leaf_name_data.push_back(multi_tenant_count.get_name_leafdata());
    if (single_tenant_count.is_set || is_set(single_tenant_count.yfilter)) leaf_name_data.push_back(single_tenant_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-statistics")
    {
        if(accounting_statistics == nullptr)
        {
            accounting_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::AccountingStatistics>();
        }
        return accounting_statistics;
    }

    if(child_yang_name == "packet-statistics")
    {
        if(packet_statistics == nullptr)
        {
            packet_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::PacketStatistics>();
        }
        return packet_statistics;
    }

    if(child_yang_name == "protocol-statistics")
    {
        if(protocol_statistics == nullptr)
        {
            protocol_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics>();
        }
        return protocol_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_statistics != nullptr)
    {
        children["accounting-statistics"] = accounting_statistics;
    }

    if(packet_statistics != nullptr)
    {
        children["packet-statistics"] = packet_statistics;
    }

    if(protocol_statistics != nullptr)
    {
        children["protocol-statistics"] = protocol_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bce-count")
    {
        bce_count = value;
        bce_count.value_namespace = name_space;
        bce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handoff-count")
    {
        handoff_count = value;
        handoff_count.value_namespace = name_space;
        handoff_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier = value;
        lma_identifier.value_namespace = name_space;
        lma_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-tenant-count")
    {
        multi_tenant_count = value;
        multi_tenant_count.value_namespace = name_space;
        multi_tenant_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-tenant-count")
    {
        single_tenant_count = value;
        single_tenant_count.value_namespace = name_space;
        single_tenant_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bce-count")
    {
        bce_count.yfilter = yfilter;
    }
    if(value_path == "handoff-count")
    {
        handoff_count.yfilter = yfilter;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier.yfilter = yfilter;
    }
    if(value_path == "multi-tenant-count")
    {
        multi_tenant_count.yfilter = yfilter;
    }
    if(value_path == "single-tenant-count")
    {
        single_tenant_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-statistics" || name == "packet-statistics" || name == "protocol-statistics" || name == "bce-count" || name == "handoff-count" || name == "lma-identifier" || name == "multi-tenant-count" || name == "single-tenant-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::AccountingStatistics::AccountingStatistics()
    :
    accounting_start_sent_count{YType::uint64, "accounting-start-sent-count"},
    accounting_stop_sent_count{YType::uint64, "accounting-stop-sent-count"},
    accounting_update_sent_count{YType::uint64, "accounting-update-sent-count"}
{

    yang_name = "accounting-statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::AccountingStatistics::~AccountingStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::AccountingStatistics::has_data() const
{
    return accounting_start_sent_count.is_set
	|| accounting_stop_sent_count.is_set
	|| accounting_update_sent_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::AccountingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting_start_sent_count.yfilter)
	|| ydk::is_set(accounting_stop_sent_count.yfilter)
	|| ydk::is_set(accounting_update_sent_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::AccountingStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::AccountingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_start_sent_count.is_set || is_set(accounting_start_sent_count.yfilter)) leaf_name_data.push_back(accounting_start_sent_count.get_name_leafdata());
    if (accounting_stop_sent_count.is_set || is_set(accounting_stop_sent_count.yfilter)) leaf_name_data.push_back(accounting_stop_sent_count.get_name_leafdata());
    if (accounting_update_sent_count.is_set || is_set(accounting_update_sent_count.yfilter)) leaf_name_data.push_back(accounting_update_sent_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::AccountingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting-start-sent-count")
    {
        accounting_start_sent_count = value;
        accounting_start_sent_count.value_namespace = name_space;
        accounting_start_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-stop-sent-count")
    {
        accounting_stop_sent_count = value;
        accounting_stop_sent_count.value_namespace = name_space;
        accounting_stop_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-update-sent-count")
    {
        accounting_update_sent_count = value;
        accounting_update_sent_count.value_namespace = name_space;
        accounting_update_sent_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::AccountingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting-start-sent-count")
    {
        accounting_start_sent_count.yfilter = yfilter;
    }
    if(value_path == "accounting-stop-sent-count")
    {
        accounting_stop_sent_count.yfilter = yfilter;
    }
    if(value_path == "accounting-update-sent-count")
    {
        accounting_update_sent_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::AccountingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-start-sent-count" || name == "accounting-stop-sent-count" || name == "accounting-update-sent-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::PacketStatistics::PacketStatistics()
    :
    checksum_errors{YType::uint64, "checksum-errors"},
    packets_received{YType::uint64, "packets-received"},
    packets_received_ipv6{YType::uint64, "packets-received-ipv6"},
    packets_sent{YType::uint64, "packets-sent"},
    packets_sent_ipv6{YType::uint64, "packets-sent-ipv6"},
    receive_drops{YType::uint64, "receive-drops"},
    receive_drops_ipv6{YType::uint64, "receive-drops-ipv6"},
    send_drops{YType::uint64, "send-drops"},
    send_drops_ipv6{YType::uint64, "send-drops-ipv6"}
{

    yang_name = "packet-statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::PacketStatistics::~PacketStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::PacketStatistics::has_data() const
{
    return checksum_errors.is_set
	|| packets_received.is_set
	|| packets_received_ipv6.is_set
	|| packets_sent.is_set
	|| packets_sent_ipv6.is_set
	|| receive_drops.is_set
	|| receive_drops_ipv6.is_set
	|| send_drops.is_set
	|| send_drops_ipv6.is_set;
}

bool Pmipv6::Lma::Statistics::Global::PacketStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checksum_errors.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(packets_received_ipv6.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(packets_sent_ipv6.yfilter)
	|| ydk::is_set(receive_drops.yfilter)
	|| ydk::is_set(receive_drops_ipv6.yfilter)
	|| ydk::is_set(send_drops.yfilter)
	|| ydk::is_set(send_drops_ipv6.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::PacketStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::PacketStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::PacketStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_received_ipv6.is_set || is_set(packets_received_ipv6.yfilter)) leaf_name_data.push_back(packets_received_ipv6.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (packets_sent_ipv6.is_set || is_set(packets_sent_ipv6.yfilter)) leaf_name_data.push_back(packets_sent_ipv6.get_name_leafdata());
    if (receive_drops.is_set || is_set(receive_drops.yfilter)) leaf_name_data.push_back(receive_drops.get_name_leafdata());
    if (receive_drops_ipv6.is_set || is_set(receive_drops_ipv6.yfilter)) leaf_name_data.push_back(receive_drops_ipv6.get_name_leafdata());
    if (send_drops.is_set || is_set(send_drops.yfilter)) leaf_name_data.push_back(send_drops.get_name_leafdata());
    if (send_drops_ipv6.is_set || is_set(send_drops_ipv6.yfilter)) leaf_name_data.push_back(send_drops_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::PacketStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::PacketStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::PacketStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received-ipv6")
    {
        packets_received_ipv6 = value;
        packets_received_ipv6.value_namespace = name_space;
        packets_received_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent-ipv6")
    {
        packets_sent_ipv6 = value;
        packets_sent_ipv6.value_namespace = name_space;
        packets_sent_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-drops")
    {
        receive_drops = value;
        receive_drops.value_namespace = name_space;
        receive_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-drops-ipv6")
    {
        receive_drops_ipv6 = value;
        receive_drops_ipv6.value_namespace = name_space;
        receive_drops_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-drops")
    {
        send_drops = value;
        send_drops.value_namespace = name_space;
        send_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-drops-ipv6")
    {
        send_drops_ipv6 = value;
        send_drops_ipv6.value_namespace = name_space;
        send_drops_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::PacketStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "packets-received-ipv6")
    {
        packets_received_ipv6.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "packets-sent-ipv6")
    {
        packets_sent_ipv6.yfilter = yfilter;
    }
    if(value_path == "receive-drops")
    {
        receive_drops.yfilter = yfilter;
    }
    if(value_path == "receive-drops-ipv6")
    {
        receive_drops_ipv6.yfilter = yfilter;
    }
    if(value_path == "send-drops")
    {
        send_drops.yfilter = yfilter;
    }
    if(value_path == "send-drops-ipv6")
    {
        send_drops_ipv6.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::PacketStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checksum-errors" || name == "packets-received" || name == "packets-received-ipv6" || name == "packets-sent" || name == "packets-sent-ipv6" || name == "receive-drops" || name == "receive-drops-ipv6" || name == "send-drops" || name == "send-drops-ipv6")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::ProtocolStatistics()
    :
    pba_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics>())
	,pbra_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics>())
	,pbra_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics>())
	,pbri_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics>())
	,pbri_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics>())
	,pbu_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics>())
{
    pba_send_statistics->parent = this;
    pbra_receive_statistics->parent = this;
    pbra_send_statistics->parent = this;
    pbri_receive_statistics->parent = this;
    pbri_send_statistics->parent = this;
    pbu_receive_statistics->parent = this;

    yang_name = "protocol-statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::~ProtocolStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::has_data() const
{
    return (pba_send_statistics !=  nullptr && pba_send_statistics->has_data())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_data())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_data())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_data())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_data())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (pba_send_statistics !=  nullptr && pba_send_statistics->has_operation())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_operation())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_operation())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_operation())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_operation())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pba-send-statistics")
    {
        if(pba_send_statistics == nullptr)
        {
            pba_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics>();
        }
        return pba_send_statistics;
    }

    if(child_yang_name == "pbra-receive-statistics")
    {
        if(pbra_receive_statistics == nullptr)
        {
            pbra_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics>();
        }
        return pbra_receive_statistics;
    }

    if(child_yang_name == "pbra-send-statistics")
    {
        if(pbra_send_statistics == nullptr)
        {
            pbra_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics>();
        }
        return pbra_send_statistics;
    }

    if(child_yang_name == "pbri-receive-statistics")
    {
        if(pbri_receive_statistics == nullptr)
        {
            pbri_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics>();
        }
        return pbri_receive_statistics;
    }

    if(child_yang_name == "pbri-send-statistics")
    {
        if(pbri_send_statistics == nullptr)
        {
            pbri_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics>();
        }
        return pbri_send_statistics;
    }

    if(child_yang_name == "pbu-receive-statistics")
    {
        if(pbu_receive_statistics == nullptr)
        {
            pbu_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics>();
        }
        return pbu_receive_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pba_send_statistics != nullptr)
    {
        children["pba-send-statistics"] = pba_send_statistics;
    }

    if(pbra_receive_statistics != nullptr)
    {
        children["pbra-receive-statistics"] = pbra_receive_statistics;
    }

    if(pbra_send_statistics != nullptr)
    {
        children["pbra-send-statistics"] = pbra_send_statistics;
    }

    if(pbri_receive_statistics != nullptr)
    {
        children["pbri-receive-statistics"] = pbri_receive_statistics;
    }

    if(pbri_send_statistics != nullptr)
    {
        children["pbri-send-statistics"] = pbri_send_statistics;
    }

    if(pbu_receive_statistics != nullptr)
    {
        children["pbu-receive-statistics"] = pbu_receive_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pba-send-statistics" || name == "pbra-receive-statistics" || name == "pbra-send-statistics" || name == "pbri-receive-statistics" || name == "pbri-send-statistics" || name == "pbu-receive-statistics")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::PbaSendStatistics()
    :
    accepted_count{YType::uint32, "accepted-count"},
    admin_failure_count{YType::uint32, "admin-failure-count"},
    authen_failure_count{YType::uint32, "authen-failure-count"},
    bad_sequence_failure_count{YType::uint32, "bad-sequence-failure-count"},
    gre_key_opt_required_count{YType::uint32, "gre-key-opt-required-count"},
    home_reg_failure_count{YType::uint32, "home-reg-failure-count"},
    home_subnet_failure_count{YType::uint32, "home-subnet-failure-count"},
    missing_access_tech_type_opt_count{YType::uint32, "missing-access-tech-type-opt-count"},
    missing_hi_opt_count{YType::uint32, "missing-hi-opt-count"},
    missing_hnp_opt_count{YType::uint32, "missing-hnp-opt-count"},
    missing_mn_id_opt_count{YType::uint32, "missing-mn-id-opt-count"},
    multiple_ipv4_ho_a_not_supported_count{YType::uint32, "multiple-ipv4-ho-a-not-supported-count"},
    no_author_for_hnp_count{YType::uint32, "no-author-for-hnp-count"},
    no_author_for_ipv4_hoa_count{YType::uint32, "no-author-for-ipv4-hoa-count"},
    no_author_for_ipv4_mobility_count{YType::uint32, "no-author-for-ipv4-mobility-count"},
    no_author_for_ipv6_mobility_count{YType::uint32, "no-author-for-ipv6-mobility-count"},
    no_author_for_proxy_reg_count{YType::uint32, "no-author-for-proxy-reg-count"},
    not_lma_for_this_mn_count{YType::uint32, "not-lma-for-this-mn-count"},
    pba_count{YType::uint64, "pba-count"},
    pba_drop_count{YType::uint32, "pba-drop-count"},
    proxy_reg_not_enabled_count{YType::uint32, "proxy-reg-not-enabled-count"},
    received_hnps_do_not_match_bce_hnps_count{YType::uint32, "received-hnps-do-not-match-bce-hnps-count"},
    reg_type_failure_count{YType::uint32, "reg-type-failure-count"},
    resource_failure_count{YType::uint32, "resource-failure-count"},
    timestamp_lower_than_previous_accepted_count{YType::uint32, "timestamp-lower-than-previous-accepted-count"},
    timestamp_mismatch_count{YType::uint32, "timestamp-mismatch-count"},
    unknown_count{YType::uint32, "unknown-count"},
    unspecified_failure_count{YType::uint32, "unspecified-failure-count"}
{

    yang_name = "pba-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::~PbaSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::has_data() const
{
    return accepted_count.is_set
	|| admin_failure_count.is_set
	|| authen_failure_count.is_set
	|| bad_sequence_failure_count.is_set
	|| gre_key_opt_required_count.is_set
	|| home_reg_failure_count.is_set
	|| home_subnet_failure_count.is_set
	|| missing_access_tech_type_opt_count.is_set
	|| missing_hi_opt_count.is_set
	|| missing_hnp_opt_count.is_set
	|| missing_mn_id_opt_count.is_set
	|| multiple_ipv4_ho_a_not_supported_count.is_set
	|| no_author_for_hnp_count.is_set
	|| no_author_for_ipv4_hoa_count.is_set
	|| no_author_for_ipv4_mobility_count.is_set
	|| no_author_for_ipv6_mobility_count.is_set
	|| no_author_for_proxy_reg_count.is_set
	|| not_lma_for_this_mn_count.is_set
	|| pba_count.is_set
	|| pba_drop_count.is_set
	|| proxy_reg_not_enabled_count.is_set
	|| received_hnps_do_not_match_bce_hnps_count.is_set
	|| reg_type_failure_count.is_set
	|| resource_failure_count.is_set
	|| timestamp_lower_than_previous_accepted_count.is_set
	|| timestamp_mismatch_count.is_set
	|| unknown_count.is_set
	|| unspecified_failure_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_count.yfilter)
	|| ydk::is_set(admin_failure_count.yfilter)
	|| ydk::is_set(authen_failure_count.yfilter)
	|| ydk::is_set(bad_sequence_failure_count.yfilter)
	|| ydk::is_set(gre_key_opt_required_count.yfilter)
	|| ydk::is_set(home_reg_failure_count.yfilter)
	|| ydk::is_set(home_subnet_failure_count.yfilter)
	|| ydk::is_set(missing_access_tech_type_opt_count.yfilter)
	|| ydk::is_set(missing_hi_opt_count.yfilter)
	|| ydk::is_set(missing_hnp_opt_count.yfilter)
	|| ydk::is_set(missing_mn_id_opt_count.yfilter)
	|| ydk::is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)
	|| ydk::is_set(no_author_for_hnp_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_hoa_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_ipv6_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_proxy_reg_count.yfilter)
	|| ydk::is_set(not_lma_for_this_mn_count.yfilter)
	|| ydk::is_set(pba_count.yfilter)
	|| ydk::is_set(pba_drop_count.yfilter)
	|| ydk::is_set(proxy_reg_not_enabled_count.yfilter)
	|| ydk::is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)
	|| ydk::is_set(reg_type_failure_count.yfilter)
	|| ydk::is_set(resource_failure_count.yfilter)
	|| ydk::is_set(timestamp_lower_than_previous_accepted_count.yfilter)
	|| ydk::is_set(timestamp_mismatch_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(unspecified_failure_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pba-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_count.is_set || is_set(accepted_count.yfilter)) leaf_name_data.push_back(accepted_count.get_name_leafdata());
    if (admin_failure_count.is_set || is_set(admin_failure_count.yfilter)) leaf_name_data.push_back(admin_failure_count.get_name_leafdata());
    if (authen_failure_count.is_set || is_set(authen_failure_count.yfilter)) leaf_name_data.push_back(authen_failure_count.get_name_leafdata());
    if (bad_sequence_failure_count.is_set || is_set(bad_sequence_failure_count.yfilter)) leaf_name_data.push_back(bad_sequence_failure_count.get_name_leafdata());
    if (gre_key_opt_required_count.is_set || is_set(gre_key_opt_required_count.yfilter)) leaf_name_data.push_back(gre_key_opt_required_count.get_name_leafdata());
    if (home_reg_failure_count.is_set || is_set(home_reg_failure_count.yfilter)) leaf_name_data.push_back(home_reg_failure_count.get_name_leafdata());
    if (home_subnet_failure_count.is_set || is_set(home_subnet_failure_count.yfilter)) leaf_name_data.push_back(home_subnet_failure_count.get_name_leafdata());
    if (missing_access_tech_type_opt_count.is_set || is_set(missing_access_tech_type_opt_count.yfilter)) leaf_name_data.push_back(missing_access_tech_type_opt_count.get_name_leafdata());
    if (missing_hi_opt_count.is_set || is_set(missing_hi_opt_count.yfilter)) leaf_name_data.push_back(missing_hi_opt_count.get_name_leafdata());
    if (missing_hnp_opt_count.is_set || is_set(missing_hnp_opt_count.yfilter)) leaf_name_data.push_back(missing_hnp_opt_count.get_name_leafdata());
    if (missing_mn_id_opt_count.is_set || is_set(missing_mn_id_opt_count.yfilter)) leaf_name_data.push_back(missing_mn_id_opt_count.get_name_leafdata());
    if (multiple_ipv4_ho_a_not_supported_count.is_set || is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)) leaf_name_data.push_back(multiple_ipv4_ho_a_not_supported_count.get_name_leafdata());
    if (no_author_for_hnp_count.is_set || is_set(no_author_for_hnp_count.yfilter)) leaf_name_data.push_back(no_author_for_hnp_count.get_name_leafdata());
    if (no_author_for_ipv4_hoa_count.is_set || is_set(no_author_for_ipv4_hoa_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_hoa_count.get_name_leafdata());
    if (no_author_for_ipv4_mobility_count.is_set || is_set(no_author_for_ipv4_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_mobility_count.get_name_leafdata());
    if (no_author_for_ipv6_mobility_count.is_set || is_set(no_author_for_ipv6_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv6_mobility_count.get_name_leafdata());
    if (no_author_for_proxy_reg_count.is_set || is_set(no_author_for_proxy_reg_count.yfilter)) leaf_name_data.push_back(no_author_for_proxy_reg_count.get_name_leafdata());
    if (not_lma_for_this_mn_count.is_set || is_set(not_lma_for_this_mn_count.yfilter)) leaf_name_data.push_back(not_lma_for_this_mn_count.get_name_leafdata());
    if (pba_count.is_set || is_set(pba_count.yfilter)) leaf_name_data.push_back(pba_count.get_name_leafdata());
    if (pba_drop_count.is_set || is_set(pba_drop_count.yfilter)) leaf_name_data.push_back(pba_drop_count.get_name_leafdata());
    if (proxy_reg_not_enabled_count.is_set || is_set(proxy_reg_not_enabled_count.yfilter)) leaf_name_data.push_back(proxy_reg_not_enabled_count.get_name_leafdata());
    if (received_hnps_do_not_match_bce_hnps_count.is_set || is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)) leaf_name_data.push_back(received_hnps_do_not_match_bce_hnps_count.get_name_leafdata());
    if (reg_type_failure_count.is_set || is_set(reg_type_failure_count.yfilter)) leaf_name_data.push_back(reg_type_failure_count.get_name_leafdata());
    if (resource_failure_count.is_set || is_set(resource_failure_count.yfilter)) leaf_name_data.push_back(resource_failure_count.get_name_leafdata());
    if (timestamp_lower_than_previous_accepted_count.is_set || is_set(timestamp_lower_than_previous_accepted_count.yfilter)) leaf_name_data.push_back(timestamp_lower_than_previous_accepted_count.get_name_leafdata());
    if (timestamp_mismatch_count.is_set || is_set(timestamp_mismatch_count.yfilter)) leaf_name_data.push_back(timestamp_mismatch_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (unspecified_failure_count.is_set || is_set(unspecified_failure_count.yfilter)) leaf_name_data.push_back(unspecified_failure_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-count")
    {
        accepted_count = value;
        accepted_count.value_namespace = name_space;
        accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count = value;
        admin_failure_count.value_namespace = name_space;
        admin_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count = value;
        authen_failure_count.value_namespace = name_space;
        authen_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count = value;
        bad_sequence_failure_count.value_namespace = name_space;
        bad_sequence_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count = value;
        gre_key_opt_required_count.value_namespace = name_space;
        gre_key_opt_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count = value;
        home_reg_failure_count.value_namespace = name_space;
        home_reg_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count = value;
        home_subnet_failure_count.value_namespace = name_space;
        home_subnet_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count = value;
        missing_access_tech_type_opt_count.value_namespace = name_space;
        missing_access_tech_type_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count = value;
        missing_hi_opt_count.value_namespace = name_space;
        missing_hi_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count = value;
        missing_hnp_opt_count.value_namespace = name_space;
        missing_hnp_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count = value;
        missing_mn_id_opt_count.value_namespace = name_space;
        missing_mn_id_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count = value;
        multiple_ipv4_ho_a_not_supported_count.value_namespace = name_space;
        multiple_ipv4_ho_a_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count = value;
        no_author_for_hnp_count.value_namespace = name_space;
        no_author_for_hnp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count = value;
        no_author_for_ipv4_hoa_count.value_namespace = name_space;
        no_author_for_ipv4_hoa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count = value;
        no_author_for_ipv4_mobility_count.value_namespace = name_space;
        no_author_for_ipv4_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count = value;
        no_author_for_ipv6_mobility_count.value_namespace = name_space;
        no_author_for_ipv6_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count = value;
        no_author_for_proxy_reg_count.value_namespace = name_space;
        no_author_for_proxy_reg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count = value;
        not_lma_for_this_mn_count.value_namespace = name_space;
        not_lma_for_this_mn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-count")
    {
        pba_count = value;
        pba_count.value_namespace = name_space;
        pba_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count = value;
        pba_drop_count.value_namespace = name_space;
        pba_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count = value;
        proxy_reg_not_enabled_count.value_namespace = name_space;
        proxy_reg_not_enabled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count = value;
        received_hnps_do_not_match_bce_hnps_count.value_namespace = name_space;
        received_hnps_do_not_match_bce_hnps_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count = value;
        reg_type_failure_count.value_namespace = name_space;
        reg_type_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count = value;
        resource_failure_count.value_namespace = name_space;
        resource_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count = value;
        timestamp_lower_than_previous_accepted_count.value_namespace = name_space;
        timestamp_lower_than_previous_accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count = value;
        timestamp_mismatch_count.value_namespace = name_space;
        timestamp_mismatch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count = value;
        unspecified_failure_count.value_namespace = name_space;
        unspecified_failure_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-count")
    {
        accepted_count.yfilter = yfilter;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count.yfilter = yfilter;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count.yfilter = yfilter;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count.yfilter = yfilter;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count.yfilter = yfilter;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count.yfilter = yfilter;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count.yfilter = yfilter;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count.yfilter = yfilter;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count.yfilter = yfilter;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count.yfilter = yfilter;
    }
    if(value_path == "pba-count")
    {
        pba_count.yfilter = yfilter;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count.yfilter = yfilter;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count.yfilter = yfilter;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count.yfilter = yfilter;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count.yfilter = yfilter;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-count" || name == "admin-failure-count" || name == "authen-failure-count" || name == "bad-sequence-failure-count" || name == "gre-key-opt-required-count" || name == "home-reg-failure-count" || name == "home-subnet-failure-count" || name == "missing-access-tech-type-opt-count" || name == "missing-hi-opt-count" || name == "missing-hnp-opt-count" || name == "missing-mn-id-opt-count" || name == "multiple-ipv4-ho-a-not-supported-count" || name == "no-author-for-hnp-count" || name == "no-author-for-ipv4-hoa-count" || name == "no-author-for-ipv4-mobility-count" || name == "no-author-for-ipv6-mobility-count" || name == "no-author-for-proxy-reg-count" || name == "not-lma-for-this-mn-count" || name == "pba-count" || name == "pba-drop-count" || name == "proxy-reg-not-enabled-count" || name == "received-hnps-do-not-match-bce-hnps-count" || name == "reg-type-failure-count" || name == "resource-failure-count" || name == "timestamp-lower-than-previous-accepted-count" || name == "timestamp-mismatch-count" || name == "unknown-count" || name == "unspecified-failure-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::PbraReceiveStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::~PbraReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::PbraSendStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::~PbraSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::PbriReceiveStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::~PbriReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::PbriSendStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::~PbriSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::PbuReceiveStatistics()
    :
    pbu_count{YType::uint64, "pbu-count"},
    pbu_drop_count{YType::uint32, "pbu-drop-count"}
{

    yang_name = "pbu-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::~PbuReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::has_data() const
{
    return pbu_count.is_set
	|| pbu_drop_count.is_set;
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbu_count.yfilter)
	|| ydk::is_set(pbu_drop_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/global/protocol-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbu-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbu_count.is_set || is_set(pbu_count.yfilter)) leaf_name_data.push_back(pbu_count.get_name_leafdata());
    if (pbu_drop_count.is_set || is_set(pbu_drop_count.yfilter)) leaf_name_data.push_back(pbu_drop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbu-count")
    {
        pbu_count = value;
        pbu_count.value_namespace = name_space;
        pbu_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count = value;
        pbu_drop_count.value_namespace = name_space;
        pbu_drop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbu-count")
    {
        pbu_count.yfilter = yfilter;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbu-count" || name == "pbu-drop-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::License::License()
    :
    bce_count{YType::uint32, "bce-count"},
    lma_identifier{YType::str, "lma-identifier"},
    peak_bce_count{YType::uint32, "peak-bce-count"},
    peak_bce_count_reset_timestamp{YType::uint32, "peak-bce-count-reset-timestamp"}
{

    yang_name = "license"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::License::~License()
{
}

bool Pmipv6::Lma::Statistics::License::has_data() const
{
    return bce_count.is_set
	|| lma_identifier.is_set
	|| peak_bce_count.is_set
	|| peak_bce_count_reset_timestamp.is_set;
}

bool Pmipv6::Lma::Statistics::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bce_count.yfilter)
	|| ydk::is_set(lma_identifier.yfilter)
	|| ydk::is_set(peak_bce_count.yfilter)
	|| ydk::is_set(peak_bce_count_reset_timestamp.yfilter);
}

std::string Pmipv6::Lma::Statistics::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bce_count.is_set || is_set(bce_count.yfilter)) leaf_name_data.push_back(bce_count.get_name_leafdata());
    if (lma_identifier.is_set || is_set(lma_identifier.yfilter)) leaf_name_data.push_back(lma_identifier.get_name_leafdata());
    if (peak_bce_count.is_set || is_set(peak_bce_count.yfilter)) leaf_name_data.push_back(peak_bce_count.get_name_leafdata());
    if (peak_bce_count_reset_timestamp.is_set || is_set(peak_bce_count_reset_timestamp.yfilter)) leaf_name_data.push_back(peak_bce_count_reset_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bce-count")
    {
        bce_count = value;
        bce_count.value_namespace = name_space;
        bce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier = value;
        lma_identifier.value_namespace = name_space;
        lma_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-bce-count")
    {
        peak_bce_count = value;
        peak_bce_count.value_namespace = name_space;
        peak_bce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-bce-count-reset-timestamp")
    {
        peak_bce_count_reset_timestamp = value;
        peak_bce_count_reset_timestamp.value_namespace = name_space;
        peak_bce_count_reset_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bce-count")
    {
        bce_count.yfilter = yfilter;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier.yfilter = yfilter;
    }
    if(value_path == "peak-bce-count")
    {
        peak_bce_count.yfilter = yfilter;
    }
    if(value_path == "peak-bce-count-reset-timestamp")
    {
        peak_bce_count_reset_timestamp.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bce-count" || name == "lma-identifier" || name == "peak-bce-count" || name == "peak-bce-count-reset-timestamp")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistics()
{

    yang_name = "mag-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::MagStatistics::~MagStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::has_data() const
{
    for (std::size_t index=0; index<mag_statistic.size(); index++)
    {
        if(mag_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pmipv6::Lma::Statistics::MagStatistics::has_operation() const
{
    for (std::size_t index=0; index<mag_statistic.size(); index++)
    {
        if(mag_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::MagStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mag-statistic")
    {
        for(auto const & c : mag_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic>();
        c->parent = this;
        mag_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mag_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::MagStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mag-statistic")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::MagStatistic()
    :
    mag_name{YType::str, "mag-name"},
    lma_identifier{YType::str, "lma-identifier"}
    	,
    protocol_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics>())
{
    protocol_statistics->parent = this;

    yang_name = "mag-statistic"; yang_parent_name = "mag-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::~MagStatistic()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::has_data() const
{
    return mag_name.is_set
	|| lma_identifier.is_set
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mag_name.yfilter)
	|| ydk::is_set(lma_identifier.yfilter)
	|| (protocol_statistics !=  nullptr && protocol_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-oper:pmipv6/lma/statistics/mag-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag-statistic" <<"[mag-name='" <<mag_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mag_name.is_set || is_set(mag_name.yfilter)) leaf_name_data.push_back(mag_name.get_name_leafdata());
    if (lma_identifier.is_set || is_set(lma_identifier.yfilter)) leaf_name_data.push_back(lma_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-statistics")
    {
        if(protocol_statistics == nullptr)
        {
            protocol_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics>();
        }
        return protocol_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_statistics != nullptr)
    {
        children["protocol-statistics"] = protocol_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mag-name")
    {
        mag_name = value;
        mag_name.value_namespace = name_space;
        mag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier = value;
        lma_identifier.value_namespace = name_space;
        lma_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mag-name")
    {
        mag_name.yfilter = yfilter;
    }
    if(value_path == "lma-identifier")
    {
        lma_identifier.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-statistics" || name == "mag-name" || name == "lma-identifier")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::ProtocolStatistics()
    :
    pba_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics>())
	,pbra_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics>())
	,pbra_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics>())
	,pbri_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics>())
	,pbri_send_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics>())
	,pbu_receive_statistics(std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics>())
{
    pba_send_statistics->parent = this;
    pbra_receive_statistics->parent = this;
    pbra_send_statistics->parent = this;
    pbri_receive_statistics->parent = this;
    pbri_send_statistics->parent = this;
    pbu_receive_statistics->parent = this;

    yang_name = "protocol-statistics"; yang_parent_name = "mag-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::~ProtocolStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::has_data() const
{
    return (pba_send_statistics !=  nullptr && pba_send_statistics->has_data())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_data())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_data())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_data())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_data())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_data());
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (pba_send_statistics !=  nullptr && pba_send_statistics->has_operation())
	|| (pbra_receive_statistics !=  nullptr && pbra_receive_statistics->has_operation())
	|| (pbra_send_statistics !=  nullptr && pbra_send_statistics->has_operation())
	|| (pbri_receive_statistics !=  nullptr && pbri_receive_statistics->has_operation())
	|| (pbri_send_statistics !=  nullptr && pbri_send_statistics->has_operation())
	|| (pbu_receive_statistics !=  nullptr && pbu_receive_statistics->has_operation());
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pba-send-statistics")
    {
        if(pba_send_statistics == nullptr)
        {
            pba_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics>();
        }
        return pba_send_statistics;
    }

    if(child_yang_name == "pbra-receive-statistics")
    {
        if(pbra_receive_statistics == nullptr)
        {
            pbra_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics>();
        }
        return pbra_receive_statistics;
    }

    if(child_yang_name == "pbra-send-statistics")
    {
        if(pbra_send_statistics == nullptr)
        {
            pbra_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics>();
        }
        return pbra_send_statistics;
    }

    if(child_yang_name == "pbri-receive-statistics")
    {
        if(pbri_receive_statistics == nullptr)
        {
            pbri_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics>();
        }
        return pbri_receive_statistics;
    }

    if(child_yang_name == "pbri-send-statistics")
    {
        if(pbri_send_statistics == nullptr)
        {
            pbri_send_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics>();
        }
        return pbri_send_statistics;
    }

    if(child_yang_name == "pbu-receive-statistics")
    {
        if(pbu_receive_statistics == nullptr)
        {
            pbu_receive_statistics = std::make_shared<Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics>();
        }
        return pbu_receive_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pba_send_statistics != nullptr)
    {
        children["pba-send-statistics"] = pba_send_statistics;
    }

    if(pbra_receive_statistics != nullptr)
    {
        children["pbra-receive-statistics"] = pbra_receive_statistics;
    }

    if(pbra_send_statistics != nullptr)
    {
        children["pbra-send-statistics"] = pbra_send_statistics;
    }

    if(pbri_receive_statistics != nullptr)
    {
        children["pbri-receive-statistics"] = pbri_receive_statistics;
    }

    if(pbri_send_statistics != nullptr)
    {
        children["pbri-send-statistics"] = pbri_send_statistics;
    }

    if(pbu_receive_statistics != nullptr)
    {
        children["pbu-receive-statistics"] = pbu_receive_statistics;
    }

    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pba-send-statistics" || name == "pbra-receive-statistics" || name == "pbra-send-statistics" || name == "pbri-receive-statistics" || name == "pbri-send-statistics" || name == "pbu-receive-statistics")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::PbaSendStatistics()
    :
    accepted_count{YType::uint32, "accepted-count"},
    admin_failure_count{YType::uint32, "admin-failure-count"},
    authen_failure_count{YType::uint32, "authen-failure-count"},
    bad_sequence_failure_count{YType::uint32, "bad-sequence-failure-count"},
    gre_key_opt_required_count{YType::uint32, "gre-key-opt-required-count"},
    home_reg_failure_count{YType::uint32, "home-reg-failure-count"},
    home_subnet_failure_count{YType::uint32, "home-subnet-failure-count"},
    missing_access_tech_type_opt_count{YType::uint32, "missing-access-tech-type-opt-count"},
    missing_hi_opt_count{YType::uint32, "missing-hi-opt-count"},
    missing_hnp_opt_count{YType::uint32, "missing-hnp-opt-count"},
    missing_mn_id_opt_count{YType::uint32, "missing-mn-id-opt-count"},
    multiple_ipv4_ho_a_not_supported_count{YType::uint32, "multiple-ipv4-ho-a-not-supported-count"},
    no_author_for_hnp_count{YType::uint32, "no-author-for-hnp-count"},
    no_author_for_ipv4_hoa_count{YType::uint32, "no-author-for-ipv4-hoa-count"},
    no_author_for_ipv4_mobility_count{YType::uint32, "no-author-for-ipv4-mobility-count"},
    no_author_for_ipv6_mobility_count{YType::uint32, "no-author-for-ipv6-mobility-count"},
    no_author_for_proxy_reg_count{YType::uint32, "no-author-for-proxy-reg-count"},
    not_lma_for_this_mn_count{YType::uint32, "not-lma-for-this-mn-count"},
    pba_count{YType::uint64, "pba-count"},
    pba_drop_count{YType::uint32, "pba-drop-count"},
    proxy_reg_not_enabled_count{YType::uint32, "proxy-reg-not-enabled-count"},
    received_hnps_do_not_match_bce_hnps_count{YType::uint32, "received-hnps-do-not-match-bce-hnps-count"},
    reg_type_failure_count{YType::uint32, "reg-type-failure-count"},
    resource_failure_count{YType::uint32, "resource-failure-count"},
    timestamp_lower_than_previous_accepted_count{YType::uint32, "timestamp-lower-than-previous-accepted-count"},
    timestamp_mismatch_count{YType::uint32, "timestamp-mismatch-count"},
    unknown_count{YType::uint32, "unknown-count"},
    unspecified_failure_count{YType::uint32, "unspecified-failure-count"}
{

    yang_name = "pba-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::~PbaSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::has_data() const
{
    return accepted_count.is_set
	|| admin_failure_count.is_set
	|| authen_failure_count.is_set
	|| bad_sequence_failure_count.is_set
	|| gre_key_opt_required_count.is_set
	|| home_reg_failure_count.is_set
	|| home_subnet_failure_count.is_set
	|| missing_access_tech_type_opt_count.is_set
	|| missing_hi_opt_count.is_set
	|| missing_hnp_opt_count.is_set
	|| missing_mn_id_opt_count.is_set
	|| multiple_ipv4_ho_a_not_supported_count.is_set
	|| no_author_for_hnp_count.is_set
	|| no_author_for_ipv4_hoa_count.is_set
	|| no_author_for_ipv4_mobility_count.is_set
	|| no_author_for_ipv6_mobility_count.is_set
	|| no_author_for_proxy_reg_count.is_set
	|| not_lma_for_this_mn_count.is_set
	|| pba_count.is_set
	|| pba_drop_count.is_set
	|| proxy_reg_not_enabled_count.is_set
	|| received_hnps_do_not_match_bce_hnps_count.is_set
	|| reg_type_failure_count.is_set
	|| resource_failure_count.is_set
	|| timestamp_lower_than_previous_accepted_count.is_set
	|| timestamp_mismatch_count.is_set
	|| unknown_count.is_set
	|| unspecified_failure_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_count.yfilter)
	|| ydk::is_set(admin_failure_count.yfilter)
	|| ydk::is_set(authen_failure_count.yfilter)
	|| ydk::is_set(bad_sequence_failure_count.yfilter)
	|| ydk::is_set(gre_key_opt_required_count.yfilter)
	|| ydk::is_set(home_reg_failure_count.yfilter)
	|| ydk::is_set(home_subnet_failure_count.yfilter)
	|| ydk::is_set(missing_access_tech_type_opt_count.yfilter)
	|| ydk::is_set(missing_hi_opt_count.yfilter)
	|| ydk::is_set(missing_hnp_opt_count.yfilter)
	|| ydk::is_set(missing_mn_id_opt_count.yfilter)
	|| ydk::is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)
	|| ydk::is_set(no_author_for_hnp_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_hoa_count.yfilter)
	|| ydk::is_set(no_author_for_ipv4_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_ipv6_mobility_count.yfilter)
	|| ydk::is_set(no_author_for_proxy_reg_count.yfilter)
	|| ydk::is_set(not_lma_for_this_mn_count.yfilter)
	|| ydk::is_set(pba_count.yfilter)
	|| ydk::is_set(pba_drop_count.yfilter)
	|| ydk::is_set(proxy_reg_not_enabled_count.yfilter)
	|| ydk::is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)
	|| ydk::is_set(reg_type_failure_count.yfilter)
	|| ydk::is_set(resource_failure_count.yfilter)
	|| ydk::is_set(timestamp_lower_than_previous_accepted_count.yfilter)
	|| ydk::is_set(timestamp_mismatch_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(unspecified_failure_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pba-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_count.is_set || is_set(accepted_count.yfilter)) leaf_name_data.push_back(accepted_count.get_name_leafdata());
    if (admin_failure_count.is_set || is_set(admin_failure_count.yfilter)) leaf_name_data.push_back(admin_failure_count.get_name_leafdata());
    if (authen_failure_count.is_set || is_set(authen_failure_count.yfilter)) leaf_name_data.push_back(authen_failure_count.get_name_leafdata());
    if (bad_sequence_failure_count.is_set || is_set(bad_sequence_failure_count.yfilter)) leaf_name_data.push_back(bad_sequence_failure_count.get_name_leafdata());
    if (gre_key_opt_required_count.is_set || is_set(gre_key_opt_required_count.yfilter)) leaf_name_data.push_back(gre_key_opt_required_count.get_name_leafdata());
    if (home_reg_failure_count.is_set || is_set(home_reg_failure_count.yfilter)) leaf_name_data.push_back(home_reg_failure_count.get_name_leafdata());
    if (home_subnet_failure_count.is_set || is_set(home_subnet_failure_count.yfilter)) leaf_name_data.push_back(home_subnet_failure_count.get_name_leafdata());
    if (missing_access_tech_type_opt_count.is_set || is_set(missing_access_tech_type_opt_count.yfilter)) leaf_name_data.push_back(missing_access_tech_type_opt_count.get_name_leafdata());
    if (missing_hi_opt_count.is_set || is_set(missing_hi_opt_count.yfilter)) leaf_name_data.push_back(missing_hi_opt_count.get_name_leafdata());
    if (missing_hnp_opt_count.is_set || is_set(missing_hnp_opt_count.yfilter)) leaf_name_data.push_back(missing_hnp_opt_count.get_name_leafdata());
    if (missing_mn_id_opt_count.is_set || is_set(missing_mn_id_opt_count.yfilter)) leaf_name_data.push_back(missing_mn_id_opt_count.get_name_leafdata());
    if (multiple_ipv4_ho_a_not_supported_count.is_set || is_set(multiple_ipv4_ho_a_not_supported_count.yfilter)) leaf_name_data.push_back(multiple_ipv4_ho_a_not_supported_count.get_name_leafdata());
    if (no_author_for_hnp_count.is_set || is_set(no_author_for_hnp_count.yfilter)) leaf_name_data.push_back(no_author_for_hnp_count.get_name_leafdata());
    if (no_author_for_ipv4_hoa_count.is_set || is_set(no_author_for_ipv4_hoa_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_hoa_count.get_name_leafdata());
    if (no_author_for_ipv4_mobility_count.is_set || is_set(no_author_for_ipv4_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv4_mobility_count.get_name_leafdata());
    if (no_author_for_ipv6_mobility_count.is_set || is_set(no_author_for_ipv6_mobility_count.yfilter)) leaf_name_data.push_back(no_author_for_ipv6_mobility_count.get_name_leafdata());
    if (no_author_for_proxy_reg_count.is_set || is_set(no_author_for_proxy_reg_count.yfilter)) leaf_name_data.push_back(no_author_for_proxy_reg_count.get_name_leafdata());
    if (not_lma_for_this_mn_count.is_set || is_set(not_lma_for_this_mn_count.yfilter)) leaf_name_data.push_back(not_lma_for_this_mn_count.get_name_leafdata());
    if (pba_count.is_set || is_set(pba_count.yfilter)) leaf_name_data.push_back(pba_count.get_name_leafdata());
    if (pba_drop_count.is_set || is_set(pba_drop_count.yfilter)) leaf_name_data.push_back(pba_drop_count.get_name_leafdata());
    if (proxy_reg_not_enabled_count.is_set || is_set(proxy_reg_not_enabled_count.yfilter)) leaf_name_data.push_back(proxy_reg_not_enabled_count.get_name_leafdata());
    if (received_hnps_do_not_match_bce_hnps_count.is_set || is_set(received_hnps_do_not_match_bce_hnps_count.yfilter)) leaf_name_data.push_back(received_hnps_do_not_match_bce_hnps_count.get_name_leafdata());
    if (reg_type_failure_count.is_set || is_set(reg_type_failure_count.yfilter)) leaf_name_data.push_back(reg_type_failure_count.get_name_leafdata());
    if (resource_failure_count.is_set || is_set(resource_failure_count.yfilter)) leaf_name_data.push_back(resource_failure_count.get_name_leafdata());
    if (timestamp_lower_than_previous_accepted_count.is_set || is_set(timestamp_lower_than_previous_accepted_count.yfilter)) leaf_name_data.push_back(timestamp_lower_than_previous_accepted_count.get_name_leafdata());
    if (timestamp_mismatch_count.is_set || is_set(timestamp_mismatch_count.yfilter)) leaf_name_data.push_back(timestamp_mismatch_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (unspecified_failure_count.is_set || is_set(unspecified_failure_count.yfilter)) leaf_name_data.push_back(unspecified_failure_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-count")
    {
        accepted_count = value;
        accepted_count.value_namespace = name_space;
        accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count = value;
        admin_failure_count.value_namespace = name_space;
        admin_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count = value;
        authen_failure_count.value_namespace = name_space;
        authen_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count = value;
        bad_sequence_failure_count.value_namespace = name_space;
        bad_sequence_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count = value;
        gre_key_opt_required_count.value_namespace = name_space;
        gre_key_opt_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count = value;
        home_reg_failure_count.value_namespace = name_space;
        home_reg_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count = value;
        home_subnet_failure_count.value_namespace = name_space;
        home_subnet_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count = value;
        missing_access_tech_type_opt_count.value_namespace = name_space;
        missing_access_tech_type_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count = value;
        missing_hi_opt_count.value_namespace = name_space;
        missing_hi_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count = value;
        missing_hnp_opt_count.value_namespace = name_space;
        missing_hnp_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count = value;
        missing_mn_id_opt_count.value_namespace = name_space;
        missing_mn_id_opt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count = value;
        multiple_ipv4_ho_a_not_supported_count.value_namespace = name_space;
        multiple_ipv4_ho_a_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count = value;
        no_author_for_hnp_count.value_namespace = name_space;
        no_author_for_hnp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count = value;
        no_author_for_ipv4_hoa_count.value_namespace = name_space;
        no_author_for_ipv4_hoa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count = value;
        no_author_for_ipv4_mobility_count.value_namespace = name_space;
        no_author_for_ipv4_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count = value;
        no_author_for_ipv6_mobility_count.value_namespace = name_space;
        no_author_for_ipv6_mobility_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count = value;
        no_author_for_proxy_reg_count.value_namespace = name_space;
        no_author_for_proxy_reg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count = value;
        not_lma_for_this_mn_count.value_namespace = name_space;
        not_lma_for_this_mn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-count")
    {
        pba_count = value;
        pba_count.value_namespace = name_space;
        pba_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count = value;
        pba_drop_count.value_namespace = name_space;
        pba_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count = value;
        proxy_reg_not_enabled_count.value_namespace = name_space;
        proxy_reg_not_enabled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count = value;
        received_hnps_do_not_match_bce_hnps_count.value_namespace = name_space;
        received_hnps_do_not_match_bce_hnps_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count = value;
        reg_type_failure_count.value_namespace = name_space;
        reg_type_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count = value;
        resource_failure_count.value_namespace = name_space;
        resource_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count = value;
        timestamp_lower_than_previous_accepted_count.value_namespace = name_space;
        timestamp_lower_than_previous_accepted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count = value;
        timestamp_mismatch_count.value_namespace = name_space;
        timestamp_mismatch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count = value;
        unspecified_failure_count.value_namespace = name_space;
        unspecified_failure_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-count")
    {
        accepted_count.yfilter = yfilter;
    }
    if(value_path == "admin-failure-count")
    {
        admin_failure_count.yfilter = yfilter;
    }
    if(value_path == "authen-failure-count")
    {
        authen_failure_count.yfilter = yfilter;
    }
    if(value_path == "bad-sequence-failure-count")
    {
        bad_sequence_failure_count.yfilter = yfilter;
    }
    if(value_path == "gre-key-opt-required-count")
    {
        gre_key_opt_required_count.yfilter = yfilter;
    }
    if(value_path == "home-reg-failure-count")
    {
        home_reg_failure_count.yfilter = yfilter;
    }
    if(value_path == "home-subnet-failure-count")
    {
        home_subnet_failure_count.yfilter = yfilter;
    }
    if(value_path == "missing-access-tech-type-opt-count")
    {
        missing_access_tech_type_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hi-opt-count")
    {
        missing_hi_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-hnp-opt-count")
    {
        missing_hnp_opt_count.yfilter = yfilter;
    }
    if(value_path == "missing-mn-id-opt-count")
    {
        missing_mn_id_opt_count.yfilter = yfilter;
    }
    if(value_path == "multiple-ipv4-ho-a-not-supported-count")
    {
        multiple_ipv4_ho_a_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-hnp-count")
    {
        no_author_for_hnp_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-hoa-count")
    {
        no_author_for_ipv4_hoa_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv4-mobility-count")
    {
        no_author_for_ipv4_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-ipv6-mobility-count")
    {
        no_author_for_ipv6_mobility_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-proxy-reg-count")
    {
        no_author_for_proxy_reg_count.yfilter = yfilter;
    }
    if(value_path == "not-lma-for-this-mn-count")
    {
        not_lma_for_this_mn_count.yfilter = yfilter;
    }
    if(value_path == "pba-count")
    {
        pba_count.yfilter = yfilter;
    }
    if(value_path == "pba-drop-count")
    {
        pba_drop_count.yfilter = yfilter;
    }
    if(value_path == "proxy-reg-not-enabled-count")
    {
        proxy_reg_not_enabled_count.yfilter = yfilter;
    }
    if(value_path == "received-hnps-do-not-match-bce-hnps-count")
    {
        received_hnps_do_not_match_bce_hnps_count.yfilter = yfilter;
    }
    if(value_path == "reg-type-failure-count")
    {
        reg_type_failure_count.yfilter = yfilter;
    }
    if(value_path == "resource-failure-count")
    {
        resource_failure_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-lower-than-previous-accepted-count")
    {
        timestamp_lower_than_previous_accepted_count.yfilter = yfilter;
    }
    if(value_path == "timestamp-mismatch-count")
    {
        timestamp_mismatch_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-failure-count")
    {
        unspecified_failure_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-count" || name == "admin-failure-count" || name == "authen-failure-count" || name == "bad-sequence-failure-count" || name == "gre-key-opt-required-count" || name == "home-reg-failure-count" || name == "home-subnet-failure-count" || name == "missing-access-tech-type-opt-count" || name == "missing-hi-opt-count" || name == "missing-hnp-opt-count" || name == "missing-mn-id-opt-count" || name == "multiple-ipv4-ho-a-not-supported-count" || name == "no-author-for-hnp-count" || name == "no-author-for-ipv4-hoa-count" || name == "no-author-for-ipv4-mobility-count" || name == "no-author-for-ipv6-mobility-count" || name == "no-author-for-proxy-reg-count" || name == "not-lma-for-this-mn-count" || name == "pba-count" || name == "pba-drop-count" || name == "proxy-reg-not-enabled-count" || name == "received-hnps-do-not-match-bce-hnps-count" || name == "reg-type-failure-count" || name == "resource-failure-count" || name == "timestamp-lower-than-previous-accepted-count" || name == "timestamp-mismatch-count" || name == "unknown-count" || name == "unspecified-failure-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::PbraReceiveStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::~PbraReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::PbraSendStatistics()
    :
    hoa_required_count{YType::uint32, "hoa-required-count"},
    mn_attached_count{YType::uint32, "mn-attached-count"},
    mn_identity_required_count{YType::uint32, "mn-identity-required-count"},
    no_author_for_global_revoc_count{YType::uint32, "no-author-for-global-revoc-count"},
    no_binding_count{YType::uint32, "no-binding-count"},
    partial_success_count{YType::uint32, "partial-success-count"},
    pbr_not_supported_count{YType::uint32, "pbr-not-supported-count"},
    pbra_count{YType::uint64, "pbra-count"},
    pbra_drop_count{YType::uint32, "pbra-drop-count"},
    revoc_function_not_supported_count{YType::uint32, "revoc-function-not-supported-count"},
    success_count{YType::uint32, "success-count"},
    unknown_revoc_trigger_count{YType::uint32, "unknown-revoc-trigger-count"}
{

    yang_name = "pbra-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::~PbraSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::has_data() const
{
    return hoa_required_count.is_set
	|| mn_attached_count.is_set
	|| mn_identity_required_count.is_set
	|| no_author_for_global_revoc_count.is_set
	|| no_binding_count.is_set
	|| partial_success_count.is_set
	|| pbr_not_supported_count.is_set
	|| pbra_count.is_set
	|| pbra_drop_count.is_set
	|| revoc_function_not_supported_count.is_set
	|| success_count.is_set
	|| unknown_revoc_trigger_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hoa_required_count.yfilter)
	|| ydk::is_set(mn_attached_count.yfilter)
	|| ydk::is_set(mn_identity_required_count.yfilter)
	|| ydk::is_set(no_author_for_global_revoc_count.yfilter)
	|| ydk::is_set(no_binding_count.yfilter)
	|| ydk::is_set(partial_success_count.yfilter)
	|| ydk::is_set(pbr_not_supported_count.yfilter)
	|| ydk::is_set(pbra_count.yfilter)
	|| ydk::is_set(pbra_drop_count.yfilter)
	|| ydk::is_set(revoc_function_not_supported_count.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(unknown_revoc_trigger_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbra-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hoa_required_count.is_set || is_set(hoa_required_count.yfilter)) leaf_name_data.push_back(hoa_required_count.get_name_leafdata());
    if (mn_attached_count.is_set || is_set(mn_attached_count.yfilter)) leaf_name_data.push_back(mn_attached_count.get_name_leafdata());
    if (mn_identity_required_count.is_set || is_set(mn_identity_required_count.yfilter)) leaf_name_data.push_back(mn_identity_required_count.get_name_leafdata());
    if (no_author_for_global_revoc_count.is_set || is_set(no_author_for_global_revoc_count.yfilter)) leaf_name_data.push_back(no_author_for_global_revoc_count.get_name_leafdata());
    if (no_binding_count.is_set || is_set(no_binding_count.yfilter)) leaf_name_data.push_back(no_binding_count.get_name_leafdata());
    if (partial_success_count.is_set || is_set(partial_success_count.yfilter)) leaf_name_data.push_back(partial_success_count.get_name_leafdata());
    if (pbr_not_supported_count.is_set || is_set(pbr_not_supported_count.yfilter)) leaf_name_data.push_back(pbr_not_supported_count.get_name_leafdata());
    if (pbra_count.is_set || is_set(pbra_count.yfilter)) leaf_name_data.push_back(pbra_count.get_name_leafdata());
    if (pbra_drop_count.is_set || is_set(pbra_drop_count.yfilter)) leaf_name_data.push_back(pbra_drop_count.get_name_leafdata());
    if (revoc_function_not_supported_count.is_set || is_set(revoc_function_not_supported_count.yfilter)) leaf_name_data.push_back(revoc_function_not_supported_count.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (unknown_revoc_trigger_count.is_set || is_set(unknown_revoc_trigger_count.yfilter)) leaf_name_data.push_back(unknown_revoc_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count = value;
        hoa_required_count.value_namespace = name_space;
        hoa_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count = value;
        mn_attached_count.value_namespace = name_space;
        mn_attached_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count = value;
        mn_identity_required_count.value_namespace = name_space;
        mn_identity_required_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count = value;
        no_author_for_global_revoc_count.value_namespace = name_space;
        no_author_for_global_revoc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count = value;
        no_binding_count.value_namespace = name_space;
        no_binding_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count = value;
        partial_success_count.value_namespace = name_space;
        partial_success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count = value;
        pbr_not_supported_count.value_namespace = name_space;
        pbr_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-count")
    {
        pbra_count = value;
        pbra_count.value_namespace = name_space;
        pbra_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count = value;
        pbra_drop_count.value_namespace = name_space;
        pbra_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count = value;
        revoc_function_not_supported_count.value_namespace = name_space;
        revoc_function_not_supported_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count = value;
        unknown_revoc_trigger_count.value_namespace = name_space;
        unknown_revoc_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hoa-required-count")
    {
        hoa_required_count.yfilter = yfilter;
    }
    if(value_path == "mn-attached-count")
    {
        mn_attached_count.yfilter = yfilter;
    }
    if(value_path == "mn-identity-required-count")
    {
        mn_identity_required_count.yfilter = yfilter;
    }
    if(value_path == "no-author-for-global-revoc-count")
    {
        no_author_for_global_revoc_count.yfilter = yfilter;
    }
    if(value_path == "no-binding-count")
    {
        no_binding_count.yfilter = yfilter;
    }
    if(value_path == "partial-success-count")
    {
        partial_success_count.yfilter = yfilter;
    }
    if(value_path == "pbr-not-supported-count")
    {
        pbr_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "pbra-count")
    {
        pbra_count.yfilter = yfilter;
    }
    if(value_path == "pbra-drop-count")
    {
        pbra_drop_count.yfilter = yfilter;
    }
    if(value_path == "revoc-function-not-supported-count")
    {
        revoc_function_not_supported_count.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "unknown-revoc-trigger-count")
    {
        unknown_revoc_trigger_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hoa-required-count" || name == "mn-attached-count" || name == "mn-identity-required-count" || name == "no-author-for-global-revoc-count" || name == "no-binding-count" || name == "partial-success-count" || name == "pbr-not-supported-count" || name == "pbra-count" || name == "pbra-drop-count" || name == "revoc-function-not-supported-count" || name == "success-count" || name == "unknown-revoc-trigger-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::PbriReceiveStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::~PbriReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::PbriSendStatistics()
    :
    admin_reason_count{YType::uint32, "admin-reason-count"},
    mag_handover_different_att_count{YType::uint32, "mag-handover-different-att-count"},
    mag_handover_same_att_count{YType::uint32, "mag-handover-same-att-count"},
    mag_handover_unknown_count{YType::uint32, "mag-handover-unknown-count"},
    network_session_termination_count{YType::uint32, "network-session-termination-count"},
    out_of_sync_bce_state_count{YType::uint32, "out-of-sync-bce-state-count"},
    pbri_count{YType::uint64, "pbri-count"},
    pbri_drop_count{YType::uint32, "pbri-drop-count"},
    per_peer_policy_count{YType::uint32, "per-peer-policy-count"},
    revoking_mn_local_policy_count{YType::uint32, "revoking-mn-local-policy-count"},
    unspecified_count{YType::uint32, "unspecified-count"},
    user_session_termination_count{YType::uint32, "user-session-termination-count"}
{

    yang_name = "pbri-send-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::~PbriSendStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::has_data() const
{
    return admin_reason_count.is_set
	|| mag_handover_different_att_count.is_set
	|| mag_handover_same_att_count.is_set
	|| mag_handover_unknown_count.is_set
	|| network_session_termination_count.is_set
	|| out_of_sync_bce_state_count.is_set
	|| pbri_count.is_set
	|| pbri_drop_count.is_set
	|| per_peer_policy_count.is_set
	|| revoking_mn_local_policy_count.is_set
	|| unspecified_count.is_set
	|| user_session_termination_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_reason_count.yfilter)
	|| ydk::is_set(mag_handover_different_att_count.yfilter)
	|| ydk::is_set(mag_handover_same_att_count.yfilter)
	|| ydk::is_set(mag_handover_unknown_count.yfilter)
	|| ydk::is_set(network_session_termination_count.yfilter)
	|| ydk::is_set(out_of_sync_bce_state_count.yfilter)
	|| ydk::is_set(pbri_count.yfilter)
	|| ydk::is_set(pbri_drop_count.yfilter)
	|| ydk::is_set(per_peer_policy_count.yfilter)
	|| ydk::is_set(revoking_mn_local_policy_count.yfilter)
	|| ydk::is_set(unspecified_count.yfilter)
	|| ydk::is_set(user_session_termination_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbri-send-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_reason_count.is_set || is_set(admin_reason_count.yfilter)) leaf_name_data.push_back(admin_reason_count.get_name_leafdata());
    if (mag_handover_different_att_count.is_set || is_set(mag_handover_different_att_count.yfilter)) leaf_name_data.push_back(mag_handover_different_att_count.get_name_leafdata());
    if (mag_handover_same_att_count.is_set || is_set(mag_handover_same_att_count.yfilter)) leaf_name_data.push_back(mag_handover_same_att_count.get_name_leafdata());
    if (mag_handover_unknown_count.is_set || is_set(mag_handover_unknown_count.yfilter)) leaf_name_data.push_back(mag_handover_unknown_count.get_name_leafdata());
    if (network_session_termination_count.is_set || is_set(network_session_termination_count.yfilter)) leaf_name_data.push_back(network_session_termination_count.get_name_leafdata());
    if (out_of_sync_bce_state_count.is_set || is_set(out_of_sync_bce_state_count.yfilter)) leaf_name_data.push_back(out_of_sync_bce_state_count.get_name_leafdata());
    if (pbri_count.is_set || is_set(pbri_count.yfilter)) leaf_name_data.push_back(pbri_count.get_name_leafdata());
    if (pbri_drop_count.is_set || is_set(pbri_drop_count.yfilter)) leaf_name_data.push_back(pbri_drop_count.get_name_leafdata());
    if (per_peer_policy_count.is_set || is_set(per_peer_policy_count.yfilter)) leaf_name_data.push_back(per_peer_policy_count.get_name_leafdata());
    if (revoking_mn_local_policy_count.is_set || is_set(revoking_mn_local_policy_count.yfilter)) leaf_name_data.push_back(revoking_mn_local_policy_count.get_name_leafdata());
    if (unspecified_count.is_set || is_set(unspecified_count.yfilter)) leaf_name_data.push_back(unspecified_count.get_name_leafdata());
    if (user_session_termination_count.is_set || is_set(user_session_termination_count.yfilter)) leaf_name_data.push_back(user_session_termination_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count = value;
        admin_reason_count.value_namespace = name_space;
        admin_reason_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count = value;
        mag_handover_different_att_count.value_namespace = name_space;
        mag_handover_different_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count = value;
        mag_handover_same_att_count.value_namespace = name_space;
        mag_handover_same_att_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count = value;
        mag_handover_unknown_count.value_namespace = name_space;
        mag_handover_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count = value;
        network_session_termination_count.value_namespace = name_space;
        network_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count = value;
        out_of_sync_bce_state_count.value_namespace = name_space;
        out_of_sync_bce_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-count")
    {
        pbri_count = value;
        pbri_count.value_namespace = name_space;
        pbri_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count = value;
        pbri_drop_count.value_namespace = name_space;
        pbri_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count = value;
        per_peer_policy_count.value_namespace = name_space;
        per_peer_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count = value;
        revoking_mn_local_policy_count.value_namespace = name_space;
        revoking_mn_local_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count = value;
        unspecified_count.value_namespace = name_space;
        unspecified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count = value;
        user_session_termination_count.value_namespace = name_space;
        user_session_termination_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-reason-count")
    {
        admin_reason_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-different-att-count")
    {
        mag_handover_different_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-same-att-count")
    {
        mag_handover_same_att_count.yfilter = yfilter;
    }
    if(value_path == "mag-handover-unknown-count")
    {
        mag_handover_unknown_count.yfilter = yfilter;
    }
    if(value_path == "network-session-termination-count")
    {
        network_session_termination_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sync-bce-state-count")
    {
        out_of_sync_bce_state_count.yfilter = yfilter;
    }
    if(value_path == "pbri-count")
    {
        pbri_count.yfilter = yfilter;
    }
    if(value_path == "pbri-drop-count")
    {
        pbri_drop_count.yfilter = yfilter;
    }
    if(value_path == "per-peer-policy-count")
    {
        per_peer_policy_count.yfilter = yfilter;
    }
    if(value_path == "revoking-mn-local-policy-count")
    {
        revoking_mn_local_policy_count.yfilter = yfilter;
    }
    if(value_path == "unspecified-count")
    {
        unspecified_count.yfilter = yfilter;
    }
    if(value_path == "user-session-termination-count")
    {
        user_session_termination_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-reason-count" || name == "mag-handover-different-att-count" || name == "mag-handover-same-att-count" || name == "mag-handover-unknown-count" || name == "network-session-termination-count" || name == "out-of-sync-bce-state-count" || name == "pbri-count" || name == "pbri-drop-count" || name == "per-peer-policy-count" || name == "revoking-mn-local-policy-count" || name == "unspecified-count" || name == "user-session-termination-count")
        return true;
    return false;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::PbuReceiveStatistics()
    :
    pbu_count{YType::uint64, "pbu-count"},
    pbu_drop_count{YType::uint32, "pbu-drop-count"}
{

    yang_name = "pbu-receive-statistics"; yang_parent_name = "protocol-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::~PbuReceiveStatistics()
{
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::has_data() const
{
    return pbu_count.is_set
	|| pbu_drop_count.is_set;
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbu_count.yfilter)
	|| ydk::is_set(pbu_drop_count.yfilter);
}

std::string Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbu-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbu_count.is_set || is_set(pbu_count.yfilter)) leaf_name_data.push_back(pbu_count.get_name_leafdata());
    if (pbu_drop_count.is_set || is_set(pbu_drop_count.yfilter)) leaf_name_data.push_back(pbu_drop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbu-count")
    {
        pbu_count = value;
        pbu_count.value_namespace = name_space;
        pbu_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count = value;
        pbu_drop_count.value_namespace = name_space;
        pbu_drop_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbu-count")
    {
        pbu_count.yfilter = yfilter;
    }
    if(value_path == "pbu-drop-count")
    {
        pbu_drop_count.yfilter = yfilter;
    }
}

bool Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbu-count" || name == "pbu-drop-count")
        return true;
    return false;
}

const Enum::YLeaf Pmipv6Addr::none {0, "none"};
const Enum::YLeaf Pmipv6Addr::ipv4 {1, "ipv4"};
const Enum::YLeaf Pmipv6Addr::ipv6 {2, "ipv6"};
const Enum::YLeaf Pmipv6Addr::pmipv6_addr_ipv4_ipv6 {3, "pmipv6-addr-ipv4-ipv6"};

const Enum::YLeaf Pmipv6Role::wlan {0, "wlan"};
const Enum::YLeaf Pmipv6Role::gpp {1, "gpp"};
const Enum::YLeaf Pmipv6Role::lte {2, "lte"};
const Enum::YLeaf Pmipv6Role::wi_max {3, "wi-max"};
const Enum::YLeaf Pmipv6Role::gma {4, "gma"};
const Enum::YLeaf Pmipv6Role::rmax {5, "rmax"};

const Enum::YLeaf Pmipv6Encap::none {0, "none"};
const Enum::YLeaf Pmipv6Encap::ipv6 {1, "ipv6"};
const Enum::YLeaf Pmipv6Encap::ipv6_ipv4 {2, "ipv6-ipv4"};
const Enum::YLeaf Pmipv6Encap::ipv6_udp {3, "ipv6-udp"};
const Enum::YLeaf Pmipv6Encap::gre_ipv4 {4, "gre-ipv4"};
const Enum::YLeaf Pmipv6Encap::gre_ipv6 {5, "gre-ipv6"};
const Enum::YLeaf Pmipv6Encap::gre {6, "gre"};
const Enum::YLeaf Pmipv6Encap::mgre_ipv4 {7, "mgre-ipv4"};
const Enum::YLeaf Pmipv6Encap::mgre_ipv6 {8, "mgre-ipv6"};
const Enum::YLeaf Pmipv6Encap::mip_udp {9, "mip-udp"};
const Enum::YLeaf Pmipv6Encap::mip_mudp {10, "mip-mudp"};
const Enum::YLeaf Pmipv6Encap::max {11, "max"};


}
}

