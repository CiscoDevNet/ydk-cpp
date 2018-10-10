
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_l2tun_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_oper {

L2tp::L2tp()
    :
    counters(std::make_shared<L2tp::Counters>())
    , tunnel_configurations(std::make_shared<L2tp::TunnelConfigurations>())
    , counter_hist_fail(std::make_shared<L2tp::CounterHistFail>())
    , classes(std::make_shared<L2tp::Classes>())
    , tunnels(std::make_shared<L2tp::Tunnels>())
    , sessions(std::make_shared<L2tp::Sessions>())
    , session(std::make_shared<L2tp::Session>())
{
    counters->parent = this;
    tunnel_configurations->parent = this;
    counter_hist_fail->parent = this;
    classes->parent = this;
    tunnels->parent = this;
    sessions->parent = this;
    session->parent = this;

    yang_name = "l2tp"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L2tp::~L2tp()
{
}

bool L2tp::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_data())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool L2tp::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_operation())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<L2tp::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "tunnel-configurations")
    {
        if(tunnel_configurations == nullptr)
        {
            tunnel_configurations = std::make_shared<L2tp::TunnelConfigurations>();
        }
        return tunnel_configurations;
    }

    if(child_yang_name == "counter-hist-fail")
    {
        if(counter_hist_fail == nullptr)
        {
            counter_hist_fail = std::make_shared<L2tp::CounterHistFail>();
        }
        return counter_hist_fail;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<L2tp::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<L2tp::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<L2tp::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<L2tp::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(tunnel_configurations != nullptr)
    {
        children["tunnel-configurations"] = tunnel_configurations;
    }

    if(counter_hist_fail != nullptr)
    {
        children["counter-hist-fail"] = counter_hist_fail;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> L2tp::clone_ptr() const
{
    return std::make_shared<L2tp>();
}

std::string L2tp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2tp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2tp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2tp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "tunnel-configurations" || name == "counter-hist-fail" || name == "classes" || name == "tunnels" || name == "sessions" || name == "session")
        return true;
    return false;
}

L2tp::Counters::Counters()
    :
    control(std::make_shared<L2tp::Counters::Control>())
{
    control->parent = this;

    yang_name = "counters"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::~Counters()
{
}

bool L2tp::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data());
}

bool L2tp::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation());
}

std::string L2tp::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<L2tp::Counters::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(control != nullptr)
    {
        children["control"] = control;
    }

    return children;
}

void L2tp::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control")
        return true;
    return false;
}

L2tp::Counters::Control::Control()
    :
    tunnel_xr(std::make_shared<L2tp::Counters::Control::TunnelXr>())
    , tunnels(std::make_shared<L2tp::Counters::Control::Tunnels>())
{
    tunnel_xr->parent = this;
    tunnels->parent = this;

    yang_name = "control"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::~Control()
{
}

bool L2tp::Counters::Control::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_xr !=  nullptr && tunnel_xr->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2tp::Counters::Control::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_xr !=  nullptr && tunnel_xr->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2tp::Counters::Control::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-xr")
    {
        if(tunnel_xr == nullptr)
        {
            tunnel_xr = std::make_shared<L2tp::Counters::Control::TunnelXr>();
        }
        return tunnel_xr;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<L2tp::Counters::Control::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_xr != nullptr)
    {
        children["tunnel-xr"] = tunnel_xr;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void L2tp::Counters::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Counters::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Counters::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-xr" || name == "tunnels")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::TunnelXr()
    :
    authentication(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication>())
    , global(std::make_shared<L2tp::Counters::Control::TunnelXr::Global>())
{
    authentication->parent = this;
    global->parent = this;

    yang_name = "tunnel-xr"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::~TunnelXr()
{
}

bool L2tp::Counters::Control::TunnelXr::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2tp::Counters::Control::TunnelXr::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2tp::Counters::Control::TunnelXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<L2tp::Counters::Control::TunnelXr::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void L2tp::Counters::Control::TunnelXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Counters::Control::TunnelXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Counters::Control::TunnelXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "global")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::Authentication()
    :
    nonce_avp(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp>())
    , common_digest(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest>())
    , primary_digest(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest>())
    , secondary_digest(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest>())
    , integrity_check(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck>())
    , local_secret(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret>())
    , challenge_avp(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp>())
    , challenge_reponse(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse>())
    , overall_statistics(std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics>())
{
    nonce_avp->parent = this;
    common_digest->parent = this;
    primary_digest->parent = this;
    secondary_digest->parent = this;
    integrity_check->parent = this;
    local_secret->parent = this;
    challenge_avp->parent = this;
    challenge_reponse->parent = this;
    overall_statistics->parent = this;

    yang_name = "authentication"; yang_parent_name = "tunnel-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::~Authentication()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (nonce_avp !=  nullptr && nonce_avp->has_data())
	|| (common_digest !=  nullptr && common_digest->has_data())
	|| (primary_digest !=  nullptr && primary_digest->has_data())
	|| (secondary_digest !=  nullptr && secondary_digest->has_data())
	|| (integrity_check !=  nullptr && integrity_check->has_data())
	|| (local_secret !=  nullptr && local_secret->has_data())
	|| (challenge_avp !=  nullptr && challenge_avp->has_data())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_data())
	|| (overall_statistics !=  nullptr && overall_statistics->has_data());
}

bool L2tp::Counters::Control::TunnelXr::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (nonce_avp !=  nullptr && nonce_avp->has_operation())
	|| (common_digest !=  nullptr && common_digest->has_operation())
	|| (primary_digest !=  nullptr && primary_digest->has_operation())
	|| (secondary_digest !=  nullptr && secondary_digest->has_operation())
	|| (integrity_check !=  nullptr && integrity_check->has_operation())
	|| (local_secret !=  nullptr && local_secret->has_operation())
	|| (challenge_avp !=  nullptr && challenge_avp->has_operation())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_operation())
	|| (overall_statistics !=  nullptr && overall_statistics->has_operation());
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nonce-avp")
    {
        if(nonce_avp == nullptr)
        {
            nonce_avp = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp>();
        }
        return nonce_avp;
    }

    if(child_yang_name == "common-digest")
    {
        if(common_digest == nullptr)
        {
            common_digest = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest>();
        }
        return common_digest;
    }

    if(child_yang_name == "primary-digest")
    {
        if(primary_digest == nullptr)
        {
            primary_digest = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest>();
        }
        return primary_digest;
    }

    if(child_yang_name == "secondary-digest")
    {
        if(secondary_digest == nullptr)
        {
            secondary_digest = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest>();
        }
        return secondary_digest;
    }

    if(child_yang_name == "integrity-check")
    {
        if(integrity_check == nullptr)
        {
            integrity_check = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck>();
        }
        return integrity_check;
    }

    if(child_yang_name == "local-secret")
    {
        if(local_secret == nullptr)
        {
            local_secret = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret>();
        }
        return local_secret;
    }

    if(child_yang_name == "challenge-avp")
    {
        if(challenge_avp == nullptr)
        {
            challenge_avp = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp>();
        }
        return challenge_avp;
    }

    if(child_yang_name == "challenge-reponse")
    {
        if(challenge_reponse == nullptr)
        {
            challenge_reponse = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse>();
        }
        return challenge_reponse;
    }

    if(child_yang_name == "overall-statistics")
    {
        if(overall_statistics == nullptr)
        {
            overall_statistics = std::make_shared<L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics>();
        }
        return overall_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nonce_avp != nullptr)
    {
        children["nonce-avp"] = nonce_avp;
    }

    if(common_digest != nullptr)
    {
        children["common-digest"] = common_digest;
    }

    if(primary_digest != nullptr)
    {
        children["primary-digest"] = primary_digest;
    }

    if(secondary_digest != nullptr)
    {
        children["secondary-digest"] = secondary_digest;
    }

    if(integrity_check != nullptr)
    {
        children["integrity-check"] = integrity_check;
    }

    if(local_secret != nullptr)
    {
        children["local-secret"] = local_secret;
    }

    if(challenge_avp != nullptr)
    {
        children["challenge-avp"] = challenge_avp;
    }

    if(challenge_reponse != nullptr)
    {
        children["challenge-reponse"] = challenge_reponse;
    }

    if(overall_statistics != nullptr)
    {
        children["overall-statistics"] = overall_statistics;
    }

    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Counters::Control::TunnelXr::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nonce-avp" || name == "common-digest" || name == "primary-digest" || name == "secondary-digest" || name == "integrity-check" || name == "local-secret" || name == "challenge-avp" || name == "challenge-reponse" || name == "overall-statistics")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::NonceAvp()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "nonce-avp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::~NonceAvp()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonce-avp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::NonceAvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::CommonDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "common-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::~CommonDigest()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::CommonDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::PrimaryDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "primary-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::~PrimaryDigest()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::SecondaryDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "secondary-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::~SecondaryDigest()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::IntegrityCheck()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "integrity-check"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::~IntegrityCheck()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::LocalSecret()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "local-secret"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::~LocalSecret()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::LocalSecret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::ChallengeAvp()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "challenge-avp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::~ChallengeAvp()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-avp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::ChallengeReponse()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "challenge-reponse"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::~ChallengeReponse()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-reponse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::OverallStatistics()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "overall-statistics"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::~OverallStatistics()
{
}

bool L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overall-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Global::Global()
    :
    total_transmit{YType::uint32, "total-transmit"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_received{YType::uint32, "total-received"},
    total_drop{YType::uint32, "total-drop"}
        ,
    transmit(std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Transmit>())
    , retransmit(std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Retransmit>())
    , received(std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Received>())
    , drop(std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Drop>())
{
    transmit->parent = this;
    retransmit->parent = this;
    received->parent = this;
    drop->parent = this;

    yang_name = "global"; yang_parent_name = "tunnel-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Global::~Global()
{
}

bool L2tp::Counters::Control::TunnelXr::Global::has_data() const
{
    if (is_presence_container) return true;
    return total_transmit.is_set
	|| total_retransmit.is_set
	|| total_received.is_set
	|| total_drop.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (drop !=  nullptr && drop->has_data());
}

bool L2tp::Counters::Control::TunnelXr::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_transmit.yfilter)
	|| ydk::is_set(total_retransmit.yfilter)
	|| ydk::is_set(total_received.yfilter)
	|| ydk::is_set(total_drop.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (drop !=  nullptr && drop->has_operation());
}

std::string L2tp::Counters::Control::TunnelXr::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_transmit.is_set || is_set(total_transmit.yfilter)) leaf_name_data.push_back(total_transmit.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.yfilter)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.yfilter)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_drop.is_set || is_set(total_drop.yfilter)) leaf_name_data.push_back(total_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Received>();
        }
        return received;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2tp::Counters::Control::TunnelXr::Global::Drop>();
        }
        return drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    return children;
}

void L2tp::Counters::Control::TunnelXr::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-transmit")
    {
        total_transmit = value;
        total_transmit.value_namespace = name_space;
        total_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
        total_retransmit.value_namespace = name_space;
        total_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-received")
    {
        total_received = value;
        total_received.value_namespace = name_space;
        total_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop")
    {
        total_drop = value;
        total_drop.value_namespace = name_space;
        total_drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-transmit")
    {
        total_transmit.yfilter = yfilter;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit.yfilter = yfilter;
    }
    if(value_path == "total-received")
    {
        total_received.yfilter = yfilter;
    }
    if(value_path == "total-drop")
    {
        total_drop.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "retransmit" || name == "received" || name == "drop" || name == "total-transmit" || name == "total-retransmit" || name == "total-received" || name == "total-drop")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Global::Transmit::Transmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "transmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Global::Transmit::~Transmit()
{
}

bool L2tp::Counters::Control::TunnelXr::Global::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Global::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Global::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Global::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Global::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Global::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Global::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Global::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Global::Retransmit::Retransmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Global::Retransmit::~Retransmit()
{
}

bool L2tp::Counters::Control::TunnelXr::Global::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Global::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Global::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Global::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Global::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Global::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Global::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Global::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Global::Received::Received()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "received"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Global::Received::~Received()
{
}

bool L2tp::Counters::Control::TunnelXr::Global::Received::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Global::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Global::Received::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Global::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Global::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Global::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Global::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Global::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::TunnelXr::Global::Drop::Drop()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "drop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::TunnelXr::Global::Drop::~Drop()
{
}

bool L2tp::Counters::Control::TunnelXr::Global::Drop::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::TunnelXr::Global::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::TunnelXr::Global::Drop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::TunnelXr::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::TunnelXr::Global::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::TunnelXr::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::TunnelXr::Global::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::TunnelXr::Global::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::TunnelXr::Global::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::TunnelXr::Global::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnels()
    :
    tunnel(this, {"tunnel_id"})
{

    yang_name = "tunnels"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::Tunnels::~Tunnels()
{
}

bool L2tp::Counters::Control::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Counters::Control::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Counters::Control::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::Counters::Control::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Counters::Control::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Counters::Control::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Tunnel()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
        ,
    brief(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Brief>())
    , global(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global>())
{
    brief->parent = this;
    global->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Counters::Control::Tunnels::Tunnel::~Tunnel()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2tp::Counters::Control::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "global" || name == "tunnel-id")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Brief::Brief()
    :
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "brief"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Brief::~Brief()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Brief::has_data() const
{
    if (is_presence_container) return true;
    return remote_tunnel_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-tunnel-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Global()
    :
    total_transmit{YType::uint32, "total-transmit"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_received{YType::uint32, "total-received"},
    total_drop{YType::uint32, "total-drop"}
        ,
    transmit(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit>())
    , retransmit(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit>())
    , received(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Received>())
    , drop(std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop>())
{
    transmit->parent = this;
    retransmit->parent = this;
    received->parent = this;
    drop->parent = this;

    yang_name = "global"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::~Global()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::has_data() const
{
    if (is_presence_container) return true;
    return total_transmit.is_set
	|| total_retransmit.is_set
	|| total_received.is_set
	|| total_drop.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (drop !=  nullptr && drop->has_data());
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_transmit.yfilter)
	|| ydk::is_set(total_retransmit.yfilter)
	|| ydk::is_set(total_received.yfilter)
	|| ydk::is_set(total_drop.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (drop !=  nullptr && drop->has_operation());
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_transmit.is_set || is_set(total_transmit.yfilter)) leaf_name_data.push_back(total_transmit.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.yfilter)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.yfilter)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_drop.is_set || is_set(total_drop.yfilter)) leaf_name_data.push_back(total_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Received>();
        }
        return received;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop>();
        }
        return drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-transmit")
    {
        total_transmit = value;
        total_transmit.value_namespace = name_space;
        total_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
        total_retransmit.value_namespace = name_space;
        total_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-received")
    {
        total_received = value;
        total_received.value_namespace = name_space;
        total_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop")
    {
        total_drop = value;
        total_drop.value_namespace = name_space;
        total_drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-transmit")
    {
        total_transmit.yfilter = yfilter;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit.yfilter = yfilter;
    }
    if(value_path == "total-received")
    {
        total_received.yfilter = yfilter;
    }
    if(value_path == "total-drop")
    {
        total_drop.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "retransmit" || name == "received" || name == "drop" || name == "total-transmit" || name == "total-retransmit" || name == "total-received" || name == "total-drop")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::Transmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "transmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::~Transmit()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::Retransmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::~Retransmit()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::Received()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "received"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::~Received()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::Drop()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "drop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::~Drop()
{
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tp::Counters::Control::Tunnels::Tunnel::Global::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tp::TunnelConfigurations::TunnelConfigurations()
    :
    tunnel_configuration(this, {"local_tunnel_id"})
{

    yang_name = "tunnel-configurations"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::TunnelConfigurations::~TunnelConfigurations()
{
}

bool L2tp::TunnelConfigurations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_configuration.len(); index++)
    {
        if(tunnel_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::TunnelConfigurations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_configuration.len(); index++)
    {
        if(tunnel_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::TunnelConfigurations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::TunnelConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configurations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::TunnelConfigurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::TunnelConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-configuration")
    {
        auto c = std::make_shared<L2tp::TunnelConfigurations::TunnelConfiguration>();
        c->parent = this;
        tunnel_configuration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::TunnelConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_configuration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::TunnelConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::TunnelConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::TunnelConfigurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-configuration")
        return true;
    return false;
}

L2tp::TunnelConfigurations::TunnelConfiguration::TunnelConfiguration()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
        ,
    l2tp_class(std::make_shared<L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass>())
{
    l2tp_class->parent = this;

    yang_name = "tunnel-configuration"; yang_parent_name = "tunnel-configurations"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::TunnelConfigurations::TunnelConfiguration::~TunnelConfiguration()
{
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return local_tunnel_id.is_set
	|| remote_tunnel_id.is_set
	|| (l2tp_class !=  nullptr && l2tp_class->has_data());
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| (l2tp_class !=  nullptr && l2tp_class->has_operation());
}

std::string L2tp::TunnelConfigurations::TunnelConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/tunnel-configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::TunnelConfigurations::TunnelConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configuration";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::TunnelConfigurations::TunnelConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::TunnelConfigurations::TunnelConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-class")
    {
        if(l2tp_class == nullptr)
        {
            l2tp_class = std::make_shared<L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass>();
        }
        return l2tp_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::TunnelConfigurations::TunnelConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tp_class != nullptr)
    {
        children["l2tp-class"] = l2tp_class;
    }

    return children;
}

void L2tp::TunnelConfigurations::TunnelConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::TunnelConfigurations::TunnelConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-class" || name == "local-tunnel-id" || name == "remote-tunnel-id")
        return true;
    return false;
}

L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::L2tpClass()
    :
    ip_tos{YType::uint8, "ip-tos"},
    vrf_name{YType::str, "vrf-name"},
    receive_window_size{YType::uint16, "receive-window-size"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    password{YType::str, "password"},
    encoded_password{YType::str, "encoded-password"},
    host_name{YType::str, "host-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    hello_timeout{YType::uint32, "hello-timeout"},
    setup_timeout{YType::uint32, "setup-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"}
{

    yang_name = "l2tp-class"; yang_parent_name = "tunnel-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::~L2tpClass()
{
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_data() const
{
    if (is_presence_container) return true;
    return ip_tos.is_set
	|| vrf_name.is_set
	|| receive_window_size.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| password.is_set
	|| encoded_password.is_set
	|| host_name.is_set
	|| accounting_method_list.is_set
	|| hello_timeout.is_set
	|| setup_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| timeout_no_user.is_set
	|| retransmit_retries.is_set
	|| initial_retransmit_retries.is_set
	|| is_authentication_enabled.is_set
	|| is_hidden.is_set
	|| is_digest_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_peer_address_checked.is_set;
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(receive_window_size.yfilter)
	|| ydk::is_set(class_name_xr.yfilter)
	|| ydk::is_set(digest_hash.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encoded_password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(accounting_method_list.yfilter)
	|| ydk::is_set(hello_timeout.yfilter)
	|| ydk::is_set(setup_timeout.yfilter)
	|| ydk::is_set(retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(timeout_no_user.yfilter)
	|| ydk::is_set(retransmit_retries.yfilter)
	|| ydk::is_set(initial_retransmit_retries.yfilter)
	|| ydk::is_set(is_authentication_enabled.yfilter)
	|| ydk::is_set(is_hidden.yfilter)
	|| ydk::is_set(is_digest_enabled.yfilter)
	|| ydk::is_set(is_digest_check_enabled.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter)
	|| ydk::is_set(is_peer_address_checked.yfilter);
}

std::string L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.yfilter)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.yfilter)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.yfilter)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.yfilter)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.yfilter)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.yfilter)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.yfilter)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.yfilter)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.yfilter)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.yfilter)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.yfilter)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.yfilter)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.yfilter)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.yfilter)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.yfilter)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
        receive_window_size.value_namespace = name_space;
        receive_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
        class_name_xr.value_namespace = name_space;
        class_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
        digest_hash.value_namespace = name_space;
        digest_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
        encoded_password.value_namespace = name_space;
        encoded_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
        accounting_method_list.value_namespace = name_space;
        accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
        hello_timeout.value_namespace = name_space;
        hello_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
        setup_timeout.value_namespace = name_space;
        setup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
        retransmit_minimum_timeout.value_namespace = name_space;
        retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
        retransmit_maximum_timeout.value_namespace = name_space;
        retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
        initial_retransmit_minimum_timeout.value_namespace = name_space;
        initial_retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
        initial_retransmit_maximum_timeout.value_namespace = name_space;
        initial_retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
        timeout_no_user.value_namespace = name_space;
        timeout_no_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
        retransmit_retries.value_namespace = name_space;
        retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
        initial_retransmit_retries.value_namespace = name_space;
        initial_retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
        is_authentication_enabled.value_namespace = name_space;
        is_authentication_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
        is_hidden.value_namespace = name_space;
        is_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
        is_digest_enabled.value_namespace = name_space;
        is_digest_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
        is_digest_check_enabled.value_namespace = name_space;
        is_digest_check_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
        is_peer_address_checked.value_namespace = name_space;
        is_peer_address_checked.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size.yfilter = yfilter;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr.yfilter = yfilter;
    }
    if(value_path == "digest-hash")
    {
        digest_hash.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encoded-password")
    {
        encoded_password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout.yfilter = yfilter;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user.yfilter = yfilter;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled.yfilter = yfilter;
    }
    if(value_path == "is-hidden")
    {
        is_hidden.yfilter = yfilter;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled.yfilter = yfilter;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked.yfilter = yfilter;
    }
}

bool L2tp::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-tos" || name == "vrf-name" || name == "receive-window-size" || name == "class-name-xr" || name == "digest-hash" || name == "password" || name == "encoded-password" || name == "host-name" || name == "accounting-method-list" || name == "hello-timeout" || name == "setup-timeout" || name == "retransmit-minimum-timeout" || name == "retransmit-maximum-timeout" || name == "initial-retransmit-minimum-timeout" || name == "initial-retransmit-maximum-timeout" || name == "timeout-no-user" || name == "retransmit-retries" || name == "initial-retransmit-retries" || name == "is-authentication-enabled" || name == "is-hidden" || name == "is-digest-enabled" || name == "is-digest-check-enabled" || name == "is-congestion-control-enabled" || name == "is-peer-address-checked")
        return true;
    return false;
}

L2tp::CounterHistFail::CounterHistFail()
    :
    sess_down_tmout{YType::uint32, "sess-down-tmout"},
    tx_counters{YType::str, "tx-counters"},
    rx_counters{YType::str, "rx-counters"}
        ,
    pkt_timeout(this, {})
{

    yang_name = "counter-hist-fail"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::CounterHistFail::~CounterHistFail()
{
}

bool L2tp::CounterHistFail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pkt_timeout.len(); index++)
    {
        if(pkt_timeout[index]->has_data())
            return true;
    }
    return sess_down_tmout.is_set
	|| tx_counters.is_set
	|| rx_counters.is_set;
}

bool L2tp::CounterHistFail::has_operation() const
{
    for (std::size_t index=0; index<pkt_timeout.len(); index++)
    {
        if(pkt_timeout[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sess_down_tmout.yfilter)
	|| ydk::is_set(tx_counters.yfilter)
	|| ydk::is_set(rx_counters.yfilter);
}

std::string L2tp::CounterHistFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::CounterHistFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-hist-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::CounterHistFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sess_down_tmout.is_set || is_set(sess_down_tmout.yfilter)) leaf_name_data.push_back(sess_down_tmout.get_name_leafdata());
    if (tx_counters.is_set || is_set(tx_counters.yfilter)) leaf_name_data.push_back(tx_counters.get_name_leafdata());
    if (rx_counters.is_set || is_set(rx_counters.yfilter)) leaf_name_data.push_back(rx_counters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::CounterHistFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-timeout")
    {
        auto c = std::make_shared<L2tp::CounterHistFail::PktTimeout>();
        c->parent = this;
        pkt_timeout.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::CounterHistFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pkt_timeout.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::CounterHistFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout = value;
        sess_down_tmout.value_namespace = name_space;
        sess_down_tmout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-counters")
    {
        tx_counters = value;
        tx_counters.value_namespace = name_space;
        tx_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-counters")
    {
        rx_counters = value;
        rx_counters.value_namespace = name_space;
        rx_counters.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::CounterHistFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout.yfilter = yfilter;
    }
    if(value_path == "tx-counters")
    {
        tx_counters.yfilter = yfilter;
    }
    if(value_path == "rx-counters")
    {
        rx_counters.yfilter = yfilter;
    }
}

bool L2tp::CounterHistFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-timeout" || name == "sess-down-tmout" || name == "tx-counters" || name == "rx-counters")
        return true;
    return false;
}

L2tp::CounterHistFail::PktTimeout::PktTimeout()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pkt-timeout"; yang_parent_name = "counter-hist-fail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::CounterHistFail::PktTimeout::~PktTimeout()
{
}

bool L2tp::CounterHistFail::PktTimeout::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2tp::CounterHistFail::PktTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2tp::CounterHistFail::PktTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counter-hist-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::CounterHistFail::PktTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::CounterHistFail::PktTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::CounterHistFail::PktTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::CounterHistFail::PktTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::CounterHistFail::PktTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::CounterHistFail::PktTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2tp::CounterHistFail::PktTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2tp::Classes::Classes()
    :
    class_(this, {"class_name"})
{

    yang_name = "classes"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Classes::~Classes()
{
}

bool L2tp::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Classes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<L2tp::Classes::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

L2tp::Classes::Class::Class()
    :
    class_name{YType::str, "class-name"},
    ip_tos{YType::uint8, "ip-tos"},
    vrf_name{YType::str, "vrf-name"},
    receive_window_size{YType::uint16, "receive-window-size"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    password{YType::str, "password"},
    encoded_password{YType::str, "encoded-password"},
    host_name{YType::str, "host-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    hello_timeout{YType::uint32, "hello-timeout"},
    setup_timeout{YType::uint32, "setup-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"}
{

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Classes::Class::~Class()
{
}

bool L2tp::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| ip_tos.is_set
	|| vrf_name.is_set
	|| receive_window_size.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| password.is_set
	|| encoded_password.is_set
	|| host_name.is_set
	|| accounting_method_list.is_set
	|| hello_timeout.is_set
	|| setup_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| timeout_no_user.is_set
	|| retransmit_retries.is_set
	|| initial_retransmit_retries.is_set
	|| is_authentication_enabled.is_set
	|| is_hidden.is_set
	|| is_digest_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_peer_address_checked.is_set;
}

bool L2tp::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(receive_window_size.yfilter)
	|| ydk::is_set(class_name_xr.yfilter)
	|| ydk::is_set(digest_hash.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encoded_password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(accounting_method_list.yfilter)
	|| ydk::is_set(hello_timeout.yfilter)
	|| ydk::is_set(setup_timeout.yfilter)
	|| ydk::is_set(retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(timeout_no_user.yfilter)
	|| ydk::is_set(retransmit_retries.yfilter)
	|| ydk::is_set(initial_retransmit_retries.yfilter)
	|| ydk::is_set(is_authentication_enabled.yfilter)
	|| ydk::is_set(is_hidden.yfilter)
	|| ydk::is_set(is_digest_enabled.yfilter)
	|| ydk::is_set(is_digest_check_enabled.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter)
	|| ydk::is_set(is_peer_address_checked.yfilter);
}

std::string L2tp::Classes::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.yfilter)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.yfilter)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.yfilter)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.yfilter)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.yfilter)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.yfilter)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.yfilter)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.yfilter)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.yfilter)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.yfilter)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.yfilter)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.yfilter)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.yfilter)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.yfilter)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.yfilter)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
        receive_window_size.value_namespace = name_space;
        receive_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
        class_name_xr.value_namespace = name_space;
        class_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
        digest_hash.value_namespace = name_space;
        digest_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
        encoded_password.value_namespace = name_space;
        encoded_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
        accounting_method_list.value_namespace = name_space;
        accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
        hello_timeout.value_namespace = name_space;
        hello_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
        setup_timeout.value_namespace = name_space;
        setup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
        retransmit_minimum_timeout.value_namespace = name_space;
        retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
        retransmit_maximum_timeout.value_namespace = name_space;
        retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
        initial_retransmit_minimum_timeout.value_namespace = name_space;
        initial_retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
        initial_retransmit_maximum_timeout.value_namespace = name_space;
        initial_retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
        timeout_no_user.value_namespace = name_space;
        timeout_no_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
        retransmit_retries.value_namespace = name_space;
        retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
        initial_retransmit_retries.value_namespace = name_space;
        initial_retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
        is_authentication_enabled.value_namespace = name_space;
        is_authentication_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
        is_hidden.value_namespace = name_space;
        is_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
        is_digest_enabled.value_namespace = name_space;
        is_digest_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
        is_digest_check_enabled.value_namespace = name_space;
        is_digest_check_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
        is_peer_address_checked.value_namespace = name_space;
        is_peer_address_checked.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size.yfilter = yfilter;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr.yfilter = yfilter;
    }
    if(value_path == "digest-hash")
    {
        digest_hash.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encoded-password")
    {
        encoded_password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout.yfilter = yfilter;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user.yfilter = yfilter;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled.yfilter = yfilter;
    }
    if(value_path == "is-hidden")
    {
        is_hidden.yfilter = yfilter;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled.yfilter = yfilter;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked.yfilter = yfilter;
    }
}

bool L2tp::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "ip-tos" || name == "vrf-name" || name == "receive-window-size" || name == "class-name-xr" || name == "digest-hash" || name == "password" || name == "encoded-password" || name == "host-name" || name == "accounting-method-list" || name == "hello-timeout" || name == "setup-timeout" || name == "retransmit-minimum-timeout" || name == "retransmit-maximum-timeout" || name == "initial-retransmit-minimum-timeout" || name == "initial-retransmit-maximum-timeout" || name == "timeout-no-user" || name == "retransmit-retries" || name == "initial-retransmit-retries" || name == "is-authentication-enabled" || name == "is-hidden" || name == "is-digest-enabled" || name == "is-digest-check-enabled" || name == "is-congestion-control-enabled" || name == "is-peer-address-checked")
        return true;
    return false;
}

L2tp::Tunnels::Tunnels()
    :
    tunnel(this, {"local_tunnel_id"})
{

    yang_name = "tunnels"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Tunnels::~Tunnels()
{
}

bool L2tp::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<L2tp::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

L2tp::Tunnels::Tunnel::Tunnel()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    local_port{YType::uint16, "local-port"},
    remote_port{YType::uint16, "remote-port"},
    protocol{YType::uint8, "protocol"},
    is_pmtu_enabled{YType::boolean, "is-pmtu-enabled"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    class_name{YType::str, "class-name"},
    active_sessions{YType::uint32, "active-sessions"},
    sequence_ns{YType::uint16, "sequence-ns"},
    sequence_nr{YType::uint16, "sequence-nr"},
    local_window_size{YType::uint16, "local-window-size"},
    remote_window_size{YType::uint16, "remote-window-size"},
    retransmission_time{YType::uint16, "retransmission-time"},
    maximum_retransmission_time{YType::uint16, "maximum-retransmission-time"},
    unsent_queue_size{YType::uint16, "unsent-queue-size"},
    unsent_maximum_queue_size{YType::uint16, "unsent-maximum-queue-size"},
    resend_queue_size{YType::uint16, "resend-queue-size"},
    resend_maximum_queue_size{YType::uint16, "resend-maximum-queue-size"},
    order_queue_size{YType::uint16, "order-queue-size"},
    packet_queue_check{YType::uint16, "packet-queue-check"},
    digest_secrets{YType::uint16, "digest-secrets"},
    resends{YType::uint32, "resends"},
    zero_length_body_acknowledgement_sent{YType::uint32, "zero-length-body-acknowledgement-sent"},
    total_out_of_order_drop_packets{YType::uint32, "total-out-of-order-drop-packets"},
    total_out_of_order_reorder_packets{YType::uint32, "total-out-of-order-reorder-packets"},
    total_peer_authentication_failures{YType::uint32, "total-peer-authentication-failures"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"}
        ,
    retransmit_time(this, {})
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Tunnels::Tunnel::~Tunnel()
{
}

bool L2tp::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<retransmit_time.len(); index++)
    {
        if(retransmit_time[index]->has_data())
            return true;
    }
    return local_tunnel_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| local_port.is_set
	|| remote_port.is_set
	|| protocol.is_set
	|| is_pmtu_enabled.is_set
	|| remote_tunnel_id.is_set
	|| local_tunnel_name.is_set
	|| remote_tunnel_name.is_set
	|| class_name.is_set
	|| active_sessions.is_set
	|| sequence_ns.is_set
	|| sequence_nr.is_set
	|| local_window_size.is_set
	|| remote_window_size.is_set
	|| retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| unsent_queue_size.is_set
	|| unsent_maximum_queue_size.is_set
	|| resend_queue_size.is_set
	|| resend_maximum_queue_size.is_set
	|| order_queue_size.is_set
	|| packet_queue_check.is_set
	|| digest_secrets.is_set
	|| resends.is_set
	|| zero_length_body_acknowledgement_sent.is_set
	|| total_out_of_order_drop_packets.is_set
	|| total_out_of_order_reorder_packets.is_set
	|| total_peer_authentication_failures.is_set
	|| is_tunnel_up.is_set
	|| is_congestion_control_enabled.is_set;
}

bool L2tp::Tunnels::Tunnel::has_operation() const
{
    for (std::size_t index=0; index<retransmit_time.len(); index++)
    {
        if(retransmit_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(is_pmtu_enabled.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(local_tunnel_name.yfilter)
	|| ydk::is_set(remote_tunnel_name.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(sequence_ns.yfilter)
	|| ydk::is_set(sequence_nr.yfilter)
	|| ydk::is_set(local_window_size.yfilter)
	|| ydk::is_set(remote_window_size.yfilter)
	|| ydk::is_set(retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(unsent_queue_size.yfilter)
	|| ydk::is_set(unsent_maximum_queue_size.yfilter)
	|| ydk::is_set(resend_queue_size.yfilter)
	|| ydk::is_set(resend_maximum_queue_size.yfilter)
	|| ydk::is_set(order_queue_size.yfilter)
	|| ydk::is_set(packet_queue_check.yfilter)
	|| ydk::is_set(digest_secrets.yfilter)
	|| ydk::is_set(resends.yfilter)
	|| ydk::is_set(zero_length_body_acknowledgement_sent.yfilter)
	|| ydk::is_set(total_out_of_order_drop_packets.yfilter)
	|| ydk::is_set(total_out_of_order_reorder_packets.yfilter)
	|| ydk::is_set(total_peer_authentication_failures.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter);
}

std::string L2tp::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (is_pmtu_enabled.is_set || is_set(is_pmtu_enabled.yfilter)) leaf_name_data.push_back(is_pmtu_enabled.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.yfilter)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.yfilter)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (sequence_ns.is_set || is_set(sequence_ns.yfilter)) leaf_name_data.push_back(sequence_ns.get_name_leafdata());
    if (sequence_nr.is_set || is_set(sequence_nr.yfilter)) leaf_name_data.push_back(sequence_nr.get_name_leafdata());
    if (local_window_size.is_set || is_set(local_window_size.yfilter)) leaf_name_data.push_back(local_window_size.get_name_leafdata());
    if (remote_window_size.is_set || is_set(remote_window_size.yfilter)) leaf_name_data.push_back(remote_window_size.get_name_leafdata());
    if (retransmission_time.is_set || is_set(retransmission_time.yfilter)) leaf_name_data.push_back(retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (unsent_queue_size.is_set || is_set(unsent_queue_size.yfilter)) leaf_name_data.push_back(unsent_queue_size.get_name_leafdata());
    if (unsent_maximum_queue_size.is_set || is_set(unsent_maximum_queue_size.yfilter)) leaf_name_data.push_back(unsent_maximum_queue_size.get_name_leafdata());
    if (resend_queue_size.is_set || is_set(resend_queue_size.yfilter)) leaf_name_data.push_back(resend_queue_size.get_name_leafdata());
    if (resend_maximum_queue_size.is_set || is_set(resend_maximum_queue_size.yfilter)) leaf_name_data.push_back(resend_maximum_queue_size.get_name_leafdata());
    if (order_queue_size.is_set || is_set(order_queue_size.yfilter)) leaf_name_data.push_back(order_queue_size.get_name_leafdata());
    if (packet_queue_check.is_set || is_set(packet_queue_check.yfilter)) leaf_name_data.push_back(packet_queue_check.get_name_leafdata());
    if (digest_secrets.is_set || is_set(digest_secrets.yfilter)) leaf_name_data.push_back(digest_secrets.get_name_leafdata());
    if (resends.is_set || is_set(resends.yfilter)) leaf_name_data.push_back(resends.get_name_leafdata());
    if (zero_length_body_acknowledgement_sent.is_set || is_set(zero_length_body_acknowledgement_sent.yfilter)) leaf_name_data.push_back(zero_length_body_acknowledgement_sent.get_name_leafdata());
    if (total_out_of_order_drop_packets.is_set || is_set(total_out_of_order_drop_packets.yfilter)) leaf_name_data.push_back(total_out_of_order_drop_packets.get_name_leafdata());
    if (total_out_of_order_reorder_packets.is_set || is_set(total_out_of_order_reorder_packets.yfilter)) leaf_name_data.push_back(total_out_of_order_reorder_packets.get_name_leafdata());
    if (total_peer_authentication_failures.is_set || is_set(total_peer_authentication_failures.yfilter)) leaf_name_data.push_back(total_peer_authentication_failures.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmit-time")
    {
        auto c = std::make_shared<L2tp::Tunnels::Tunnel::RetransmitTime>();
        c->parent = this;
        retransmit_time.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : retransmit_time.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled = value;
        is_pmtu_enabled.value_namespace = name_space;
        is_pmtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
        local_tunnel_name.value_namespace = name_space;
        local_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
        remote_tunnel_name.value_namespace = name_space;
        remote_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns = value;
        sequence_ns.value_namespace = name_space;
        sequence_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr = value;
        sequence_nr.value_namespace = name_space;
        sequence_nr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-window-size")
    {
        local_window_size = value;
        local_window_size.value_namespace = name_space;
        local_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size = value;
        remote_window_size.value_namespace = name_space;
        remote_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time = value;
        retransmission_time.value_namespace = name_space;
        retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size = value;
        unsent_queue_size.value_namespace = name_space;
        unsent_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size = value;
        unsent_maximum_queue_size.value_namespace = name_space;
        unsent_maximum_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size = value;
        resend_queue_size.value_namespace = name_space;
        resend_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size = value;
        resend_maximum_queue_size.value_namespace = name_space;
        resend_maximum_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size = value;
        order_queue_size.value_namespace = name_space;
        order_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check = value;
        packet_queue_check.value_namespace = name_space;
        packet_queue_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets = value;
        digest_secrets.value_namespace = name_space;
        digest_secrets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resends")
    {
        resends = value;
        resends.value_namespace = name_space;
        resends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent = value;
        zero_length_body_acknowledgement_sent.value_namespace = name_space;
        zero_length_body_acknowledgement_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets = value;
        total_out_of_order_drop_packets.value_namespace = name_space;
        total_out_of_order_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets = value;
        total_out_of_order_reorder_packets.value_namespace = name_space;
        total_out_of_order_reorder_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures = value;
        total_peer_authentication_failures.value_namespace = name_space;
        total_peer_authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns.yfilter = yfilter;
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr.yfilter = yfilter;
    }
    if(value_path == "local-window-size")
    {
        local_window_size.yfilter = yfilter;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size.yfilter = yfilter;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size.yfilter = yfilter;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size.yfilter = yfilter;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size.yfilter = yfilter;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size.yfilter = yfilter;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size.yfilter = yfilter;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check.yfilter = yfilter;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets.yfilter = yfilter;
    }
    if(value_path == "resends")
    {
        resends.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent.yfilter = yfilter;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets.yfilter = yfilter;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets.yfilter = yfilter;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
}

bool L2tp::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit-time" || name == "local-tunnel-id" || name == "local-address" || name == "remote-address" || name == "local-port" || name == "remote-port" || name == "protocol" || name == "is-pmtu-enabled" || name == "remote-tunnel-id" || name == "local-tunnel-name" || name == "remote-tunnel-name" || name == "class-name" || name == "active-sessions" || name == "sequence-ns" || name == "sequence-nr" || name == "local-window-size" || name == "remote-window-size" || name == "retransmission-time" || name == "maximum-retransmission-time" || name == "unsent-queue-size" || name == "unsent-maximum-queue-size" || name == "resend-queue-size" || name == "resend-maximum-queue-size" || name == "order-queue-size" || name == "packet-queue-check" || name == "digest-secrets" || name == "resends" || name == "zero-length-body-acknowledgement-sent" || name == "total-out-of-order-drop-packets" || name == "total-out-of-order-reorder-packets" || name == "total-peer-authentication-failures" || name == "is-tunnel-up" || name == "is-congestion-control-enabled")
        return true;
    return false;
}

L2tp::Tunnels::Tunnel::RetransmitTime::RetransmitTime()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "retransmit-time"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Tunnels::Tunnel::RetransmitTime::~RetransmitTime()
{
}

bool L2tp::Tunnels::Tunnel::RetransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2tp::Tunnels::Tunnel::RetransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2tp::Tunnels::Tunnel::RetransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Tunnels::Tunnel::RetransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Tunnels::Tunnel::RetransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Tunnels::Tunnel::RetransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Tunnels::Tunnel::RetransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Tunnels::Tunnel::RetransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2tp::Tunnels::Tunnel::RetransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2tp::Sessions::Sessions()
    :
    session(this, {"local_tunnel_id", "local_session_id"})
{

    yang_name = "sessions"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Sessions::~Sessions()
{
}

bool L2tp::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2tp::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tp::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<L2tp::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tp::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

L2tp::Sessions::Session::Session()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_session_id{YType::uint32, "local-session-id"},
    local_ip_address{YType::str, "local-ip-address"},
    remote_ip_address{YType::str, "remote-ip-address"},
    l2tp_sh_sess_udp_lport{YType::uint16, "l2tp-sh-sess-udp-lport"},
    l2tp_sh_sess_udp_rport{YType::uint16, "l2tp-sh-sess-udp-rport"},
    protocol{YType::uint8, "protocol"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    call_serial_number{YType::uint32, "call-serial-number"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    remote_session_id{YType::uint32, "remote-session-id"},
    l2tp_sh_sess_tie_breaker_enabled{YType::uint8, "l2tp-sh-sess-tie-breaker-enabled"},
    l2tp_sh_sess_tie_breaker{YType::uint64, "l2tp-sh-sess-tie-breaker"},
    is_session_manual{YType::boolean, "is-session-manual"},
    is_session_up{YType::boolean, "is-session-up"},
    is_udp_checksum_enabled{YType::boolean, "is-udp-checksum-enabled"},
    is_sequencing_on{YType::boolean, "is-sequencing-on"},
    is_session_state_established{YType::boolean, "is-session-state-established"},
    is_session_locally_initiated{YType::boolean, "is-session-locally-initiated"},
    is_conditional_debug_enabled{YType::boolean, "is-conditional-debug-enabled"},
    unique_id{YType::uint32, "unique-id"},
    interface_name{YType::str, "interface-name"}
        ,
    session_application_data(std::make_shared<L2tp::Sessions::Session::SessionApplicationData>())
{
    session_application_data->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Sessions::Session::~Session()
{
}

bool L2tp::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return local_tunnel_id.is_set
	|| local_session_id.is_set
	|| local_ip_address.is_set
	|| remote_ip_address.is_set
	|| l2tp_sh_sess_udp_lport.is_set
	|| l2tp_sh_sess_udp_rport.is_set
	|| protocol.is_set
	|| remote_tunnel_id.is_set
	|| call_serial_number.is_set
	|| local_tunnel_name.is_set
	|| remote_tunnel_name.is_set
	|| remote_session_id.is_set
	|| l2tp_sh_sess_tie_breaker_enabled.is_set
	|| l2tp_sh_sess_tie_breaker.is_set
	|| is_session_manual.is_set
	|| is_session_up.is_set
	|| is_udp_checksum_enabled.is_set
	|| is_sequencing_on.is_set
	|| is_session_state_established.is_set
	|| is_session_locally_initiated.is_set
	|| is_conditional_debug_enabled.is_set
	|| unique_id.is_set
	|| interface_name.is_set
	|| (session_application_data !=  nullptr && session_application_data->has_data());
}

bool L2tp::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(remote_ip_address.yfilter)
	|| ydk::is_set(l2tp_sh_sess_udp_lport.yfilter)
	|| ydk::is_set(l2tp_sh_sess_udp_rport.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(call_serial_number.yfilter)
	|| ydk::is_set(local_tunnel_name.yfilter)
	|| ydk::is_set(remote_tunnel_name.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(l2tp_sh_sess_tie_breaker_enabled.yfilter)
	|| ydk::is_set(l2tp_sh_sess_tie_breaker.yfilter)
	|| ydk::is_set(is_session_manual.yfilter)
	|| ydk::is_set(is_session_up.yfilter)
	|| ydk::is_set(is_udp_checksum_enabled.yfilter)
	|| ydk::is_set(is_sequencing_on.yfilter)
	|| ydk::is_set(is_session_state_established.yfilter)
	|| ydk::is_set(is_session_locally_initiated.yfilter)
	|| ydk::is_set(is_conditional_debug_enabled.yfilter)
	|| ydk::is_set(unique_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (session_application_data !=  nullptr && session_application_data->has_operation());
}

std::string L2tp::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    ADD_KEY_TOKEN(local_session_id, "local-session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (remote_ip_address.is_set || is_set(remote_ip_address.yfilter)) leaf_name_data.push_back(remote_ip_address.get_name_leafdata());
    if (l2tp_sh_sess_udp_lport.is_set || is_set(l2tp_sh_sess_udp_lport.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_udp_lport.get_name_leafdata());
    if (l2tp_sh_sess_udp_rport.is_set || is_set(l2tp_sh_sess_udp_rport.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_udp_rport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (call_serial_number.is_set || is_set(call_serial_number.yfilter)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.yfilter)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.yfilter)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker_enabled.is_set || is_set(l2tp_sh_sess_tie_breaker_enabled.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker_enabled.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker.is_set || is_set(l2tp_sh_sess_tie_breaker.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker.get_name_leafdata());
    if (is_session_manual.is_set || is_set(is_session_manual.yfilter)) leaf_name_data.push_back(is_session_manual.get_name_leafdata());
    if (is_session_up.is_set || is_set(is_session_up.yfilter)) leaf_name_data.push_back(is_session_up.get_name_leafdata());
    if (is_udp_checksum_enabled.is_set || is_set(is_udp_checksum_enabled.yfilter)) leaf_name_data.push_back(is_udp_checksum_enabled.get_name_leafdata());
    if (is_sequencing_on.is_set || is_set(is_sequencing_on.yfilter)) leaf_name_data.push_back(is_sequencing_on.get_name_leafdata());
    if (is_session_state_established.is_set || is_set(is_session_state_established.yfilter)) leaf_name_data.push_back(is_session_state_established.get_name_leafdata());
    if (is_session_locally_initiated.is_set || is_set(is_session_locally_initiated.yfilter)) leaf_name_data.push_back(is_session_locally_initiated.get_name_leafdata());
    if (is_conditional_debug_enabled.is_set || is_set(is_conditional_debug_enabled.yfilter)) leaf_name_data.push_back(is_conditional_debug_enabled.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-application-data")
    {
        if(session_application_data == nullptr)
        {
            session_application_data = std::make_shared<L2tp::Sessions::Session::SessionApplicationData>();
        }
        return session_application_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session_application_data != nullptr)
    {
        children["session-application-data"] = session_application_data;
    }

    return children;
}

void L2tp::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address = value;
        remote_ip_address.value_namespace = name_space;
        remote_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport = value;
        l2tp_sh_sess_udp_lport.value_namespace = name_space;
        l2tp_sh_sess_udp_lport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport = value;
        l2tp_sh_sess_udp_rport.value_namespace = name_space;
        l2tp_sh_sess_udp_rport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
        call_serial_number.value_namespace = name_space;
        call_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
        local_tunnel_name.value_namespace = name_space;
        local_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
        remote_tunnel_name.value_namespace = name_space;
        remote_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled = value;
        l2tp_sh_sess_tie_breaker_enabled.value_namespace = name_space;
        l2tp_sh_sess_tie_breaker_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker = value;
        l2tp_sh_sess_tie_breaker.value_namespace = name_space;
        l2tp_sh_sess_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual = value;
        is_session_manual.value_namespace = name_space;
        is_session_manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-up")
    {
        is_session_up = value;
        is_session_up.value_namespace = name_space;
        is_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled = value;
        is_udp_checksum_enabled.value_namespace = name_space;
        is_udp_checksum_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on = value;
        is_sequencing_on.value_namespace = name_space;
        is_sequencing_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established = value;
        is_session_state_established.value_namespace = name_space;
        is_session_state_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated = value;
        is_session_locally_initiated.value_namespace = name_space;
        is_session_locally_initiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled = value;
        is_conditional_debug_enabled.value_namespace = name_space;
        is_conditional_debug_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual.yfilter = yfilter;
    }
    if(value_path == "is-session-up")
    {
        is_session_up.yfilter = yfilter;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled.yfilter = yfilter;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on.yfilter = yfilter;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established.yfilter = yfilter;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated.yfilter = yfilter;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2tp::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-application-data" || name == "local-tunnel-id" || name == "local-session-id" || name == "local-ip-address" || name == "remote-ip-address" || name == "l2tp-sh-sess-udp-lport" || name == "l2tp-sh-sess-udp-rport" || name == "protocol" || name == "remote-tunnel-id" || name == "call-serial-number" || name == "local-tunnel-name" || name == "remote-tunnel-name" || name == "remote-session-id" || name == "l2tp-sh-sess-tie-breaker-enabled" || name == "l2tp-sh-sess-tie-breaker" || name == "is-session-manual" || name == "is-session-up" || name == "is-udp-checksum-enabled" || name == "is-sequencing-on" || name == "is-session-state-established" || name == "is-session-locally-initiated" || name == "is-conditional-debug-enabled" || name == "unique-id" || name == "interface-name")
        return true;
    return false;
}

L2tp::Sessions::Session::SessionApplicationData::SessionApplicationData()
    :
    l2tp_sh_sess_app_type{YType::uint32, "l2tp-sh-sess-app-type"}
        ,
    xconnect(std::make_shared<L2tp::Sessions::Session::SessionApplicationData::Xconnect>())
    , vpdn(std::make_shared<L2tp::Sessions::Session::SessionApplicationData::Vpdn>())
{
    xconnect->parent = this;
    vpdn->parent = this;

    yang_name = "session-application-data"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Sessions::Session::SessionApplicationData::~SessionApplicationData()
{
}

bool L2tp::Sessions::Session::SessionApplicationData::has_data() const
{
    if (is_presence_container) return true;
    return l2tp_sh_sess_app_type.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (vpdn !=  nullptr && vpdn->has_data());
}

bool L2tp::Sessions::Session::SessionApplicationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_sh_sess_app_type.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (vpdn !=  nullptr && vpdn->has_operation());
}

std::string L2tp::Sessions::Session::SessionApplicationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-application-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Sessions::Session::SessionApplicationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_sh_sess_app_type.is_set || is_set(l2tp_sh_sess_app_type.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_app_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Sessions::Session::SessionApplicationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<L2tp::Sessions::Session::SessionApplicationData::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "vpdn")
    {
        if(vpdn == nullptr)
        {
            vpdn = std::make_shared<L2tp::Sessions::Session::SessionApplicationData::Vpdn>();
        }
        return vpdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Sessions::Session::SessionApplicationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(vpdn != nullptr)
    {
        children["vpdn"] = vpdn;
    }

    return children;
}

void L2tp::Sessions::Session::SessionApplicationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type = value;
        l2tp_sh_sess_app_type.value_namespace = name_space;
        l2tp_sh_sess_app_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Sessions::Session::SessionApplicationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type.yfilter = yfilter;
    }
}

bool L2tp::Sessions::Session::SessionApplicationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "vpdn" || name == "l2tp-sh-sess-app-type")
        return true;
    return false;
}

L2tp::Sessions::Session::SessionApplicationData::Xconnect::Xconnect()
    :
    circuit_name{YType::str, "circuit-name"},
    sessionvc_id{YType::uint32, "sessionvc-id"},
    is_circuit_state_up{YType::boolean, "is-circuit-state-up"},
    is_local_circuit_state_up{YType::boolean, "is-local-circuit-state-up"},
    is_remote_circuit_state_up{YType::boolean, "is-remote-circuit-state-up"},
    ipv6_protocol_tunneling{YType::boolean, "ipv6-protocol-tunneling"}
{

    yang_name = "xconnect"; yang_parent_name = "session-application-data"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Sessions::Session::SessionApplicationData::Xconnect::~Xconnect()
{
}

bool L2tp::Sessions::Session::SessionApplicationData::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return circuit_name.is_set
	|| sessionvc_id.is_set
	|| is_circuit_state_up.is_set
	|| is_local_circuit_state_up.is_set
	|| is_remote_circuit_state_up.is_set
	|| ipv6_protocol_tunneling.is_set;
}

bool L2tp::Sessions::Session::SessionApplicationData::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(circuit_name.yfilter)
	|| ydk::is_set(sessionvc_id.yfilter)
	|| ydk::is_set(is_circuit_state_up.yfilter)
	|| ydk::is_set(is_local_circuit_state_up.yfilter)
	|| ydk::is_set(is_remote_circuit_state_up.yfilter)
	|| ydk::is_set(ipv6_protocol_tunneling.yfilter);
}

std::string L2tp::Sessions::Session::SessionApplicationData::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Sessions::Session::SessionApplicationData::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_name.is_set || is_set(circuit_name.yfilter)) leaf_name_data.push_back(circuit_name.get_name_leafdata());
    if (sessionvc_id.is_set || is_set(sessionvc_id.yfilter)) leaf_name_data.push_back(sessionvc_id.get_name_leafdata());
    if (is_circuit_state_up.is_set || is_set(is_circuit_state_up.yfilter)) leaf_name_data.push_back(is_circuit_state_up.get_name_leafdata());
    if (is_local_circuit_state_up.is_set || is_set(is_local_circuit_state_up.yfilter)) leaf_name_data.push_back(is_local_circuit_state_up.get_name_leafdata());
    if (is_remote_circuit_state_up.is_set || is_set(is_remote_circuit_state_up.yfilter)) leaf_name_data.push_back(is_remote_circuit_state_up.get_name_leafdata());
    if (ipv6_protocol_tunneling.is_set || is_set(ipv6_protocol_tunneling.yfilter)) leaf_name_data.push_back(ipv6_protocol_tunneling.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Sessions::Session::SessionApplicationData::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Sessions::Session::SessionApplicationData::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Sessions::Session::SessionApplicationData::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "circuit-name")
    {
        circuit_name = value;
        circuit_name.value_namespace = name_space;
        circuit_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id = value;
        sessionvc_id.value_namespace = name_space;
        sessionvc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up = value;
        is_circuit_state_up.value_namespace = name_space;
        is_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up = value;
        is_local_circuit_state_up.value_namespace = name_space;
        is_local_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up = value;
        is_remote_circuit_state_up.value_namespace = name_space;
        is_remote_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling = value;
        ipv6_protocol_tunneling.value_namespace = name_space;
        ipv6_protocol_tunneling.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Sessions::Session::SessionApplicationData::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "circuit-name")
    {
        circuit_name.yfilter = yfilter;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id.yfilter = yfilter;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling.yfilter = yfilter;
    }
}

bool L2tp::Sessions::Session::SessionApplicationData::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-name" || name == "sessionvc-id" || name == "is-circuit-state-up" || name == "is-local-circuit-state-up" || name == "is-remote-circuit-state-up" || name == "ipv6-protocol-tunneling")
        return true;
    return false;
}

L2tp::Sessions::Session::SessionApplicationData::Vpdn::Vpdn()
    :
    username{YType::str, "username"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "vpdn"; yang_parent_name = "session-application-data"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tp::Sessions::Session::SessionApplicationData::Vpdn::~Vpdn()
{
}

bool L2tp::Sessions::Session::SessionApplicationData::Vpdn::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| interface_name.is_set;
}

bool L2tp::Sessions::Session::SessionApplicationData::Vpdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2tp::Sessions::Session::SessionApplicationData::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Sessions::Session::SessionApplicationData::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Sessions::Session::SessionApplicationData::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Sessions::Session::SessionApplicationData::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Sessions::Session::SessionApplicationData::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Sessions::Session::SessionApplicationData::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2tp::Sessions::Session::SessionApplicationData::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "interface-name")
        return true;
    return false;
}

L2tp::Session::Session()
    :
    unavailable(std::make_shared<L2tp::Session::Unavailable>())
{
    unavailable->parent = this;

    yang_name = "session"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Session::~Session()
{
}

bool L2tp::Session::has_data() const
{
    if (is_presence_container) return true;
    return (unavailable !=  nullptr && unavailable->has_data());
}

bool L2tp::Session::has_operation() const
{
    return is_set(yfilter)
	|| (unavailable !=  nullptr && unavailable->has_operation());
}

std::string L2tp::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unavailable")
    {
        if(unavailable == nullptr)
        {
            unavailable = std::make_shared<L2tp::Session::Unavailable>();
        }
        return unavailable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unavailable != nullptr)
    {
        children["unavailable"] = unavailable;
    }

    return children;
}

void L2tp::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tp::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tp::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unavailable")
        return true;
    return false;
}

L2tp::Session::Unavailable::Unavailable()
    :
    sessions_on_hold{YType::uint32, "sessions-on-hold"}
{

    yang_name = "unavailable"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tp::Session::Unavailable::~Unavailable()
{
}

bool L2tp::Session::Unavailable::has_data() const
{
    if (is_presence_container) return true;
    return sessions_on_hold.is_set;
}

bool L2tp::Session::Unavailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions_on_hold.yfilter);
}

std::string L2tp::Session::Unavailable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/session/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tp::Session::Unavailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unavailable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tp::Session::Unavailable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions_on_hold.is_set || is_set(sessions_on_hold.yfilter)) leaf_name_data.push_back(sessions_on_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tp::Session::Unavailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tp::Session::Unavailable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tp::Session::Unavailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold = value;
        sessions_on_hold.value_namespace = name_space;
        sessions_on_hold.value_namespace_prefix = name_space_prefix;
    }
}

void L2tp::Session::Unavailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold.yfilter = yfilter;
    }
}

bool L2tp::Session::Unavailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions-on-hold")
        return true;
    return false;
}

L2tpv2::L2tpv2()
    :
    counters(std::make_shared<L2tpv2::Counters>())
    , statistics(std::make_shared<L2tpv2::Statistics>())
    , tunnel(std::make_shared<L2tpv2::Tunnel>())
    , tunnel_configurations(std::make_shared<L2tpv2::TunnelConfigurations>())
    , counter_hist_fail(std::make_shared<L2tpv2::CounterHistFail>())
    , classes(std::make_shared<L2tpv2::Classes>())
    , tunnels(std::make_shared<L2tpv2::Tunnels>())
    , sessions(std::make_shared<L2tpv2::Sessions>())
    , session(std::make_shared<L2tpv2::Session>())
{
    counters->parent = this;
    statistics->parent = this;
    tunnel->parent = this;
    tunnel_configurations->parent = this;
    counter_hist_fail->parent = this;
    classes->parent = this;
    tunnels->parent = this;
    sessions->parent = this;
    session->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L2tpv2::~L2tpv2()
{
}

bool L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_data())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_operation())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<L2tpv2::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2tpv2::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<L2tpv2::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "tunnel-configurations")
    {
        if(tunnel_configurations == nullptr)
        {
            tunnel_configurations = std::make_shared<L2tpv2::TunnelConfigurations>();
        }
        return tunnel_configurations;
    }

    if(child_yang_name == "counter-hist-fail")
    {
        if(counter_hist_fail == nullptr)
        {
            counter_hist_fail = std::make_shared<L2tpv2::CounterHistFail>();
        }
        return counter_hist_fail;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<L2tpv2::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<L2tpv2::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<L2tpv2::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<L2tpv2::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(tunnel_configurations != nullptr)
    {
        children["tunnel-configurations"] = tunnel_configurations;
    }

    if(counter_hist_fail != nullptr)
    {
        children["counter-hist-fail"] = counter_hist_fail;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> L2tpv2::clone_ptr() const
{
    return std::make_shared<L2tpv2>();
}

std::string L2tpv2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2tpv2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2tpv2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2tpv2::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "statistics" || name == "tunnel" || name == "tunnel-configurations" || name == "counter-hist-fail" || name == "classes" || name == "tunnels" || name == "sessions" || name == "session")
        return true;
    return false;
}

L2tpv2::Counters::Counters()
    :
    forwarding(std::make_shared<L2tpv2::Counters::Forwarding>())
    , control(std::make_shared<L2tpv2::Counters::Control>())
{
    forwarding->parent = this;
    control->parent = this;

    yang_name = "counters"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::~Counters()
{
}

bool L2tpv2::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (forwarding !=  nullptr && forwarding->has_data())
	|| (control !=  nullptr && control->has_data());
}

bool L2tpv2::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation())
	|| (control !=  nullptr && control->has_operation());
}

std::string L2tpv2::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<L2tpv2::Counters::Forwarding>();
        }
        return forwarding;
    }

    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<L2tpv2::Counters::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    if(control != nullptr)
    {
        children["control"] = control;
    }

    return children;
}

void L2tpv2::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "control")
        return true;
    return false;
}

L2tpv2::Counters::Forwarding::Forwarding()
    :
    sessions(std::make_shared<L2tpv2::Counters::Forwarding::Sessions>())
{
    sessions->parent = this;

    yang_name = "forwarding"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Forwarding::~Forwarding()
{
}

bool L2tpv2::Counters::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool L2tpv2::Counters::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string L2tpv2::Counters::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<L2tpv2::Counters::Forwarding::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void L2tpv2::Counters::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

L2tpv2::Counters::Forwarding::Sessions::Sessions()
    :
    session(this, {"tunnel_id", "session_id"})
{

    yang_name = "sessions"; yang_parent_name = "forwarding"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Forwarding::Sessions::~Sessions()
{
}

bool L2tpv2::Counters::Forwarding::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::Counters::Forwarding::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::Counters::Forwarding::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Forwarding::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Forwarding::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Forwarding::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<L2tpv2::Counters::Forwarding::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Forwarding::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Counters::Forwarding::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Forwarding::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Forwarding::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

L2tpv2::Counters::Forwarding::Sessions::Session::Session()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    session_id{YType::uint32, "session-id"},
    remote_session_id{YType::uint32, "remote-session-id"},
    in_packets{YType::uint64, "in-packets"},
    out_packets{YType::uint64, "out-packets"},
    in_bytes{YType::uint64, "in-bytes"},
    out_bytes{YType::uint64, "out-bytes"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Forwarding::Sessions::Session::~Session()
{
}

bool L2tpv2::Counters::Forwarding::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| session_id.is_set
	|| remote_session_id.is_set
	|| in_packets.is_set
	|| out_packets.is_set
	|| in_bytes.is_set
	|| out_bytes.is_set;
}

bool L2tpv2::Counters::Forwarding::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(in_bytes.yfilter)
	|| ydk::is_set(out_bytes.yfilter);
}

std::string L2tpv2::Counters::Forwarding::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/forwarding/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Forwarding::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Forwarding::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.yfilter)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.yfilter)) leaf_name_data.push_back(out_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Forwarding::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Forwarding::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Forwarding::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
        in_bytes.value_namespace = name_space;
        in_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
        out_bytes.value_namespace = name_space;
        out_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Forwarding::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "in-bytes")
    {
        in_bytes.yfilter = yfilter;
    }
    if(value_path == "out-bytes")
    {
        out_bytes.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Forwarding::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "session-id" || name == "remote-session-id" || name == "in-packets" || name == "out-packets" || name == "in-bytes" || name == "out-bytes")
        return true;
    return false;
}

L2tpv2::Counters::Control::Control()
    :
    tunnel_xr(std::make_shared<L2tpv2::Counters::Control::TunnelXr>())
    , tunnels(std::make_shared<L2tpv2::Counters::Control::Tunnels>())
{
    tunnel_xr->parent = this;
    tunnels->parent = this;

    yang_name = "control"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::~Control()
{
}

bool L2tpv2::Counters::Control::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_xr !=  nullptr && tunnel_xr->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2tpv2::Counters::Control::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_xr !=  nullptr && tunnel_xr->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2tpv2::Counters::Control::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-xr")
    {
        if(tunnel_xr == nullptr)
        {
            tunnel_xr = std::make_shared<L2tpv2::Counters::Control::TunnelXr>();
        }
        return tunnel_xr;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<L2tpv2::Counters::Control::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_xr != nullptr)
    {
        children["tunnel-xr"] = tunnel_xr;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void L2tpv2::Counters::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-xr" || name == "tunnels")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::TunnelXr()
    :
    authentication(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication>())
    , global(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global>())
{
    authentication->parent = this;
    global->parent = this;

    yang_name = "tunnel-xr"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::~TunnelXr()
{
}

bool L2tpv2::Counters::Control::TunnelXr::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2tpv2::Counters::Control::TunnelXr::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2tpv2::Counters::Control::TunnelXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void L2tpv2::Counters::Control::TunnelXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Control::TunnelXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Control::TunnelXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "global")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::Authentication()
    :
    nonce_avp(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp>())
    , common_digest(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest>())
    , primary_digest(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest>())
    , secondary_digest(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest>())
    , integrity_check(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck>())
    , local_secret(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret>())
    , challenge_avp(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp>())
    , challenge_reponse(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse>())
    , overall_statistics(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics>())
{
    nonce_avp->parent = this;
    common_digest->parent = this;
    primary_digest->parent = this;
    secondary_digest->parent = this;
    integrity_check->parent = this;
    local_secret->parent = this;
    challenge_avp->parent = this;
    challenge_reponse->parent = this;
    overall_statistics->parent = this;

    yang_name = "authentication"; yang_parent_name = "tunnel-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::~Authentication()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (nonce_avp !=  nullptr && nonce_avp->has_data())
	|| (common_digest !=  nullptr && common_digest->has_data())
	|| (primary_digest !=  nullptr && primary_digest->has_data())
	|| (secondary_digest !=  nullptr && secondary_digest->has_data())
	|| (integrity_check !=  nullptr && integrity_check->has_data())
	|| (local_secret !=  nullptr && local_secret->has_data())
	|| (challenge_avp !=  nullptr && challenge_avp->has_data())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_data())
	|| (overall_statistics !=  nullptr && overall_statistics->has_data());
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (nonce_avp !=  nullptr && nonce_avp->has_operation())
	|| (common_digest !=  nullptr && common_digest->has_operation())
	|| (primary_digest !=  nullptr && primary_digest->has_operation())
	|| (secondary_digest !=  nullptr && secondary_digest->has_operation())
	|| (integrity_check !=  nullptr && integrity_check->has_operation())
	|| (local_secret !=  nullptr && local_secret->has_operation())
	|| (challenge_avp !=  nullptr && challenge_avp->has_operation())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_operation())
	|| (overall_statistics !=  nullptr && overall_statistics->has_operation());
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nonce-avp")
    {
        if(nonce_avp == nullptr)
        {
            nonce_avp = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp>();
        }
        return nonce_avp;
    }

    if(child_yang_name == "common-digest")
    {
        if(common_digest == nullptr)
        {
            common_digest = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest>();
        }
        return common_digest;
    }

    if(child_yang_name == "primary-digest")
    {
        if(primary_digest == nullptr)
        {
            primary_digest = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest>();
        }
        return primary_digest;
    }

    if(child_yang_name == "secondary-digest")
    {
        if(secondary_digest == nullptr)
        {
            secondary_digest = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest>();
        }
        return secondary_digest;
    }

    if(child_yang_name == "integrity-check")
    {
        if(integrity_check == nullptr)
        {
            integrity_check = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck>();
        }
        return integrity_check;
    }

    if(child_yang_name == "local-secret")
    {
        if(local_secret == nullptr)
        {
            local_secret = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret>();
        }
        return local_secret;
    }

    if(child_yang_name == "challenge-avp")
    {
        if(challenge_avp == nullptr)
        {
            challenge_avp = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp>();
        }
        return challenge_avp;
    }

    if(child_yang_name == "challenge-reponse")
    {
        if(challenge_reponse == nullptr)
        {
            challenge_reponse = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse>();
        }
        return challenge_reponse;
    }

    if(child_yang_name == "overall-statistics")
    {
        if(overall_statistics == nullptr)
        {
            overall_statistics = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics>();
        }
        return overall_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nonce_avp != nullptr)
    {
        children["nonce-avp"] = nonce_avp;
    }

    if(common_digest != nullptr)
    {
        children["common-digest"] = common_digest;
    }

    if(primary_digest != nullptr)
    {
        children["primary-digest"] = primary_digest;
    }

    if(secondary_digest != nullptr)
    {
        children["secondary-digest"] = secondary_digest;
    }

    if(integrity_check != nullptr)
    {
        children["integrity-check"] = integrity_check;
    }

    if(local_secret != nullptr)
    {
        children["local-secret"] = local_secret;
    }

    if(challenge_avp != nullptr)
    {
        children["challenge-avp"] = challenge_avp;
    }

    if(challenge_reponse != nullptr)
    {
        children["challenge-reponse"] = challenge_reponse;
    }

    if(overall_statistics != nullptr)
    {
        children["overall-statistics"] = overall_statistics;
    }

    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nonce-avp" || name == "common-digest" || name == "primary-digest" || name == "secondary-digest" || name == "integrity-check" || name == "local-secret" || name == "challenge-avp" || name == "challenge-reponse" || name == "overall-statistics")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::NonceAvp()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "nonce-avp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::~NonceAvp()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonce-avp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::CommonDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "common-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::~CommonDigest()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::PrimaryDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "primary-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::~PrimaryDigest()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::SecondaryDigest()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "secondary-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::~SecondaryDigest()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::IntegrityCheck()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "integrity-check"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::~IntegrityCheck()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::LocalSecret()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "local-secret"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::~LocalSecret()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::ChallengeAvp()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "challenge-avp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::~ChallengeAvp()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-avp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::ChallengeReponse()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "challenge-reponse"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::~ChallengeReponse()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-reponse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::OverallStatistics()
    :
    validate{YType::uint32, "validate"},
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    failed{YType::uint32, "failed"},
    skipped{YType::uint32, "skipped"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"}
{

    yang_name = "overall-statistics"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::~OverallStatistics()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_data() const
{
    if (is_presence_container) return true;
    return validate.is_set
	|| bad_hash.is_set
	|| bad_length.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| failed.is_set
	|| skipped.is_set
	|| generate_response_failures.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(bad_hash.yfilter)
	|| ydk::is_set(bad_length.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(missing.yfilter)
	|| ydk::is_set(passed.yfilter)
	|| ydk::is_set(failed.yfilter)
	|| ydk::is_set(skipped.yfilter)
	|| ydk::is_set(generate_response_failures.yfilter)
	|| ydk::is_set(unexpected.yfilter)
	|| ydk::is_set(unexpected_zlb.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overall-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (bad_hash.is_set || is_set(bad_hash.yfilter)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.yfilter)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.yfilter)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.yfilter)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (failed.is_set || is_set(failed.yfilter)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.yfilter)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.yfilter)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.yfilter)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.yfilter)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-hash")
    {
        bad_hash = value;
        bad_hash.value_namespace = name_space;
        bad_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
        bad_length.value_namespace = name_space;
        bad_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing")
    {
        missing = value;
        missing.value_namespace = name_space;
        missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passed")
    {
        passed = value;
        passed.value_namespace = name_space;
        passed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed")
    {
        failed = value;
        failed.value_namespace = name_space;
        failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped")
    {
        skipped = value;
        skipped.value_namespace = name_space;
        skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
        generate_response_failures.value_namespace = name_space;
        generate_response_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
        unexpected.value_namespace = name_space;
        unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
        unexpected_zlb.value_namespace = name_space;
        unexpected_zlb.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
    if(value_path == "bad-hash")
    {
        bad_hash.yfilter = yfilter;
    }
    if(value_path == "bad-length")
    {
        bad_length.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "missing")
    {
        missing.yfilter = yfilter;
    }
    if(value_path == "passed")
    {
        passed.yfilter = yfilter;
    }
    if(value_path == "failed")
    {
        failed.yfilter = yfilter;
    }
    if(value_path == "skipped")
    {
        skipped.yfilter = yfilter;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures.yfilter = yfilter;
    }
    if(value_path == "unexpected")
    {
        unexpected.yfilter = yfilter;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "bad-hash" || name == "bad-length" || name == "ignored" || name == "missing" || name == "passed" || name == "failed" || name == "skipped" || name == "generate-response-failures" || name == "unexpected" || name == "unexpected-zlb")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Global::Global()
    :
    total_transmit{YType::uint32, "total-transmit"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_received{YType::uint32, "total-received"},
    total_drop{YType::uint32, "total-drop"}
        ,
    transmit(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Transmit>())
    , retransmit(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Retransmit>())
    , received(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Received>())
    , drop(std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Drop>())
{
    transmit->parent = this;
    retransmit->parent = this;
    received->parent = this;
    drop->parent = this;

    yang_name = "global"; yang_parent_name = "tunnel-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Global::~Global()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Global::has_data() const
{
    if (is_presence_container) return true;
    return total_transmit.is_set
	|| total_retransmit.is_set
	|| total_received.is_set
	|| total_drop.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (drop !=  nullptr && drop->has_data());
}

bool L2tpv2::Counters::Control::TunnelXr::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_transmit.yfilter)
	|| ydk::is_set(total_retransmit.yfilter)
	|| ydk::is_set(total_received.yfilter)
	|| ydk::is_set(total_drop.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (drop !=  nullptr && drop->has_operation());
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_transmit.is_set || is_set(total_transmit.yfilter)) leaf_name_data.push_back(total_transmit.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.yfilter)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.yfilter)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_drop.is_set || is_set(total_drop.yfilter)) leaf_name_data.push_back(total_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Received>();
        }
        return received;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2tpv2::Counters::Control::TunnelXr::Global::Drop>();
        }
        return drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-transmit")
    {
        total_transmit = value;
        total_transmit.value_namespace = name_space;
        total_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
        total_retransmit.value_namespace = name_space;
        total_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-received")
    {
        total_received = value;
        total_received.value_namespace = name_space;
        total_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop")
    {
        total_drop = value;
        total_drop.value_namespace = name_space;
        total_drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-transmit")
    {
        total_transmit.yfilter = yfilter;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit.yfilter = yfilter;
    }
    if(value_path == "total-received")
    {
        total_received.yfilter = yfilter;
    }
    if(value_path == "total-drop")
    {
        total_drop.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "retransmit" || name == "received" || name == "drop" || name == "total-transmit" || name == "total-retransmit" || name == "total-received" || name == "total-drop")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Global::Transmit::Transmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "transmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Global::Transmit::~Transmit()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Global::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Global::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Global::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Global::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::Retransmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::~Retransmit()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Global::Received::Received()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "received"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Global::Received::~Received()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Received::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Received::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Global::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Global::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Global::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Global::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::TunnelXr::Global::Drop::Drop()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "drop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::TunnelXr::Global::Drop::~Drop()
{
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Drop::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Drop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::TunnelXr::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::TunnelXr::Global::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::TunnelXr::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::TunnelXr::Global::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::TunnelXr::Global::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::TunnelXr::Global::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::TunnelXr::Global::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnels()
    :
    tunnel(this, {"tunnel_id"})
{

    yang_name = "tunnels"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::Tunnels::~Tunnels()
{
}

bool L2tpv2::Counters::Control::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::Counters::Control::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Counters::Control::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Counters::Control::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Counters::Control::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Tunnel()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
        ,
    brief(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Brief>())
    , global(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global>())
{
    brief->parent = this;
    global->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::~Tunnel()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "global" || name == "tunnel-id")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::Brief()
    :
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "brief"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::~Brief()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::has_data() const
{
    if (is_presence_container) return true;
    return remote_tunnel_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-tunnel-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Global()
    :
    total_transmit{YType::uint32, "total-transmit"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_received{YType::uint32, "total-received"},
    total_drop{YType::uint32, "total-drop"}
        ,
    transmit(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit>())
    , retransmit(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit>())
    , received(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received>())
    , drop(std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop>())
{
    transmit->parent = this;
    retransmit->parent = this;
    received->parent = this;
    drop->parent = this;

    yang_name = "global"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::~Global()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::has_data() const
{
    if (is_presence_container) return true;
    return total_transmit.is_set
	|| total_retransmit.is_set
	|| total_received.is_set
	|| total_drop.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (drop !=  nullptr && drop->has_data());
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_transmit.yfilter)
	|| ydk::is_set(total_retransmit.yfilter)
	|| ydk::is_set(total_received.yfilter)
	|| ydk::is_set(total_drop.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (drop !=  nullptr && drop->has_operation());
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_transmit.is_set || is_set(total_transmit.yfilter)) leaf_name_data.push_back(total_transmit.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.yfilter)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.yfilter)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_drop.is_set || is_set(total_drop.yfilter)) leaf_name_data.push_back(total_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received>();
        }
        return received;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop>();
        }
        return drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-transmit")
    {
        total_transmit = value;
        total_transmit.value_namespace = name_space;
        total_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
        total_retransmit.value_namespace = name_space;
        total_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-received")
    {
        total_received = value;
        total_received.value_namespace = name_space;
        total_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-drop")
    {
        total_drop = value;
        total_drop.value_namespace = name_space;
        total_drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-transmit")
    {
        total_transmit.yfilter = yfilter;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit.yfilter = yfilter;
    }
    if(value_path == "total-received")
    {
        total_received.yfilter = yfilter;
    }
    if(value_path == "total-drop")
    {
        total_drop.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "retransmit" || name == "received" || name == "drop" || name == "total-transmit" || name == "total-retransmit" || name == "total-received" || name == "total-drop")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::Transmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "transmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::~Transmit()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::Retransmit()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::~Retransmit()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::Received()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "received"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::~Received()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::Drop()
    :
    unknown_packets{YType::uint32, "unknown-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    hello_packets{YType::uint32, "hello-packets"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"}
{

    yang_name = "drop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::~Drop()
{
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::has_data() const
{
    if (is_presence_container) return true;
    return unknown_packets.is_set
	|| zero_length_body_packets.is_set
	|| start_control_connection_requests.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_notifications.is_set
	|| stop_control_connection_notifications.is_set
	|| hello_packets.is_set
	|| outgoing_call_requests.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_connected_packets.is_set
	|| incoming_call_requests.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_connected_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| wan_error_notify_packets.is_set
	|| set_link_info_packets.is_set
	|| service_relay_requests.is_set
	|| service_relay_replies.is_set
	|| acknowledgement_packets.is_set;
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_packets.yfilter)
	|| ydk::is_set(zero_length_body_packets.yfilter)
	|| ydk::is_set(start_control_connection_requests.yfilter)
	|| ydk::is_set(start_control_connection_replies.yfilter)
	|| ydk::is_set(start_control_connection_notifications.yfilter)
	|| ydk::is_set(stop_control_connection_notifications.yfilter)
	|| ydk::is_set(hello_packets.yfilter)
	|| ydk::is_set(outgoing_call_requests.yfilter)
	|| ydk::is_set(outgoing_call_replies.yfilter)
	|| ydk::is_set(outgoing_call_connected_packets.yfilter)
	|| ydk::is_set(incoming_call_requests.yfilter)
	|| ydk::is_set(incoming_call_replies.yfilter)
	|| ydk::is_set(incoming_call_connected_packets.yfilter)
	|| ydk::is_set(call_disconnect_notify_packets.yfilter)
	|| ydk::is_set(wan_error_notify_packets.yfilter)
	|| ydk::is_set(set_link_info_packets.yfilter)
	|| ydk::is_set(service_relay_requests.yfilter)
	|| ydk::is_set(service_relay_replies.yfilter)
	|| ydk::is_set(acknowledgement_packets.yfilter);
}

std::string L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_packets.is_set || is_set(unknown_packets.yfilter)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.yfilter)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.yfilter)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.yfilter)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.yfilter)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.yfilter)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.yfilter)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.yfilter)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.yfilter)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.yfilter)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.yfilter)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.yfilter)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.yfilter)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.yfilter)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.yfilter)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.yfilter)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.yfilter)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.yfilter)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.yfilter)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
        unknown_packets.value_namespace = name_space;
        unknown_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
        zero_length_body_packets.value_namespace = name_space;
        zero_length_body_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
        start_control_connection_requests.value_namespace = name_space;
        start_control_connection_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
        start_control_connection_replies.value_namespace = name_space;
        start_control_connection_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
        start_control_connection_notifications.value_namespace = name_space;
        start_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
        stop_control_connection_notifications.value_namespace = name_space;
        stop_control_connection_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
        hello_packets.value_namespace = name_space;
        hello_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
        outgoing_call_requests.value_namespace = name_space;
        outgoing_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
        outgoing_call_replies.value_namespace = name_space;
        outgoing_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
        outgoing_call_connected_packets.value_namespace = name_space;
        outgoing_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
        incoming_call_requests.value_namespace = name_space;
        incoming_call_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
        incoming_call_replies.value_namespace = name_space;
        incoming_call_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
        incoming_call_connected_packets.value_namespace = name_space;
        incoming_call_connected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
        call_disconnect_notify_packets.value_namespace = name_space;
        call_disconnect_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
        wan_error_notify_packets.value_namespace = name_space;
        wan_error_notify_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
        set_link_info_packets.value_namespace = name_space;
        set_link_info_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
        service_relay_requests.value_namespace = name_space;
        service_relay_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
        service_relay_replies.value_namespace = name_space;
        service_relay_replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
        acknowledgement_packets.value_namespace = name_space;
        acknowledgement_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-packets")
    {
        unknown_packets.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies.yfilter = yfilter;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications.yfilter = yfilter;
    }
    if(value_path == "hello-packets")
    {
        hello_packets.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies.yfilter = yfilter;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests.yfilter = yfilter;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies.yfilter = yfilter;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets.yfilter = yfilter;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets.yfilter = yfilter;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets.yfilter = yfilter;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets.yfilter = yfilter;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests.yfilter = yfilter;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies.yfilter = yfilter;
    }
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-packets" || name == "zero-length-body-packets" || name == "start-control-connection-requests" || name == "start-control-connection-replies" || name == "start-control-connection-notifications" || name == "stop-control-connection-notifications" || name == "hello-packets" || name == "outgoing-call-requests" || name == "outgoing-call-replies" || name == "outgoing-call-connected-packets" || name == "incoming-call-requests" || name == "incoming-call-replies" || name == "incoming-call-connected-packets" || name == "call-disconnect-notify-packets" || name == "wan-error-notify-packets" || name == "set-link-info-packets" || name == "service-relay-requests" || name == "service-relay-replies" || name == "acknowledgement-packets")
        return true;
    return false;
}

L2tpv2::Statistics::Statistics()
    :
    tunnels{YType::uint32, "tunnels"},
    sessions{YType::uint32, "sessions"},
    sent_packets{YType::uint32, "sent-packets"},
    received_packets{YType::uint32, "received-packets"},
    average_packet_processing_time{YType::uint32, "average-packet-processing-time"},
    received_out_of_order_packets{YType::uint32, "received-out-of-order-packets"},
    reorder_packets{YType::uint32, "reorder-packets"},
    reorder_deviation_packets{YType::uint32, "reorder-deviation-packets"},
    incoming_dropped_packets{YType::uint32, "incoming-dropped-packets"},
    buffered_packets{YType::uint32, "buffered-packets"},
    netio_packets{YType::uint32, "netio-packets"}
{

    yang_name = "statistics"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Statistics::~Statistics()
{
}

bool L2tpv2::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tunnels.is_set
	|| sessions.is_set
	|| sent_packets.is_set
	|| received_packets.is_set
	|| average_packet_processing_time.is_set
	|| received_out_of_order_packets.is_set
	|| reorder_packets.is_set
	|| reorder_deviation_packets.is_set
	|| incoming_dropped_packets.is_set
	|| buffered_packets.is_set
	|| netio_packets.is_set;
}

bool L2tpv2::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(sent_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(average_packet_processing_time.yfilter)
	|| ydk::is_set(received_out_of_order_packets.yfilter)
	|| ydk::is_set(reorder_packets.yfilter)
	|| ydk::is_set(reorder_deviation_packets.yfilter)
	|| ydk::is_set(incoming_dropped_packets.yfilter)
	|| ydk::is_set(buffered_packets.yfilter)
	|| ydk::is_set(netio_packets.yfilter);
}

std::string L2tpv2::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.yfilter)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (average_packet_processing_time.is_set || is_set(average_packet_processing_time.yfilter)) leaf_name_data.push_back(average_packet_processing_time.get_name_leafdata());
    if (received_out_of_order_packets.is_set || is_set(received_out_of_order_packets.yfilter)) leaf_name_data.push_back(received_out_of_order_packets.get_name_leafdata());
    if (reorder_packets.is_set || is_set(reorder_packets.yfilter)) leaf_name_data.push_back(reorder_packets.get_name_leafdata());
    if (reorder_deviation_packets.is_set || is_set(reorder_deviation_packets.yfilter)) leaf_name_data.push_back(reorder_deviation_packets.get_name_leafdata());
    if (incoming_dropped_packets.is_set || is_set(incoming_dropped_packets.yfilter)) leaf_name_data.push_back(incoming_dropped_packets.get_name_leafdata());
    if (buffered_packets.is_set || is_set(buffered_packets.yfilter)) leaf_name_data.push_back(buffered_packets.get_name_leafdata());
    if (netio_packets.is_set || is_set(netio_packets.yfilter)) leaf_name_data.push_back(netio_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-packets")
    {
        sent_packets = value;
        sent_packets.value_namespace = name_space;
        sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-packet-processing-time")
    {
        average_packet_processing_time = value;
        average_packet_processing_time.value_namespace = name_space;
        average_packet_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-out-of-order-packets")
    {
        received_out_of_order_packets = value;
        received_out_of_order_packets.value_namespace = name_space;
        received_out_of_order_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorder-packets")
    {
        reorder_packets = value;
        reorder_packets.value_namespace = name_space;
        reorder_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorder-deviation-packets")
    {
        reorder_deviation_packets = value;
        reorder_deviation_packets.value_namespace = name_space;
        reorder_deviation_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-dropped-packets")
    {
        incoming_dropped_packets = value;
        incoming_dropped_packets.value_namespace = name_space;
        incoming_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-packets")
    {
        buffered_packets = value;
        buffered_packets.value_namespace = name_space;
        buffered_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netio-packets")
    {
        netio_packets = value;
        netio_packets.value_namespace = name_space;
        netio_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "sent-packets")
    {
        sent_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "average-packet-processing-time")
    {
        average_packet_processing_time.yfilter = yfilter;
    }
    if(value_path == "received-out-of-order-packets")
    {
        received_out_of_order_packets.yfilter = yfilter;
    }
    if(value_path == "reorder-packets")
    {
        reorder_packets.yfilter = yfilter;
    }
    if(value_path == "reorder-deviation-packets")
    {
        reorder_deviation_packets.yfilter = yfilter;
    }
    if(value_path == "incoming-dropped-packets")
    {
        incoming_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "buffered-packets")
    {
        buffered_packets.yfilter = yfilter;
    }
    if(value_path == "netio-packets")
    {
        netio_packets.yfilter = yfilter;
    }
}

bool L2tpv2::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnels" || name == "sessions" || name == "sent-packets" || name == "received-packets" || name == "average-packet-processing-time" || name == "received-out-of-order-packets" || name == "reorder-packets" || name == "reorder-deviation-packets" || name == "incoming-dropped-packets" || name == "buffered-packets" || name == "netio-packets")
        return true;
    return false;
}

L2tpv2::Tunnel::Tunnel()
    :
    accounting(std::make_shared<L2tpv2::Tunnel::Accounting>())
{
    accounting->parent = this;

    yang_name = "tunnel"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Tunnel::~Tunnel()
{
}

bool L2tpv2::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data());
}

bool L2tpv2::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string L2tpv2::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<L2tpv2::Tunnel::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    return children;
}

void L2tpv2::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

L2tpv2::Tunnel::Accounting::Accounting()
    :
    statistics(std::make_shared<L2tpv2::Tunnel::Accounting::Statistics>())
{
    statistics->parent = this;

    yang_name = "accounting"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Tunnel::Accounting::~Accounting()
{
}

bool L2tpv2::Tunnel::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data());
}

bool L2tpv2::Tunnel::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2tpv2::Tunnel::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Tunnel::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnel::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnel::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2tpv2::Tunnel::Accounting::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnel::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2tpv2::Tunnel::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Tunnel::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Tunnel::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

L2tpv2::Tunnel::Accounting::Statistics::Statistics()
    :
    records_sent_successfully{YType::uint64, "records-sent-successfully"},
    start{YType::uint64, "start"},
    stop{YType::uint64, "stop"},
    reject{YType::uint64, "reject"},
    transport_failures{YType::uint64, "transport-failures"},
    positive_acknowledgement{YType::uint64, "positive-acknowledgement"},
    negative_acknowledgement{YType::uint64, "negative-acknowledgement"},
    records_checkpointed{YType::uint64, "records-checkpointed"},
    records_failed_to_checkpoint{YType::uint64, "records-failed-to-checkpoint"},
    records_sent_from_queue{YType::uint64, "records-sent-from-queue"},
    memory_failures{YType::uint32, "memory-failures"},
    current_size{YType::uint32, "current-size"},
    records_recovered_from_checkpoint{YType::uint32, "records-recovered-from-checkpoint"},
    records_fail_to_recover{YType::uint32, "records-fail-to-recover"},
    queue_statistics_size{YType::int32, "queue-statistics-size"}
{

    yang_name = "statistics"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Tunnel::Accounting::Statistics::~Statistics()
{
}

bool L2tpv2::Tunnel::Accounting::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return records_sent_successfully.is_set
	|| start.is_set
	|| stop.is_set
	|| reject.is_set
	|| transport_failures.is_set
	|| positive_acknowledgement.is_set
	|| negative_acknowledgement.is_set
	|| records_checkpointed.is_set
	|| records_failed_to_checkpoint.is_set
	|| records_sent_from_queue.is_set
	|| memory_failures.is_set
	|| current_size.is_set
	|| records_recovered_from_checkpoint.is_set
	|| records_fail_to_recover.is_set
	|| queue_statistics_size.is_set;
}

bool L2tpv2::Tunnel::Accounting::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(records_sent_successfully.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter)
	|| ydk::is_set(reject.yfilter)
	|| ydk::is_set(transport_failures.yfilter)
	|| ydk::is_set(positive_acknowledgement.yfilter)
	|| ydk::is_set(negative_acknowledgement.yfilter)
	|| ydk::is_set(records_checkpointed.yfilter)
	|| ydk::is_set(records_failed_to_checkpoint.yfilter)
	|| ydk::is_set(records_sent_from_queue.yfilter)
	|| ydk::is_set(memory_failures.yfilter)
	|| ydk::is_set(current_size.yfilter)
	|| ydk::is_set(records_recovered_from_checkpoint.yfilter)
	|| ydk::is_set(records_fail_to_recover.yfilter)
	|| ydk::is_set(queue_statistics_size.yfilter);
}

std::string L2tpv2::Tunnel::Accounting::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Tunnel::Accounting::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnel::Accounting::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (records_sent_successfully.is_set || is_set(records_sent_successfully.yfilter)) leaf_name_data.push_back(records_sent_successfully.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());
    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());
    if (transport_failures.is_set || is_set(transport_failures.yfilter)) leaf_name_data.push_back(transport_failures.get_name_leafdata());
    if (positive_acknowledgement.is_set || is_set(positive_acknowledgement.yfilter)) leaf_name_data.push_back(positive_acknowledgement.get_name_leafdata());
    if (negative_acknowledgement.is_set || is_set(negative_acknowledgement.yfilter)) leaf_name_data.push_back(negative_acknowledgement.get_name_leafdata());
    if (records_checkpointed.is_set || is_set(records_checkpointed.yfilter)) leaf_name_data.push_back(records_checkpointed.get_name_leafdata());
    if (records_failed_to_checkpoint.is_set || is_set(records_failed_to_checkpoint.yfilter)) leaf_name_data.push_back(records_failed_to_checkpoint.get_name_leafdata());
    if (records_sent_from_queue.is_set || is_set(records_sent_from_queue.yfilter)) leaf_name_data.push_back(records_sent_from_queue.get_name_leafdata());
    if (memory_failures.is_set || is_set(memory_failures.yfilter)) leaf_name_data.push_back(memory_failures.get_name_leafdata());
    if (current_size.is_set || is_set(current_size.yfilter)) leaf_name_data.push_back(current_size.get_name_leafdata());
    if (records_recovered_from_checkpoint.is_set || is_set(records_recovered_from_checkpoint.yfilter)) leaf_name_data.push_back(records_recovered_from_checkpoint.get_name_leafdata());
    if (records_fail_to_recover.is_set || is_set(records_fail_to_recover.yfilter)) leaf_name_data.push_back(records_fail_to_recover.get_name_leafdata());
    if (queue_statistics_size.is_set || is_set(queue_statistics_size.yfilter)) leaf_name_data.push_back(queue_statistics_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnel::Accounting::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnel::Accounting::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Tunnel::Accounting::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "records-sent-successfully")
    {
        records_sent_successfully = value;
        records_sent_successfully.value_namespace = name_space;
        records_sent_successfully.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-failures")
    {
        transport_failures = value;
        transport_failures.value_namespace = name_space;
        transport_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-acknowledgement")
    {
        positive_acknowledgement = value;
        positive_acknowledgement.value_namespace = name_space;
        positive_acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-acknowledgement")
    {
        negative_acknowledgement = value;
        negative_acknowledgement.value_namespace = name_space;
        negative_acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-checkpointed")
    {
        records_checkpointed = value;
        records_checkpointed.value_namespace = name_space;
        records_checkpointed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-failed-to-checkpoint")
    {
        records_failed_to_checkpoint = value;
        records_failed_to_checkpoint.value_namespace = name_space;
        records_failed_to_checkpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-sent-from-queue")
    {
        records_sent_from_queue = value;
        records_sent_from_queue.value_namespace = name_space;
        records_sent_from_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-failures")
    {
        memory_failures = value;
        memory_failures.value_namespace = name_space;
        memory_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-size")
    {
        current_size = value;
        current_size.value_namespace = name_space;
        current_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-recovered-from-checkpoint")
    {
        records_recovered_from_checkpoint = value;
        records_recovered_from_checkpoint.value_namespace = name_space;
        records_recovered_from_checkpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-fail-to-recover")
    {
        records_fail_to_recover = value;
        records_fail_to_recover.value_namespace = name_space;
        records_fail_to_recover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-statistics-size")
    {
        queue_statistics_size = value;
        queue_statistics_size.value_namespace = name_space;
        queue_statistics_size.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Tunnel::Accounting::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "records-sent-successfully")
    {
        records_sent_successfully.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
    if(value_path == "transport-failures")
    {
        transport_failures.yfilter = yfilter;
    }
    if(value_path == "positive-acknowledgement")
    {
        positive_acknowledgement.yfilter = yfilter;
    }
    if(value_path == "negative-acknowledgement")
    {
        negative_acknowledgement.yfilter = yfilter;
    }
    if(value_path == "records-checkpointed")
    {
        records_checkpointed.yfilter = yfilter;
    }
    if(value_path == "records-failed-to-checkpoint")
    {
        records_failed_to_checkpoint.yfilter = yfilter;
    }
    if(value_path == "records-sent-from-queue")
    {
        records_sent_from_queue.yfilter = yfilter;
    }
    if(value_path == "memory-failures")
    {
        memory_failures.yfilter = yfilter;
    }
    if(value_path == "current-size")
    {
        current_size.yfilter = yfilter;
    }
    if(value_path == "records-recovered-from-checkpoint")
    {
        records_recovered_from_checkpoint.yfilter = yfilter;
    }
    if(value_path == "records-fail-to-recover")
    {
        records_fail_to_recover.yfilter = yfilter;
    }
    if(value_path == "queue-statistics-size")
    {
        queue_statistics_size.yfilter = yfilter;
    }
}

bool L2tpv2::Tunnel::Accounting::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "records-sent-successfully" || name == "start" || name == "stop" || name == "reject" || name == "transport-failures" || name == "positive-acknowledgement" || name == "negative-acknowledgement" || name == "records-checkpointed" || name == "records-failed-to-checkpoint" || name == "records-sent-from-queue" || name == "memory-failures" || name == "current-size" || name == "records-recovered-from-checkpoint" || name == "records-fail-to-recover" || name == "queue-statistics-size")
        return true;
    return false;
}

L2tpv2::TunnelConfigurations::TunnelConfigurations()
    :
    tunnel_configuration(this, {"local_tunnel_id"})
{

    yang_name = "tunnel-configurations"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::TunnelConfigurations::~TunnelConfigurations()
{
}

bool L2tpv2::TunnelConfigurations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_configuration.len(); index++)
    {
        if(tunnel_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::TunnelConfigurations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_configuration.len(); index++)
    {
        if(tunnel_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::TunnelConfigurations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::TunnelConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configurations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::TunnelConfigurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::TunnelConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-configuration")
    {
        auto c = std::make_shared<L2tpv2::TunnelConfigurations::TunnelConfiguration>();
        c->parent = this;
        tunnel_configuration.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::TunnelConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_configuration.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::TunnelConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::TunnelConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::TunnelConfigurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-configuration")
        return true;
    return false;
}

L2tpv2::TunnelConfigurations::TunnelConfiguration::TunnelConfiguration()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
        ,
    l2tp_class(std::make_shared<L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass>())
{
    l2tp_class->parent = this;

    yang_name = "tunnel-configuration"; yang_parent_name = "tunnel-configurations"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::TunnelConfigurations::TunnelConfiguration::~TunnelConfiguration()
{
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return local_tunnel_id.is_set
	|| remote_tunnel_id.is_set
	|| (l2tp_class !=  nullptr && l2tp_class->has_data());
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| (l2tp_class !=  nullptr && l2tp_class->has_operation());
}

std::string L2tpv2::TunnelConfigurations::TunnelConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel-configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::TunnelConfigurations::TunnelConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configuration";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::TunnelConfigurations::TunnelConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::TunnelConfigurations::TunnelConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-class")
    {
        if(l2tp_class == nullptr)
        {
            l2tp_class = std::make_shared<L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass>();
        }
        return l2tp_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::TunnelConfigurations::TunnelConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tp_class != nullptr)
    {
        children["l2tp-class"] = l2tp_class;
    }

    return children;
}

void L2tpv2::TunnelConfigurations::TunnelConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::TunnelConfigurations::TunnelConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-class" || name == "local-tunnel-id" || name == "remote-tunnel-id")
        return true;
    return false;
}

L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::L2tpClass()
    :
    ip_tos{YType::uint8, "ip-tos"},
    vrf_name{YType::str, "vrf-name"},
    receive_window_size{YType::uint16, "receive-window-size"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    password{YType::str, "password"},
    encoded_password{YType::str, "encoded-password"},
    host_name{YType::str, "host-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    hello_timeout{YType::uint32, "hello-timeout"},
    setup_timeout{YType::uint32, "setup-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"}
{

    yang_name = "l2tp-class"; yang_parent_name = "tunnel-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::~L2tpClass()
{
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_data() const
{
    if (is_presence_container) return true;
    return ip_tos.is_set
	|| vrf_name.is_set
	|| receive_window_size.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| password.is_set
	|| encoded_password.is_set
	|| host_name.is_set
	|| accounting_method_list.is_set
	|| hello_timeout.is_set
	|| setup_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| timeout_no_user.is_set
	|| retransmit_retries.is_set
	|| initial_retransmit_retries.is_set
	|| is_authentication_enabled.is_set
	|| is_hidden.is_set
	|| is_digest_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_peer_address_checked.is_set;
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(receive_window_size.yfilter)
	|| ydk::is_set(class_name_xr.yfilter)
	|| ydk::is_set(digest_hash.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encoded_password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(accounting_method_list.yfilter)
	|| ydk::is_set(hello_timeout.yfilter)
	|| ydk::is_set(setup_timeout.yfilter)
	|| ydk::is_set(retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(timeout_no_user.yfilter)
	|| ydk::is_set(retransmit_retries.yfilter)
	|| ydk::is_set(initial_retransmit_retries.yfilter)
	|| ydk::is_set(is_authentication_enabled.yfilter)
	|| ydk::is_set(is_hidden.yfilter)
	|| ydk::is_set(is_digest_enabled.yfilter)
	|| ydk::is_set(is_digest_check_enabled.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter)
	|| ydk::is_set(is_peer_address_checked.yfilter);
}

std::string L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.yfilter)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.yfilter)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.yfilter)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.yfilter)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.yfilter)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.yfilter)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.yfilter)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.yfilter)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.yfilter)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.yfilter)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.yfilter)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.yfilter)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.yfilter)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.yfilter)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.yfilter)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
        receive_window_size.value_namespace = name_space;
        receive_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
        class_name_xr.value_namespace = name_space;
        class_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
        digest_hash.value_namespace = name_space;
        digest_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
        encoded_password.value_namespace = name_space;
        encoded_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
        accounting_method_list.value_namespace = name_space;
        accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
        hello_timeout.value_namespace = name_space;
        hello_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
        setup_timeout.value_namespace = name_space;
        setup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
        retransmit_minimum_timeout.value_namespace = name_space;
        retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
        retransmit_maximum_timeout.value_namespace = name_space;
        retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
        initial_retransmit_minimum_timeout.value_namespace = name_space;
        initial_retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
        initial_retransmit_maximum_timeout.value_namespace = name_space;
        initial_retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
        timeout_no_user.value_namespace = name_space;
        timeout_no_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
        retransmit_retries.value_namespace = name_space;
        retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
        initial_retransmit_retries.value_namespace = name_space;
        initial_retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
        is_authentication_enabled.value_namespace = name_space;
        is_authentication_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
        is_hidden.value_namespace = name_space;
        is_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
        is_digest_enabled.value_namespace = name_space;
        is_digest_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
        is_digest_check_enabled.value_namespace = name_space;
        is_digest_check_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
        is_peer_address_checked.value_namespace = name_space;
        is_peer_address_checked.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size.yfilter = yfilter;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr.yfilter = yfilter;
    }
    if(value_path == "digest-hash")
    {
        digest_hash.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encoded-password")
    {
        encoded_password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout.yfilter = yfilter;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user.yfilter = yfilter;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled.yfilter = yfilter;
    }
    if(value_path == "is-hidden")
    {
        is_hidden.yfilter = yfilter;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled.yfilter = yfilter;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked.yfilter = yfilter;
    }
}

bool L2tpv2::TunnelConfigurations::TunnelConfiguration::L2tpClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-tos" || name == "vrf-name" || name == "receive-window-size" || name == "class-name-xr" || name == "digest-hash" || name == "password" || name == "encoded-password" || name == "host-name" || name == "accounting-method-list" || name == "hello-timeout" || name == "setup-timeout" || name == "retransmit-minimum-timeout" || name == "retransmit-maximum-timeout" || name == "initial-retransmit-minimum-timeout" || name == "initial-retransmit-maximum-timeout" || name == "timeout-no-user" || name == "retransmit-retries" || name == "initial-retransmit-retries" || name == "is-authentication-enabled" || name == "is-hidden" || name == "is-digest-enabled" || name == "is-digest-check-enabled" || name == "is-congestion-control-enabled" || name == "is-peer-address-checked")
        return true;
    return false;
}

L2tpv2::CounterHistFail::CounterHistFail()
    :
    sess_down_tmout{YType::uint32, "sess-down-tmout"},
    tx_counters{YType::str, "tx-counters"},
    rx_counters{YType::str, "rx-counters"}
        ,
    pkt_timeout(this, {})
{

    yang_name = "counter-hist-fail"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::CounterHistFail::~CounterHistFail()
{
}

bool L2tpv2::CounterHistFail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pkt_timeout.len(); index++)
    {
        if(pkt_timeout[index]->has_data())
            return true;
    }
    return sess_down_tmout.is_set
	|| tx_counters.is_set
	|| rx_counters.is_set;
}

bool L2tpv2::CounterHistFail::has_operation() const
{
    for (std::size_t index=0; index<pkt_timeout.len(); index++)
    {
        if(pkt_timeout[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sess_down_tmout.yfilter)
	|| ydk::is_set(tx_counters.yfilter)
	|| ydk::is_set(rx_counters.yfilter);
}

std::string L2tpv2::CounterHistFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::CounterHistFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-hist-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::CounterHistFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sess_down_tmout.is_set || is_set(sess_down_tmout.yfilter)) leaf_name_data.push_back(sess_down_tmout.get_name_leafdata());
    if (tx_counters.is_set || is_set(tx_counters.yfilter)) leaf_name_data.push_back(tx_counters.get_name_leafdata());
    if (rx_counters.is_set || is_set(rx_counters.yfilter)) leaf_name_data.push_back(rx_counters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::CounterHistFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-timeout")
    {
        auto c = std::make_shared<L2tpv2::CounterHistFail::PktTimeout>();
        c->parent = this;
        pkt_timeout.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::CounterHistFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pkt_timeout.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::CounterHistFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout = value;
        sess_down_tmout.value_namespace = name_space;
        sess_down_tmout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-counters")
    {
        tx_counters = value;
        tx_counters.value_namespace = name_space;
        tx_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-counters")
    {
        rx_counters = value;
        rx_counters.value_namespace = name_space;
        rx_counters.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::CounterHistFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout.yfilter = yfilter;
    }
    if(value_path == "tx-counters")
    {
        tx_counters.yfilter = yfilter;
    }
    if(value_path == "rx-counters")
    {
        rx_counters.yfilter = yfilter;
    }
}

bool L2tpv2::CounterHistFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-timeout" || name == "sess-down-tmout" || name == "tx-counters" || name == "rx-counters")
        return true;
    return false;
}

L2tpv2::CounterHistFail::PktTimeout::PktTimeout()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pkt-timeout"; yang_parent_name = "counter-hist-fail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::CounterHistFail::PktTimeout::~PktTimeout()
{
}

bool L2tpv2::CounterHistFail::PktTimeout::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2tpv2::CounterHistFail::PktTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2tpv2::CounterHistFail::PktTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counter-hist-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::CounterHistFail::PktTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::CounterHistFail::PktTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::CounterHistFail::PktTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::CounterHistFail::PktTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::CounterHistFail::PktTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::CounterHistFail::PktTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2tpv2::CounterHistFail::PktTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2tpv2::Classes::Classes()
    :
    class_(this, {"class_name"})
{

    yang_name = "classes"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Classes::~Classes()
{
}

bool L2tpv2::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::Classes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<L2tpv2::Classes::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

L2tpv2::Classes::Class::Class()
    :
    class_name{YType::str, "class-name"},
    ip_tos{YType::uint8, "ip-tos"},
    vrf_name{YType::str, "vrf-name"},
    receive_window_size{YType::uint16, "receive-window-size"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    password{YType::str, "password"},
    encoded_password{YType::str, "encoded-password"},
    host_name{YType::str, "host-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    hello_timeout{YType::uint32, "hello-timeout"},
    setup_timeout{YType::uint32, "setup-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"}
{

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Classes::Class::~Class()
{
}

bool L2tpv2::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| ip_tos.is_set
	|| vrf_name.is_set
	|| receive_window_size.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| password.is_set
	|| encoded_password.is_set
	|| host_name.is_set
	|| accounting_method_list.is_set
	|| hello_timeout.is_set
	|| setup_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| timeout_no_user.is_set
	|| retransmit_retries.is_set
	|| initial_retransmit_retries.is_set
	|| is_authentication_enabled.is_set
	|| is_hidden.is_set
	|| is_digest_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_peer_address_checked.is_set;
}

bool L2tpv2::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(receive_window_size.yfilter)
	|| ydk::is_set(class_name_xr.yfilter)
	|| ydk::is_set(digest_hash.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encoded_password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(accounting_method_list.yfilter)
	|| ydk::is_set(hello_timeout.yfilter)
	|| ydk::is_set(setup_timeout.yfilter)
	|| ydk::is_set(retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_minimum_timeout.yfilter)
	|| ydk::is_set(initial_retransmit_maximum_timeout.yfilter)
	|| ydk::is_set(timeout_no_user.yfilter)
	|| ydk::is_set(retransmit_retries.yfilter)
	|| ydk::is_set(initial_retransmit_retries.yfilter)
	|| ydk::is_set(is_authentication_enabled.yfilter)
	|| ydk::is_set(is_hidden.yfilter)
	|| ydk::is_set(is_digest_enabled.yfilter)
	|| ydk::is_set(is_digest_check_enabled.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter)
	|| ydk::is_set(is_peer_address_checked.yfilter);
}

std::string L2tpv2::Classes::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.yfilter)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.yfilter)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.yfilter)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.yfilter)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.yfilter)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.yfilter)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.yfilter)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.yfilter)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.yfilter)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.yfilter)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.yfilter)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.yfilter)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.yfilter)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.yfilter)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.yfilter)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.yfilter)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
        receive_window_size.value_namespace = name_space;
        receive_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
        class_name_xr.value_namespace = name_space;
        class_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
        digest_hash.value_namespace = name_space;
        digest_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
        encoded_password.value_namespace = name_space;
        encoded_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
        accounting_method_list.value_namespace = name_space;
        accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
        hello_timeout.value_namespace = name_space;
        hello_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
        setup_timeout.value_namespace = name_space;
        setup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
        retransmit_minimum_timeout.value_namespace = name_space;
        retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
        retransmit_maximum_timeout.value_namespace = name_space;
        retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
        initial_retransmit_minimum_timeout.value_namespace = name_space;
        initial_retransmit_minimum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
        initial_retransmit_maximum_timeout.value_namespace = name_space;
        initial_retransmit_maximum_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
        timeout_no_user.value_namespace = name_space;
        timeout_no_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
        retransmit_retries.value_namespace = name_space;
        retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
        initial_retransmit_retries.value_namespace = name_space;
        initial_retransmit_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
        is_authentication_enabled.value_namespace = name_space;
        is_authentication_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
        is_hidden.value_namespace = name_space;
        is_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
        is_digest_enabled.value_namespace = name_space;
        is_digest_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
        is_digest_check_enabled.value_namespace = name_space;
        is_digest_check_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
        is_peer_address_checked.value_namespace = name_space;
        is_peer_address_checked.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size.yfilter = yfilter;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr.yfilter = yfilter;
    }
    if(value_path == "digest-hash")
    {
        digest_hash.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encoded-password")
    {
        encoded_password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout.yfilter = yfilter;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout.yfilter = yfilter;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user.yfilter = yfilter;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries.yfilter = yfilter;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled.yfilter = yfilter;
    }
    if(value_path == "is-hidden")
    {
        is_hidden.yfilter = yfilter;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled.yfilter = yfilter;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked.yfilter = yfilter;
    }
}

bool L2tpv2::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "ip-tos" || name == "vrf-name" || name == "receive-window-size" || name == "class-name-xr" || name == "digest-hash" || name == "password" || name == "encoded-password" || name == "host-name" || name == "accounting-method-list" || name == "hello-timeout" || name == "setup-timeout" || name == "retransmit-minimum-timeout" || name == "retransmit-maximum-timeout" || name == "initial-retransmit-minimum-timeout" || name == "initial-retransmit-maximum-timeout" || name == "timeout-no-user" || name == "retransmit-retries" || name == "initial-retransmit-retries" || name == "is-authentication-enabled" || name == "is-hidden" || name == "is-digest-enabled" || name == "is-digest-check-enabled" || name == "is-congestion-control-enabled" || name == "is-peer-address-checked")
        return true;
    return false;
}

L2tpv2::Tunnels::Tunnels()
    :
    tunnel(this, {"local_tunnel_id"})
{

    yang_name = "tunnels"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Tunnels::~Tunnels()
{
}

bool L2tpv2::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<L2tpv2::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

L2tpv2::Tunnels::Tunnel::Tunnel()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    local_port{YType::uint16, "local-port"},
    remote_port{YType::uint16, "remote-port"},
    protocol{YType::uint8, "protocol"},
    is_pmtu_enabled{YType::boolean, "is-pmtu-enabled"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    class_name{YType::str, "class-name"},
    active_sessions{YType::uint32, "active-sessions"},
    sequence_ns{YType::uint16, "sequence-ns"},
    sequence_nr{YType::uint16, "sequence-nr"},
    local_window_size{YType::uint16, "local-window-size"},
    remote_window_size{YType::uint16, "remote-window-size"},
    retransmission_time{YType::uint16, "retransmission-time"},
    maximum_retransmission_time{YType::uint16, "maximum-retransmission-time"},
    unsent_queue_size{YType::uint16, "unsent-queue-size"},
    unsent_maximum_queue_size{YType::uint16, "unsent-maximum-queue-size"},
    resend_queue_size{YType::uint16, "resend-queue-size"},
    resend_maximum_queue_size{YType::uint16, "resend-maximum-queue-size"},
    order_queue_size{YType::uint16, "order-queue-size"},
    packet_queue_check{YType::uint16, "packet-queue-check"},
    digest_secrets{YType::uint16, "digest-secrets"},
    resends{YType::uint32, "resends"},
    zero_length_body_acknowledgement_sent{YType::uint32, "zero-length-body-acknowledgement-sent"},
    total_out_of_order_drop_packets{YType::uint32, "total-out-of-order-drop-packets"},
    total_out_of_order_reorder_packets{YType::uint32, "total-out-of-order-reorder-packets"},
    total_peer_authentication_failures{YType::uint32, "total-peer-authentication-failures"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"}
        ,
    retransmit_time(this, {})
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Tunnels::Tunnel::~Tunnel()
{
}

bool L2tpv2::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<retransmit_time.len(); index++)
    {
        if(retransmit_time[index]->has_data())
            return true;
    }
    return local_tunnel_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| local_port.is_set
	|| remote_port.is_set
	|| protocol.is_set
	|| is_pmtu_enabled.is_set
	|| remote_tunnel_id.is_set
	|| local_tunnel_name.is_set
	|| remote_tunnel_name.is_set
	|| class_name.is_set
	|| active_sessions.is_set
	|| sequence_ns.is_set
	|| sequence_nr.is_set
	|| local_window_size.is_set
	|| remote_window_size.is_set
	|| retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| unsent_queue_size.is_set
	|| unsent_maximum_queue_size.is_set
	|| resend_queue_size.is_set
	|| resend_maximum_queue_size.is_set
	|| order_queue_size.is_set
	|| packet_queue_check.is_set
	|| digest_secrets.is_set
	|| resends.is_set
	|| zero_length_body_acknowledgement_sent.is_set
	|| total_out_of_order_drop_packets.is_set
	|| total_out_of_order_reorder_packets.is_set
	|| total_peer_authentication_failures.is_set
	|| is_tunnel_up.is_set
	|| is_congestion_control_enabled.is_set;
}

bool L2tpv2::Tunnels::Tunnel::has_operation() const
{
    for (std::size_t index=0; index<retransmit_time.len(); index++)
    {
        if(retransmit_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(is_pmtu_enabled.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(local_tunnel_name.yfilter)
	|| ydk::is_set(remote_tunnel_name.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(sequence_ns.yfilter)
	|| ydk::is_set(sequence_nr.yfilter)
	|| ydk::is_set(local_window_size.yfilter)
	|| ydk::is_set(remote_window_size.yfilter)
	|| ydk::is_set(retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(unsent_queue_size.yfilter)
	|| ydk::is_set(unsent_maximum_queue_size.yfilter)
	|| ydk::is_set(resend_queue_size.yfilter)
	|| ydk::is_set(resend_maximum_queue_size.yfilter)
	|| ydk::is_set(order_queue_size.yfilter)
	|| ydk::is_set(packet_queue_check.yfilter)
	|| ydk::is_set(digest_secrets.yfilter)
	|| ydk::is_set(resends.yfilter)
	|| ydk::is_set(zero_length_body_acknowledgement_sent.yfilter)
	|| ydk::is_set(total_out_of_order_drop_packets.yfilter)
	|| ydk::is_set(total_out_of_order_reorder_packets.yfilter)
	|| ydk::is_set(total_peer_authentication_failures.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(is_congestion_control_enabled.yfilter);
}

std::string L2tpv2::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (is_pmtu_enabled.is_set || is_set(is_pmtu_enabled.yfilter)) leaf_name_data.push_back(is_pmtu_enabled.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.yfilter)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.yfilter)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (sequence_ns.is_set || is_set(sequence_ns.yfilter)) leaf_name_data.push_back(sequence_ns.get_name_leafdata());
    if (sequence_nr.is_set || is_set(sequence_nr.yfilter)) leaf_name_data.push_back(sequence_nr.get_name_leafdata());
    if (local_window_size.is_set || is_set(local_window_size.yfilter)) leaf_name_data.push_back(local_window_size.get_name_leafdata());
    if (remote_window_size.is_set || is_set(remote_window_size.yfilter)) leaf_name_data.push_back(remote_window_size.get_name_leafdata());
    if (retransmission_time.is_set || is_set(retransmission_time.yfilter)) leaf_name_data.push_back(retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (unsent_queue_size.is_set || is_set(unsent_queue_size.yfilter)) leaf_name_data.push_back(unsent_queue_size.get_name_leafdata());
    if (unsent_maximum_queue_size.is_set || is_set(unsent_maximum_queue_size.yfilter)) leaf_name_data.push_back(unsent_maximum_queue_size.get_name_leafdata());
    if (resend_queue_size.is_set || is_set(resend_queue_size.yfilter)) leaf_name_data.push_back(resend_queue_size.get_name_leafdata());
    if (resend_maximum_queue_size.is_set || is_set(resend_maximum_queue_size.yfilter)) leaf_name_data.push_back(resend_maximum_queue_size.get_name_leafdata());
    if (order_queue_size.is_set || is_set(order_queue_size.yfilter)) leaf_name_data.push_back(order_queue_size.get_name_leafdata());
    if (packet_queue_check.is_set || is_set(packet_queue_check.yfilter)) leaf_name_data.push_back(packet_queue_check.get_name_leafdata());
    if (digest_secrets.is_set || is_set(digest_secrets.yfilter)) leaf_name_data.push_back(digest_secrets.get_name_leafdata());
    if (resends.is_set || is_set(resends.yfilter)) leaf_name_data.push_back(resends.get_name_leafdata());
    if (zero_length_body_acknowledgement_sent.is_set || is_set(zero_length_body_acknowledgement_sent.yfilter)) leaf_name_data.push_back(zero_length_body_acknowledgement_sent.get_name_leafdata());
    if (total_out_of_order_drop_packets.is_set || is_set(total_out_of_order_drop_packets.yfilter)) leaf_name_data.push_back(total_out_of_order_drop_packets.get_name_leafdata());
    if (total_out_of_order_reorder_packets.is_set || is_set(total_out_of_order_reorder_packets.yfilter)) leaf_name_data.push_back(total_out_of_order_reorder_packets.get_name_leafdata());
    if (total_peer_authentication_failures.is_set || is_set(total_peer_authentication_failures.yfilter)) leaf_name_data.push_back(total_peer_authentication_failures.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.yfilter)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmit-time")
    {
        auto c = std::make_shared<L2tpv2::Tunnels::Tunnel::RetransmitTime>();
        c->parent = this;
        retransmit_time.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : retransmit_time.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled = value;
        is_pmtu_enabled.value_namespace = name_space;
        is_pmtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
        local_tunnel_name.value_namespace = name_space;
        local_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
        remote_tunnel_name.value_namespace = name_space;
        remote_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns = value;
        sequence_ns.value_namespace = name_space;
        sequence_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr = value;
        sequence_nr.value_namespace = name_space;
        sequence_nr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-window-size")
    {
        local_window_size = value;
        local_window_size.value_namespace = name_space;
        local_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size = value;
        remote_window_size.value_namespace = name_space;
        remote_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time = value;
        retransmission_time.value_namespace = name_space;
        retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size = value;
        unsent_queue_size.value_namespace = name_space;
        unsent_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size = value;
        unsent_maximum_queue_size.value_namespace = name_space;
        unsent_maximum_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size = value;
        resend_queue_size.value_namespace = name_space;
        resend_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size = value;
        resend_maximum_queue_size.value_namespace = name_space;
        resend_maximum_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size = value;
        order_queue_size.value_namespace = name_space;
        order_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check = value;
        packet_queue_check.value_namespace = name_space;
        packet_queue_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets = value;
        digest_secrets.value_namespace = name_space;
        digest_secrets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resends")
    {
        resends = value;
        resends.value_namespace = name_space;
        resends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent = value;
        zero_length_body_acknowledgement_sent.value_namespace = name_space;
        zero_length_body_acknowledgement_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets = value;
        total_out_of_order_drop_packets.value_namespace = name_space;
        total_out_of_order_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets = value;
        total_out_of_order_reorder_packets.value_namespace = name_space;
        total_out_of_order_reorder_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures = value;
        total_peer_authentication_failures.value_namespace = name_space;
        total_peer_authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
        is_congestion_control_enabled.value_namespace = name_space;
        is_congestion_control_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns.yfilter = yfilter;
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr.yfilter = yfilter;
    }
    if(value_path == "local-window-size")
    {
        local_window_size.yfilter = yfilter;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size.yfilter = yfilter;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size.yfilter = yfilter;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size.yfilter = yfilter;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size.yfilter = yfilter;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size.yfilter = yfilter;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size.yfilter = yfilter;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check.yfilter = yfilter;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets.yfilter = yfilter;
    }
    if(value_path == "resends")
    {
        resends.yfilter = yfilter;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent.yfilter = yfilter;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets.yfilter = yfilter;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets.yfilter = yfilter;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled.yfilter = yfilter;
    }
}

bool L2tpv2::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit-time" || name == "local-tunnel-id" || name == "local-address" || name == "remote-address" || name == "local-port" || name == "remote-port" || name == "protocol" || name == "is-pmtu-enabled" || name == "remote-tunnel-id" || name == "local-tunnel-name" || name == "remote-tunnel-name" || name == "class-name" || name == "active-sessions" || name == "sequence-ns" || name == "sequence-nr" || name == "local-window-size" || name == "remote-window-size" || name == "retransmission-time" || name == "maximum-retransmission-time" || name == "unsent-queue-size" || name == "unsent-maximum-queue-size" || name == "resend-queue-size" || name == "resend-maximum-queue-size" || name == "order-queue-size" || name == "packet-queue-check" || name == "digest-secrets" || name == "resends" || name == "zero-length-body-acknowledgement-sent" || name == "total-out-of-order-drop-packets" || name == "total-out-of-order-reorder-packets" || name == "total-peer-authentication-failures" || name == "is-tunnel-up" || name == "is-congestion-control-enabled")
        return true;
    return false;
}

L2tpv2::Tunnels::Tunnel::RetransmitTime::RetransmitTime()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "retransmit-time"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Tunnels::Tunnel::RetransmitTime::~RetransmitTime()
{
}

bool L2tpv2::Tunnels::Tunnel::RetransmitTime::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2tpv2::Tunnels::Tunnel::RetransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2tpv2::Tunnels::Tunnel::RetransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Tunnels::Tunnel::RetransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Tunnels::Tunnel::RetransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Tunnels::Tunnel::RetransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Tunnels::Tunnel::RetransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Tunnels::Tunnel::RetransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2tpv2::Tunnels::Tunnel::RetransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2tpv2::Sessions::Sessions()
    :
    session(this, {"local_tunnel_id", "local_session_id"})
{

    yang_name = "sessions"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Sessions::~Sessions()
{
}

bool L2tpv2::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2tpv2::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2tpv2::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<L2tpv2::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2tpv2::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

L2tpv2::Sessions::Session::Session()
    :
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_session_id{YType::uint32, "local-session-id"},
    local_ip_address{YType::str, "local-ip-address"},
    remote_ip_address{YType::str, "remote-ip-address"},
    l2tp_sh_sess_udp_lport{YType::uint16, "l2tp-sh-sess-udp-lport"},
    l2tp_sh_sess_udp_rport{YType::uint16, "l2tp-sh-sess-udp-rport"},
    protocol{YType::uint8, "protocol"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    call_serial_number{YType::uint32, "call-serial-number"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    remote_session_id{YType::uint32, "remote-session-id"},
    l2tp_sh_sess_tie_breaker_enabled{YType::uint8, "l2tp-sh-sess-tie-breaker-enabled"},
    l2tp_sh_sess_tie_breaker{YType::uint64, "l2tp-sh-sess-tie-breaker"},
    is_session_manual{YType::boolean, "is-session-manual"},
    is_session_up{YType::boolean, "is-session-up"},
    is_udp_checksum_enabled{YType::boolean, "is-udp-checksum-enabled"},
    is_sequencing_on{YType::boolean, "is-sequencing-on"},
    is_session_state_established{YType::boolean, "is-session-state-established"},
    is_session_locally_initiated{YType::boolean, "is-session-locally-initiated"},
    is_conditional_debug_enabled{YType::boolean, "is-conditional-debug-enabled"},
    unique_id{YType::uint32, "unique-id"},
    interface_name{YType::str, "interface-name"}
        ,
    session_application_data(std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData>())
{
    session_application_data->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Sessions::Session::~Session()
{
}

bool L2tpv2::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return local_tunnel_id.is_set
	|| local_session_id.is_set
	|| local_ip_address.is_set
	|| remote_ip_address.is_set
	|| l2tp_sh_sess_udp_lport.is_set
	|| l2tp_sh_sess_udp_rport.is_set
	|| protocol.is_set
	|| remote_tunnel_id.is_set
	|| call_serial_number.is_set
	|| local_tunnel_name.is_set
	|| remote_tunnel_name.is_set
	|| remote_session_id.is_set
	|| l2tp_sh_sess_tie_breaker_enabled.is_set
	|| l2tp_sh_sess_tie_breaker.is_set
	|| is_session_manual.is_set
	|| is_session_up.is_set
	|| is_udp_checksum_enabled.is_set
	|| is_sequencing_on.is_set
	|| is_session_state_established.is_set
	|| is_session_locally_initiated.is_set
	|| is_conditional_debug_enabled.is_set
	|| unique_id.is_set
	|| interface_name.is_set
	|| (session_application_data !=  nullptr && session_application_data->has_data());
}

bool L2tpv2::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(remote_ip_address.yfilter)
	|| ydk::is_set(l2tp_sh_sess_udp_lport.yfilter)
	|| ydk::is_set(l2tp_sh_sess_udp_rport.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(call_serial_number.yfilter)
	|| ydk::is_set(local_tunnel_name.yfilter)
	|| ydk::is_set(remote_tunnel_name.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(l2tp_sh_sess_tie_breaker_enabled.yfilter)
	|| ydk::is_set(l2tp_sh_sess_tie_breaker.yfilter)
	|| ydk::is_set(is_session_manual.yfilter)
	|| ydk::is_set(is_session_up.yfilter)
	|| ydk::is_set(is_udp_checksum_enabled.yfilter)
	|| ydk::is_set(is_sequencing_on.yfilter)
	|| ydk::is_set(is_session_state_established.yfilter)
	|| ydk::is_set(is_session_locally_initiated.yfilter)
	|| ydk::is_set(is_conditional_debug_enabled.yfilter)
	|| ydk::is_set(unique_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (session_application_data !=  nullptr && session_application_data->has_operation());
}

std::string L2tpv2::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(local_tunnel_id, "local-tunnel-id");
    ADD_KEY_TOKEN(local_session_id, "local-session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (remote_ip_address.is_set || is_set(remote_ip_address.yfilter)) leaf_name_data.push_back(remote_ip_address.get_name_leafdata());
    if (l2tp_sh_sess_udp_lport.is_set || is_set(l2tp_sh_sess_udp_lport.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_udp_lport.get_name_leafdata());
    if (l2tp_sh_sess_udp_rport.is_set || is_set(l2tp_sh_sess_udp_rport.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_udp_rport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (call_serial_number.is_set || is_set(call_serial_number.yfilter)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.yfilter)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.yfilter)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker_enabled.is_set || is_set(l2tp_sh_sess_tie_breaker_enabled.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker_enabled.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker.is_set || is_set(l2tp_sh_sess_tie_breaker.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker.get_name_leafdata());
    if (is_session_manual.is_set || is_set(is_session_manual.yfilter)) leaf_name_data.push_back(is_session_manual.get_name_leafdata());
    if (is_session_up.is_set || is_set(is_session_up.yfilter)) leaf_name_data.push_back(is_session_up.get_name_leafdata());
    if (is_udp_checksum_enabled.is_set || is_set(is_udp_checksum_enabled.yfilter)) leaf_name_data.push_back(is_udp_checksum_enabled.get_name_leafdata());
    if (is_sequencing_on.is_set || is_set(is_sequencing_on.yfilter)) leaf_name_data.push_back(is_sequencing_on.get_name_leafdata());
    if (is_session_state_established.is_set || is_set(is_session_state_established.yfilter)) leaf_name_data.push_back(is_session_state_established.get_name_leafdata());
    if (is_session_locally_initiated.is_set || is_set(is_session_locally_initiated.yfilter)) leaf_name_data.push_back(is_session_locally_initiated.get_name_leafdata());
    if (is_conditional_debug_enabled.is_set || is_set(is_conditional_debug_enabled.yfilter)) leaf_name_data.push_back(is_conditional_debug_enabled.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-application-data")
    {
        if(session_application_data == nullptr)
        {
            session_application_data = std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData>();
        }
        return session_application_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session_application_data != nullptr)
    {
        children["session-application-data"] = session_application_data;
    }

    return children;
}

void L2tpv2::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address = value;
        remote_ip_address.value_namespace = name_space;
        remote_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport = value;
        l2tp_sh_sess_udp_lport.value_namespace = name_space;
        l2tp_sh_sess_udp_lport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport = value;
        l2tp_sh_sess_udp_rport.value_namespace = name_space;
        l2tp_sh_sess_udp_rport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
        call_serial_number.value_namespace = name_space;
        call_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
        local_tunnel_name.value_namespace = name_space;
        local_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
        remote_tunnel_name.value_namespace = name_space;
        remote_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled = value;
        l2tp_sh_sess_tie_breaker_enabled.value_namespace = name_space;
        l2tp_sh_sess_tie_breaker_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker = value;
        l2tp_sh_sess_tie_breaker.value_namespace = name_space;
        l2tp_sh_sess_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual = value;
        is_session_manual.value_namespace = name_space;
        is_session_manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-up")
    {
        is_session_up = value;
        is_session_up.value_namespace = name_space;
        is_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled = value;
        is_udp_checksum_enabled.value_namespace = name_space;
        is_udp_checksum_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on = value;
        is_sequencing_on.value_namespace = name_space;
        is_sequencing_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established = value;
        is_session_state_established.value_namespace = name_space;
        is_session_state_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated = value;
        is_session_locally_initiated.value_namespace = name_space;
        is_session_locally_initiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled = value;
        is_conditional_debug_enabled.value_namespace = name_space;
        is_conditional_debug_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled.yfilter = yfilter;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual.yfilter = yfilter;
    }
    if(value_path == "is-session-up")
    {
        is_session_up.yfilter = yfilter;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled.yfilter = yfilter;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on.yfilter = yfilter;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established.yfilter = yfilter;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated.yfilter = yfilter;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2tpv2::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-application-data" || name == "local-tunnel-id" || name == "local-session-id" || name == "local-ip-address" || name == "remote-ip-address" || name == "l2tp-sh-sess-udp-lport" || name == "l2tp-sh-sess-udp-rport" || name == "protocol" || name == "remote-tunnel-id" || name == "call-serial-number" || name == "local-tunnel-name" || name == "remote-tunnel-name" || name == "remote-session-id" || name == "l2tp-sh-sess-tie-breaker-enabled" || name == "l2tp-sh-sess-tie-breaker" || name == "is-session-manual" || name == "is-session-up" || name == "is-udp-checksum-enabled" || name == "is-sequencing-on" || name == "is-session-state-established" || name == "is-session-locally-initiated" || name == "is-conditional-debug-enabled" || name == "unique-id" || name == "interface-name")
        return true;
    return false;
}

L2tpv2::Sessions::Session::SessionApplicationData::SessionApplicationData()
    :
    l2tp_sh_sess_app_type{YType::uint32, "l2tp-sh-sess-app-type"}
        ,
    xconnect(std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData::Xconnect>())
    , vpdn(std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData::Vpdn>())
{
    xconnect->parent = this;
    vpdn->parent = this;

    yang_name = "session-application-data"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Sessions::Session::SessionApplicationData::~SessionApplicationData()
{
}

bool L2tpv2::Sessions::Session::SessionApplicationData::has_data() const
{
    if (is_presence_container) return true;
    return l2tp_sh_sess_app_type.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (vpdn !=  nullptr && vpdn->has_data());
}

bool L2tpv2::Sessions::Session::SessionApplicationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_sh_sess_app_type.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (vpdn !=  nullptr && vpdn->has_operation());
}

std::string L2tpv2::Sessions::Session::SessionApplicationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-application-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Sessions::Session::SessionApplicationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_sh_sess_app_type.is_set || is_set(l2tp_sh_sess_app_type.yfilter)) leaf_name_data.push_back(l2tp_sh_sess_app_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Sessions::Session::SessionApplicationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "vpdn")
    {
        if(vpdn == nullptr)
        {
            vpdn = std::make_shared<L2tpv2::Sessions::Session::SessionApplicationData::Vpdn>();
        }
        return vpdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Sessions::Session::SessionApplicationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(vpdn != nullptr)
    {
        children["vpdn"] = vpdn;
    }

    return children;
}

void L2tpv2::Sessions::Session::SessionApplicationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type = value;
        l2tp_sh_sess_app_type.value_namespace = name_space;
        l2tp_sh_sess_app_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Sessions::Session::SessionApplicationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type.yfilter = yfilter;
    }
}

bool L2tpv2::Sessions::Session::SessionApplicationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "vpdn" || name == "l2tp-sh-sess-app-type")
        return true;
    return false;
}

L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::Xconnect()
    :
    circuit_name{YType::str, "circuit-name"},
    sessionvc_id{YType::uint32, "sessionvc-id"},
    is_circuit_state_up{YType::boolean, "is-circuit-state-up"},
    is_local_circuit_state_up{YType::boolean, "is-local-circuit-state-up"},
    is_remote_circuit_state_up{YType::boolean, "is-remote-circuit-state-up"},
    ipv6_protocol_tunneling{YType::boolean, "ipv6-protocol-tunneling"}
{

    yang_name = "xconnect"; yang_parent_name = "session-application-data"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::~Xconnect()
{
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return circuit_name.is_set
	|| sessionvc_id.is_set
	|| is_circuit_state_up.is_set
	|| is_local_circuit_state_up.is_set
	|| is_remote_circuit_state_up.is_set
	|| ipv6_protocol_tunneling.is_set;
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(circuit_name.yfilter)
	|| ydk::is_set(sessionvc_id.yfilter)
	|| ydk::is_set(is_circuit_state_up.yfilter)
	|| ydk::is_set(is_local_circuit_state_up.yfilter)
	|| ydk::is_set(is_remote_circuit_state_up.yfilter)
	|| ydk::is_set(ipv6_protocol_tunneling.yfilter);
}

std::string L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_name.is_set || is_set(circuit_name.yfilter)) leaf_name_data.push_back(circuit_name.get_name_leafdata());
    if (sessionvc_id.is_set || is_set(sessionvc_id.yfilter)) leaf_name_data.push_back(sessionvc_id.get_name_leafdata());
    if (is_circuit_state_up.is_set || is_set(is_circuit_state_up.yfilter)) leaf_name_data.push_back(is_circuit_state_up.get_name_leafdata());
    if (is_local_circuit_state_up.is_set || is_set(is_local_circuit_state_up.yfilter)) leaf_name_data.push_back(is_local_circuit_state_up.get_name_leafdata());
    if (is_remote_circuit_state_up.is_set || is_set(is_remote_circuit_state_up.yfilter)) leaf_name_data.push_back(is_remote_circuit_state_up.get_name_leafdata());
    if (ipv6_protocol_tunneling.is_set || is_set(ipv6_protocol_tunneling.yfilter)) leaf_name_data.push_back(ipv6_protocol_tunneling.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "circuit-name")
    {
        circuit_name = value;
        circuit_name.value_namespace = name_space;
        circuit_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id = value;
        sessionvc_id.value_namespace = name_space;
        sessionvc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up = value;
        is_circuit_state_up.value_namespace = name_space;
        is_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up = value;
        is_local_circuit_state_up.value_namespace = name_space;
        is_local_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up = value;
        is_remote_circuit_state_up.value_namespace = name_space;
        is_remote_circuit_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling = value;
        ipv6_protocol_tunneling.value_namespace = name_space;
        ipv6_protocol_tunneling.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "circuit-name")
    {
        circuit_name.yfilter = yfilter;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id.yfilter = yfilter;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling.yfilter = yfilter;
    }
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-name" || name == "sessionvc-id" || name == "is-circuit-state-up" || name == "is-local-circuit-state-up" || name == "is-remote-circuit-state-up" || name == "ipv6-protocol-tunneling")
        return true;
    return false;
}

L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::Vpdn()
    :
    username{YType::str, "username"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "vpdn"; yang_parent_name = "session-application-data"; is_top_level_class = false; has_list_ancestor = true; 
}

L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::~Vpdn()
{
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| interface_name.is_set;
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2tpv2::Sessions::Session::SessionApplicationData::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "interface-name")
        return true;
    return false;
}

L2tpv2::Session::Session()
    :
    unavailable(std::make_shared<L2tpv2::Session::Unavailable>())
{
    unavailable->parent = this;

    yang_name = "session"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Session::~Session()
{
}

bool L2tpv2::Session::has_data() const
{
    if (is_presence_container) return true;
    return (unavailable !=  nullptr && unavailable->has_data());
}

bool L2tpv2::Session::has_operation() const
{
    return is_set(yfilter)
	|| (unavailable !=  nullptr && unavailable->has_operation());
}

std::string L2tpv2::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unavailable")
    {
        if(unavailable == nullptr)
        {
            unavailable = std::make_shared<L2tpv2::Session::Unavailable>();
        }
        return unavailable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unavailable != nullptr)
    {
        children["unavailable"] = unavailable;
    }

    return children;
}

void L2tpv2::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2tpv2::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2tpv2::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unavailable")
        return true;
    return false;
}

L2tpv2::Session::Unavailable::Unavailable()
    :
    sessions_on_hold{YType::uint32, "sessions-on-hold"}
{

    yang_name = "unavailable"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

L2tpv2::Session::Unavailable::~Unavailable()
{
}

bool L2tpv2::Session::Unavailable::has_data() const
{
    if (is_presence_container) return true;
    return sessions_on_hold.is_set;
}

bool L2tpv2::Session::Unavailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions_on_hold.yfilter);
}

std::string L2tpv2::Session::Unavailable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/session/" << get_segment_path();
    return path_buffer.str();
}

std::string L2tpv2::Session::Unavailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unavailable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2tpv2::Session::Unavailable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions_on_hold.is_set || is_set(sessions_on_hold.yfilter)) leaf_name_data.push_back(sessions_on_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2tpv2::Session::Unavailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2tpv2::Session::Unavailable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2tpv2::Session::Unavailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold = value;
        sessions_on_hold.value_namespace = name_space;
        sessions_on_hold.value_namespace_prefix = name_space_prefix;
    }
}

void L2tpv2::Session::Unavailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold.yfilter = yfilter;
    }
}

bool L2tpv2::Session::Unavailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions-on-hold")
        return true;
    return false;
}

const Enum::YLeaf DigestHash::md5 {0, "md5"};
const Enum::YLeaf DigestHash::sha1 {1, "sha1"};


}
}

