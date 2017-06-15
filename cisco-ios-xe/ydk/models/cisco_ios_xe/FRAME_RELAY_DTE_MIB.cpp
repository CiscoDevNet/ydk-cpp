
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "FRAME_RELAY_DTE_MIB.hpp"

namespace ydk {
namespace FRAME_RELAY_DTE_MIB {

FrameRelayDteMib::FrameRelayDteMib()
    :
    framerelaytrapcontrol_(std::make_shared<FrameRelayDteMib::Framerelaytrapcontrol>())
	,frcircuittable_(std::make_shared<FrameRelayDteMib::Frcircuittable>())
	,frdlcmitable_(std::make_shared<FrameRelayDteMib::Frdlcmitable>())
	,frerrtable_(std::make_shared<FrameRelayDteMib::Frerrtable>())
{
    framerelaytrapcontrol_->parent = this;

    frcircuittable_->parent = this;

    frdlcmitable_->parent = this;

    frerrtable_->parent = this;

    yang_name = "FRAME-RELAY-DTE-MIB"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::~FrameRelayDteMib()
{
}

bool FrameRelayDteMib::has_data() const
{
    return (framerelaytrapcontrol_ !=  nullptr && framerelaytrapcontrol_->has_data())
	|| (frcircuittable_ !=  nullptr && frcircuittable_->has_data())
	|| (frdlcmitable_ !=  nullptr && frdlcmitable_->has_data())
	|| (frerrtable_ !=  nullptr && frerrtable_->has_data());
}

bool FrameRelayDteMib::has_operation() const
{
    return is_set(operation)
	|| (framerelaytrapcontrol_ !=  nullptr && framerelaytrapcontrol_->has_operation())
	|| (frcircuittable_ !=  nullptr && frcircuittable_->has_operation())
	|| (frdlcmitable_ !=  nullptr && frdlcmitable_->has_operation())
	|| (frerrtable_ !=  nullptr && frerrtable_->has_operation());
}

std::string FrameRelayDteMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FrameRelayDteMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frameRelayTrapControl")
    {
        if(framerelaytrapcontrol_ == nullptr)
        {
            framerelaytrapcontrol_ = std::make_shared<FrameRelayDteMib::Framerelaytrapcontrol>();
        }
        return framerelaytrapcontrol_;
    }

    if(child_yang_name == "frCircuitTable")
    {
        if(frcircuittable_ == nullptr)
        {
            frcircuittable_ = std::make_shared<FrameRelayDteMib::Frcircuittable>();
        }
        return frcircuittable_;
    }

    if(child_yang_name == "frDlcmiTable")
    {
        if(frdlcmitable_ == nullptr)
        {
            frdlcmitable_ = std::make_shared<FrameRelayDteMib::Frdlcmitable>();
        }
        return frdlcmitable_;
    }

    if(child_yang_name == "frErrTable")
    {
        if(frerrtable_ == nullptr)
        {
            frerrtable_ = std::make_shared<FrameRelayDteMib::Frerrtable>();
        }
        return frerrtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(framerelaytrapcontrol_ != nullptr)
    {
        children["frameRelayTrapControl"] = framerelaytrapcontrol_;
    }

    if(frcircuittable_ != nullptr)
    {
        children["frCircuitTable"] = frcircuittable_;
    }

    if(frdlcmitable_ != nullptr)
    {
        children["frDlcmiTable"] = frdlcmitable_;
    }

    if(frerrtable_ != nullptr)
    {
        children["frErrTable"] = frerrtable_;
    }

    return children;
}

void FrameRelayDteMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FrameRelayDteMib::clone_ptr() const
{
    return std::make_shared<FrameRelayDteMib>();
}

std::string FrameRelayDteMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FrameRelayDteMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FrameRelayDteMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

FrameRelayDteMib::Framerelaytrapcontrol::Framerelaytrapcontrol()
    :
    frtrapmaxrate{YType::int32, "frTrapMaxRate"},
    frtrapstate{YType::enumeration, "frTrapState"}
{
    yang_name = "frameRelayTrapControl"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::Framerelaytrapcontrol::~Framerelaytrapcontrol()
{
}

bool FrameRelayDteMib::Framerelaytrapcontrol::has_data() const
{
    return frtrapmaxrate.is_set
	|| frtrapstate.is_set;
}

bool FrameRelayDteMib::Framerelaytrapcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(frtrapmaxrate.operation)
	|| is_set(frtrapstate.operation);
}

std::string FrameRelayDteMib::Framerelaytrapcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frameRelayTrapControl";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Framerelaytrapcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frtrapmaxrate.is_set || is_set(frtrapmaxrate.operation)) leaf_name_data.push_back(frtrapmaxrate.get_name_leafdata());
    if (frtrapstate.is_set || is_set(frtrapstate.operation)) leaf_name_data.push_back(frtrapstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Framerelaytrapcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Framerelaytrapcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrameRelayDteMib::Framerelaytrapcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frTrapMaxRate")
    {
        frtrapmaxrate = value;
    }
    if(value_path == "frTrapState")
    {
        frtrapstate = value;
    }
}

FrameRelayDteMib::Frdlcmitable::Frdlcmitable()
{
    yang_name = "frDlcmiTable"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::Frdlcmitable::~Frdlcmitable()
{
}

bool FrameRelayDteMib::Frdlcmitable::has_data() const
{
    for (std::size_t index=0; index<frdlcmientry_.size(); index++)
    {
        if(frdlcmientry_[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frdlcmitable::has_operation() const
{
    for (std::size_t index=0; index<frdlcmientry_.size(); index++)
    {
        if(frdlcmientry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FrameRelayDteMib::Frdlcmitable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiTable";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frdlcmitable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frdlcmitable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frDlcmiEntry")
    {
        for(auto const & c : frdlcmientry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frdlcmitable::Frdlcmientry>();
        c->parent = this;
        frdlcmientry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frdlcmitable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frdlcmientry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frdlcmitable::set_value(const std::string & value_path, std::string value)
{
}

FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmientry()
    :
    frdlcmiifindex{YType::int32, "frDlcmiIfIndex"},
    frdlcmiaddress{YType::enumeration, "frDlcmiAddress"},
    frdlcmiaddresslen{YType::enumeration, "frDlcmiAddressLen"},
    frdlcmierrorthreshold{YType::int32, "frDlcmiErrorThreshold"},
    frdlcmifullenquiryinterval{YType::int32, "frDlcmiFullEnquiryInterval"},
    frdlcmimaxsupportedvcs{YType::int32, "frDlcmiMaxSupportedVCs"},
    frdlcmimonitoredevents{YType::int32, "frDlcmiMonitoredEvents"},
    frdlcmimulticast{YType::enumeration, "frDlcmiMulticast"},
    frdlcmipollinginterval{YType::int32, "frDlcmiPollingInterval"},
    frdlcmirowstatus{YType::enumeration, "frDlcmiRowStatus"},
    frdlcmistate{YType::enumeration, "frDlcmiState"},
    frdlcmistatus{YType::enumeration, "frDlcmiStatus"}
{
    yang_name = "frDlcmiEntry"; yang_parent_name = "frDlcmiTable";
}

FrameRelayDteMib::Frdlcmitable::Frdlcmientry::~Frdlcmientry()
{
}

bool FrameRelayDteMib::Frdlcmitable::Frdlcmientry::has_data() const
{
    return frdlcmiifindex.is_set
	|| frdlcmiaddress.is_set
	|| frdlcmiaddresslen.is_set
	|| frdlcmierrorthreshold.is_set
	|| frdlcmifullenquiryinterval.is_set
	|| frdlcmimaxsupportedvcs.is_set
	|| frdlcmimonitoredevents.is_set
	|| frdlcmimulticast.is_set
	|| frdlcmipollinginterval.is_set
	|| frdlcmirowstatus.is_set
	|| frdlcmistate.is_set
	|| frdlcmistatus.is_set;
}

bool FrameRelayDteMib::Frdlcmitable::Frdlcmientry::has_operation() const
{
    return is_set(operation)
	|| is_set(frdlcmiifindex.operation)
	|| is_set(frdlcmiaddress.operation)
	|| is_set(frdlcmiaddresslen.operation)
	|| is_set(frdlcmierrorthreshold.operation)
	|| is_set(frdlcmifullenquiryinterval.operation)
	|| is_set(frdlcmimaxsupportedvcs.operation)
	|| is_set(frdlcmimonitoredevents.operation)
	|| is_set(frdlcmimulticast.operation)
	|| is_set(frdlcmipollinginterval.operation)
	|| is_set(frdlcmirowstatus.operation)
	|| is_set(frdlcmistate.operation)
	|| is_set(frdlcmistatus.operation);
}

std::string FrameRelayDteMib::Frdlcmitable::Frdlcmientry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiEntry" <<"[frDlcmiIfIndex='" <<frdlcmiifindex <<"']";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frdlcmitable::Frdlcmientry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/frDlcmiTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frdlcmiifindex.is_set || is_set(frdlcmiifindex.operation)) leaf_name_data.push_back(frdlcmiifindex.get_name_leafdata());
    if (frdlcmiaddress.is_set || is_set(frdlcmiaddress.operation)) leaf_name_data.push_back(frdlcmiaddress.get_name_leafdata());
    if (frdlcmiaddresslen.is_set || is_set(frdlcmiaddresslen.operation)) leaf_name_data.push_back(frdlcmiaddresslen.get_name_leafdata());
    if (frdlcmierrorthreshold.is_set || is_set(frdlcmierrorthreshold.operation)) leaf_name_data.push_back(frdlcmierrorthreshold.get_name_leafdata());
    if (frdlcmifullenquiryinterval.is_set || is_set(frdlcmifullenquiryinterval.operation)) leaf_name_data.push_back(frdlcmifullenquiryinterval.get_name_leafdata());
    if (frdlcmimaxsupportedvcs.is_set || is_set(frdlcmimaxsupportedvcs.operation)) leaf_name_data.push_back(frdlcmimaxsupportedvcs.get_name_leafdata());
    if (frdlcmimonitoredevents.is_set || is_set(frdlcmimonitoredevents.operation)) leaf_name_data.push_back(frdlcmimonitoredevents.get_name_leafdata());
    if (frdlcmimulticast.is_set || is_set(frdlcmimulticast.operation)) leaf_name_data.push_back(frdlcmimulticast.get_name_leafdata());
    if (frdlcmipollinginterval.is_set || is_set(frdlcmipollinginterval.operation)) leaf_name_data.push_back(frdlcmipollinginterval.get_name_leafdata());
    if (frdlcmirowstatus.is_set || is_set(frdlcmirowstatus.operation)) leaf_name_data.push_back(frdlcmirowstatus.get_name_leafdata());
    if (frdlcmistate.is_set || is_set(frdlcmistate.operation)) leaf_name_data.push_back(frdlcmistate.get_name_leafdata());
    if (frdlcmistatus.is_set || is_set(frdlcmistatus.operation)) leaf_name_data.push_back(frdlcmistatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frdlcmitable::Frdlcmientry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frdlcmitable::Frdlcmientry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrameRelayDteMib::Frdlcmitable::Frdlcmientry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frDlcmiIfIndex")
    {
        frdlcmiifindex = value;
    }
    if(value_path == "frDlcmiAddress")
    {
        frdlcmiaddress = value;
    }
    if(value_path == "frDlcmiAddressLen")
    {
        frdlcmiaddresslen = value;
    }
    if(value_path == "frDlcmiErrorThreshold")
    {
        frdlcmierrorthreshold = value;
    }
    if(value_path == "frDlcmiFullEnquiryInterval")
    {
        frdlcmifullenquiryinterval = value;
    }
    if(value_path == "frDlcmiMaxSupportedVCs")
    {
        frdlcmimaxsupportedvcs = value;
    }
    if(value_path == "frDlcmiMonitoredEvents")
    {
        frdlcmimonitoredevents = value;
    }
    if(value_path == "frDlcmiMulticast")
    {
        frdlcmimulticast = value;
    }
    if(value_path == "frDlcmiPollingInterval")
    {
        frdlcmipollinginterval = value;
    }
    if(value_path == "frDlcmiRowStatus")
    {
        frdlcmirowstatus = value;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate = value;
    }
    if(value_path == "frDlcmiStatus")
    {
        frdlcmistatus = value;
    }
}

FrameRelayDteMib::Frcircuittable::Frcircuittable()
{
    yang_name = "frCircuitTable"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::Frcircuittable::~Frcircuittable()
{
}

bool FrameRelayDteMib::Frcircuittable::has_data() const
{
    for (std::size_t index=0; index<frcircuitentry_.size(); index++)
    {
        if(frcircuitentry_[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frcircuittable::has_operation() const
{
    for (std::size_t index=0; index<frcircuitentry_.size(); index++)
    {
        if(frcircuitentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FrameRelayDteMib::Frcircuittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitTable";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frcircuittable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frcircuittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frCircuitEntry")
    {
        for(auto const & c : frcircuitentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frcircuittable::Frcircuitentry>();
        c->parent = this;
        frcircuitentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frcircuittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frcircuitentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frcircuittable::set_value(const std::string & value_path, std::string value)
{
}

FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitentry()
    :
    frcircuitifindex{YType::int32, "frCircuitIfIndex"},
    frcircuitdlci{YType::int32, "frCircuitDlci"},
    frcircuitcommittedburst{YType::int32, "frCircuitCommittedBurst"},
    frcircuitcreationtime{YType::uint32, "frCircuitCreationTime"},
    frcircuitdiscards{YType::uint32, "frCircuitDiscards"},
    frcircuitexcessburst{YType::int32, "frCircuitExcessBurst"},
    frcircuitlasttimechange{YType::uint32, "frCircuitLastTimeChange"},
    frcircuitlogicalifindex{YType::int32, "frCircuitLogicalIfIndex"},
    frcircuitmulticast{YType::enumeration, "frCircuitMulticast"},
    frcircuitreceivedbecns{YType::uint32, "frCircuitReceivedBECNs"},
    frcircuitreceiveddes{YType::uint32, "frCircuitReceivedDEs"},
    frcircuitreceivedfecns{YType::uint32, "frCircuitReceivedFECNs"},
    frcircuitreceivedframes{YType::uint32, "frCircuitReceivedFrames"},
    frcircuitreceivedoctets{YType::uint32, "frCircuitReceivedOctets"},
    frcircuitrowstatus{YType::enumeration, "frCircuitRowStatus"},
    frcircuitsentdes{YType::uint32, "frCircuitSentDEs"},
    frcircuitsentframes{YType::uint32, "frCircuitSentFrames"},
    frcircuitsentoctets{YType::uint32, "frCircuitSentOctets"},
    frcircuitstate{YType::enumeration, "frCircuitState"},
    frcircuitthroughput{YType::int32, "frCircuitThroughput"},
    frcircuittype{YType::enumeration, "frCircuitType"}
{
    yang_name = "frCircuitEntry"; yang_parent_name = "frCircuitTable";
}

FrameRelayDteMib::Frcircuittable::Frcircuitentry::~Frcircuitentry()
{
}

bool FrameRelayDteMib::Frcircuittable::Frcircuitentry::has_data() const
{
    return frcircuitifindex.is_set
	|| frcircuitdlci.is_set
	|| frcircuitcommittedburst.is_set
	|| frcircuitcreationtime.is_set
	|| frcircuitdiscards.is_set
	|| frcircuitexcessburst.is_set
	|| frcircuitlasttimechange.is_set
	|| frcircuitlogicalifindex.is_set
	|| frcircuitmulticast.is_set
	|| frcircuitreceivedbecns.is_set
	|| frcircuitreceiveddes.is_set
	|| frcircuitreceivedfecns.is_set
	|| frcircuitreceivedframes.is_set
	|| frcircuitreceivedoctets.is_set
	|| frcircuitrowstatus.is_set
	|| frcircuitsentdes.is_set
	|| frcircuitsentframes.is_set
	|| frcircuitsentoctets.is_set
	|| frcircuitstate.is_set
	|| frcircuitthroughput.is_set
	|| frcircuittype.is_set;
}

bool FrameRelayDteMib::Frcircuittable::Frcircuitentry::has_operation() const
{
    return is_set(operation)
	|| is_set(frcircuitifindex.operation)
	|| is_set(frcircuitdlci.operation)
	|| is_set(frcircuitcommittedburst.operation)
	|| is_set(frcircuitcreationtime.operation)
	|| is_set(frcircuitdiscards.operation)
	|| is_set(frcircuitexcessburst.operation)
	|| is_set(frcircuitlasttimechange.operation)
	|| is_set(frcircuitlogicalifindex.operation)
	|| is_set(frcircuitmulticast.operation)
	|| is_set(frcircuitreceivedbecns.operation)
	|| is_set(frcircuitreceiveddes.operation)
	|| is_set(frcircuitreceivedfecns.operation)
	|| is_set(frcircuitreceivedframes.operation)
	|| is_set(frcircuitreceivedoctets.operation)
	|| is_set(frcircuitrowstatus.operation)
	|| is_set(frcircuitsentdes.operation)
	|| is_set(frcircuitsentframes.operation)
	|| is_set(frcircuitsentoctets.operation)
	|| is_set(frcircuitstate.operation)
	|| is_set(frcircuitthroughput.operation)
	|| is_set(frcircuittype.operation);
}

std::string FrameRelayDteMib::Frcircuittable::Frcircuitentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitEntry" <<"[frCircuitIfIndex='" <<frcircuitifindex <<"']" <<"[frCircuitDlci='" <<frcircuitdlci <<"']";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frcircuittable::Frcircuitentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/frCircuitTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frcircuitifindex.is_set || is_set(frcircuitifindex.operation)) leaf_name_data.push_back(frcircuitifindex.get_name_leafdata());
    if (frcircuitdlci.is_set || is_set(frcircuitdlci.operation)) leaf_name_data.push_back(frcircuitdlci.get_name_leafdata());
    if (frcircuitcommittedburst.is_set || is_set(frcircuitcommittedburst.operation)) leaf_name_data.push_back(frcircuitcommittedburst.get_name_leafdata());
    if (frcircuitcreationtime.is_set || is_set(frcircuitcreationtime.operation)) leaf_name_data.push_back(frcircuitcreationtime.get_name_leafdata());
    if (frcircuitdiscards.is_set || is_set(frcircuitdiscards.operation)) leaf_name_data.push_back(frcircuitdiscards.get_name_leafdata());
    if (frcircuitexcessburst.is_set || is_set(frcircuitexcessburst.operation)) leaf_name_data.push_back(frcircuitexcessburst.get_name_leafdata());
    if (frcircuitlasttimechange.is_set || is_set(frcircuitlasttimechange.operation)) leaf_name_data.push_back(frcircuitlasttimechange.get_name_leafdata());
    if (frcircuitlogicalifindex.is_set || is_set(frcircuitlogicalifindex.operation)) leaf_name_data.push_back(frcircuitlogicalifindex.get_name_leafdata());
    if (frcircuitmulticast.is_set || is_set(frcircuitmulticast.operation)) leaf_name_data.push_back(frcircuitmulticast.get_name_leafdata());
    if (frcircuitreceivedbecns.is_set || is_set(frcircuitreceivedbecns.operation)) leaf_name_data.push_back(frcircuitreceivedbecns.get_name_leafdata());
    if (frcircuitreceiveddes.is_set || is_set(frcircuitreceiveddes.operation)) leaf_name_data.push_back(frcircuitreceiveddes.get_name_leafdata());
    if (frcircuitreceivedfecns.is_set || is_set(frcircuitreceivedfecns.operation)) leaf_name_data.push_back(frcircuitreceivedfecns.get_name_leafdata());
    if (frcircuitreceivedframes.is_set || is_set(frcircuitreceivedframes.operation)) leaf_name_data.push_back(frcircuitreceivedframes.get_name_leafdata());
    if (frcircuitreceivedoctets.is_set || is_set(frcircuitreceivedoctets.operation)) leaf_name_data.push_back(frcircuitreceivedoctets.get_name_leafdata());
    if (frcircuitrowstatus.is_set || is_set(frcircuitrowstatus.operation)) leaf_name_data.push_back(frcircuitrowstatus.get_name_leafdata());
    if (frcircuitsentdes.is_set || is_set(frcircuitsentdes.operation)) leaf_name_data.push_back(frcircuitsentdes.get_name_leafdata());
    if (frcircuitsentframes.is_set || is_set(frcircuitsentframes.operation)) leaf_name_data.push_back(frcircuitsentframes.get_name_leafdata());
    if (frcircuitsentoctets.is_set || is_set(frcircuitsentoctets.operation)) leaf_name_data.push_back(frcircuitsentoctets.get_name_leafdata());
    if (frcircuitstate.is_set || is_set(frcircuitstate.operation)) leaf_name_data.push_back(frcircuitstate.get_name_leafdata());
    if (frcircuitthroughput.is_set || is_set(frcircuitthroughput.operation)) leaf_name_data.push_back(frcircuitthroughput.get_name_leafdata());
    if (frcircuittype.is_set || is_set(frcircuittype.operation)) leaf_name_data.push_back(frcircuittype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frcircuittable::Frcircuitentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frcircuittable::Frcircuitentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrameRelayDteMib::Frcircuittable::Frcircuitentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frCircuitIfIndex")
    {
        frcircuitifindex = value;
    }
    if(value_path == "frCircuitDlci")
    {
        frcircuitdlci = value;
    }
    if(value_path == "frCircuitCommittedBurst")
    {
        frcircuitcommittedburst = value;
    }
    if(value_path == "frCircuitCreationTime")
    {
        frcircuitcreationtime = value;
    }
    if(value_path == "frCircuitDiscards")
    {
        frcircuitdiscards = value;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst = value;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange = value;
    }
    if(value_path == "frCircuitLogicalIfIndex")
    {
        frcircuitlogicalifindex = value;
    }
    if(value_path == "frCircuitMulticast")
    {
        frcircuitmulticast = value;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns = value;
    }
    if(value_path == "frCircuitReceivedDEs")
    {
        frcircuitreceiveddes = value;
    }
    if(value_path == "frCircuitReceivedFECNs")
    {
        frcircuitreceivedfecns = value;
    }
    if(value_path == "frCircuitReceivedFrames")
    {
        frcircuitreceivedframes = value;
    }
    if(value_path == "frCircuitReceivedOctets")
    {
        frcircuitreceivedoctets = value;
    }
    if(value_path == "frCircuitRowStatus")
    {
        frcircuitrowstatus = value;
    }
    if(value_path == "frCircuitSentDEs")
    {
        frcircuitsentdes = value;
    }
    if(value_path == "frCircuitSentFrames")
    {
        frcircuitsentframes = value;
    }
    if(value_path == "frCircuitSentOctets")
    {
        frcircuitsentoctets = value;
    }
    if(value_path == "frCircuitState")
    {
        frcircuitstate = value;
    }
    if(value_path == "frCircuitThroughput")
    {
        frcircuitthroughput = value;
    }
    if(value_path == "frCircuitType")
    {
        frcircuittype = value;
    }
}

FrameRelayDteMib::Frerrtable::Frerrtable()
{
    yang_name = "frErrTable"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::Frerrtable::~Frerrtable()
{
}

bool FrameRelayDteMib::Frerrtable::has_data() const
{
    for (std::size_t index=0; index<frerrentry_.size(); index++)
    {
        if(frerrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frerrtable::has_operation() const
{
    for (std::size_t index=0; index<frerrentry_.size(); index++)
    {
        if(frerrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FrameRelayDteMib::Frerrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrTable";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frerrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frerrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frErrEntry")
    {
        for(auto const & c : frerrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frerrtable::Frerrentry>();
        c->parent = this;
        frerrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frerrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frerrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frerrtable::set_value(const std::string & value_path, std::string value)
{
}

FrameRelayDteMib::Frerrtable::Frerrentry::Frerrentry()
    :
    frerrifindex{YType::int32, "frErrIfIndex"},
    frerrdata{YType::str, "frErrData"},
    frerrfaults{YType::uint32, "frErrFaults"},
    frerrfaulttime{YType::uint32, "frErrFaultTime"},
    frerrtime{YType::uint32, "frErrTime"},
    frerrtype{YType::enumeration, "frErrType"}
{
    yang_name = "frErrEntry"; yang_parent_name = "frErrTable";
}

FrameRelayDteMib::Frerrtable::Frerrentry::~Frerrentry()
{
}

bool FrameRelayDteMib::Frerrtable::Frerrentry::has_data() const
{
    return frerrifindex.is_set
	|| frerrdata.is_set
	|| frerrfaults.is_set
	|| frerrfaulttime.is_set
	|| frerrtime.is_set
	|| frerrtype.is_set;
}

bool FrameRelayDteMib::Frerrtable::Frerrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(frerrifindex.operation)
	|| is_set(frerrdata.operation)
	|| is_set(frerrfaults.operation)
	|| is_set(frerrfaulttime.operation)
	|| is_set(frerrtime.operation)
	|| is_set(frerrtype.operation);
}

std::string FrameRelayDteMib::Frerrtable::Frerrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrEntry" <<"[frErrIfIndex='" <<frerrifindex <<"']";

    return path_buffer.str();

}

const EntityPath FrameRelayDteMib::Frerrtable::Frerrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "FRAME-RELAY-DTE-MIB:FRAME-RELAY-DTE-MIB/frErrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frerrifindex.is_set || is_set(frerrifindex.operation)) leaf_name_data.push_back(frerrifindex.get_name_leafdata());
    if (frerrdata.is_set || is_set(frerrdata.operation)) leaf_name_data.push_back(frerrdata.get_name_leafdata());
    if (frerrfaults.is_set || is_set(frerrfaults.operation)) leaf_name_data.push_back(frerrfaults.get_name_leafdata());
    if (frerrfaulttime.is_set || is_set(frerrfaulttime.operation)) leaf_name_data.push_back(frerrfaulttime.get_name_leafdata());
    if (frerrtime.is_set || is_set(frerrtime.operation)) leaf_name_data.push_back(frerrtime.get_name_leafdata());
    if (frerrtype.is_set || is_set(frerrtype.operation)) leaf_name_data.push_back(frerrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FrameRelayDteMib::Frerrtable::Frerrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frerrtable::Frerrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrameRelayDteMib::Frerrtable::Frerrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex = value;
    }
    if(value_path == "frErrData")
    {
        frerrdata = value;
    }
    if(value_path == "frErrFaults")
    {
        frerrfaults = value;
    }
    if(value_path == "frErrFaultTime")
    {
        frerrfaulttime = value;
    }
    if(value_path == "frErrTime")
    {
        frerrtime = value;
    }
    if(value_path == "frErrType")
    {
        frerrtype = value;
    }
}

const Enum::YLeaf FrameRelayDteMib::Framerelaytrapcontrol::FrtrapstateEnum::enabled {1, "enabled"};
const Enum::YLeaf FrameRelayDteMib::Framerelaytrapcontrol::FrtrapstateEnum::disabled {2, "disabled"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::noLmiConfigured {1, "noLmiConfigured"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::lmiRev1 {2, "lmiRev1"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::ansiT1617D {3, "ansiT1617D"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::ansiT1617B {4, "ansiT1617B"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::itut933A {5, "itut933A"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::ansiT1617D1994 {6, "ansiT1617D1994"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q921 {1, "q921"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922March90 {2, "q922March90"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922November90 {3, "q922November90"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922 {4, "q922"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::twoOctets {2, "twoOctets"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::threeOctets {3, "threeOctets"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::fourOctets {4, "fourOctets"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum::nonBroadcast {1, "nonBroadcast"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum::broadcast {2, "broadcast"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistatusEnum::running {1, "running"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistatusEnum::fault {2, "fault"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistatusEnum::initializing {3, "initializing"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::invalid {1, "invalid"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::active {2, "active"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::inactive {3, "inactive"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitmulticastEnum::unicast {1, "unicast"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitmulticastEnum::oneWay {2, "oneWay"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitmulticastEnum::twoWay {3, "twoWay"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitmulticastEnum::nWay {4, "nWay"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuittypeEnum::static_ {1, "static"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuittypeEnum::dynamic {2, "dynamic"};

const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::unknownError {1, "unknownError"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::receiveShort {2, "receiveShort"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::receiveLong {3, "receiveLong"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::illegalAddress {4, "illegalAddress"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::unknownAddress {5, "unknownAddress"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiProtoErr {6, "dlcmiProtoErr"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiUnknownIE {7, "dlcmiUnknownIE"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiSequenceErr {8, "dlcmiSequenceErr"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiUnknownRpt {9, "dlcmiUnknownRpt"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum::noErrorSinceReset {10, "noErrorSinceReset"};


}
}

