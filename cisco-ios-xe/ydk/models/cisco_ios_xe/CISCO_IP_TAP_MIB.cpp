
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_TAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_TAP_MIB {

CiscoIpTapMib::CiscoIpTapMib()
    :
    citapstreamencodepacket(std::make_shared<CiscoIpTapMib::Citapstreamencodepacket>())
	,citapstreamtable(std::make_shared<CiscoIpTapMib::Citapstreamtable>())
{
    citapstreamencodepacket->parent = this;

    citapstreamtable->parent = this;

    yang_name = "CISCO-IP-TAP-MIB"; yang_parent_name = "CISCO-IP-TAP-MIB";
}

CiscoIpTapMib::~CiscoIpTapMib()
{
}

bool CiscoIpTapMib::has_data() const
{
    return (citapstreamencodepacket !=  nullptr && citapstreamencodepacket->has_data())
	|| (citapstreamtable !=  nullptr && citapstreamtable->has_data());
}

bool CiscoIpTapMib::has_operation() const
{
    return is_set(yfilter)
	|| (citapstreamencodepacket !=  nullptr && citapstreamencodepacket->has_operation())
	|| (citapstreamtable !=  nullptr && citapstreamtable->has_operation());
}

std::string CiscoIpTapMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpTapMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpTapMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "citapStreamEncodePacket")
    {
        if(citapstreamencodepacket == nullptr)
        {
            citapstreamencodepacket = std::make_shared<CiscoIpTapMib::Citapstreamencodepacket>();
        }
        return citapstreamencodepacket;
    }

    if(child_yang_name == "citapStreamTable")
    {
        if(citapstreamtable == nullptr)
        {
            citapstreamtable = std::make_shared<CiscoIpTapMib::Citapstreamtable>();
        }
        return citapstreamtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(citapstreamencodepacket != nullptr)
    {
        children["citapStreamEncodePacket"] = citapstreamencodepacket;
    }

    if(citapstreamtable != nullptr)
    {
        children["citapStreamTable"] = citapstreamtable;
    }

    return children;
}

void CiscoIpTapMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpTapMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpTapMib::clone_ptr() const
{
    return std::make_shared<CiscoIpTapMib>();
}

std::string CiscoIpTapMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpTapMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpTapMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpTapMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpTapMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamEncodePacket" || name == "citapStreamTable")
        return true;
    return false;
}

CiscoIpTapMib::Citapstreamencodepacket::Citapstreamencodepacket()
    :
    citapstreamcapabilities{YType::bits, "citapStreamCapabilities"}
{
    yang_name = "citapStreamEncodePacket"; yang_parent_name = "CISCO-IP-TAP-MIB";
}

CiscoIpTapMib::Citapstreamencodepacket::~Citapstreamencodepacket()
{
}

bool CiscoIpTapMib::Citapstreamencodepacket::has_data() const
{
    return citapstreamcapabilities.is_set;
}

bool CiscoIpTapMib::Citapstreamencodepacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(citapstreamcapabilities.yfilter);
}

std::string CiscoIpTapMib::Citapstreamencodepacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamEncodePacket";

    return path_buffer.str();

}

const EntityPath CiscoIpTapMib::Citapstreamencodepacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (citapstreamcapabilities.is_set || is_set(citapstreamcapabilities.yfilter)) leaf_name_data.push_back(citapstreamcapabilities.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpTapMib::Citapstreamencodepacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::Citapstreamencodepacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpTapMib::Citapstreamencodepacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "citapStreamCapabilities")
    {
        citapstreamcapabilities[value] = true;
    }
}

void CiscoIpTapMib::Citapstreamencodepacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "citapStreamCapabilities")
    {
        citapstreamcapabilities.yfilter = yfilter;
    }
}

bool CiscoIpTapMib::Citapstreamencodepacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamCapabilities")
        return true;
    return false;
}

CiscoIpTapMib::Citapstreamtable::Citapstreamtable()
{
    yang_name = "citapStreamTable"; yang_parent_name = "CISCO-IP-TAP-MIB";
}

CiscoIpTapMib::Citapstreamtable::~Citapstreamtable()
{
}

bool CiscoIpTapMib::Citapstreamtable::has_data() const
{
    for (std::size_t index=0; index<citapstreamentry.size(); index++)
    {
        if(citapstreamentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpTapMib::Citapstreamtable::has_operation() const
{
    for (std::size_t index=0; index<citapstreamentry.size(); index++)
    {
        if(citapstreamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpTapMib::Citapstreamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamTable";

    return path_buffer.str();

}

const EntityPath CiscoIpTapMib::Citapstreamtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpTapMib::Citapstreamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "citapStreamEntry")
    {
        for(auto const & c : citapstreamentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpTapMib::Citapstreamtable::Citapstreamentry>();
        c->parent = this;
        citapstreamentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::Citapstreamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : citapstreamentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpTapMib::Citapstreamtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpTapMib::Citapstreamtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpTapMib::Citapstreamtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamEntry")
        return true;
    return false;
}

CiscoIpTapMib::Citapstreamtable::Citapstreamentry::Citapstreamentry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2streamindex{YType::str, "cTap2StreamIndex"},
    citapstreamaddrtype{YType::enumeration, "citapStreamAddrType"},
    citapstreamdestinationaddress{YType::str, "citapStreamDestinationAddress"},
    citapstreamdestinationlength{YType::uint32, "citapStreamDestinationLength"},
    citapstreamdestl4portmax{YType::uint16, "citapStreamDestL4PortMax"},
    citapstreamdestl4portmin{YType::uint16, "citapStreamDestL4PortMin"},
    citapstreamflowid{YType::int32, "citapStreamFlowId"},
    citapstreaminterface{YType::int32, "citapStreamInterface"},
    citapstreamprotocol{YType::int32, "citapStreamProtocol"},
    citapstreamsourceaddress{YType::str, "citapStreamSourceAddress"},
    citapstreamsourcel4portmax{YType::uint16, "citapStreamSourceL4PortMax"},
    citapstreamsourcel4portmin{YType::uint16, "citapStreamSourceL4PortMin"},
    citapstreamsourcelength{YType::uint32, "citapStreamSourceLength"},
    citapstreamstatus{YType::enumeration, "citapStreamStatus"},
    citapstreamtosbyte{YType::int32, "citapStreamTosByte"},
    citapstreamtosbytemask{YType::int32, "citapStreamTosByteMask"},
    citapstreamvrf{YType::str, "citapStreamVRF"}
{
    yang_name = "citapStreamEntry"; yang_parent_name = "citapStreamTable";
}

CiscoIpTapMib::Citapstreamtable::Citapstreamentry::~Citapstreamentry()
{
}

bool CiscoIpTapMib::Citapstreamtable::Citapstreamentry::has_data() const
{
    return ctap2mediationcontentid.is_set
	|| ctap2streamindex.is_set
	|| citapstreamaddrtype.is_set
	|| citapstreamdestinationaddress.is_set
	|| citapstreamdestinationlength.is_set
	|| citapstreamdestl4portmax.is_set
	|| citapstreamdestl4portmin.is_set
	|| citapstreamflowid.is_set
	|| citapstreaminterface.is_set
	|| citapstreamprotocol.is_set
	|| citapstreamsourceaddress.is_set
	|| citapstreamsourcel4portmax.is_set
	|| citapstreamsourcel4portmin.is_set
	|| citapstreamsourcelength.is_set
	|| citapstreamstatus.is_set
	|| citapstreamtosbyte.is_set
	|| citapstreamtosbytemask.is_set
	|| citapstreamvrf.is_set;
}

bool CiscoIpTapMib::Citapstreamtable::Citapstreamentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationcontentid.yfilter)
	|| ydk::is_set(ctap2streamindex.yfilter)
	|| ydk::is_set(citapstreamaddrtype.yfilter)
	|| ydk::is_set(citapstreamdestinationaddress.yfilter)
	|| ydk::is_set(citapstreamdestinationlength.yfilter)
	|| ydk::is_set(citapstreamdestl4portmax.yfilter)
	|| ydk::is_set(citapstreamdestl4portmin.yfilter)
	|| ydk::is_set(citapstreamflowid.yfilter)
	|| ydk::is_set(citapstreaminterface.yfilter)
	|| ydk::is_set(citapstreamprotocol.yfilter)
	|| ydk::is_set(citapstreamsourceaddress.yfilter)
	|| ydk::is_set(citapstreamsourcel4portmax.yfilter)
	|| ydk::is_set(citapstreamsourcel4portmin.yfilter)
	|| ydk::is_set(citapstreamsourcelength.yfilter)
	|| ydk::is_set(citapstreamstatus.yfilter)
	|| ydk::is_set(citapstreamtosbyte.yfilter)
	|| ydk::is_set(citapstreamtosbytemask.yfilter)
	|| ydk::is_set(citapstreamvrf.yfilter);
}

std::string CiscoIpTapMib::Citapstreamtable::Citapstreamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamEntry" <<"[cTap2MediationContentId='" <<ctap2mediationcontentid <<"']" <<"[cTap2StreamIndex='" <<ctap2streamindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpTapMib::Citapstreamtable::Citapstreamentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/citapStreamTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.yfilter)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2streamindex.is_set || is_set(ctap2streamindex.yfilter)) leaf_name_data.push_back(ctap2streamindex.get_name_leafdata());
    if (citapstreamaddrtype.is_set || is_set(citapstreamaddrtype.yfilter)) leaf_name_data.push_back(citapstreamaddrtype.get_name_leafdata());
    if (citapstreamdestinationaddress.is_set || is_set(citapstreamdestinationaddress.yfilter)) leaf_name_data.push_back(citapstreamdestinationaddress.get_name_leafdata());
    if (citapstreamdestinationlength.is_set || is_set(citapstreamdestinationlength.yfilter)) leaf_name_data.push_back(citapstreamdestinationlength.get_name_leafdata());
    if (citapstreamdestl4portmax.is_set || is_set(citapstreamdestl4portmax.yfilter)) leaf_name_data.push_back(citapstreamdestl4portmax.get_name_leafdata());
    if (citapstreamdestl4portmin.is_set || is_set(citapstreamdestl4portmin.yfilter)) leaf_name_data.push_back(citapstreamdestl4portmin.get_name_leafdata());
    if (citapstreamflowid.is_set || is_set(citapstreamflowid.yfilter)) leaf_name_data.push_back(citapstreamflowid.get_name_leafdata());
    if (citapstreaminterface.is_set || is_set(citapstreaminterface.yfilter)) leaf_name_data.push_back(citapstreaminterface.get_name_leafdata());
    if (citapstreamprotocol.is_set || is_set(citapstreamprotocol.yfilter)) leaf_name_data.push_back(citapstreamprotocol.get_name_leafdata());
    if (citapstreamsourceaddress.is_set || is_set(citapstreamsourceaddress.yfilter)) leaf_name_data.push_back(citapstreamsourceaddress.get_name_leafdata());
    if (citapstreamsourcel4portmax.is_set || is_set(citapstreamsourcel4portmax.yfilter)) leaf_name_data.push_back(citapstreamsourcel4portmax.get_name_leafdata());
    if (citapstreamsourcel4portmin.is_set || is_set(citapstreamsourcel4portmin.yfilter)) leaf_name_data.push_back(citapstreamsourcel4portmin.get_name_leafdata());
    if (citapstreamsourcelength.is_set || is_set(citapstreamsourcelength.yfilter)) leaf_name_data.push_back(citapstreamsourcelength.get_name_leafdata());
    if (citapstreamstatus.is_set || is_set(citapstreamstatus.yfilter)) leaf_name_data.push_back(citapstreamstatus.get_name_leafdata());
    if (citapstreamtosbyte.is_set || is_set(citapstreamtosbyte.yfilter)) leaf_name_data.push_back(citapstreamtosbyte.get_name_leafdata());
    if (citapstreamtosbytemask.is_set || is_set(citapstreamtosbytemask.yfilter)) leaf_name_data.push_back(citapstreamtosbytemask.get_name_leafdata());
    if (citapstreamvrf.is_set || is_set(citapstreamvrf.yfilter)) leaf_name_data.push_back(citapstreamvrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpTapMib::Citapstreamtable::Citapstreamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::Citapstreamtable::Citapstreamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpTapMib::Citapstreamtable::Citapstreamentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
        ctap2mediationcontentid.value_namespace = name_space;
        ctap2mediationcontentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex = value;
        ctap2streamindex.value_namespace = name_space;
        ctap2streamindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamAddrType")
    {
        citapstreamaddrtype = value;
        citapstreamaddrtype.value_namespace = name_space;
        citapstreamaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestinationAddress")
    {
        citapstreamdestinationaddress = value;
        citapstreamdestinationaddress.value_namespace = name_space;
        citapstreamdestinationaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestinationLength")
    {
        citapstreamdestinationlength = value;
        citapstreamdestinationlength.value_namespace = name_space;
        citapstreamdestinationlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestL4PortMax")
    {
        citapstreamdestl4portmax = value;
        citapstreamdestl4portmax.value_namespace = name_space;
        citapstreamdestl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestL4PortMin")
    {
        citapstreamdestl4portmin = value;
        citapstreamdestl4portmin.value_namespace = name_space;
        citapstreamdestl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamFlowId")
    {
        citapstreamflowid = value;
        citapstreamflowid.value_namespace = name_space;
        citapstreamflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamInterface")
    {
        citapstreaminterface = value;
        citapstreaminterface.value_namespace = name_space;
        citapstreaminterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamProtocol")
    {
        citapstreamprotocol = value;
        citapstreamprotocol.value_namespace = name_space;
        citapstreamprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceAddress")
    {
        citapstreamsourceaddress = value;
        citapstreamsourceaddress.value_namespace = name_space;
        citapstreamsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceL4PortMax")
    {
        citapstreamsourcel4portmax = value;
        citapstreamsourcel4portmax.value_namespace = name_space;
        citapstreamsourcel4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceL4PortMin")
    {
        citapstreamsourcel4portmin = value;
        citapstreamsourcel4portmin.value_namespace = name_space;
        citapstreamsourcel4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceLength")
    {
        citapstreamsourcelength = value;
        citapstreamsourcelength.value_namespace = name_space;
        citapstreamsourcelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamStatus")
    {
        citapstreamstatus = value;
        citapstreamstatus.value_namespace = name_space;
        citapstreamstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamTosByte")
    {
        citapstreamtosbyte = value;
        citapstreamtosbyte.value_namespace = name_space;
        citapstreamtosbyte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamTosByteMask")
    {
        citapstreamtosbytemask = value;
        citapstreamtosbytemask.value_namespace = name_space;
        citapstreamtosbytemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamVRF")
    {
        citapstreamvrf = value;
        citapstreamvrf.value_namespace = name_space;
        citapstreamvrf.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpTapMib::Citapstreamtable::Citapstreamentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex.yfilter = yfilter;
    }
    if(value_path == "citapStreamAddrType")
    {
        citapstreamaddrtype.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestinationAddress")
    {
        citapstreamdestinationaddress.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestinationLength")
    {
        citapstreamdestinationlength.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestL4PortMax")
    {
        citapstreamdestl4portmax.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestL4PortMin")
    {
        citapstreamdestl4portmin.yfilter = yfilter;
    }
    if(value_path == "citapStreamFlowId")
    {
        citapstreamflowid.yfilter = yfilter;
    }
    if(value_path == "citapStreamInterface")
    {
        citapstreaminterface.yfilter = yfilter;
    }
    if(value_path == "citapStreamProtocol")
    {
        citapstreamprotocol.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceAddress")
    {
        citapstreamsourceaddress.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceL4PortMax")
    {
        citapstreamsourcel4portmax.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceL4PortMin")
    {
        citapstreamsourcel4portmin.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceLength")
    {
        citapstreamsourcelength.yfilter = yfilter;
    }
    if(value_path == "citapStreamStatus")
    {
        citapstreamstatus.yfilter = yfilter;
    }
    if(value_path == "citapStreamTosByte")
    {
        citapstreamtosbyte.yfilter = yfilter;
    }
    if(value_path == "citapStreamTosByteMask")
    {
        citapstreamtosbytemask.yfilter = yfilter;
    }
    if(value_path == "citapStreamVRF")
    {
        citapstreamvrf.yfilter = yfilter;
    }
}

bool CiscoIpTapMib::Citapstreamtable::Citapstreamentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationContentId" || name == "cTap2StreamIndex" || name == "citapStreamAddrType" || name == "citapStreamDestinationAddress" || name == "citapStreamDestinationLength" || name == "citapStreamDestL4PortMax" || name == "citapStreamDestL4PortMin" || name == "citapStreamFlowId" || name == "citapStreamInterface" || name == "citapStreamProtocol" || name == "citapStreamSourceAddress" || name == "citapStreamSourceL4PortMax" || name == "citapStreamSourceL4PortMin" || name == "citapStreamSourceLength" || name == "citapStreamStatus" || name == "citapStreamTosByte" || name == "citapStreamTosByteMask" || name == "citapStreamVRF")
        return true;
    return false;
}


}
}

