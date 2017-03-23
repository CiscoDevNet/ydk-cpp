
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_35.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_39.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_36.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::MatchInfop()
{
    yang_name = "match-infop"; yang_parent_name = "class-map-bg";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::~MatchInfop()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::has_data() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::has_operation() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-infop";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchInfop' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-match-info-st")
    {
        for(auto const & c : class_match_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt>();
        c->parent = this;
        class_match_info_st.push_back(std::move(c));
        children[segment_path] = class_match_info_st.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::get_children()
{
    for (auto const & c : class_match_info_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::ClassMatchInfoSt()
    :
    flags{YType::uint32, "flags"}
    	,
    match_data(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>())
{
    match_data->parent = this;
    children["match-data"] = match_data;

    yang_name = "class-match-info-st"; yang_parent_name = "match-infop";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::~ClassMatchInfoSt()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_data() const
{
    return flags.is_set
	|| (match_data !=  nullptr && match_data->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| (match_data !=  nullptr && match_data->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match-info-st";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMatchInfoSt' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match-data")
    {
        if(match_data != nullptr)
        {
            children["match-data"] = match_data;
        }
        else
        {
            match_data = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>();
            match_data->parent = this;
            children["match-data"] = match_data;
        }
        return children.at("match-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_children()
{
    if(children.find("match-data") == children.end())
    {
        if(match_data != nullptr)
        {
            children["match-data"] = match_data;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MatchData()
    :
    authen_status{YType::enumeration, "authen-status"},
    fragment_type{YType::uint8, "fragment-type"},
    mlp_negotiated{YType::enumeration, "mlp-negotiated"},
    mpls_top_eos{YType::uint8, "mpls-top-eos"},
    type{YType::enumeration, "type"}
    	,
    access_interface(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>())
	,atm_clp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>())
	,auth_domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>())
	,auth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>())
	,auth_username(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>())
	,auth_username_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>())
	,avail_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>())
	,circuit_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>())
	,circuit_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>())
	,cos(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>())
	,cos_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>())
	,dei(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>())
	,dei_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>())
	,dhcp_client_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>())
	,dhcp_client_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>())
	,discard_class(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>())
	,dnis(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>())
	,dnis_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>())
	,domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>())
	,domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>())
	,dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>())
	,dst_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>())
	,dst_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>())
	,dst_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>())
	,dst_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>())
	,ether_service_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>())
	,ethertype(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>())
	,flow_key_data(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>())
	,flow_tag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>())
	,fr_de(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>())
	,fr_dlci(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>())
	,icmp_v4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>())
	,icmp_v6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>())
	,icmpv4_code(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>())
	,icmpv4_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>())
	,icmpv6_code(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>())
	,icmpv6_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>())
	,input_interface(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>())
	,input_intfhdl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>())
	,ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>())
	,ipv4_dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>())
	,ipv4_packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>())
	,ipv4_prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>())
	,ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>())
	,ipv6_dscp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>())
	,ipv6_packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>())
	,ipv6_prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>())
	,media_type(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>())
	,mpls_disp_ipv4_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>())
	,mpls_disp_ipv6_acl(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>())
	,mpls_exp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>())
	,mpls_exp_imp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>())
	,mpls_top_label(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>())
	,nas_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>())
	,packet_len(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>())
	,prec(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>())
	,proto(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>())
	,qos_group(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>())
	,remote_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>())
	,remote_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>())
	,service_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>())
	,service_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>())
	,src_addr_ipv4(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>())
	,src_addr_ipv6(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>())
	,src_addr_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>())
	,src_mac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>())
	,src_port(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>())
	,subs_protocol(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>())
	,tcp_flag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>())
	,timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>())
	,timer_regexp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>())
	,traffic_class(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>())
	,tunnel_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>())
	,tunnel_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>())
	,unauth_domain(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>())
	,unauth_domain_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>())
	,unauth_username(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>())
	,unauth_username_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>())
	,user_name(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>())
	,user_name_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>())
	,vendor_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>())
	,vendor_id_regex(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>())
	,vlan(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>())
	,vlan_inr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>())
{
    access_interface->parent = this;
    children["access-interface"] = access_interface;

    atm_clp->parent = this;
    children["atm-clp"] = atm_clp;

    auth_domain->parent = this;
    children["auth-domain"] = auth_domain;

    auth_domain_regex->parent = this;
    children["auth-domain-regex"] = auth_domain_regex;

    auth_username->parent = this;
    children["auth-username"] = auth_username;

    auth_username_regex->parent = this;
    children["auth-username-regex"] = auth_username_regex;

    avail_id->parent = this;
    children["avail-id"] = avail_id;

    circuit_id->parent = this;
    children["circuit-id"] = circuit_id;

    circuit_id_regex->parent = this;
    children["circuit-id-regex"] = circuit_id_regex;

    cos->parent = this;
    children["cos"] = cos;

    cos_inr->parent = this;
    children["cos-inr"] = cos_inr;

    dei->parent = this;
    children["dei"] = dei;

    dei_inr->parent = this;
    children["dei-inr"] = dei_inr;

    dhcp_client_id->parent = this;
    children["dhcp-client-id"] = dhcp_client_id;

    dhcp_client_id_regex->parent = this;
    children["dhcp-client-id-regex"] = dhcp_client_id_regex;

    discard_class->parent = this;
    children["discard-class"] = discard_class;

    dnis->parent = this;
    children["dnis"] = dnis;

    dnis_regex->parent = this;
    children["dnis-regex"] = dnis_regex;

    domain->parent = this;
    children["domain"] = domain;

    domain_regex->parent = this;
    children["domain-regex"] = domain_regex;

    dscp->parent = this;
    children["dscp"] = dscp;

    dst_addr_ipv4->parent = this;
    children["dst-addr-ipv4"] = dst_addr_ipv4;

    dst_addr_ipv6->parent = this;
    children["dst-addr-ipv6"] = dst_addr_ipv6;

    dst_mac->parent = this;
    children["dst-mac"] = dst_mac;

    dst_port->parent = this;
    children["dst-port"] = dst_port;

    ether_service_acl->parent = this;
    children["ether-service-acl"] = ether_service_acl;

    ethertype->parent = this;
    children["ethertype"] = ethertype;

    flow_key_data->parent = this;
    children["flow-key-data"] = flow_key_data;

    flow_tag->parent = this;
    children["flow-tag"] = flow_tag;

    fr_de->parent = this;
    children["fr-de"] = fr_de;

    fr_dlci->parent = this;
    children["fr-dlci"] = fr_dlci;

    icmp_v4->parent = this;
    children["icmp-v4"] = icmp_v4;

    icmp_v6->parent = this;
    children["icmp-v6"] = icmp_v6;

    icmpv4_code->parent = this;
    children["icmpv4-code"] = icmpv4_code;

    icmpv4_type->parent = this;
    children["icmpv4-type"] = icmpv4_type;

    icmpv6_code->parent = this;
    children["icmpv6-code"] = icmpv6_code;

    icmpv6_type->parent = this;
    children["icmpv6-type"] = icmpv6_type;

    input_interface->parent = this;
    children["input-interface"] = input_interface;

    input_intfhdl->parent = this;
    children["input-intfhdl"] = input_intfhdl;

    ipv4_acl->parent = this;
    children["ipv4-acl"] = ipv4_acl;

    ipv4_dscp->parent = this;
    children["ipv4-dscp"] = ipv4_dscp;

    ipv4_packet_len->parent = this;
    children["ipv4-packet-len"] = ipv4_packet_len;

    ipv4_prec->parent = this;
    children["ipv4-prec"] = ipv4_prec;

    ipv6_acl->parent = this;
    children["ipv6-acl"] = ipv6_acl;

    ipv6_dscp->parent = this;
    children["ipv6-dscp"] = ipv6_dscp;

    ipv6_packet_len->parent = this;
    children["ipv6-packet-len"] = ipv6_packet_len;

    ipv6_prec->parent = this;
    children["ipv6-prec"] = ipv6_prec;

    media_type->parent = this;
    children["media-type"] = media_type;

    mpls_disp_ipv4_acl->parent = this;
    children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;

    mpls_disp_ipv6_acl->parent = this;
    children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;

    mpls_exp->parent = this;
    children["mpls-exp"] = mpls_exp;

    mpls_exp_imp->parent = this;
    children["mpls-exp-imp"] = mpls_exp_imp;

    mpls_top_label->parent = this;
    children["mpls-top-label"] = mpls_top_label;

    nas_port->parent = this;
    children["nas-port"] = nas_port;

    packet_len->parent = this;
    children["packet-len"] = packet_len;

    prec->parent = this;
    children["prec"] = prec;

    proto->parent = this;
    children["proto"] = proto;

    qos_group->parent = this;
    children["qos-group"] = qos_group;

    remote_id->parent = this;
    children["remote-id"] = remote_id;

    remote_id_regex->parent = this;
    children["remote-id-regex"] = remote_id_regex;

    service_name->parent = this;
    children["service-name"] = service_name;

    service_name_regex->parent = this;
    children["service-name-regex"] = service_name_regex;

    src_addr_ipv4->parent = this;
    children["src-addr-ipv4"] = src_addr_ipv4;

    src_addr_ipv6->parent = this;
    children["src-addr-ipv6"] = src_addr_ipv6;

    src_addr_mac->parent = this;
    children["src-addr-mac"] = src_addr_mac;

    src_mac->parent = this;
    children["src-mac"] = src_mac;

    src_port->parent = this;
    children["src-port"] = src_port;

    subs_protocol->parent = this;
    children["subs-protocol"] = subs_protocol;

    tcp_flag->parent = this;
    children["tcp-flag"] = tcp_flag;

    timer->parent = this;
    children["timer"] = timer;

    timer_regexp->parent = this;
    children["timer-regexp"] = timer_regexp;

    traffic_class->parent = this;
    children["traffic-class"] = traffic_class;

    tunnel_name->parent = this;
    children["tunnel-name"] = tunnel_name;

    tunnel_name_regex->parent = this;
    children["tunnel-name-regex"] = tunnel_name_regex;

    unauth_domain->parent = this;
    children["unauth-domain"] = unauth_domain;

    unauth_domain_regex->parent = this;
    children["unauth-domain-regex"] = unauth_domain_regex;

    unauth_username->parent = this;
    children["unauth-username"] = unauth_username;

    unauth_username_regex->parent = this;
    children["unauth-username-regex"] = unauth_username_regex;

    user_name->parent = this;
    children["user-name"] = user_name;

    user_name_regex->parent = this;
    children["user-name-regex"] = user_name_regex;

    vendor_id->parent = this;
    children["vendor-id"] = vendor_id;

    vendor_id_regex->parent = this;
    children["vendor-id-regex"] = vendor_id_regex;

    vlan->parent = this;
    children["vlan"] = vlan;

    vlan_inr->parent = this;
    children["vlan-inr"] = vlan_inr;

    yang_name = "match-data"; yang_parent_name = "class-match-info-st";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::~MatchData()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_data() const
{
    return authen_status.is_set
	|| fragment_type.is_set
	|| mlp_negotiated.is_set
	|| mpls_top_eos.is_set
	|| type.is_set
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (atm_clp !=  nullptr && atm_clp->has_data())
	|| (auth_domain !=  nullptr && auth_domain->has_data())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_data())
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_data())
	|| (avail_id !=  nullptr && avail_id->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_data())
	|| (cos !=  nullptr && cos->has_data())
	|| (cos_inr !=  nullptr && cos_inr->has_data())
	|| (dei !=  nullptr && dei->has_data())
	|| (dei_inr !=  nullptr && dei_inr->has_data())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_data())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (dnis !=  nullptr && dnis->has_data())
	|| (dnis_regex !=  nullptr && dnis_regex->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_regex !=  nullptr && domain_regex->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_data())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_data())
	|| (dst_mac !=  nullptr && dst_mac->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_data())
	|| (ethertype !=  nullptr && ethertype->has_data())
	|| (flow_key_data !=  nullptr && flow_key_data->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data())
	|| (fr_de !=  nullptr && fr_de->has_data())
	|| (fr_dlci !=  nullptr && fr_dlci->has_data())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_data())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_data())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_data())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_data())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_data())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_data())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_data())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_data())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_data())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_data())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_data())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_data())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_data())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_data())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_data())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (packet_len !=  nullptr && packet_len->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (proto !=  nullptr && proto->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_data())
	|| (service_name !=  nullptr && service_name->has_data())
	|| (service_name_regex !=  nullptr && service_name_regex->has_data())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_data())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_data())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_data())
	|| (src_mac !=  nullptr && src_mac->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (subs_protocol !=  nullptr && subs_protocol->has_data())
	|| (tcp_flag !=  nullptr && tcp_flag->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (timer_regexp !=  nullptr && timer_regexp->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (tunnel_name !=  nullptr && tunnel_name->has_data())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_data())
	|| (unauth_domain !=  nullptr && unauth_domain->has_data())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_data())
	|| (unauth_username !=  nullptr && unauth_username->has_data())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_data())
	|| (user_name !=  nullptr && user_name->has_data())
	|| (user_name_regex !=  nullptr && user_name_regex->has_data())
	|| (vendor_id !=  nullptr && vendor_id->has_data())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (vlan_inr !=  nullptr && vlan_inr->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_status.operation)
	|| is_set(fragment_type.operation)
	|| is_set(mlp_negotiated.operation)
	|| is_set(mpls_top_eos.operation)
	|| is_set(type.operation)
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (atm_clp !=  nullptr && atm_clp->has_operation())
	|| (auth_domain !=  nullptr && auth_domain->has_operation())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_operation())
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_operation())
	|| (avail_id !=  nullptr && avail_id->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_operation())
	|| (cos !=  nullptr && cos->has_operation())
	|| (cos_inr !=  nullptr && cos_inr->has_operation())
	|| (dei !=  nullptr && dei->has_operation())
	|| (dei_inr !=  nullptr && dei_inr->has_operation())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_operation())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (dnis !=  nullptr && dnis->has_operation())
	|| (dnis_regex !=  nullptr && dnis_regex->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_regex !=  nullptr && domain_regex->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_operation())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_operation())
	|| (dst_mac !=  nullptr && dst_mac->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_operation())
	|| (ethertype !=  nullptr && ethertype->has_operation())
	|| (flow_key_data !=  nullptr && flow_key_data->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (fr_de !=  nullptr && fr_de->has_operation())
	|| (fr_dlci !=  nullptr && fr_dlci->has_operation())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_operation())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_operation())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_operation())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_operation())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_operation())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_operation())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_operation())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_operation())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_operation())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_operation())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_operation())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_operation())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_operation())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_operation())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_operation())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (packet_len !=  nullptr && packet_len->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (proto !=  nullptr && proto->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_operation())
	|| (service_name !=  nullptr && service_name->has_operation())
	|| (service_name_regex !=  nullptr && service_name_regex->has_operation())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_operation())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_operation())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_operation())
	|| (src_mac !=  nullptr && src_mac->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (subs_protocol !=  nullptr && subs_protocol->has_operation())
	|| (tcp_flag !=  nullptr && tcp_flag->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (timer_regexp !=  nullptr && timer_regexp->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (tunnel_name !=  nullptr && tunnel_name->has_operation())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_operation())
	|| (unauth_domain !=  nullptr && unauth_domain->has_operation())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_operation())
	|| (unauth_username !=  nullptr && unauth_username->has_operation())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_operation())
	|| (user_name !=  nullptr && user_name->has_operation())
	|| (user_name_regex !=  nullptr && user_name_regex->has_operation())
	|| (vendor_id !=  nullptr && vendor_id->has_operation())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (vlan_inr !=  nullptr && vlan_inr->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-data";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchData' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_status.is_set || is_set(authen_status.operation)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (fragment_type.is_set || is_set(fragment_type.operation)) leaf_name_data.push_back(fragment_type.get_name_leafdata());
    if (mlp_negotiated.is_set || is_set(mlp_negotiated.operation)) leaf_name_data.push_back(mlp_negotiated.get_name_leafdata());
    if (mpls_top_eos.is_set || is_set(mpls_top_eos.operation)) leaf_name_data.push_back(mpls_top_eos.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface")
    {
        if(access_interface != nullptr)
        {
            children["access-interface"] = access_interface;
        }
        else
        {
            access_interface = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>();
            access_interface->parent = this;
            children["access-interface"] = access_interface;
        }
        return children.at("access-interface");
    }

    if(child_yang_name == "atm-clp")
    {
        if(atm_clp != nullptr)
        {
            children["atm-clp"] = atm_clp;
        }
        else
        {
            atm_clp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>();
            atm_clp->parent = this;
            children["atm-clp"] = atm_clp;
        }
        return children.at("atm-clp");
    }

    if(child_yang_name == "auth-domain")
    {
        if(auth_domain != nullptr)
        {
            children["auth-domain"] = auth_domain;
        }
        else
        {
            auth_domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>();
            auth_domain->parent = this;
            children["auth-domain"] = auth_domain;
        }
        return children.at("auth-domain");
    }

    if(child_yang_name == "auth-domain-regex")
    {
        if(auth_domain_regex != nullptr)
        {
            children["auth-domain-regex"] = auth_domain_regex;
        }
        else
        {
            auth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>();
            auth_domain_regex->parent = this;
            children["auth-domain-regex"] = auth_domain_regex;
        }
        return children.at("auth-domain-regex");
    }

    if(child_yang_name == "auth-username")
    {
        if(auth_username != nullptr)
        {
            children["auth-username"] = auth_username;
        }
        else
        {
            auth_username = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>();
            auth_username->parent = this;
            children["auth-username"] = auth_username;
        }
        return children.at("auth-username");
    }

    if(child_yang_name == "auth-username-regex")
    {
        if(auth_username_regex != nullptr)
        {
            children["auth-username-regex"] = auth_username_regex;
        }
        else
        {
            auth_username_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>();
            auth_username_regex->parent = this;
            children["auth-username-regex"] = auth_username_regex;
        }
        return children.at("auth-username-regex");
    }

    if(child_yang_name == "avail-id")
    {
        if(avail_id != nullptr)
        {
            children["avail-id"] = avail_id;
        }
        else
        {
            avail_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>();
            avail_id->parent = this;
            children["avail-id"] = avail_id;
        }
        return children.at("avail-id");
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id != nullptr)
        {
            children["circuit-id"] = circuit_id;
        }
        else
        {
            circuit_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>();
            circuit_id->parent = this;
            children["circuit-id"] = circuit_id;
        }
        return children.at("circuit-id");
    }

    if(child_yang_name == "circuit-id-regex")
    {
        if(circuit_id_regex != nullptr)
        {
            children["circuit-id-regex"] = circuit_id_regex;
        }
        else
        {
            circuit_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>();
            circuit_id_regex->parent = this;
            children["circuit-id-regex"] = circuit_id_regex;
        }
        return children.at("circuit-id-regex");
    }

    if(child_yang_name == "cos")
    {
        if(cos != nullptr)
        {
            children["cos"] = cos;
        }
        else
        {
            cos = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>();
            cos->parent = this;
            children["cos"] = cos;
        }
        return children.at("cos");
    }

    if(child_yang_name == "cos-inr")
    {
        if(cos_inr != nullptr)
        {
            children["cos-inr"] = cos_inr;
        }
        else
        {
            cos_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>();
            cos_inr->parent = this;
            children["cos-inr"] = cos_inr;
        }
        return children.at("cos-inr");
    }

    if(child_yang_name == "dei")
    {
        if(dei != nullptr)
        {
            children["dei"] = dei;
        }
        else
        {
            dei = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>();
            dei->parent = this;
            children["dei"] = dei;
        }
        return children.at("dei");
    }

    if(child_yang_name == "dei-inr")
    {
        if(dei_inr != nullptr)
        {
            children["dei-inr"] = dei_inr;
        }
        else
        {
            dei_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>();
            dei_inr->parent = this;
            children["dei-inr"] = dei_inr;
        }
        return children.at("dei-inr");
    }

    if(child_yang_name == "dhcp-client-id")
    {
        if(dhcp_client_id != nullptr)
        {
            children["dhcp-client-id"] = dhcp_client_id;
        }
        else
        {
            dhcp_client_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>();
            dhcp_client_id->parent = this;
            children["dhcp-client-id"] = dhcp_client_id;
        }
        return children.at("dhcp-client-id");
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        if(dhcp_client_id_regex != nullptr)
        {
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
        else
        {
            dhcp_client_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>();
            dhcp_client_id_regex->parent = this;
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
        return children.at("dhcp-client-id-regex");
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class != nullptr)
        {
            children["discard-class"] = discard_class;
        }
        else
        {
            discard_class = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>();
            discard_class->parent = this;
            children["discard-class"] = discard_class;
        }
        return children.at("discard-class");
    }

    if(child_yang_name == "dnis")
    {
        if(dnis != nullptr)
        {
            children["dnis"] = dnis;
        }
        else
        {
            dnis = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>();
            dnis->parent = this;
            children["dnis"] = dnis;
        }
        return children.at("dnis");
    }

    if(child_yang_name == "dnis-regex")
    {
        if(dnis_regex != nullptr)
        {
            children["dnis-regex"] = dnis_regex;
        }
        else
        {
            dnis_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>();
            dnis_regex->parent = this;
            children["dnis-regex"] = dnis_regex;
        }
        return children.at("dnis-regex");
    }

    if(child_yang_name == "domain")
    {
        if(domain != nullptr)
        {
            children["domain"] = domain;
        }
        else
        {
            domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>();
            domain->parent = this;
            children["domain"] = domain;
        }
        return children.at("domain");
    }

    if(child_yang_name == "domain-regex")
    {
        if(domain_regex != nullptr)
        {
            children["domain-regex"] = domain_regex;
        }
        else
        {
            domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>();
            domain_regex->parent = this;
            children["domain-regex"] = domain_regex;
        }
        return children.at("domain-regex");
    }

    if(child_yang_name == "dscp")
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
        else
        {
            dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>();
            dscp->parent = this;
            children["dscp"] = dscp;
        }
        return children.at("dscp");
    }

    if(child_yang_name == "dst-addr-ipv4")
    {
        if(dst_addr_ipv4 != nullptr)
        {
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
        else
        {
            dst_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>();
            dst_addr_ipv4->parent = this;
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
        return children.at("dst-addr-ipv4");
    }

    if(child_yang_name == "dst-addr-ipv6")
    {
        if(dst_addr_ipv6 != nullptr)
        {
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
        else
        {
            dst_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>();
            dst_addr_ipv6->parent = this;
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
        return children.at("dst-addr-ipv6");
    }

    if(child_yang_name == "dst-mac")
    {
        if(dst_mac != nullptr)
        {
            children["dst-mac"] = dst_mac;
        }
        else
        {
            dst_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>();
            dst_mac->parent = this;
            children["dst-mac"] = dst_mac;
        }
        return children.at("dst-mac");
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port != nullptr)
        {
            children["dst-port"] = dst_port;
        }
        else
        {
            dst_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>();
            dst_port->parent = this;
            children["dst-port"] = dst_port;
        }
        return children.at("dst-port");
    }

    if(child_yang_name == "ether-service-acl")
    {
        if(ether_service_acl != nullptr)
        {
            children["ether-service-acl"] = ether_service_acl;
        }
        else
        {
            ether_service_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>();
            ether_service_acl->parent = this;
            children["ether-service-acl"] = ether_service_acl;
        }
        return children.at("ether-service-acl");
    }

    if(child_yang_name == "ethertype")
    {
        if(ethertype != nullptr)
        {
            children["ethertype"] = ethertype;
        }
        else
        {
            ethertype = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>();
            ethertype->parent = this;
            children["ethertype"] = ethertype;
        }
        return children.at("ethertype");
    }

    if(child_yang_name == "flow-key-data")
    {
        if(flow_key_data != nullptr)
        {
            children["flow-key-data"] = flow_key_data;
        }
        else
        {
            flow_key_data = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>();
            flow_key_data->parent = this;
            children["flow-key-data"] = flow_key_data;
        }
        return children.at("flow-key-data");
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
        else
        {
            flow_tag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>();
            flow_tag->parent = this;
            children["flow-tag"] = flow_tag;
        }
        return children.at("flow-tag");
    }

    if(child_yang_name == "fr-de")
    {
        if(fr_de != nullptr)
        {
            children["fr-de"] = fr_de;
        }
        else
        {
            fr_de = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>();
            fr_de->parent = this;
            children["fr-de"] = fr_de;
        }
        return children.at("fr-de");
    }

    if(child_yang_name == "fr-dlci")
    {
        if(fr_dlci != nullptr)
        {
            children["fr-dlci"] = fr_dlci;
        }
        else
        {
            fr_dlci = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>();
            fr_dlci->parent = this;
            children["fr-dlci"] = fr_dlci;
        }
        return children.at("fr-dlci");
    }

    if(child_yang_name == "icmp-v4")
    {
        if(icmp_v4 != nullptr)
        {
            children["icmp-v4"] = icmp_v4;
        }
        else
        {
            icmp_v4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>();
            icmp_v4->parent = this;
            children["icmp-v4"] = icmp_v4;
        }
        return children.at("icmp-v4");
    }

    if(child_yang_name == "icmp-v6")
    {
        if(icmp_v6 != nullptr)
        {
            children["icmp-v6"] = icmp_v6;
        }
        else
        {
            icmp_v6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>();
            icmp_v6->parent = this;
            children["icmp-v6"] = icmp_v6;
        }
        return children.at("icmp-v6");
    }

    if(child_yang_name == "icmpv4-code")
    {
        if(icmpv4_code != nullptr)
        {
            children["icmpv4-code"] = icmpv4_code;
        }
        else
        {
            icmpv4_code = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>();
            icmpv4_code->parent = this;
            children["icmpv4-code"] = icmpv4_code;
        }
        return children.at("icmpv4-code");
    }

    if(child_yang_name == "icmpv4-type")
    {
        if(icmpv4_type != nullptr)
        {
            children["icmpv4-type"] = icmpv4_type;
        }
        else
        {
            icmpv4_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>();
            icmpv4_type->parent = this;
            children["icmpv4-type"] = icmpv4_type;
        }
        return children.at("icmpv4-type");
    }

    if(child_yang_name == "icmpv6-code")
    {
        if(icmpv6_code != nullptr)
        {
            children["icmpv6-code"] = icmpv6_code;
        }
        else
        {
            icmpv6_code = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>();
            icmpv6_code->parent = this;
            children["icmpv6-code"] = icmpv6_code;
        }
        return children.at("icmpv6-code");
    }

    if(child_yang_name == "icmpv6-type")
    {
        if(icmpv6_type != nullptr)
        {
            children["icmpv6-type"] = icmpv6_type;
        }
        else
        {
            icmpv6_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>();
            icmpv6_type->parent = this;
            children["icmpv6-type"] = icmpv6_type;
        }
        return children.at("icmpv6-type");
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface != nullptr)
        {
            children["input-interface"] = input_interface;
        }
        else
        {
            input_interface = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>();
            input_interface->parent = this;
            children["input-interface"] = input_interface;
        }
        return children.at("input-interface");
    }

    if(child_yang_name == "input-intfhdl")
    {
        if(input_intfhdl != nullptr)
        {
            children["input-intfhdl"] = input_intfhdl;
        }
        else
        {
            input_intfhdl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>();
            input_intfhdl->parent = this;
            children["input-intfhdl"] = input_intfhdl;
        }
        return children.at("input-intfhdl");
    }

    if(child_yang_name == "ipv4-acl")
    {
        if(ipv4_acl != nullptr)
        {
            children["ipv4-acl"] = ipv4_acl;
        }
        else
        {
            ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>();
            ipv4_acl->parent = this;
            children["ipv4-acl"] = ipv4_acl;
        }
        return children.at("ipv4-acl");
    }

    if(child_yang_name == "ipv4-dscp")
    {
        if(ipv4_dscp != nullptr)
        {
            children["ipv4-dscp"] = ipv4_dscp;
        }
        else
        {
            ipv4_dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>();
            ipv4_dscp->parent = this;
            children["ipv4-dscp"] = ipv4_dscp;
        }
        return children.at("ipv4-dscp");
    }

    if(child_yang_name == "ipv4-packet-len")
    {
        if(ipv4_packet_len != nullptr)
        {
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
        else
        {
            ipv4_packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>();
            ipv4_packet_len->parent = this;
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
        return children.at("ipv4-packet-len");
    }

    if(child_yang_name == "ipv4-prec")
    {
        if(ipv4_prec != nullptr)
        {
            children["ipv4-prec"] = ipv4_prec;
        }
        else
        {
            ipv4_prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>();
            ipv4_prec->parent = this;
            children["ipv4-prec"] = ipv4_prec;
        }
        return children.at("ipv4-prec");
    }

    if(child_yang_name == "ipv6-acl")
    {
        if(ipv6_acl != nullptr)
        {
            children["ipv6-acl"] = ipv6_acl;
        }
        else
        {
            ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>();
            ipv6_acl->parent = this;
            children["ipv6-acl"] = ipv6_acl;
        }
        return children.at("ipv6-acl");
    }

    if(child_yang_name == "ipv6-dscp")
    {
        if(ipv6_dscp != nullptr)
        {
            children["ipv6-dscp"] = ipv6_dscp;
        }
        else
        {
            ipv6_dscp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>();
            ipv6_dscp->parent = this;
            children["ipv6-dscp"] = ipv6_dscp;
        }
        return children.at("ipv6-dscp");
    }

    if(child_yang_name == "ipv6-packet-len")
    {
        if(ipv6_packet_len != nullptr)
        {
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
        else
        {
            ipv6_packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>();
            ipv6_packet_len->parent = this;
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
        return children.at("ipv6-packet-len");
    }

    if(child_yang_name == "ipv6-prec")
    {
        if(ipv6_prec != nullptr)
        {
            children["ipv6-prec"] = ipv6_prec;
        }
        else
        {
            ipv6_prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>();
            ipv6_prec->parent = this;
            children["ipv6-prec"] = ipv6_prec;
        }
        return children.at("ipv6-prec");
    }

    if(child_yang_name == "media-type")
    {
        if(media_type != nullptr)
        {
            children["media-type"] = media_type;
        }
        else
        {
            media_type = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>();
            media_type->parent = this;
            children["media-type"] = media_type;
        }
        return children.at("media-type");
    }

    if(child_yang_name == "mpls-disp-ipv4-acl")
    {
        if(mpls_disp_ipv4_acl != nullptr)
        {
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
        else
        {
            mpls_disp_ipv4_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>();
            mpls_disp_ipv4_acl->parent = this;
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
        return children.at("mpls-disp-ipv4-acl");
    }

    if(child_yang_name == "mpls-disp-ipv6-acl")
    {
        if(mpls_disp_ipv6_acl != nullptr)
        {
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
        else
        {
            mpls_disp_ipv6_acl = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>();
            mpls_disp_ipv6_acl->parent = this;
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
        return children.at("mpls-disp-ipv6-acl");
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp;
        }
        else
        {
            mpls_exp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>();
            mpls_exp->parent = this;
            children["mpls-exp"] = mpls_exp;
        }
        return children.at("mpls-exp");
    }

    if(child_yang_name == "mpls-exp-imp")
    {
        if(mpls_exp_imp != nullptr)
        {
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
        else
        {
            mpls_exp_imp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>();
            mpls_exp_imp->parent = this;
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
        return children.at("mpls-exp-imp");
    }

    if(child_yang_name == "mpls-top-label")
    {
        if(mpls_top_label != nullptr)
        {
            children["mpls-top-label"] = mpls_top_label;
        }
        else
        {
            mpls_top_label = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>();
            mpls_top_label->parent = this;
            children["mpls-top-label"] = mpls_top_label;
        }
        return children.at("mpls-top-label");
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
        else
        {
            nas_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>();
            nas_port->parent = this;
            children["nas-port"] = nas_port;
        }
        return children.at("nas-port");
    }

    if(child_yang_name == "packet-len")
    {
        if(packet_len != nullptr)
        {
            children["packet-len"] = packet_len;
        }
        else
        {
            packet_len = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>();
            packet_len->parent = this;
            children["packet-len"] = packet_len;
        }
        return children.at("packet-len");
    }

    if(child_yang_name == "prec")
    {
        if(prec != nullptr)
        {
            children["prec"] = prec;
        }
        else
        {
            prec = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>();
            prec->parent = this;
            children["prec"] = prec;
        }
        return children.at("prec");
    }

    if(child_yang_name == "proto")
    {
        if(proto != nullptr)
        {
            children["proto"] = proto;
        }
        else
        {
            proto = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>();
            proto->parent = this;
            children["proto"] = proto;
        }
        return children.at("proto");
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group != nullptr)
        {
            children["qos-group"] = qos_group;
        }
        else
        {
            qos_group = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>();
            qos_group->parent = this;
            children["qos-group"] = qos_group;
        }
        return children.at("qos-group");
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
        else
        {
            remote_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>();
            remote_id->parent = this;
            children["remote-id"] = remote_id;
        }
        return children.at("remote-id");
    }

    if(child_yang_name == "remote-id-regex")
    {
        if(remote_id_regex != nullptr)
        {
            children["remote-id-regex"] = remote_id_regex;
        }
        else
        {
            remote_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>();
            remote_id_regex->parent = this;
            children["remote-id-regex"] = remote_id_regex;
        }
        return children.at("remote-id-regex");
    }

    if(child_yang_name == "service-name")
    {
        if(service_name != nullptr)
        {
            children["service-name"] = service_name;
        }
        else
        {
            service_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>();
            service_name->parent = this;
            children["service-name"] = service_name;
        }
        return children.at("service-name");
    }

    if(child_yang_name == "service-name-regex")
    {
        if(service_name_regex != nullptr)
        {
            children["service-name-regex"] = service_name_regex;
        }
        else
        {
            service_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>();
            service_name_regex->parent = this;
            children["service-name-regex"] = service_name_regex;
        }
        return children.at("service-name-regex");
    }

    if(child_yang_name == "src-addr-ipv4")
    {
        if(src_addr_ipv4 != nullptr)
        {
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
        else
        {
            src_addr_ipv4 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>();
            src_addr_ipv4->parent = this;
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
        return children.at("src-addr-ipv4");
    }

    if(child_yang_name == "src-addr-ipv6")
    {
        if(src_addr_ipv6 != nullptr)
        {
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
        else
        {
            src_addr_ipv6 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>();
            src_addr_ipv6->parent = this;
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
        return children.at("src-addr-ipv6");
    }

    if(child_yang_name == "src-addr-mac")
    {
        if(src_addr_mac != nullptr)
        {
            children["src-addr-mac"] = src_addr_mac;
        }
        else
        {
            src_addr_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>();
            src_addr_mac->parent = this;
            children["src-addr-mac"] = src_addr_mac;
        }
        return children.at("src-addr-mac");
    }

    if(child_yang_name == "src-mac")
    {
        if(src_mac != nullptr)
        {
            children["src-mac"] = src_mac;
        }
        else
        {
            src_mac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>();
            src_mac->parent = this;
            children["src-mac"] = src_mac;
        }
        return children.at("src-mac");
    }

    if(child_yang_name == "src-port")
    {
        if(src_port != nullptr)
        {
            children["src-port"] = src_port;
        }
        else
        {
            src_port = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>();
            src_port->parent = this;
            children["src-port"] = src_port;
        }
        return children.at("src-port");
    }

    if(child_yang_name == "subs-protocol")
    {
        if(subs_protocol != nullptr)
        {
            children["subs-protocol"] = subs_protocol;
        }
        else
        {
            subs_protocol = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>();
            subs_protocol->parent = this;
            children["subs-protocol"] = subs_protocol;
        }
        return children.at("subs-protocol");
    }

    if(child_yang_name == "tcp-flag")
    {
        if(tcp_flag != nullptr)
        {
            children["tcp-flag"] = tcp_flag;
        }
        else
        {
            tcp_flag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>();
            tcp_flag->parent = this;
            children["tcp-flag"] = tcp_flag;
        }
        return children.at("tcp-flag");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    if(child_yang_name == "timer-regexp")
    {
        if(timer_regexp != nullptr)
        {
            children["timer-regexp"] = timer_regexp;
        }
        else
        {
            timer_regexp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>();
            timer_regexp->parent = this;
            children["timer-regexp"] = timer_regexp;
        }
        return children.at("timer-regexp");
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class != nullptr)
        {
            children["traffic-class"] = traffic_class;
        }
        else
        {
            traffic_class = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>();
            traffic_class->parent = this;
            children["traffic-class"] = traffic_class;
        }
        return children.at("traffic-class");
    }

    if(child_yang_name == "tunnel-name")
    {
        if(tunnel_name != nullptr)
        {
            children["tunnel-name"] = tunnel_name;
        }
        else
        {
            tunnel_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>();
            tunnel_name->parent = this;
            children["tunnel-name"] = tunnel_name;
        }
        return children.at("tunnel-name");
    }

    if(child_yang_name == "tunnel-name-regex")
    {
        if(tunnel_name_regex != nullptr)
        {
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
        else
        {
            tunnel_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>();
            tunnel_name_regex->parent = this;
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
        return children.at("tunnel-name-regex");
    }

    if(child_yang_name == "unauth-domain")
    {
        if(unauth_domain != nullptr)
        {
            children["unauth-domain"] = unauth_domain;
        }
        else
        {
            unauth_domain = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>();
            unauth_domain->parent = this;
            children["unauth-domain"] = unauth_domain;
        }
        return children.at("unauth-domain");
    }

    if(child_yang_name == "unauth-domain-regex")
    {
        if(unauth_domain_regex != nullptr)
        {
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
        else
        {
            unauth_domain_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>();
            unauth_domain_regex->parent = this;
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
        return children.at("unauth-domain-regex");
    }

    if(child_yang_name == "unauth-username")
    {
        if(unauth_username != nullptr)
        {
            children["unauth-username"] = unauth_username;
        }
        else
        {
            unauth_username = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>();
            unauth_username->parent = this;
            children["unauth-username"] = unauth_username;
        }
        return children.at("unauth-username");
    }

    if(child_yang_name == "unauth-username-regex")
    {
        if(unauth_username_regex != nullptr)
        {
            children["unauth-username-regex"] = unauth_username_regex;
        }
        else
        {
            unauth_username_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>();
            unauth_username_regex->parent = this;
            children["unauth-username-regex"] = unauth_username_regex;
        }
        return children.at("unauth-username-regex");
    }

    if(child_yang_name == "user-name")
    {
        if(user_name != nullptr)
        {
            children["user-name"] = user_name;
        }
        else
        {
            user_name = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>();
            user_name->parent = this;
            children["user-name"] = user_name;
        }
        return children.at("user-name");
    }

    if(child_yang_name == "user-name-regex")
    {
        if(user_name_regex != nullptr)
        {
            children["user-name-regex"] = user_name_regex;
        }
        else
        {
            user_name_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>();
            user_name_regex->parent = this;
            children["user-name-regex"] = user_name_regex;
        }
        return children.at("user-name-regex");
    }

    if(child_yang_name == "vendor-id")
    {
        if(vendor_id != nullptr)
        {
            children["vendor-id"] = vendor_id;
        }
        else
        {
            vendor_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>();
            vendor_id->parent = this;
            children["vendor-id"] = vendor_id;
        }
        return children.at("vendor-id");
    }

    if(child_yang_name == "vendor-id-regex")
    {
        if(vendor_id_regex != nullptr)
        {
            children["vendor-id-regex"] = vendor_id_regex;
        }
        else
        {
            vendor_id_regex = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>();
            vendor_id_regex->parent = this;
            children["vendor-id-regex"] = vendor_id_regex;
        }
        return children.at("vendor-id-regex");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    if(child_yang_name == "vlan-inr")
    {
        if(vlan_inr != nullptr)
        {
            children["vlan-inr"] = vlan_inr;
        }
        else
        {
            vlan_inr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>();
            vlan_inr->parent = this;
            children["vlan-inr"] = vlan_inr;
        }
        return children.at("vlan-inr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_children()
{
    if(children.find("access-interface") == children.end())
    {
        if(access_interface != nullptr)
        {
            children["access-interface"] = access_interface;
        }
    }

    if(children.find("atm-clp") == children.end())
    {
        if(atm_clp != nullptr)
        {
            children["atm-clp"] = atm_clp;
        }
    }

    if(children.find("auth-domain") == children.end())
    {
        if(auth_domain != nullptr)
        {
            children["auth-domain"] = auth_domain;
        }
    }

    if(children.find("auth-domain-regex") == children.end())
    {
        if(auth_domain_regex != nullptr)
        {
            children["auth-domain-regex"] = auth_domain_regex;
        }
    }

    if(children.find("auth-username") == children.end())
    {
        if(auth_username != nullptr)
        {
            children["auth-username"] = auth_username;
        }
    }

    if(children.find("auth-username-regex") == children.end())
    {
        if(auth_username_regex != nullptr)
        {
            children["auth-username-regex"] = auth_username_regex;
        }
    }

    if(children.find("avail-id") == children.end())
    {
        if(avail_id != nullptr)
        {
            children["avail-id"] = avail_id;
        }
    }

    if(children.find("circuit-id") == children.end())
    {
        if(circuit_id != nullptr)
        {
            children["circuit-id"] = circuit_id;
        }
    }

    if(children.find("circuit-id-regex") == children.end())
    {
        if(circuit_id_regex != nullptr)
        {
            children["circuit-id-regex"] = circuit_id_regex;
        }
    }

    if(children.find("cos") == children.end())
    {
        if(cos != nullptr)
        {
            children["cos"] = cos;
        }
    }

    if(children.find("cos-inr") == children.end())
    {
        if(cos_inr != nullptr)
        {
            children["cos-inr"] = cos_inr;
        }
    }

    if(children.find("dei") == children.end())
    {
        if(dei != nullptr)
        {
            children["dei"] = dei;
        }
    }

    if(children.find("dei-inr") == children.end())
    {
        if(dei_inr != nullptr)
        {
            children["dei-inr"] = dei_inr;
        }
    }

    if(children.find("dhcp-client-id") == children.end())
    {
        if(dhcp_client_id != nullptr)
        {
            children["dhcp-client-id"] = dhcp_client_id;
        }
    }

    if(children.find("dhcp-client-id-regex") == children.end())
    {
        if(dhcp_client_id_regex != nullptr)
        {
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
    }

    if(children.find("discard-class") == children.end())
    {
        if(discard_class != nullptr)
        {
            children["discard-class"] = discard_class;
        }
    }

    if(children.find("dnis") == children.end())
    {
        if(dnis != nullptr)
        {
            children["dnis"] = dnis;
        }
    }

    if(children.find("dnis-regex") == children.end())
    {
        if(dnis_regex != nullptr)
        {
            children["dnis-regex"] = dnis_regex;
        }
    }

    if(children.find("domain") == children.end())
    {
        if(domain != nullptr)
        {
            children["domain"] = domain;
        }
    }

    if(children.find("domain-regex") == children.end())
    {
        if(domain_regex != nullptr)
        {
            children["domain-regex"] = domain_regex;
        }
    }

    if(children.find("dscp") == children.end())
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
    }

    if(children.find("dst-addr-ipv4") == children.end())
    {
        if(dst_addr_ipv4 != nullptr)
        {
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
    }

    if(children.find("dst-addr-ipv6") == children.end())
    {
        if(dst_addr_ipv6 != nullptr)
        {
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
    }

    if(children.find("dst-mac") == children.end())
    {
        if(dst_mac != nullptr)
        {
            children["dst-mac"] = dst_mac;
        }
    }

    if(children.find("dst-port") == children.end())
    {
        if(dst_port != nullptr)
        {
            children["dst-port"] = dst_port;
        }
    }

    if(children.find("ether-service-acl") == children.end())
    {
        if(ether_service_acl != nullptr)
        {
            children["ether-service-acl"] = ether_service_acl;
        }
    }

    if(children.find("ethertype") == children.end())
    {
        if(ethertype != nullptr)
        {
            children["ethertype"] = ethertype;
        }
    }

    if(children.find("flow-key-data") == children.end())
    {
        if(flow_key_data != nullptr)
        {
            children["flow-key-data"] = flow_key_data;
        }
    }

    if(children.find("flow-tag") == children.end())
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
    }

    if(children.find("fr-de") == children.end())
    {
        if(fr_de != nullptr)
        {
            children["fr-de"] = fr_de;
        }
    }

    if(children.find("fr-dlci") == children.end())
    {
        if(fr_dlci != nullptr)
        {
            children["fr-dlci"] = fr_dlci;
        }
    }

    if(children.find("icmp-v4") == children.end())
    {
        if(icmp_v4 != nullptr)
        {
            children["icmp-v4"] = icmp_v4;
        }
    }

    if(children.find("icmp-v6") == children.end())
    {
        if(icmp_v6 != nullptr)
        {
            children["icmp-v6"] = icmp_v6;
        }
    }

    if(children.find("icmpv4-code") == children.end())
    {
        if(icmpv4_code != nullptr)
        {
            children["icmpv4-code"] = icmpv4_code;
        }
    }

    if(children.find("icmpv4-type") == children.end())
    {
        if(icmpv4_type != nullptr)
        {
            children["icmpv4-type"] = icmpv4_type;
        }
    }

    if(children.find("icmpv6-code") == children.end())
    {
        if(icmpv6_code != nullptr)
        {
            children["icmpv6-code"] = icmpv6_code;
        }
    }

    if(children.find("icmpv6-type") == children.end())
    {
        if(icmpv6_type != nullptr)
        {
            children["icmpv6-type"] = icmpv6_type;
        }
    }

    if(children.find("input-interface") == children.end())
    {
        if(input_interface != nullptr)
        {
            children["input-interface"] = input_interface;
        }
    }

    if(children.find("input-intfhdl") == children.end())
    {
        if(input_intfhdl != nullptr)
        {
            children["input-intfhdl"] = input_intfhdl;
        }
    }

    if(children.find("ipv4-acl") == children.end())
    {
        if(ipv4_acl != nullptr)
        {
            children["ipv4-acl"] = ipv4_acl;
        }
    }

    if(children.find("ipv4-dscp") == children.end())
    {
        if(ipv4_dscp != nullptr)
        {
            children["ipv4-dscp"] = ipv4_dscp;
        }
    }

    if(children.find("ipv4-packet-len") == children.end())
    {
        if(ipv4_packet_len != nullptr)
        {
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
    }

    if(children.find("ipv4-prec") == children.end())
    {
        if(ipv4_prec != nullptr)
        {
            children["ipv4-prec"] = ipv4_prec;
        }
    }

    if(children.find("ipv6-acl") == children.end())
    {
        if(ipv6_acl != nullptr)
        {
            children["ipv6-acl"] = ipv6_acl;
        }
    }

    if(children.find("ipv6-dscp") == children.end())
    {
        if(ipv6_dscp != nullptr)
        {
            children["ipv6-dscp"] = ipv6_dscp;
        }
    }

    if(children.find("ipv6-packet-len") == children.end())
    {
        if(ipv6_packet_len != nullptr)
        {
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
    }

    if(children.find("ipv6-prec") == children.end())
    {
        if(ipv6_prec != nullptr)
        {
            children["ipv6-prec"] = ipv6_prec;
        }
    }

    if(children.find("media-type") == children.end())
    {
        if(media_type != nullptr)
        {
            children["media-type"] = media_type;
        }
    }

    if(children.find("mpls-disp-ipv4-acl") == children.end())
    {
        if(mpls_disp_ipv4_acl != nullptr)
        {
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
    }

    if(children.find("mpls-disp-ipv6-acl") == children.end())
    {
        if(mpls_disp_ipv6_acl != nullptr)
        {
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
    }

    if(children.find("mpls-exp") == children.end())
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp;
        }
    }

    if(children.find("mpls-exp-imp") == children.end())
    {
        if(mpls_exp_imp != nullptr)
        {
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
    }

    if(children.find("mpls-top-label") == children.end())
    {
        if(mpls_top_label != nullptr)
        {
            children["mpls-top-label"] = mpls_top_label;
        }
    }

    if(children.find("nas-port") == children.end())
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
    }

    if(children.find("packet-len") == children.end())
    {
        if(packet_len != nullptr)
        {
            children["packet-len"] = packet_len;
        }
    }

    if(children.find("prec") == children.end())
    {
        if(prec != nullptr)
        {
            children["prec"] = prec;
        }
    }

    if(children.find("proto") == children.end())
    {
        if(proto != nullptr)
        {
            children["proto"] = proto;
        }
    }

    if(children.find("qos-group") == children.end())
    {
        if(qos_group != nullptr)
        {
            children["qos-group"] = qos_group;
        }
    }

    if(children.find("remote-id") == children.end())
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
    }

    if(children.find("remote-id-regex") == children.end())
    {
        if(remote_id_regex != nullptr)
        {
            children["remote-id-regex"] = remote_id_regex;
        }
    }

    if(children.find("service-name") == children.end())
    {
        if(service_name != nullptr)
        {
            children["service-name"] = service_name;
        }
    }

    if(children.find("service-name-regex") == children.end())
    {
        if(service_name_regex != nullptr)
        {
            children["service-name-regex"] = service_name_regex;
        }
    }

    if(children.find("src-addr-ipv4") == children.end())
    {
        if(src_addr_ipv4 != nullptr)
        {
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
    }

    if(children.find("src-addr-ipv6") == children.end())
    {
        if(src_addr_ipv6 != nullptr)
        {
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
    }

    if(children.find("src-addr-mac") == children.end())
    {
        if(src_addr_mac != nullptr)
        {
            children["src-addr-mac"] = src_addr_mac;
        }
    }

    if(children.find("src-mac") == children.end())
    {
        if(src_mac != nullptr)
        {
            children["src-mac"] = src_mac;
        }
    }

    if(children.find("src-port") == children.end())
    {
        if(src_port != nullptr)
        {
            children["src-port"] = src_port;
        }
    }

    if(children.find("subs-protocol") == children.end())
    {
        if(subs_protocol != nullptr)
        {
            children["subs-protocol"] = subs_protocol;
        }
    }

    if(children.find("tcp-flag") == children.end())
    {
        if(tcp_flag != nullptr)
        {
            children["tcp-flag"] = tcp_flag;
        }
    }

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    if(children.find("timer-regexp") == children.end())
    {
        if(timer_regexp != nullptr)
        {
            children["timer-regexp"] = timer_regexp;
        }
    }

    if(children.find("traffic-class") == children.end())
    {
        if(traffic_class != nullptr)
        {
            children["traffic-class"] = traffic_class;
        }
    }

    if(children.find("tunnel-name") == children.end())
    {
        if(tunnel_name != nullptr)
        {
            children["tunnel-name"] = tunnel_name;
        }
    }

    if(children.find("tunnel-name-regex") == children.end())
    {
        if(tunnel_name_regex != nullptr)
        {
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
    }

    if(children.find("unauth-domain") == children.end())
    {
        if(unauth_domain != nullptr)
        {
            children["unauth-domain"] = unauth_domain;
        }
    }

    if(children.find("unauth-domain-regex") == children.end())
    {
        if(unauth_domain_regex != nullptr)
        {
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
    }

    if(children.find("unauth-username") == children.end())
    {
        if(unauth_username != nullptr)
        {
            children["unauth-username"] = unauth_username;
        }
    }

    if(children.find("unauth-username-regex") == children.end())
    {
        if(unauth_username_regex != nullptr)
        {
            children["unauth-username-regex"] = unauth_username_regex;
        }
    }

    if(children.find("user-name") == children.end())
    {
        if(user_name != nullptr)
        {
            children["user-name"] = user_name;
        }
    }

    if(children.find("user-name-regex") == children.end())
    {
        if(user_name_regex != nullptr)
        {
            children["user-name-regex"] = user_name_regex;
        }
    }

    if(children.find("vendor-id") == children.end())
    {
        if(vendor_id != nullptr)
        {
            children["vendor-id"] = vendor_id;
        }
    }

    if(children.find("vendor-id-regex") == children.end())
    {
        if(vendor_id_regex != nullptr)
        {
            children["vendor-id-regex"] = vendor_id_regex;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    if(children.find("vlan-inr") == children.end())
    {
        if(vlan_inr != nullptr)
        {
            children["vlan-inr"] = vlan_inr;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-status")
    {
        authen_status = value;
    }
    if(value_path == "fragment-type")
    {
        fragment_type = value;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated = value;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
{
    yang_name = "ipv4-dscp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::~Ipv4Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
{
    yang_name = "ipv6-dscp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::~Ipv6Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Dscp()
{
    yang_name = "dscp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::~Dscp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "dscp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "ipv4-prec"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::~Ipv4Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "ipv6-prec"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::~Ipv6Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "prec"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::~Prec()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "discard-class"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::~DiscardClass()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
{
    yang_name = "qos-group"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::~QosGroup()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroup' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
{
    yang_name = "traffic-class"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::~TrafficClass()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
{
    yang_name = "proto"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::~Proto()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proto' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "proto";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{
    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{
    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
{
    yang_name = "packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::~PacketLen()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{
    yang_name = "flow-tag"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    match_any{YType::boolean, "match-any"},
    value_{YType::uint16, "value"}
{
    yang_name = "tcp-flag"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    return match_any.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(operation)
	|| is_set(match_any.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpFlag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_any.is_set || is_set(match_any.operation)) leaf_name_data.push_back(match_any.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-any")
    {
        match_any = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{
    yang_name = "icmpv4-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{
    yang_name = "icmpv4-code"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{
    yang_name = "icmpv6-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{
    yang_name = "icmpv6-code"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::~MplsExp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::~MplsExpImp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpImp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::~MplsDispIpv4Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::~MplsDispIpv6Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
{
    yang_name = "mpls-top-label"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::~MplsTopLabel()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_data() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_operation() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTopLabel' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint32_rng_array")
    {
        for(auto const & c : uint32_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array>();
        c->parent = this;
        uint32_rng_array.push_back(std::move(c));
        children[segment_path] = uint32_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children()
{
    for (auto const & c : uint32_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::Uint32_Rng_Array()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::~Uint32_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint32_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::~Cos()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::~CosInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::~Dei()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dei' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::~DeiInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeiInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
{
    yang_name = "vlan"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::~Vlan()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-id-array")
    {
        for(auto const & c : vlan_id_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        c->parent = this;
        vlan_id_array.push_back(std::move(c));
        children[segment_path] = vlan_id_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children()
{
    for (auto const & c : vlan_id_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    mask{YType::uint16, "mask"},
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "vlan-id-array"; yang_parent_name = "vlan";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    return mask.is_set
	|| max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanIdArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
{
    yang_name = "vlan-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::~VlanInr()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{
    yang_name = "fr-dlci"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDlci' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "src-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::~SrcMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "dst-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "atm-clp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::~AtmClp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmClp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "fr-de"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDe' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv4-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv6-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ether-service-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherServiceAcl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "avail-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::~AvailId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvailId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "media-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "subs-protocol"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::~SubsProtocol()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubsProtocol' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::~Dnis()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dnis' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::~DnisRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnisRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
{
    yang_name = "domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::~Domain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
{
    yang_name = "domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::~DomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain-regex";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
{
    yang_name = "nas-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::~NasPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_data() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_operation() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nas-port-array")
    {
        for(auto const & c : nas_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        c->parent = this;
        nas_port_array.push_back(std::move(c));
        children[segment_path] = nas_port_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children()
{
    for (auto const & c : nas_port_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    operator_{YType::enumeration, "operator"},
    sub_id{YType::enumeration, "sub-id"},
    value_{YType::uint32, "value"}
{
    yang_name = "nas-port-array"; yang_parent_name = "nas-port";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    return operator_.is_set
	|| sub_id.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_.operation)
	|| is_set(sub_id.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPortArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.operation)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::~ServiceName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::~ServiceNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
{
    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::~SrcAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
{
    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::~DstAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4-addr-array"; yang_parent_name = "dst-addr-ipv4";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::SrcAddrIpv6()
{
    yang_name = "src-addr-ipv6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::~SrcAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrIpv6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(std::move(c));
        children[segment_path] = ipv6_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_children()
{
    for (auto const & c : ipv6_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-addr-array"; yang_parent_name = "src-addr-ipv6";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::DstAddrIpv6()
{
    yang_name = "dst-addr-ipv6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::~DstAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstAddrIpv6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(std::move(c));
        children[segment_path] = ipv6_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_children()
{
    for (auto const & c : ipv6_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-addr-array"; yang_parent_name = "dst-addr-ipv6";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::SrcAddrMac()
{
    yang_name = "src-addr-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::~SrcAddrMac()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_data() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_operation() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-addr-array")
    {
        for(auto const & c : mac_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray>();
        c->parent = this;
        mac_addr_array.push_back(std::move(c));
        children[segment_path] = mac_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_children()
{
    for (auto const & c : mac_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::MacAddrArray()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "mac-addr-array"; yang_parent_name = "src-addr-mac";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::~MacAddrArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::Timer()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "timer"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::~Timer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::TimerRegexp()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "timer-regexp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::~TimerRegexp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-regexp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimerRegexp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::TunnelName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "tunnel-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::~TunnelName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::TunnelNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "tunnel-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::~TunnelNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::UserName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "user-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::~UserName()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::UserNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "user-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::~UserNameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::AuthUsername()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-username"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::~AuthUsername()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthUsername' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::AuthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-username-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::~AuthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthUsernameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::UnauthUsername()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-username"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::~UnauthUsername()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthUsername' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::UnauthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-username-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::~UnauthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthUsernameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::AuthDomain()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::~AuthDomain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthDomain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::AuthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::~AuthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthDomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::UnauthDomain()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::~UnauthDomain()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthDomain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::UnauthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::~UnauthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthDomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::VendorId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::~VendorId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VendorId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::VendorIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::~VendorIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VendorIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::AccessInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "access-interface"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::~AccessInterface()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterface' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "input-interface"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputInterface' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{
    yang_name = "input-intfhdl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint64_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputIntfhdl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint64_array_name_datas = uint64_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint64_array_name_datas.begin(), uint64_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
{
    yang_name = "ethertype"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethertype' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    idle_timeout{YType::uint16, "idle-timeout"},
    max_count{YType::uint16, "max-count"}
    	,
    flow_keys(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;
    children["flow-keys"] = flow_keys;

    yang_name = "flow-key-data"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    return idle_timeout.is_set
	|| max_count.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_timeout.operation)
	|| is_set(max_count.operation)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowKeyData' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (max_count.is_set || is_set(max_count.operation)) leaf_name_data.push_back(max_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-keys")
    {
        if(flow_keys != nullptr)
        {
            children["flow-keys"] = flow_keys;
        }
        else
        {
            flow_keys = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
            flow_keys->parent = this;
            children["flow-keys"] = flow_keys;
        }
        return children.at("flow-keys");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children()
{
    if(children.find("flow-keys") == children.end())
    {
        if(flow_keys != nullptr)
        {
            children["flow-keys"] = flow_keys;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "max-count")
    {
        max_count = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{
    yang_name = "flow-keys"; yang_parent_name = "flow-key-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(operation)
	|| is_set(keys.operation)
	|| is_set(num.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowKeys' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keys.is_set || is_set(keys.operation)) leaf_name_data.push_back(keys.get_name_leafdata());
    if (num.is_set || is_set(num.operation)) leaf_name_data.push_back(num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keys")
    {
        keys = value;
    }
    if(value_path == "num")
    {
        num = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::DhcpClientId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpClientId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpClientIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::CircuitId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::~CircuitId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::CircuitIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::~CircuitIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::RemoteId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::~RemoteId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::RemoteIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::~RemoteIdRegex()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::SrcPort()
{
    yang_name = "src-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::~SrcPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "src-port";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
{
    yang_name = "dst-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::ActInfop()
{
    yang_name = "act-infop"; yang_parent_name = "policy-class-info-bg";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::~ActInfop()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_data() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-infop";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActInfop' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-action-info-st")
    {
        for(auto const & c : policy_action_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt>();
        c->parent = this;
        policy_action_info_st.push_back(std::move(c));
        children[segment_path] = policy_action_info_st.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_children()
{
    for (auto const & c : policy_action_info_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::PolicyActionInfoSt()
    :
    flags{YType::uint16, "flags"},
    seq{YType::uint16, "seq"}
    	,
    actp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>())
{
    actp->parent = this;
    children["actp"] = actp;

    yang_name = "policy-action-info-st"; yang_parent_name = "act-infop";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::~PolicyActionInfoSt()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_data() const
{
    return flags.is_set
	|| seq.is_set
	|| (actp !=  nullptr && actp->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(seq.operation)
	|| (actp !=  nullptr && actp->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-action-info-st";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyActionInfoSt' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (seq.is_set || is_set(seq.operation)) leaf_name_data.push_back(seq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "actp")
    {
        if(actp != nullptr)
        {
            children["actp"] = actp;
        }
        else
        {
            actp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>();
            actp->parent = this;
            children["actp"] = actp;
        }
        return children.at("actp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_children()
{
    if(children.find("actp") == children.end())
    {
        if(actp != nullptr)
        {
            children["actp"] = actp;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "seq")
    {
        seq = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Actp()
    :
    data_p{YType::uint32, "data-p"},
    type{YType::enumeration, "type"}
    	,
    accounting_event_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>())
	,acct_aaa_list(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>())
	,act_template(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>())
	,afm_react(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>())
	,authen_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>())
	,authorize_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>())
	,bwrem(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>())
	,cac(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>())
	,child_policy(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>())
	,collect_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>())
	,copy(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>())
	,deact_template(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>())
	,decode_id(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>())
	,encap(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>())
	,flow_parm(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>())
	,fmm(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>())
	,httpr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>())
	,ipcbr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>())
	,ipv4_nh(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>())
	,ipv6_nh(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>())
	,mark(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>())
	,mark2(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>())
	,mdi(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>())
	,mdi_rtp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>())
	,min_bw(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>())
	,out_intf(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>())
	,pbf(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>())
	,pfc(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>())
	,police(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>())
	,prepaid_cfg(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>())
	,prio(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>())
	,proxy_aaa(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>())
	,punt(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>())
	,qlimit(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>())
	,query_ancp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>())
	,redirect(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>())
	,rtp(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>())
	,rtp_j2k(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>())
	,rtp_mmr(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>())
	,rtp_voice(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>())
	,serv_func(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>())
	,set_timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>())
	,sfrag(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>())
	,shape(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>())
	,stop_timer(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>())
	,timeout_idle(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>())
	,wred(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>())
{
    accounting_event_aaa->parent = this;
    children["accounting-event-aaa"] = accounting_event_aaa;

    acct_aaa_list->parent = this;
    children["acct-aaa-list"] = acct_aaa_list;

    act_template->parent = this;
    children["act-template"] = act_template;

    afm_react->parent = this;
    children["afm-react"] = afm_react;

    authen_aaa->parent = this;
    children["authen-aaa"] = authen_aaa;

    authorize_id->parent = this;
    children["authorize-id"] = authorize_id;

    bwrem->parent = this;
    children["bwrem"] = bwrem;

    cac->parent = this;
    children["cac"] = cac;

    child_policy->parent = this;
    children["child-policy"] = child_policy;

    collect_id->parent = this;
    children["collect-id"] = collect_id;

    copy->parent = this;
    children["copy"] = copy;

    deact_template->parent = this;
    children["deact-template"] = deact_template;

    decode_id->parent = this;
    children["decode-id"] = decode_id;

    encap->parent = this;
    children["encap"] = encap;

    flow_parm->parent = this;
    children["flow-parm"] = flow_parm;

    fmm->parent = this;
    children["fmm"] = fmm;

    httpr->parent = this;
    children["httpr"] = httpr;

    ipcbr->parent = this;
    children["ipcbr"] = ipcbr;

    ipv4_nh->parent = this;
    children["ipv4-nh"] = ipv4_nh;

    ipv6_nh->parent = this;
    children["ipv6-nh"] = ipv6_nh;

    mark->parent = this;
    children["mark"] = mark;

    mark2->parent = this;
    children["mark2"] = mark2;

    mdi->parent = this;
    children["mdi"] = mdi;

    mdi_rtp->parent = this;
    children["mdi-rtp"] = mdi_rtp;

    min_bw->parent = this;
    children["min-bw"] = min_bw;

    out_intf->parent = this;
    children["out-intf"] = out_intf;

    pbf->parent = this;
    children["pbf"] = pbf;

    pfc->parent = this;
    children["pfc"] = pfc;

    police->parent = this;
    children["police"] = police;

    prepaid_cfg->parent = this;
    children["prepaid-cfg"] = prepaid_cfg;

    prio->parent = this;
    children["prio"] = prio;

    proxy_aaa->parent = this;
    children["proxy-aaa"] = proxy_aaa;

    punt->parent = this;
    children["punt"] = punt;

    qlimit->parent = this;
    children["qlimit"] = qlimit;

    query_ancp->parent = this;
    children["query-ancp"] = query_ancp;

    redirect->parent = this;
    children["redirect"] = redirect;

    rtp->parent = this;
    children["rtp"] = rtp;

    rtp_j2k->parent = this;
    children["rtp-j2k"] = rtp_j2k;

    rtp_mmr->parent = this;
    children["rtp-mmr"] = rtp_mmr;

    rtp_voice->parent = this;
    children["rtp-voice"] = rtp_voice;

    serv_func->parent = this;
    children["serv-func"] = serv_func;

    set_timer->parent = this;
    children["set-timer"] = set_timer;

    sfrag->parent = this;
    children["sfrag"] = sfrag;

    shape->parent = this;
    children["shape"] = shape;

    stop_timer->parent = this;
    children["stop-timer"] = stop_timer;

    timeout_idle->parent = this;
    children["timeout-idle"] = timeout_idle;

    wred->parent = this;
    children["wred"] = wred;

    yang_name = "actp"; yang_parent_name = "policy-action-info-st";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::~Actp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_data() const
{
    return data_p.is_set
	|| type.is_set
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_data())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_data())
	|| (act_template !=  nullptr && act_template->has_data())
	|| (afm_react !=  nullptr && afm_react->has_data())
	|| (authen_aaa !=  nullptr && authen_aaa->has_data())
	|| (authorize_id !=  nullptr && authorize_id->has_data())
	|| (bwrem !=  nullptr && bwrem->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (collect_id !=  nullptr && collect_id->has_data())
	|| (copy !=  nullptr && copy->has_data())
	|| (deact_template !=  nullptr && deact_template->has_data())
	|| (decode_id !=  nullptr && decode_id->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (flow_parm !=  nullptr && flow_parm->has_data())
	|| (fmm !=  nullptr && fmm->has_data())
	|| (httpr !=  nullptr && httpr->has_data())
	|| (ipcbr !=  nullptr && ipcbr->has_data())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_data())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_data())
	|| (mark !=  nullptr && mark->has_data())
	|| (mark2 !=  nullptr && mark2->has_data())
	|| (mdi !=  nullptr && mdi->has_data())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_data())
	|| (min_bw !=  nullptr && min_bw->has_data())
	|| (out_intf !=  nullptr && out_intf->has_data())
	|| (pbf !=  nullptr && pbf->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_data())
	|| (prio !=  nullptr && prio->has_data())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (qlimit !=  nullptr && qlimit->has_data())
	|| (query_ancp !=  nullptr && query_ancp->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_data())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_data())
	|| (rtp_voice !=  nullptr && rtp_voice->has_data())
	|| (serv_func !=  nullptr && serv_func->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (sfrag !=  nullptr && sfrag->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data())
	|| (timeout_idle !=  nullptr && timeout_idle->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_operation() const
{
    return is_set(operation)
	|| is_set(data_p.operation)
	|| is_set(type.operation)
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_operation())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_operation())
	|| (act_template !=  nullptr && act_template->has_operation())
	|| (afm_react !=  nullptr && afm_react->has_operation())
	|| (authen_aaa !=  nullptr && authen_aaa->has_operation())
	|| (authorize_id !=  nullptr && authorize_id->has_operation())
	|| (bwrem !=  nullptr && bwrem->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (collect_id !=  nullptr && collect_id->has_operation())
	|| (copy !=  nullptr && copy->has_operation())
	|| (deact_template !=  nullptr && deact_template->has_operation())
	|| (decode_id !=  nullptr && decode_id->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (flow_parm !=  nullptr && flow_parm->has_operation())
	|| (fmm !=  nullptr && fmm->has_operation())
	|| (httpr !=  nullptr && httpr->has_operation())
	|| (ipcbr !=  nullptr && ipcbr->has_operation())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_operation())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_operation())
	|| (mark !=  nullptr && mark->has_operation())
	|| (mark2 !=  nullptr && mark2->has_operation())
	|| (mdi !=  nullptr && mdi->has_operation())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_operation())
	|| (min_bw !=  nullptr && min_bw->has_operation())
	|| (out_intf !=  nullptr && out_intf->has_operation())
	|| (pbf !=  nullptr && pbf->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_operation())
	|| (prio !=  nullptr && prio->has_operation())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (qlimit !=  nullptr && qlimit->has_operation())
	|| (query_ancp !=  nullptr && query_ancp->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_operation())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_operation())
	|| (rtp_voice !=  nullptr && rtp_voice->has_operation())
	|| (serv_func !=  nullptr && serv_func->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (sfrag !=  nullptr && sfrag->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation())
	|| (timeout_idle !=  nullptr && timeout_idle->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Actp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_p.is_set || is_set(data_p.operation)) leaf_name_data.push_back(data_p.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting-event-aaa")
    {
        if(accounting_event_aaa != nullptr)
        {
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
        else
        {
            accounting_event_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>();
            accounting_event_aaa->parent = this;
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
        return children.at("accounting-event-aaa");
    }

    if(child_yang_name == "acct-aaa-list")
    {
        if(acct_aaa_list != nullptr)
        {
            children["acct-aaa-list"] = acct_aaa_list;
        }
        else
        {
            acct_aaa_list = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>();
            acct_aaa_list->parent = this;
            children["acct-aaa-list"] = acct_aaa_list;
        }
        return children.at("acct-aaa-list");
    }

    if(child_yang_name == "act-template")
    {
        if(act_template != nullptr)
        {
            children["act-template"] = act_template;
        }
        else
        {
            act_template = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>();
            act_template->parent = this;
            children["act-template"] = act_template;
        }
        return children.at("act-template");
    }

    if(child_yang_name == "afm-react")
    {
        if(afm_react != nullptr)
        {
            children["afm-react"] = afm_react;
        }
        else
        {
            afm_react = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>();
            afm_react->parent = this;
            children["afm-react"] = afm_react;
        }
        return children.at("afm-react");
    }

    if(child_yang_name == "authen-aaa")
    {
        if(authen_aaa != nullptr)
        {
            children["authen-aaa"] = authen_aaa;
        }
        else
        {
            authen_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>();
            authen_aaa->parent = this;
            children["authen-aaa"] = authen_aaa;
        }
        return children.at("authen-aaa");
    }

    if(child_yang_name == "authorize-id")
    {
        if(authorize_id != nullptr)
        {
            children["authorize-id"] = authorize_id;
        }
        else
        {
            authorize_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>();
            authorize_id->parent = this;
            children["authorize-id"] = authorize_id;
        }
        return children.at("authorize-id");
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
        else
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>();
            bwrem->parent = this;
            children["bwrem"] = bwrem;
        }
        return children.at("bwrem");
    }

    if(child_yang_name == "cac")
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
        else
        {
            cac = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>();
            cac->parent = this;
            children["cac"] = cac;
        }
        return children.at("cac");
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy != nullptr)
        {
            children["child-policy"] = child_policy;
        }
        else
        {
            child_policy = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>();
            child_policy->parent = this;
            children["child-policy"] = child_policy;
        }
        return children.at("child-policy");
    }

    if(child_yang_name == "collect-id")
    {
        if(collect_id != nullptr)
        {
            children["collect-id"] = collect_id;
        }
        else
        {
            collect_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>();
            collect_id->parent = this;
            children["collect-id"] = collect_id;
        }
        return children.at("collect-id");
    }

    if(child_yang_name == "copy")
    {
        if(copy != nullptr)
        {
            children["copy"] = copy;
        }
        else
        {
            copy = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>();
            copy->parent = this;
            children["copy"] = copy;
        }
        return children.at("copy");
    }

    if(child_yang_name == "deact-template")
    {
        if(deact_template != nullptr)
        {
            children["deact-template"] = deact_template;
        }
        else
        {
            deact_template = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>();
            deact_template->parent = this;
            children["deact-template"] = deact_template;
        }
        return children.at("deact-template");
    }

    if(child_yang_name == "decode-id")
    {
        if(decode_id != nullptr)
        {
            children["decode-id"] = decode_id;
        }
        else
        {
            decode_id = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>();
            decode_id->parent = this;
            children["decode-id"] = decode_id;
        }
        return children.at("decode-id");
    }

    if(child_yang_name == "encap")
    {
        if(encap != nullptr)
        {
            children["encap"] = encap;
        }
        else
        {
            encap = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>();
            encap->parent = this;
            children["encap"] = encap;
        }
        return children.at("encap");
    }

    if(child_yang_name == "flow-parm")
    {
        if(flow_parm != nullptr)
        {
            children["flow-parm"] = flow_parm;
        }
        else
        {
            flow_parm = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>();
            flow_parm->parent = this;
            children["flow-parm"] = flow_parm;
        }
        return children.at("flow-parm");
    }

    if(child_yang_name == "fmm")
    {
        if(fmm != nullptr)
        {
            children["fmm"] = fmm;
        }
        else
        {
            fmm = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>();
            fmm->parent = this;
            children["fmm"] = fmm;
        }
        return children.at("fmm");
    }

    if(child_yang_name == "httpr")
    {
        if(httpr != nullptr)
        {
            children["httpr"] = httpr;
        }
        else
        {
            httpr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>();
            httpr->parent = this;
            children["httpr"] = httpr;
        }
        return children.at("httpr");
    }

    if(child_yang_name == "ipcbr")
    {
        if(ipcbr != nullptr)
        {
            children["ipcbr"] = ipcbr;
        }
        else
        {
            ipcbr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>();
            ipcbr->parent = this;
            children["ipcbr"] = ipcbr;
        }
        return children.at("ipcbr");
    }

    if(child_yang_name == "ipv4-nh")
    {
        if(ipv4_nh != nullptr)
        {
            children["ipv4-nh"] = ipv4_nh;
        }
        else
        {
            ipv4_nh = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>();
            ipv4_nh->parent = this;
            children["ipv4-nh"] = ipv4_nh;
        }
        return children.at("ipv4-nh");
    }

    if(child_yang_name == "ipv6-nh")
    {
        if(ipv6_nh != nullptr)
        {
            children["ipv6-nh"] = ipv6_nh;
        }
        else
        {
            ipv6_nh = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>();
            ipv6_nh->parent = this;
            children["ipv6-nh"] = ipv6_nh;
        }
        return children.at("ipv6-nh");
    }

    if(child_yang_name == "mark")
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
        else
        {
            mark = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>();
            mark->parent = this;
            children["mark"] = mark;
        }
        return children.at("mark");
    }

    if(child_yang_name == "mark2")
    {
        if(mark2 != nullptr)
        {
            children["mark2"] = mark2;
        }
        else
        {
            mark2 = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>();
            mark2->parent = this;
            children["mark2"] = mark2;
        }
        return children.at("mark2");
    }

    if(child_yang_name == "mdi")
    {
        if(mdi != nullptr)
        {
            children["mdi"] = mdi;
        }
        else
        {
            mdi = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>();
            mdi->parent = this;
            children["mdi"] = mdi;
        }
        return children.at("mdi");
    }

    if(child_yang_name == "mdi-rtp")
    {
        if(mdi_rtp != nullptr)
        {
            children["mdi-rtp"] = mdi_rtp;
        }
        else
        {
            mdi_rtp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>();
            mdi_rtp->parent = this;
            children["mdi-rtp"] = mdi_rtp;
        }
        return children.at("mdi-rtp");
    }

    if(child_yang_name == "min-bw")
    {
        if(min_bw != nullptr)
        {
            children["min-bw"] = min_bw;
        }
        else
        {
            min_bw = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>();
            min_bw->parent = this;
            children["min-bw"] = min_bw;
        }
        return children.at("min-bw");
    }

    if(child_yang_name == "out-intf")
    {
        if(out_intf != nullptr)
        {
            children["out-intf"] = out_intf;
        }
        else
        {
            out_intf = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>();
            out_intf->parent = this;
            children["out-intf"] = out_intf;
        }
        return children.at("out-intf");
    }

    if(child_yang_name == "pbf")
    {
        if(pbf != nullptr)
        {
            children["pbf"] = pbf;
        }
        else
        {
            pbf = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>();
            pbf->parent = this;
            children["pbf"] = pbf;
        }
        return children.at("pbf");
    }

    if(child_yang_name == "pfc")
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc;
        }
        else
        {
            pfc = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>();
            pfc->parent = this;
            children["pfc"] = pfc;
        }
        return children.at("pfc");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
        else
        {
            police = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>();
            police->parent = this;
            children["police"] = police;
        }
        return children.at("police");
    }

    if(child_yang_name == "prepaid-cfg")
    {
        if(prepaid_cfg != nullptr)
        {
            children["prepaid-cfg"] = prepaid_cfg;
        }
        else
        {
            prepaid_cfg = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>();
            prepaid_cfg->parent = this;
            children["prepaid-cfg"] = prepaid_cfg;
        }
        return children.at("prepaid-cfg");
    }

    if(child_yang_name == "prio")
    {
        if(prio != nullptr)
        {
            children["prio"] = prio;
        }
        else
        {
            prio = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>();
            prio->parent = this;
            children["prio"] = prio;
        }
        return children.at("prio");
    }

    if(child_yang_name == "proxy-aaa")
    {
        if(proxy_aaa != nullptr)
        {
            children["proxy-aaa"] = proxy_aaa;
        }
        else
        {
            proxy_aaa = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>();
            proxy_aaa->parent = this;
            children["proxy-aaa"] = proxy_aaa;
        }
        return children.at("proxy-aaa");
    }

    if(child_yang_name == "punt")
    {
        if(punt != nullptr)
        {
            children["punt"] = punt;
        }
        else
        {
            punt = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>();
            punt->parent = this;
            children["punt"] = punt;
        }
        return children.at("punt");
    }

    if(child_yang_name == "qlimit")
    {
        if(qlimit != nullptr)
        {
            children["qlimit"] = qlimit;
        }
        else
        {
            qlimit = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>();
            qlimit->parent = this;
            children["qlimit"] = qlimit;
        }
        return children.at("qlimit");
    }

    if(child_yang_name == "query-ancp")
    {
        if(query_ancp != nullptr)
        {
            children["query-ancp"] = query_ancp;
        }
        else
        {
            query_ancp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>();
            query_ancp->parent = this;
            children["query-ancp"] = query_ancp;
        }
        return children.at("query-ancp");
    }

    if(child_yang_name == "redirect")
    {
        if(redirect != nullptr)
        {
            children["redirect"] = redirect;
        }
        else
        {
            redirect = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>();
            redirect->parent = this;
            children["redirect"] = redirect;
        }
        return children.at("redirect");
    }

    if(child_yang_name == "rtp")
    {
        if(rtp != nullptr)
        {
            children["rtp"] = rtp;
        }
        else
        {
            rtp = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>();
            rtp->parent = this;
            children["rtp"] = rtp;
        }
        return children.at("rtp");
    }

    if(child_yang_name == "rtp-j2k")
    {
        if(rtp_j2k != nullptr)
        {
            children["rtp-j2k"] = rtp_j2k;
        }
        else
        {
            rtp_j2k = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>();
            rtp_j2k->parent = this;
            children["rtp-j2k"] = rtp_j2k;
        }
        return children.at("rtp-j2k");
    }

    if(child_yang_name == "rtp-mmr")
    {
        if(rtp_mmr != nullptr)
        {
            children["rtp-mmr"] = rtp_mmr;
        }
        else
        {
            rtp_mmr = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>();
            rtp_mmr->parent = this;
            children["rtp-mmr"] = rtp_mmr;
        }
        return children.at("rtp-mmr");
    }

    if(child_yang_name == "rtp-voice")
    {
        if(rtp_voice != nullptr)
        {
            children["rtp-voice"] = rtp_voice;
        }
        else
        {
            rtp_voice = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>();
            rtp_voice->parent = this;
            children["rtp-voice"] = rtp_voice;
        }
        return children.at("rtp-voice");
    }

    if(child_yang_name == "serv-func")
    {
        if(serv_func != nullptr)
        {
            children["serv-func"] = serv_func;
        }
        else
        {
            serv_func = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>();
            serv_func->parent = this;
            children["serv-func"] = serv_func;
        }
        return children.at("serv-func");
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer;
        }
        else
        {
            set_timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>();
            set_timer->parent = this;
            children["set-timer"] = set_timer;
        }
        return children.at("set-timer");
    }

    if(child_yang_name == "sfrag")
    {
        if(sfrag != nullptr)
        {
            children["sfrag"] = sfrag;
        }
        else
        {
            sfrag = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>();
            sfrag->parent = this;
            children["sfrag"] = sfrag;
        }
        return children.at("sfrag");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer;
        }
        else
        {
            stop_timer = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>();
            stop_timer->parent = this;
            children["stop-timer"] = stop_timer;
        }
        return children.at("stop-timer");
    }

    if(child_yang_name == "timeout-idle")
    {
        if(timeout_idle != nullptr)
        {
            children["timeout-idle"] = timeout_idle;
        }
        else
        {
            timeout_idle = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>();
            timeout_idle->parent = this;
            children["timeout-idle"] = timeout_idle;
        }
        return children.at("timeout-idle");
    }

    if(child_yang_name == "wred")
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
        else
        {
            wred = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>();
            wred->parent = this;
            children["wred"] = wred;
        }
        return children.at("wred");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_children()
{
    if(children.find("accounting-event-aaa") == children.end())
    {
        if(accounting_event_aaa != nullptr)
        {
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
    }

    if(children.find("acct-aaa-list") == children.end())
    {
        if(acct_aaa_list != nullptr)
        {
            children["acct-aaa-list"] = acct_aaa_list;
        }
    }

    if(children.find("act-template") == children.end())
    {
        if(act_template != nullptr)
        {
            children["act-template"] = act_template;
        }
    }

    if(children.find("afm-react") == children.end())
    {
        if(afm_react != nullptr)
        {
            children["afm-react"] = afm_react;
        }
    }

    if(children.find("authen-aaa") == children.end())
    {
        if(authen_aaa != nullptr)
        {
            children["authen-aaa"] = authen_aaa;
        }
    }

    if(children.find("authorize-id") == children.end())
    {
        if(authorize_id != nullptr)
        {
            children["authorize-id"] = authorize_id;
        }
    }

    if(children.find("bwrem") == children.end())
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
    }

    if(children.find("cac") == children.end())
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
    }

    if(children.find("child-policy") == children.end())
    {
        if(child_policy != nullptr)
        {
            children["child-policy"] = child_policy;
        }
    }

    if(children.find("collect-id") == children.end())
    {
        if(collect_id != nullptr)
        {
            children["collect-id"] = collect_id;
        }
    }

    if(children.find("copy") == children.end())
    {
        if(copy != nullptr)
        {
            children["copy"] = copy;
        }
    }

    if(children.find("deact-template") == children.end())
    {
        if(deact_template != nullptr)
        {
            children["deact-template"] = deact_template;
        }
    }

    if(children.find("decode-id") == children.end())
    {
        if(decode_id != nullptr)
        {
            children["decode-id"] = decode_id;
        }
    }

    if(children.find("encap") == children.end())
    {
        if(encap != nullptr)
        {
            children["encap"] = encap;
        }
    }

    if(children.find("flow-parm") == children.end())
    {
        if(flow_parm != nullptr)
        {
            children["flow-parm"] = flow_parm;
        }
    }

    if(children.find("fmm") == children.end())
    {
        if(fmm != nullptr)
        {
            children["fmm"] = fmm;
        }
    }

    if(children.find("httpr") == children.end())
    {
        if(httpr != nullptr)
        {
            children["httpr"] = httpr;
        }
    }

    if(children.find("ipcbr") == children.end())
    {
        if(ipcbr != nullptr)
        {
            children["ipcbr"] = ipcbr;
        }
    }

    if(children.find("ipv4-nh") == children.end())
    {
        if(ipv4_nh != nullptr)
        {
            children["ipv4-nh"] = ipv4_nh;
        }
    }

    if(children.find("ipv6-nh") == children.end())
    {
        if(ipv6_nh != nullptr)
        {
            children["ipv6-nh"] = ipv6_nh;
        }
    }

    if(children.find("mark") == children.end())
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
    }

    if(children.find("mark2") == children.end())
    {
        if(mark2 != nullptr)
        {
            children["mark2"] = mark2;
        }
    }

    if(children.find("mdi") == children.end())
    {
        if(mdi != nullptr)
        {
            children["mdi"] = mdi;
        }
    }

    if(children.find("mdi-rtp") == children.end())
    {
        if(mdi_rtp != nullptr)
        {
            children["mdi-rtp"] = mdi_rtp;
        }
    }

    if(children.find("min-bw") == children.end())
    {
        if(min_bw != nullptr)
        {
            children["min-bw"] = min_bw;
        }
    }

    if(children.find("out-intf") == children.end())
    {
        if(out_intf != nullptr)
        {
            children["out-intf"] = out_intf;
        }
    }

    if(children.find("pbf") == children.end())
    {
        if(pbf != nullptr)
        {
            children["pbf"] = pbf;
        }
    }

    if(children.find("pfc") == children.end())
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc;
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
    }

    if(children.find("prepaid-cfg") == children.end())
    {
        if(prepaid_cfg != nullptr)
        {
            children["prepaid-cfg"] = prepaid_cfg;
        }
    }

    if(children.find("prio") == children.end())
    {
        if(prio != nullptr)
        {
            children["prio"] = prio;
        }
    }

    if(children.find("proxy-aaa") == children.end())
    {
        if(proxy_aaa != nullptr)
        {
            children["proxy-aaa"] = proxy_aaa;
        }
    }

    if(children.find("punt") == children.end())
    {
        if(punt != nullptr)
        {
            children["punt"] = punt;
        }
    }

    if(children.find("qlimit") == children.end())
    {
        if(qlimit != nullptr)
        {
            children["qlimit"] = qlimit;
        }
    }

    if(children.find("query-ancp") == children.end())
    {
        if(query_ancp != nullptr)
        {
            children["query-ancp"] = query_ancp;
        }
    }

    if(children.find("redirect") == children.end())
    {
        if(redirect != nullptr)
        {
            children["redirect"] = redirect;
        }
    }

    if(children.find("rtp") == children.end())
    {
        if(rtp != nullptr)
        {
            children["rtp"] = rtp;
        }
    }

    if(children.find("rtp-j2k") == children.end())
    {
        if(rtp_j2k != nullptr)
        {
            children["rtp-j2k"] = rtp_j2k;
        }
    }

    if(children.find("rtp-mmr") == children.end())
    {
        if(rtp_mmr != nullptr)
        {
            children["rtp-mmr"] = rtp_mmr;
        }
    }

    if(children.find("rtp-voice") == children.end())
    {
        if(rtp_voice != nullptr)
        {
            children["rtp-voice"] = rtp_voice;
        }
    }

    if(children.find("serv-func") == children.end())
    {
        if(serv_func != nullptr)
        {
            children["serv-func"] = serv_func;
        }
    }

    if(children.find("set-timer") == children.end())
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer;
        }
    }

    if(children.find("sfrag") == children.end())
    {
        if(sfrag != nullptr)
        {
            children["sfrag"] = sfrag;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    if(children.find("stop-timer") == children.end())
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer;
        }
    }

    if(children.find("timeout-idle") == children.end())
    {
        if(timeout_idle != nullptr)
        {
            children["timeout-idle"] = timeout_idle;
        }
    }

    if(children.find("wred") == children.end())
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-p")
    {
        data_p = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::Mark()
{
    yang_name = "mark"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::~Mark()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_data() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_operation() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-mark-info")
    {
        for(auto const & c : action_mark_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo>();
        c->parent = this;
        action_mark_info.push_back(std::move(c));
        children[segment_path] = action_mark_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_children()
{
    for (auto const & c : action_mark_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::ActionMarkInfo()
    :
    mark_flags{YType::uint32, "mark-flags"},
    type{YType::enumeration, "type"},
    value_{YType::uint16, "value"}
{
    yang_name = "action-mark-info"; yang_parent_name = "mark";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::~ActionMarkInfo()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_flags.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionMarkInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.operation)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::Mark2()
{
    yang_name = "mark2"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::~Mark2()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_data() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_operation() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark2";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark2' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-mark2-info")
    {
        for(auto const & c : action_mark2_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info>();
        c->parent = this;
        action_mark2_info.push_back(std::move(c));
        children[segment_path] = action_mark2_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_children()
{
    for (auto const & c : action_mark2_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::ActionMark2Info()
    :
    mark_flags{YType::uint8, "mark-flags"},
    type{YType::uint8, "type"},
    value_{YType::uint32, "value"},
    value_overflow{YType::uint16, "value-overflow"}
{
    yang_name = "action-mark2-info"; yang_parent_name = "mark2";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::~ActionMark2Info()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set
	|| value_overflow.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_flags.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation)
	|| is_set(value_overflow.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark2-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionMark2Info' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.operation)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_overflow.is_set || is_set(value_overflow.operation)) leaf_name_data.push_back(value_overflow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "value-overflow")
    {
        value_overflow = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::Wred()
{
    yang_name = "wred"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::~Wred()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_data() const
{
    for (std::size_t index=0; index<action_wred_info.size(); index++)
    {
        if(action_wred_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_operation() const
{
    for (std::size_t index=0; index<action_wred_info.size(); index++)
    {
        if(action_wred_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wred' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-wred-info")
    {
        for(auto const & c : action_wred_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo>();
        c->parent = this;
        action_wred_info.push_back(std::move(c));
        children[segment_path] = action_wred_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_children()
{
    for (auto const & c : action_wred_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::ActionWredInfo()
    :
    probability{YType::uint32, "probability"},
    type{YType::enumeration, "type"},
    wred_flags{YType::uint32, "wred-flags"}
    	,
    match_ranges(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>())
	,max_threshold(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>())
	,min_threshold(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>())
{
    match_ranges->parent = this;
    children["match-ranges"] = match_ranges;

    max_threshold->parent = this;
    children["max-threshold"] = max_threshold;

    min_threshold->parent = this;
    children["min-threshold"] = min_threshold;

    yang_name = "action-wred-info"; yang_parent_name = "wred";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::~ActionWredInfo()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_data() const
{
    return probability.is_set
	|| type.is_set
	|| wred_flags.is_set
	|| (match_ranges !=  nullptr && match_ranges->has_data())
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(probability.operation)
	|| is_set(type.operation)
	|| is_set(wred_flags.operation)
	|| (match_ranges !=  nullptr && match_ranges->has_operation())
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-wred-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionWredInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probability.is_set || is_set(probability.operation)) leaf_name_data.push_back(probability.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (wred_flags.is_set || is_set(wred_flags.operation)) leaf_name_data.push_back(wred_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match-ranges")
    {
        if(match_ranges != nullptr)
        {
            children["match-ranges"] = match_ranges;
        }
        else
        {
            match_ranges = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>();
            match_ranges->parent = this;
            children["match-ranges"] = match_ranges;
        }
        return children.at("match-ranges");
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
        else
        {
            max_threshold = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>();
            max_threshold->parent = this;
            children["max-threshold"] = max_threshold;
        }
        return children.at("max-threshold");
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
        else
        {
            min_threshold = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>();
            min_threshold->parent = this;
            children["min-threshold"] = min_threshold;
        }
        return children.at("min-threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_children()
{
    if(children.find("match-ranges") == children.end())
    {
        if(match_ranges != nullptr)
        {
            children["match-ranges"] = match_ranges;
        }
    }

    if(children.find("max-threshold") == children.end())
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
    }

    if(children.find("min-threshold") == children.end())
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probability")
    {
        probability = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "wred-flags")
    {
        wred_flags = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::MatchRanges()
{
    yang_name = "match-ranges"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::~MatchRanges()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-ranges";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchRanges' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "match-ranges";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::~MinThreshold()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::~MaxThreshold()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::Encap()
    :
    seq{YType::uint8, "seq"}
{
    yang_name = "encap"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::~Encap()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_data() const
{
    return seq.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_operation() const
{
    return is_set(operation)
	|| is_set(seq.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.operation)) leaf_name_data.push_back(seq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seq")
    {
        seq = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::Prio()
    :
    prio_lvl{YType::uint32, "prio-lvl"}
{
    yang_name = "prio"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::~Prio()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_data() const
{
    return prio_lvl.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_operation() const
{
    return is_set(operation)
	|| is_set(prio_lvl.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prio' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prio_lvl.is_set || is_set(prio_lvl.operation)) leaf_name_data.push_back(prio_lvl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prio-lvl")
    {
        prio_lvl = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem()
    :
    bwrem(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>())
{
    bwrem->parent = this;
    children["bwrem"] = bwrem;

    yang_name = "bwrem"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::~Bwrem()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_data() const
{
    return (bwrem !=  nullptr && bwrem->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_operation() const
{
    return is_set(operation)
	|| (bwrem !=  nullptr && bwrem->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bwrem' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
        else
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>();
            bwrem->parent = this;
            children["bwrem"] = bwrem;
        }
        return children.at("bwrem");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_children()
{
    if(children.find("bwrem") == children.end())
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::Bwrem_()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bwrem"; yang_parent_name = "bwrem";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::~Bwrem_()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bwrem_' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::MinBw()
    :
    bw(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>())
{
    bw->parent = this;
    children["bw"] = bw;

    yang_name = "min-bw"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::~MinBw()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_data() const
{
    return (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_operation() const
{
    return is_set(operation)
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bw";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinBw' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw")
    {
        if(bw != nullptr)
        {
            children["bw"] = bw;
        }
        else
        {
            bw = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>();
            bw->parent = this;
            children["bw"] = bw;
        }
        return children.at("bw");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_children()
{
    if(children.find("bw") == children.end())
    {
        if(bw != nullptr)
        {
            children["bw"] = bw;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::Bw()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bw"; yang_parent_name = "min-bw";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::~Bw()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bw' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::AuthenAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    authen_password{YType::str, "authen-password"}
{
    yang_name = "authen-aaa"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::~AuthenAaa()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_data() const
{
    return aaa_list_name.is_set
	|| authen_password.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(authen_password.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-aaa";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenAaa' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (authen_password.is_set || is_set(authen_password.operation)) leaf_name_data.push_back(authen_password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "authen-password")
    {
        authen_password = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::CollectId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    id{YType::enumeration, "id"}
{
    yang_name = "collect-id"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::~CollectId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_data() const
{
    return aaa_list_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(id.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CollectId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::DecodeId()
    :
    format_name{YType::str, "format-name"},
    id{YType::enumeration, "id"}
{
    yang_name = "decode-id"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::~DecodeId()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_data() const
{
    return format_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(format_name.operation)
	|| is_set(id.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decode-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DecodeId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format-name")
    {
        format_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::SetTimer()
    :
    absolute_time{YType::str, "absolute-time"},
    duration{YType::uint32, "duration"},
    timer_name{YType::str, "timer-name"}
{
    yang_name = "set-timer"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::~SetTimer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_data() const
{
    return absolute_time.is_set
	|| duration.is_set
	|| timer_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_time.operation)
	|| is_set(duration.operation)
	|| is_set(timer_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetTimer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_time.is_set || is_set(absolute_time.operation)) leaf_name_data.push_back(absolute_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-time")
    {
        absolute_time = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::StopTimer()
    :
    timer_name{YType::str, "timer-name"}
{
    yang_name = "stop-timer"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::~StopTimer()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_data() const
{
    return timer_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StopTimer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::AcctAaaList()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    secs{YType::uint32, "secs"}
{
    yang_name = "acct-aaa-list"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::~AcctAaaList()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_data() const
{
    return aaa_list_name.is_set
	|| secs.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(secs.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-aaa-list";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcctAaaList' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (secs.is_set || is_set(secs.operation)) leaf_name_data.push_back(secs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "secs")
    {
        secs = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::QueryAncp()
    :
    enable{YType::uint8, "enable"}
{
    yang_name = "query-ancp"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::~QueryAncp()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_data() const
{
    return enable.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-ancp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueryAncp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::PrepaidCfg()
    :
    prepaid_config_profile_name{YType::str, "prepaid-config-profile-name"}
{
    yang_name = "prepaid-cfg"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::~PrepaidCfg()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_data() const
{
    return prepaid_config_profile_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(prepaid_config_profile_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-cfg";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrepaidCfg' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_config_profile_name.is_set || is_set(prepaid_config_profile_name.operation)) leaf_name_data.push_back(prepaid_config_profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prepaid-config-profile-name")
    {
        prepaid_config_profile_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::TimeoutIdle()
    :
    secs{YType::uint32, "secs"}
{
    yang_name = "timeout-idle"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::~TimeoutIdle()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_data() const
{
    return secs.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_operation() const
{
    return is_set(operation)
	|| is_set(secs.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-idle";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeoutIdle' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secs.is_set || is_set(secs.operation)) leaf_name_data.push_back(secs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secs")
    {
        secs = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::ProxyAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"}
{
    yang_name = "proxy-aaa"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::~ProxyAaa()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_data() const
{
    return aaa_list_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-aaa";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyAaa' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::ActTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{
    yang_name = "act-template"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::~ActTemplate()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(flags.operation)
	|| is_set(template_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-template";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActTemplate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::DeactTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{
    yang_name = "deact-template"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::~DeactTemplate()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(flags.operation)
	|| is_set(template_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deact-template";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeactTemplate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::Qlimit()
{
    yang_name = "qlimit"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::~Qlimit()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::has_data() const
{
    for (std::size_t index=0; index<action_qlimit_info_array.size(); index++)
    {
        if(action_qlimit_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::has_operation() const
{
    for (std::size_t index=0; index<action_qlimit_info_array.size(); index++)
    {
        if(action_qlimit_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qlimit' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-qlimit-info-array")
    {
        for(auto const & c : action_qlimit_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray>();
        c->parent = this;
        action_qlimit_info_array.push_back(std::move(c));
        children[segment_path] = action_qlimit_info_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_children()
{
    for (auto const & c : action_qlimit_info_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::ActionQlimitInfoArray()
    :
    qlimit_flags{YType::uint32, "qlimit-flags"},
    type{YType::enumeration, "type"}
    	,
    atmclp_qlim(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim>())
	,match_values(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues>())
	,qlim(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim>())
{
    atmclp_qlim->parent = this;
    children["atmclp-qlim"] = atmclp_qlim;

    match_values->parent = this;
    children["match-values"] = match_values;

    qlim->parent = this;
    children["qlim"] = qlim;

    yang_name = "action-qlimit-info-array"; yang_parent_name = "qlimit";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::~ActionQlimitInfoArray()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::has_data() const
{
    return qlimit_flags.is_set
	|| type.is_set
	|| (atmclp_qlim !=  nullptr && atmclp_qlim->has_data())
	|| (match_values !=  nullptr && match_values->has_data())
	|| (qlim !=  nullptr && qlim->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(qlimit_flags.operation)
	|| is_set(type.operation)
	|| (atmclp_qlim !=  nullptr && atmclp_qlim->has_operation())
	|| (match_values !=  nullptr && match_values->has_operation())
	|| (qlim !=  nullptr && qlim->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-qlimit-info-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionQlimitInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qlimit_flags.is_set || is_set(qlimit_flags.operation)) leaf_name_data.push_back(qlimit_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atmclp-qlim")
    {
        if(atmclp_qlim != nullptr)
        {
            children["atmclp-qlim"] = atmclp_qlim;
        }
        else
        {
            atmclp_qlim = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim>();
            atmclp_qlim->parent = this;
            children["atmclp-qlim"] = atmclp_qlim;
        }
        return children.at("atmclp-qlim");
    }

    if(child_yang_name == "match-values")
    {
        if(match_values != nullptr)
        {
            children["match-values"] = match_values;
        }
        else
        {
            match_values = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues>();
            match_values->parent = this;
            children["match-values"] = match_values;
        }
        return children.at("match-values");
    }

    if(child_yang_name == "qlim")
    {
        if(qlim != nullptr)
        {
            children["qlim"] = qlim;
        }
        else
        {
            qlim = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim>();
            qlim->parent = this;
            children["qlim"] = qlim;
        }
        return children.at("qlim");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_children()
{
    if(children.find("atmclp-qlim") == children.end())
    {
        if(atmclp_qlim != nullptr)
        {
            children["atmclp-qlim"] = atmclp_qlim;
        }
    }

    if(children.find("match-values") == children.end())
    {
        if(match_values != nullptr)
        {
            children["match-values"] = match_values;
        }
    }

    if(children.find("qlim") == children.end())
    {
        if(qlim != nullptr)
        {
            children["qlim"] = qlim;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypeXr::TransientPolicyMapType::TransientPolicyMapNames::TransientPolicyMapName::Definition::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qlimit-flags")
    {
        qlimit_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}


}
}

