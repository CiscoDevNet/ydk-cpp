
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_TAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_TAP_MIB {

CISCOIPTAPMIB::CISCOIPTAPMIB()
    :
    citapstreamencodepacket(std::make_shared<CISCOIPTAPMIB::CitapStreamEncodePacket>())
    , citapstreamtable(std::make_shared<CISCOIPTAPMIB::CitapStreamTable>())
{
    citapstreamencodepacket->parent = this;
    citapstreamtable->parent = this;

    yang_name = "CISCO-IP-TAP-MIB"; yang_parent_name = "CISCO-IP-TAP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIPTAPMIB::~CISCOIPTAPMIB()
{
}

bool CISCOIPTAPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (citapstreamencodepacket !=  nullptr && citapstreamencodepacket->has_data())
	|| (citapstreamtable !=  nullptr && citapstreamtable->has_data());
}

bool CISCOIPTAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (citapstreamencodepacket !=  nullptr && citapstreamencodepacket->has_operation())
	|| (citapstreamtable !=  nullptr && citapstreamtable->has_operation());
}

std::string CISCOIPTAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPTAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPTAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "citapStreamEncodePacket")
    {
        if(citapstreamencodepacket == nullptr)
        {
            citapstreamencodepacket = std::make_shared<CISCOIPTAPMIB::CitapStreamEncodePacket>();
        }
        return citapstreamencodepacket;
    }

    if(child_yang_name == "citapStreamTable")
    {
        if(citapstreamtable == nullptr)
        {
            citapstreamtable = std::make_shared<CISCOIPTAPMIB::CitapStreamTable>();
        }
        return citapstreamtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPTAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void CISCOIPTAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPTAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPTAPMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPTAPMIB>();
}

std::string CISCOIPTAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPTAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPTAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPTAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPTAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamEncodePacket" || name == "citapStreamTable")
        return true;
    return false;
}

CISCOIPTAPMIB::CitapStreamEncodePacket::CitapStreamEncodePacket()
    :
    citapstreamcapabilities{YType::bits, "citapStreamCapabilities"}
{

    yang_name = "citapStreamEncodePacket"; yang_parent_name = "CISCO-IP-TAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPTAPMIB::CitapStreamEncodePacket::~CitapStreamEncodePacket()
{
}

bool CISCOIPTAPMIB::CitapStreamEncodePacket::has_data() const
{
    if (is_presence_container) return true;
    return citapstreamcapabilities.is_set;
}

bool CISCOIPTAPMIB::CitapStreamEncodePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(citapstreamcapabilities.yfilter);
}

std::string CISCOIPTAPMIB::CitapStreamEncodePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPTAPMIB::CitapStreamEncodePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamEncodePacket";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPTAPMIB::CitapStreamEncodePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (citapstreamcapabilities.is_set || is_set(citapstreamcapabilities.yfilter)) leaf_name_data.push_back(citapstreamcapabilities.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPTAPMIB::CitapStreamEncodePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPTAPMIB::CitapStreamEncodePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPTAPMIB::CitapStreamEncodePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "citapStreamCapabilities")
    {
        citapstreamcapabilities[value] = true;
    }
}

void CISCOIPTAPMIB::CitapStreamEncodePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "citapStreamCapabilities")
    {
        citapstreamcapabilities.yfilter = yfilter;
    }
}

bool CISCOIPTAPMIB::CitapStreamEncodePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamCapabilities")
        return true;
    return false;
}

CISCOIPTAPMIB::CitapStreamTable::CitapStreamTable()
    :
    citapstreamentry(this, {"ctap2mediationcontentid", "ctap2streamindex"})
{

    yang_name = "citapStreamTable"; yang_parent_name = "CISCO-IP-TAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPTAPMIB::CitapStreamTable::~CitapStreamTable()
{
}

bool CISCOIPTAPMIB::CitapStreamTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<citapstreamentry.len(); index++)
    {
        if(citapstreamentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPTAPMIB::CitapStreamTable::has_operation() const
{
    for (std::size_t index=0; index<citapstreamentry.len(); index++)
    {
        if(citapstreamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPTAPMIB::CitapStreamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPTAPMIB::CitapStreamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPTAPMIB::CitapStreamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPTAPMIB::CitapStreamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "citapStreamEntry")
    {
        auto c = std::make_shared<CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry>();
        c->parent = this;
        citapstreamentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPTAPMIB::CitapStreamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : citapstreamentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPTAPMIB::CitapStreamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPTAPMIB::CitapStreamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPTAPMIB::CitapStreamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citapStreamEntry")
        return true;
    return false;
}

CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::CitapStreamEntry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2streamindex{YType::str, "cTap2StreamIndex"},
    citapstreaminterface{YType::int32, "citapStreamInterface"},
    citapstreamaddrtype{YType::enumeration, "citapStreamAddrType"},
    citapstreamdestinationaddress{YType::str, "citapStreamDestinationAddress"},
    citapstreamdestinationlength{YType::uint32, "citapStreamDestinationLength"},
    citapstreamsourceaddress{YType::str, "citapStreamSourceAddress"},
    citapstreamsourcelength{YType::uint32, "citapStreamSourceLength"},
    citapstreamtosbyte{YType::int32, "citapStreamTosByte"},
    citapstreamtosbytemask{YType::int32, "citapStreamTosByteMask"},
    citapstreamflowid{YType::int32, "citapStreamFlowId"},
    citapstreamprotocol{YType::int32, "citapStreamProtocol"},
    citapstreamdestl4portmin{YType::uint16, "citapStreamDestL4PortMin"},
    citapstreamdestl4portmax{YType::uint16, "citapStreamDestL4PortMax"},
    citapstreamsourcel4portmin{YType::uint16, "citapStreamSourceL4PortMin"},
    citapstreamsourcel4portmax{YType::uint16, "citapStreamSourceL4PortMax"},
    citapstreamvrf{YType::str, "citapStreamVRF"},
    citapstreamstatus{YType::enumeration, "citapStreamStatus"}
{

    yang_name = "citapStreamEntry"; yang_parent_name = "citapStreamTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::~CitapStreamEntry()
{
}

bool CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::has_data() const
{
    if (is_presence_container) return true;
    return ctap2mediationcontentid.is_set
	|| ctap2streamindex.is_set
	|| citapstreaminterface.is_set
	|| citapstreamaddrtype.is_set
	|| citapstreamdestinationaddress.is_set
	|| citapstreamdestinationlength.is_set
	|| citapstreamsourceaddress.is_set
	|| citapstreamsourcelength.is_set
	|| citapstreamtosbyte.is_set
	|| citapstreamtosbytemask.is_set
	|| citapstreamflowid.is_set
	|| citapstreamprotocol.is_set
	|| citapstreamdestl4portmin.is_set
	|| citapstreamdestl4portmax.is_set
	|| citapstreamsourcel4portmin.is_set
	|| citapstreamsourcel4portmax.is_set
	|| citapstreamvrf.is_set
	|| citapstreamstatus.is_set;
}

bool CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationcontentid.yfilter)
	|| ydk::is_set(ctap2streamindex.yfilter)
	|| ydk::is_set(citapstreaminterface.yfilter)
	|| ydk::is_set(citapstreamaddrtype.yfilter)
	|| ydk::is_set(citapstreamdestinationaddress.yfilter)
	|| ydk::is_set(citapstreamdestinationlength.yfilter)
	|| ydk::is_set(citapstreamsourceaddress.yfilter)
	|| ydk::is_set(citapstreamsourcelength.yfilter)
	|| ydk::is_set(citapstreamtosbyte.yfilter)
	|| ydk::is_set(citapstreamtosbytemask.yfilter)
	|| ydk::is_set(citapstreamflowid.yfilter)
	|| ydk::is_set(citapstreamprotocol.yfilter)
	|| ydk::is_set(citapstreamdestl4portmin.yfilter)
	|| ydk::is_set(citapstreamdestl4portmax.yfilter)
	|| ydk::is_set(citapstreamsourcel4portmin.yfilter)
	|| ydk::is_set(citapstreamsourcel4portmax.yfilter)
	|| ydk::is_set(citapstreamvrf.yfilter)
	|| ydk::is_set(citapstreamstatus.yfilter);
}

std::string CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-TAP-MIB:CISCO-IP-TAP-MIB/citapStreamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citapStreamEntry";
    ADD_KEY_TOKEN(ctap2mediationcontentid, "cTap2MediationContentId");
    ADD_KEY_TOKEN(ctap2streamindex, "cTap2StreamIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.yfilter)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2streamindex.is_set || is_set(ctap2streamindex.yfilter)) leaf_name_data.push_back(ctap2streamindex.get_name_leafdata());
    if (citapstreaminterface.is_set || is_set(citapstreaminterface.yfilter)) leaf_name_data.push_back(citapstreaminterface.get_name_leafdata());
    if (citapstreamaddrtype.is_set || is_set(citapstreamaddrtype.yfilter)) leaf_name_data.push_back(citapstreamaddrtype.get_name_leafdata());
    if (citapstreamdestinationaddress.is_set || is_set(citapstreamdestinationaddress.yfilter)) leaf_name_data.push_back(citapstreamdestinationaddress.get_name_leafdata());
    if (citapstreamdestinationlength.is_set || is_set(citapstreamdestinationlength.yfilter)) leaf_name_data.push_back(citapstreamdestinationlength.get_name_leafdata());
    if (citapstreamsourceaddress.is_set || is_set(citapstreamsourceaddress.yfilter)) leaf_name_data.push_back(citapstreamsourceaddress.get_name_leafdata());
    if (citapstreamsourcelength.is_set || is_set(citapstreamsourcelength.yfilter)) leaf_name_data.push_back(citapstreamsourcelength.get_name_leafdata());
    if (citapstreamtosbyte.is_set || is_set(citapstreamtosbyte.yfilter)) leaf_name_data.push_back(citapstreamtosbyte.get_name_leafdata());
    if (citapstreamtosbytemask.is_set || is_set(citapstreamtosbytemask.yfilter)) leaf_name_data.push_back(citapstreamtosbytemask.get_name_leafdata());
    if (citapstreamflowid.is_set || is_set(citapstreamflowid.yfilter)) leaf_name_data.push_back(citapstreamflowid.get_name_leafdata());
    if (citapstreamprotocol.is_set || is_set(citapstreamprotocol.yfilter)) leaf_name_data.push_back(citapstreamprotocol.get_name_leafdata());
    if (citapstreamdestl4portmin.is_set || is_set(citapstreamdestl4portmin.yfilter)) leaf_name_data.push_back(citapstreamdestl4portmin.get_name_leafdata());
    if (citapstreamdestl4portmax.is_set || is_set(citapstreamdestl4portmax.yfilter)) leaf_name_data.push_back(citapstreamdestl4portmax.get_name_leafdata());
    if (citapstreamsourcel4portmin.is_set || is_set(citapstreamsourcel4portmin.yfilter)) leaf_name_data.push_back(citapstreamsourcel4portmin.get_name_leafdata());
    if (citapstreamsourcel4portmax.is_set || is_set(citapstreamsourcel4portmax.yfilter)) leaf_name_data.push_back(citapstreamsourcel4portmax.get_name_leafdata());
    if (citapstreamvrf.is_set || is_set(citapstreamvrf.yfilter)) leaf_name_data.push_back(citapstreamvrf.get_name_leafdata());
    if (citapstreamstatus.is_set || is_set(citapstreamstatus.yfilter)) leaf_name_data.push_back(citapstreamstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "citapStreamInterface")
    {
        citapstreaminterface = value;
        citapstreaminterface.value_namespace = name_space;
        citapstreaminterface.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "citapStreamSourceAddress")
    {
        citapstreamsourceaddress = value;
        citapstreamsourceaddress.value_namespace = name_space;
        citapstreamsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceLength")
    {
        citapstreamsourcelength = value;
        citapstreamsourcelength.value_namespace = name_space;
        citapstreamsourcelength.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "citapStreamFlowId")
    {
        citapstreamflowid = value;
        citapstreamflowid.value_namespace = name_space;
        citapstreamflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamProtocol")
    {
        citapstreamprotocol = value;
        citapstreamprotocol.value_namespace = name_space;
        citapstreamprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestL4PortMin")
    {
        citapstreamdestl4portmin = value;
        citapstreamdestl4portmin.value_namespace = name_space;
        citapstreamdestl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamDestL4PortMax")
    {
        citapstreamdestl4portmax = value;
        citapstreamdestl4portmax.value_namespace = name_space;
        citapstreamdestl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceL4PortMin")
    {
        citapstreamsourcel4portmin = value;
        citapstreamsourcel4portmin.value_namespace = name_space;
        citapstreamsourcel4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamSourceL4PortMax")
    {
        citapstreamsourcel4portmax = value;
        citapstreamsourcel4portmax.value_namespace = name_space;
        citapstreamsourcel4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamVRF")
    {
        citapstreamvrf = value;
        citapstreamvrf.value_namespace = name_space;
        citapstreamvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "citapStreamStatus")
    {
        citapstreamstatus = value;
        citapstreamstatus.value_namespace = name_space;
        citapstreamstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex.yfilter = yfilter;
    }
    if(value_path == "citapStreamInterface")
    {
        citapstreaminterface.yfilter = yfilter;
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
    if(value_path == "citapStreamSourceAddress")
    {
        citapstreamsourceaddress.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceLength")
    {
        citapstreamsourcelength.yfilter = yfilter;
    }
    if(value_path == "citapStreamTosByte")
    {
        citapstreamtosbyte.yfilter = yfilter;
    }
    if(value_path == "citapStreamTosByteMask")
    {
        citapstreamtosbytemask.yfilter = yfilter;
    }
    if(value_path == "citapStreamFlowId")
    {
        citapstreamflowid.yfilter = yfilter;
    }
    if(value_path == "citapStreamProtocol")
    {
        citapstreamprotocol.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestL4PortMin")
    {
        citapstreamdestl4portmin.yfilter = yfilter;
    }
    if(value_path == "citapStreamDestL4PortMax")
    {
        citapstreamdestl4portmax.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceL4PortMin")
    {
        citapstreamsourcel4portmin.yfilter = yfilter;
    }
    if(value_path == "citapStreamSourceL4PortMax")
    {
        citapstreamsourcel4portmax.yfilter = yfilter;
    }
    if(value_path == "citapStreamVRF")
    {
        citapstreamvrf.yfilter = yfilter;
    }
    if(value_path == "citapStreamStatus")
    {
        citapstreamstatus.yfilter = yfilter;
    }
}

bool CISCOIPTAPMIB::CitapStreamTable::CitapStreamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationContentId" || name == "cTap2StreamIndex" || name == "citapStreamInterface" || name == "citapStreamAddrType" || name == "citapStreamDestinationAddress" || name == "citapStreamDestinationLength" || name == "citapStreamSourceAddress" || name == "citapStreamSourceLength" || name == "citapStreamTosByte" || name == "citapStreamTosByteMask" || name == "citapStreamFlowId" || name == "citapStreamProtocol" || name == "citapStreamDestL4PortMin" || name == "citapStreamDestL4PortMax" || name == "citapStreamSourceL4PortMin" || name == "citapStreamSourceL4PortMax" || name == "citapStreamVRF" || name == "citapStreamStatus")
        return true;
    return false;
}


}
}

