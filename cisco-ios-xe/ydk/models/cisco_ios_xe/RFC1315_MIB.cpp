
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RFC1315_MIB.hpp"

namespace ydk {
namespace RFC1315_MIB {

Rfc1315Mib::Rfc1315Mib()
    :
    frame_relay_globals(std::make_shared<Rfc1315Mib::FrameRelayGlobals>())
	,frcircuittable(std::make_shared<Rfc1315Mib::Frcircuittable>())
	,frdlcmitable(std::make_shared<Rfc1315Mib::Frdlcmitable>())
	,frerrtable(std::make_shared<Rfc1315Mib::Frerrtable>())
{
    frame_relay_globals->parent = this;

    frcircuittable->parent = this;

    frdlcmitable->parent = this;

    frerrtable->parent = this;

    yang_name = "RFC1315-MIB"; yang_parent_name = "RFC1315-MIB";
}

Rfc1315Mib::~Rfc1315Mib()
{
}

bool Rfc1315Mib::has_data() const
{
    return (frame_relay_globals !=  nullptr && frame_relay_globals->has_data())
	|| (frcircuittable !=  nullptr && frcircuittable->has_data())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_data())
	|| (frerrtable !=  nullptr && frerrtable->has_data());
}

bool Rfc1315Mib::has_operation() const
{
    return is_set(operation)
	|| (frame_relay_globals !=  nullptr && frame_relay_globals->has_operation())
	|| (frcircuittable !=  nullptr && frcircuittable->has_operation())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_operation())
	|| (frerrtable !=  nullptr && frerrtable->has_operation());
}

std::string Rfc1315Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Rfc1315Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame-relay-globals")
    {
        if(frame_relay_globals == nullptr)
        {
            frame_relay_globals = std::make_shared<Rfc1315Mib::FrameRelayGlobals>();
        }
        return frame_relay_globals;
    }

    if(child_yang_name == "frCircuitTable")
    {
        if(frcircuittable == nullptr)
        {
            frcircuittable = std::make_shared<Rfc1315Mib::Frcircuittable>();
        }
        return frcircuittable;
    }

    if(child_yang_name == "frDlcmiTable")
    {
        if(frdlcmitable == nullptr)
        {
            frdlcmitable = std::make_shared<Rfc1315Mib::Frdlcmitable>();
        }
        return frdlcmitable;
    }

    if(child_yang_name == "frErrTable")
    {
        if(frerrtable == nullptr)
        {
            frerrtable = std::make_shared<Rfc1315Mib::Frerrtable>();
        }
        return frerrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame_relay_globals != nullptr)
    {
        children["frame-relay-globals"] = frame_relay_globals;
    }

    if(frcircuittable != nullptr)
    {
        children["frCircuitTable"] = frcircuittable;
    }

    if(frdlcmitable != nullptr)
    {
        children["frDlcmiTable"] = frdlcmitable;
    }

    if(frerrtable != nullptr)
    {
        children["frErrTable"] = frerrtable;
    }

    return children;
}

void Rfc1315Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Rfc1315Mib::clone_ptr() const
{
    return std::make_shared<Rfc1315Mib>();
}

std::string Rfc1315Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Rfc1315Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Rfc1315Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Rfc1315Mib::FrameRelayGlobals::FrameRelayGlobals()
    :
    frtrapstate{YType::enumeration, "frTrapState"}
{
    yang_name = "frame-relay-globals"; yang_parent_name = "RFC1315-MIB";
}

Rfc1315Mib::FrameRelayGlobals::~FrameRelayGlobals()
{
}

bool Rfc1315Mib::FrameRelayGlobals::has_data() const
{
    return frtrapstate.is_set;
}

bool Rfc1315Mib::FrameRelayGlobals::has_operation() const
{
    return is_set(operation)
	|| is_set(frtrapstate.operation);
}

std::string Rfc1315Mib::FrameRelayGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay-globals";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::FrameRelayGlobals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frtrapstate.is_set || is_set(frtrapstate.operation)) leaf_name_data.push_back(frtrapstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::FrameRelayGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::FrameRelayGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rfc1315Mib::FrameRelayGlobals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frTrapState")
    {
        frtrapstate = value;
    }
}

Rfc1315Mib::Frdlcmitable::Frdlcmitable()
{
    yang_name = "frDlcmiTable"; yang_parent_name = "RFC1315-MIB";
}

Rfc1315Mib::Frdlcmitable::~Frdlcmitable()
{
}

bool Rfc1315Mib::Frdlcmitable::has_data() const
{
    for (std::size_t index=0; index<frdlcmientry.size(); index++)
    {
        if(frdlcmientry[index]->has_data())
            return true;
    }
    return false;
}

bool Rfc1315Mib::Frdlcmitable::has_operation() const
{
    for (std::size_t index=0; index<frdlcmientry.size(); index++)
    {
        if(frdlcmientry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rfc1315Mib::Frdlcmitable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiTable";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frdlcmitable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frdlcmitable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frDlcmiEntry")
    {
        for(auto const & c : frdlcmientry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rfc1315Mib::Frdlcmitable::Frdlcmientry>();
        c->parent = this;
        frdlcmientry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frdlcmitable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frdlcmientry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rfc1315Mib::Frdlcmitable::set_value(const std::string & value_path, std::string value)
{
}

Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmientry()
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
    frdlcmistate{YType::enumeration, "frDlcmiState"}
{
    yang_name = "frDlcmiEntry"; yang_parent_name = "frDlcmiTable";
}

Rfc1315Mib::Frdlcmitable::Frdlcmientry::~Frdlcmientry()
{
}

bool Rfc1315Mib::Frdlcmitable::Frdlcmientry::has_data() const
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
	|| frdlcmistate.is_set;
}

bool Rfc1315Mib::Frdlcmitable::Frdlcmientry::has_operation() const
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
	|| is_set(frdlcmistate.operation);
}

std::string Rfc1315Mib::Frdlcmitable::Frdlcmientry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiEntry" <<"[frDlcmiIfIndex='" <<frdlcmiifindex <<"']";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frdlcmitable::Frdlcmientry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/frDlcmiTable/" << get_segment_path();
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
    if (frdlcmistate.is_set || is_set(frdlcmistate.operation)) leaf_name_data.push_back(frdlcmistate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frdlcmitable::Frdlcmientry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frdlcmitable::Frdlcmientry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rfc1315Mib::Frdlcmitable::Frdlcmientry::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "frDlcmiState")
    {
        frdlcmistate = value;
    }
}

Rfc1315Mib::Frcircuittable::Frcircuittable()
{
    yang_name = "frCircuitTable"; yang_parent_name = "RFC1315-MIB";
}

Rfc1315Mib::Frcircuittable::~Frcircuittable()
{
}

bool Rfc1315Mib::Frcircuittable::has_data() const
{
    for (std::size_t index=0; index<frcircuitentry.size(); index++)
    {
        if(frcircuitentry[index]->has_data())
            return true;
    }
    return false;
}

bool Rfc1315Mib::Frcircuittable::has_operation() const
{
    for (std::size_t index=0; index<frcircuitentry.size(); index++)
    {
        if(frcircuitentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rfc1315Mib::Frcircuittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitTable";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frcircuittable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frcircuittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frCircuitEntry")
    {
        for(auto const & c : frcircuitentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rfc1315Mib::Frcircuittable::Frcircuitentry>();
        c->parent = this;
        frcircuitentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frcircuittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frcircuitentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rfc1315Mib::Frcircuittable::set_value(const std::string & value_path, std::string value)
{
}

Rfc1315Mib::Frcircuittable::Frcircuitentry::Frcircuitentry()
    :
    frcircuitifindex{YType::int32, "frCircuitIfIndex"},
    frcircuitdlci{YType::int32, "frCircuitDlci"},
    frcircuitcommittedburst{YType::int32, "frCircuitCommittedBurst"},
    frcircuitcreationtime{YType::uint32, "frCircuitCreationTime"},
    frcircuitexcessburst{YType::int32, "frCircuitExcessBurst"},
    frcircuitlasttimechange{YType::uint32, "frCircuitLastTimeChange"},
    frcircuitreceivedbecns{YType::uint32, "frCircuitReceivedBECNs"},
    frcircuitreceivedfecns{YType::uint32, "frCircuitReceivedFECNs"},
    frcircuitreceivedframes{YType::uint32, "frCircuitReceivedFrames"},
    frcircuitreceivedoctets{YType::uint32, "frCircuitReceivedOctets"},
    frcircuitsentframes{YType::uint32, "frCircuitSentFrames"},
    frcircuitsentoctets{YType::uint32, "frCircuitSentOctets"},
    frcircuitstate{YType::enumeration, "frCircuitState"},
    frcircuitthroughput{YType::int32, "frCircuitThroughput"}
{
    yang_name = "frCircuitEntry"; yang_parent_name = "frCircuitTable";
}

Rfc1315Mib::Frcircuittable::Frcircuitentry::~Frcircuitentry()
{
}

bool Rfc1315Mib::Frcircuittable::Frcircuitentry::has_data() const
{
    return frcircuitifindex.is_set
	|| frcircuitdlci.is_set
	|| frcircuitcommittedburst.is_set
	|| frcircuitcreationtime.is_set
	|| frcircuitexcessburst.is_set
	|| frcircuitlasttimechange.is_set
	|| frcircuitreceivedbecns.is_set
	|| frcircuitreceivedfecns.is_set
	|| frcircuitreceivedframes.is_set
	|| frcircuitreceivedoctets.is_set
	|| frcircuitsentframes.is_set
	|| frcircuitsentoctets.is_set
	|| frcircuitstate.is_set
	|| frcircuitthroughput.is_set;
}

bool Rfc1315Mib::Frcircuittable::Frcircuitentry::has_operation() const
{
    return is_set(operation)
	|| is_set(frcircuitifindex.operation)
	|| is_set(frcircuitdlci.operation)
	|| is_set(frcircuitcommittedburst.operation)
	|| is_set(frcircuitcreationtime.operation)
	|| is_set(frcircuitexcessburst.operation)
	|| is_set(frcircuitlasttimechange.operation)
	|| is_set(frcircuitreceivedbecns.operation)
	|| is_set(frcircuitreceivedfecns.operation)
	|| is_set(frcircuitreceivedframes.operation)
	|| is_set(frcircuitreceivedoctets.operation)
	|| is_set(frcircuitsentframes.operation)
	|| is_set(frcircuitsentoctets.operation)
	|| is_set(frcircuitstate.operation)
	|| is_set(frcircuitthroughput.operation);
}

std::string Rfc1315Mib::Frcircuittable::Frcircuitentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitEntry" <<"[frCircuitIfIndex='" <<frcircuitifindex <<"']" <<"[frCircuitDlci='" <<frcircuitdlci <<"']";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frcircuittable::Frcircuitentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/frCircuitTable/" << get_segment_path();
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
    if (frcircuitexcessburst.is_set || is_set(frcircuitexcessburst.operation)) leaf_name_data.push_back(frcircuitexcessburst.get_name_leafdata());
    if (frcircuitlasttimechange.is_set || is_set(frcircuitlasttimechange.operation)) leaf_name_data.push_back(frcircuitlasttimechange.get_name_leafdata());
    if (frcircuitreceivedbecns.is_set || is_set(frcircuitreceivedbecns.operation)) leaf_name_data.push_back(frcircuitreceivedbecns.get_name_leafdata());
    if (frcircuitreceivedfecns.is_set || is_set(frcircuitreceivedfecns.operation)) leaf_name_data.push_back(frcircuitreceivedfecns.get_name_leafdata());
    if (frcircuitreceivedframes.is_set || is_set(frcircuitreceivedframes.operation)) leaf_name_data.push_back(frcircuitreceivedframes.get_name_leafdata());
    if (frcircuitreceivedoctets.is_set || is_set(frcircuitreceivedoctets.operation)) leaf_name_data.push_back(frcircuitreceivedoctets.get_name_leafdata());
    if (frcircuitsentframes.is_set || is_set(frcircuitsentframes.operation)) leaf_name_data.push_back(frcircuitsentframes.get_name_leafdata());
    if (frcircuitsentoctets.is_set || is_set(frcircuitsentoctets.operation)) leaf_name_data.push_back(frcircuitsentoctets.get_name_leafdata());
    if (frcircuitstate.is_set || is_set(frcircuitstate.operation)) leaf_name_data.push_back(frcircuitstate.get_name_leafdata());
    if (frcircuitthroughput.is_set || is_set(frcircuitthroughput.operation)) leaf_name_data.push_back(frcircuitthroughput.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frcircuittable::Frcircuitentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frcircuittable::Frcircuitentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rfc1315Mib::Frcircuittable::Frcircuitentry::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst = value;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange = value;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns = value;
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
}

Rfc1315Mib::Frerrtable::Frerrtable()
{
    yang_name = "frErrTable"; yang_parent_name = "RFC1315-MIB";
}

Rfc1315Mib::Frerrtable::~Frerrtable()
{
}

bool Rfc1315Mib::Frerrtable::has_data() const
{
    for (std::size_t index=0; index<frerrentry.size(); index++)
    {
        if(frerrentry[index]->has_data())
            return true;
    }
    return false;
}

bool Rfc1315Mib::Frerrtable::has_operation() const
{
    for (std::size_t index=0; index<frerrentry.size(); index++)
    {
        if(frerrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rfc1315Mib::Frerrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrTable";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frerrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frerrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frErrEntry")
    {
        for(auto const & c : frerrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rfc1315Mib::Frerrtable::Frerrentry>();
        c->parent = this;
        frerrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frerrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frerrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rfc1315Mib::Frerrtable::set_value(const std::string & value_path, std::string value)
{
}

Rfc1315Mib::Frerrtable::Frerrentry::Frerrentry()
    :
    frerrifindex{YType::int32, "frErrIfIndex"},
    frerrdata{YType::str, "frErrData"},
    frerrtime{YType::uint32, "frErrTime"},
    frerrtype{YType::enumeration, "frErrType"}
{
    yang_name = "frErrEntry"; yang_parent_name = "frErrTable";
}

Rfc1315Mib::Frerrtable::Frerrentry::~Frerrentry()
{
}

bool Rfc1315Mib::Frerrtable::Frerrentry::has_data() const
{
    return frerrifindex.is_set
	|| frerrdata.is_set
	|| frerrtime.is_set
	|| frerrtype.is_set;
}

bool Rfc1315Mib::Frerrtable::Frerrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(frerrifindex.operation)
	|| is_set(frerrdata.operation)
	|| is_set(frerrtime.operation)
	|| is_set(frerrtype.operation);
}

std::string Rfc1315Mib::Frerrtable::Frerrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrEntry" <<"[frErrIfIndex='" <<frerrifindex <<"']";

    return path_buffer.str();

}

const EntityPath Rfc1315Mib::Frerrtable::Frerrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RFC1315-MIB:RFC1315-MIB/frErrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frerrifindex.is_set || is_set(frerrifindex.operation)) leaf_name_data.push_back(frerrifindex.get_name_leafdata());
    if (frerrdata.is_set || is_set(frerrdata.operation)) leaf_name_data.push_back(frerrdata.get_name_leafdata());
    if (frerrtime.is_set || is_set(frerrtime.operation)) leaf_name_data.push_back(frerrtime.get_name_leafdata());
    if (frerrtype.is_set || is_set(frerrtype.operation)) leaf_name_data.push_back(frerrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rfc1315Mib::Frerrtable::Frerrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rfc1315Mib::Frerrtable::Frerrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rfc1315Mib::Frerrtable::Frerrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex = value;
    }
    if(value_path == "frErrData")
    {
        frerrdata = value;
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

const Enum::YLeaf Rfc1315Mib::FrameRelayGlobals::FrtrapstateEnum::enabled {1, "enabled"};
const Enum::YLeaf Rfc1315Mib::FrameRelayGlobals::FrtrapstateEnum::disabled {2, "disabled"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::noLmiConfigured {1, "noLmiConfigured"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::lmiRev1 {2, "lmiRev1"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::ansiT1_617_D {3, "ansiT1-617-D"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum::ansiT1_617_B {4, "ansiT1-617-B"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q921 {1, "q921"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922March90 {2, "q922March90"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922November90 {3, "q922November90"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum::q922 {4, "q922"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::two_octets {2, "two-octets"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::three_octets {3, "three-octets"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum::four_octets {4, "four-octets"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum::nonBroadcast {1, "nonBroadcast"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum::broadcast {2, "broadcast"};

const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::invalid {1, "invalid"};
const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::active {2, "active"};
const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum::inactive {3, "inactive"};

const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::unknownError {1, "unknownError"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::receiveShort {2, "receiveShort"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::receiveLong {3, "receiveLong"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::illegalDLCI {4, "illegalDLCI"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::unknownDLCI {5, "unknownDLCI"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiProtoErr {6, "dlcmiProtoErr"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiUnknownIE {7, "dlcmiUnknownIE"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiSequenceErr {8, "dlcmiSequenceErr"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::dlcmiUnknownRpt {9, "dlcmiUnknownRpt"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum::noErrorSinceReset {10, "noErrorSinceReset"};


}
}

