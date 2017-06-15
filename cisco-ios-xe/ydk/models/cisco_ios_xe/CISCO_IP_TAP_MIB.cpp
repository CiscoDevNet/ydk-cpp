
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_TAP_MIB.hpp"

namespace ydk {
namespace CISCO_IP_TAP_MIB {

CiscoIpTapMib::CiscoIpTapMib()
    :
    citapstreamencodepacket_(std::make_shared<CiscoIpTapMib::Citapstreamencodepacket>())
	,citapstreamtable_(std::make_shared<CiscoIpTapMib::Citapstreamtable>())
{
    citapstreamencodepacket_->parent = this;

    citapstreamtable_->parent = this;

    yang_name = "CISCO-IP-TAP-MIB"; yang_parent_name = "CISCO-IP-TAP-MIB";
}

CiscoIpTapMib::~CiscoIpTapMib()
{
}

bool CiscoIpTapMib::has_data() const
{
    return (citapstreamencodepacket_ !=  nullptr && citapstreamencodepacket_->has_data())
	|| (citapstreamtable_ !=  nullptr && citapstreamtable_->has_data());
}

bool CiscoIpTapMib::has_operation() const
{
    return is_set(operation)
	|| (citapstreamencodepacket_ !=  nullptr && citapstreamencodepacket_->has_operation())
	|| (citapstreamtable_ !=  nullptr && citapstreamtable_->has_operation());
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
        if(citapstreamencodepacket_ == nullptr)
        {
            citapstreamencodepacket_ = std::make_shared<CiscoIpTapMib::Citapstreamencodepacket>();
        }
        return citapstreamencodepacket_;
    }

    if(child_yang_name == "citapStreamTable")
    {
        if(citapstreamtable_ == nullptr)
        {
            citapstreamtable_ = std::make_shared<CiscoIpTapMib::Citapstreamtable>();
        }
        return citapstreamtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(citapstreamencodepacket_ != nullptr)
    {
        children["citapStreamEncodePacket"] = citapstreamencodepacket_;
    }

    if(citapstreamtable_ != nullptr)
    {
        children["citapStreamTable"] = citapstreamtable_;
    }

    return children;
}

void CiscoIpTapMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(citapstreamcapabilities.operation);
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

    if (citapstreamcapabilities.is_set || is_set(citapstreamcapabilities.operation)) leaf_name_data.push_back(citapstreamcapabilities.get_name_leafdata());


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

void CiscoIpTapMib::Citapstreamencodepacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "citapStreamCapabilities")
    {
        citapstreamcapabilities[value] = true;
    }
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
    for (std::size_t index=0; index<citapstreamentry_.size(); index++)
    {
        if(citapstreamentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpTapMib::Citapstreamtable::has_operation() const
{
    for (std::size_t index=0; index<citapstreamentry_.size(); index++)
    {
        if(citapstreamentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : citapstreamentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpTapMib::Citapstreamtable::Citapstreamentry>();
        c->parent = this;
        citapstreamentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpTapMib::Citapstreamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : citapstreamentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpTapMib::Citapstreamtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ctap2mediationcontentid.operation)
	|| is_set(ctap2streamindex.operation)
	|| is_set(citapstreamaddrtype.operation)
	|| is_set(citapstreamdestinationaddress.operation)
	|| is_set(citapstreamdestinationlength.operation)
	|| is_set(citapstreamdestl4portmax.operation)
	|| is_set(citapstreamdestl4portmin.operation)
	|| is_set(citapstreamflowid.operation)
	|| is_set(citapstreaminterface.operation)
	|| is_set(citapstreamprotocol.operation)
	|| is_set(citapstreamsourceaddress.operation)
	|| is_set(citapstreamsourcel4portmax.operation)
	|| is_set(citapstreamsourcel4portmin.operation)
	|| is_set(citapstreamsourcelength.operation)
	|| is_set(citapstreamstatus.operation)
	|| is_set(citapstreamtosbyte.operation)
	|| is_set(citapstreamtosbytemask.operation)
	|| is_set(citapstreamvrf.operation);
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

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.operation)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2streamindex.is_set || is_set(ctap2streamindex.operation)) leaf_name_data.push_back(ctap2streamindex.get_name_leafdata());
    if (citapstreamaddrtype.is_set || is_set(citapstreamaddrtype.operation)) leaf_name_data.push_back(citapstreamaddrtype.get_name_leafdata());
    if (citapstreamdestinationaddress.is_set || is_set(citapstreamdestinationaddress.operation)) leaf_name_data.push_back(citapstreamdestinationaddress.get_name_leafdata());
    if (citapstreamdestinationlength.is_set || is_set(citapstreamdestinationlength.operation)) leaf_name_data.push_back(citapstreamdestinationlength.get_name_leafdata());
    if (citapstreamdestl4portmax.is_set || is_set(citapstreamdestl4portmax.operation)) leaf_name_data.push_back(citapstreamdestl4portmax.get_name_leafdata());
    if (citapstreamdestl4portmin.is_set || is_set(citapstreamdestl4portmin.operation)) leaf_name_data.push_back(citapstreamdestl4portmin.get_name_leafdata());
    if (citapstreamflowid.is_set || is_set(citapstreamflowid.operation)) leaf_name_data.push_back(citapstreamflowid.get_name_leafdata());
    if (citapstreaminterface.is_set || is_set(citapstreaminterface.operation)) leaf_name_data.push_back(citapstreaminterface.get_name_leafdata());
    if (citapstreamprotocol.is_set || is_set(citapstreamprotocol.operation)) leaf_name_data.push_back(citapstreamprotocol.get_name_leafdata());
    if (citapstreamsourceaddress.is_set || is_set(citapstreamsourceaddress.operation)) leaf_name_data.push_back(citapstreamsourceaddress.get_name_leafdata());
    if (citapstreamsourcel4portmax.is_set || is_set(citapstreamsourcel4portmax.operation)) leaf_name_data.push_back(citapstreamsourcel4portmax.get_name_leafdata());
    if (citapstreamsourcel4portmin.is_set || is_set(citapstreamsourcel4portmin.operation)) leaf_name_data.push_back(citapstreamsourcel4portmin.get_name_leafdata());
    if (citapstreamsourcelength.is_set || is_set(citapstreamsourcelength.operation)) leaf_name_data.push_back(citapstreamsourcelength.get_name_leafdata());
    if (citapstreamstatus.is_set || is_set(citapstreamstatus.operation)) leaf_name_data.push_back(citapstreamstatus.get_name_leafdata());
    if (citapstreamtosbyte.is_set || is_set(citapstreamtosbyte.operation)) leaf_name_data.push_back(citapstreamtosbyte.get_name_leafdata());
    if (citapstreamtosbytemask.is_set || is_set(citapstreamtosbytemask.operation)) leaf_name_data.push_back(citapstreamtosbytemask.get_name_leafdata());
    if (citapstreamvrf.is_set || is_set(citapstreamvrf.operation)) leaf_name_data.push_back(citapstreamvrf.get_name_leafdata());


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

void CiscoIpTapMib::Citapstreamtable::Citapstreamentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex = value;
    }
    if(value_path == "citapStreamAddrType")
    {
        citapstreamaddrtype = value;
    }
    if(value_path == "citapStreamDestinationAddress")
    {
        citapstreamdestinationaddress = value;
    }
    if(value_path == "citapStreamDestinationLength")
    {
        citapstreamdestinationlength = value;
    }
    if(value_path == "citapStreamDestL4PortMax")
    {
        citapstreamdestl4portmax = value;
    }
    if(value_path == "citapStreamDestL4PortMin")
    {
        citapstreamdestl4portmin = value;
    }
    if(value_path == "citapStreamFlowId")
    {
        citapstreamflowid = value;
    }
    if(value_path == "citapStreamInterface")
    {
        citapstreaminterface = value;
    }
    if(value_path == "citapStreamProtocol")
    {
        citapstreamprotocol = value;
    }
    if(value_path == "citapStreamSourceAddress")
    {
        citapstreamsourceaddress = value;
    }
    if(value_path == "citapStreamSourceL4PortMax")
    {
        citapstreamsourcel4portmax = value;
    }
    if(value_path == "citapStreamSourceL4PortMin")
    {
        citapstreamsourcel4portmin = value;
    }
    if(value_path == "citapStreamSourceLength")
    {
        citapstreamsourcelength = value;
    }
    if(value_path == "citapStreamStatus")
    {
        citapstreamstatus = value;
    }
    if(value_path == "citapStreamTosByte")
    {
        citapstreamtosbyte = value;
    }
    if(value_path == "citapStreamTosByteMask")
    {
        citapstreamtosbytemask = value;
    }
    if(value_path == "citapStreamVRF")
    {
        citapstreamvrf = value;
    }
}


}
}

