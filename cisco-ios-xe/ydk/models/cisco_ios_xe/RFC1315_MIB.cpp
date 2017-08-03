
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RFC1315_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void Rfc1315Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rfc1315Mib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Rfc1315Mib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Rfc1315Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame-relay-globals" || name == "frCircuitTable" || name == "frDlcmiTable" || name == "frErrTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frtrapstate.yfilter);
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

    if (frtrapstate.is_set || is_set(frtrapstate.yfilter)) leaf_name_data.push_back(frtrapstate.get_name_leafdata());


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

void Rfc1315Mib::FrameRelayGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frTrapState")
    {
        frtrapstate = value;
        frtrapstate.value_namespace = name_space;
        frtrapstate.value_namespace_prefix = name_space_prefix;
    }
}

void Rfc1315Mib::FrameRelayGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frTrapState")
    {
        frtrapstate.yfilter = yfilter;
    }
}

bool Rfc1315Mib::FrameRelayGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frTrapState")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Rfc1315Mib::Frdlcmitable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rfc1315Mib::Frdlcmitable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rfc1315Mib::Frdlcmitable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frdlcmiifindex.yfilter)
	|| ydk::is_set(frdlcmiaddress.yfilter)
	|| ydk::is_set(frdlcmiaddresslen.yfilter)
	|| ydk::is_set(frdlcmierrorthreshold.yfilter)
	|| ydk::is_set(frdlcmifullenquiryinterval.yfilter)
	|| ydk::is_set(frdlcmimaxsupportedvcs.yfilter)
	|| ydk::is_set(frdlcmimonitoredevents.yfilter)
	|| ydk::is_set(frdlcmimulticast.yfilter)
	|| ydk::is_set(frdlcmipollinginterval.yfilter)
	|| ydk::is_set(frdlcmistate.yfilter);
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

    if (frdlcmiifindex.is_set || is_set(frdlcmiifindex.yfilter)) leaf_name_data.push_back(frdlcmiifindex.get_name_leafdata());
    if (frdlcmiaddress.is_set || is_set(frdlcmiaddress.yfilter)) leaf_name_data.push_back(frdlcmiaddress.get_name_leafdata());
    if (frdlcmiaddresslen.is_set || is_set(frdlcmiaddresslen.yfilter)) leaf_name_data.push_back(frdlcmiaddresslen.get_name_leafdata());
    if (frdlcmierrorthreshold.is_set || is_set(frdlcmierrorthreshold.yfilter)) leaf_name_data.push_back(frdlcmierrorthreshold.get_name_leafdata());
    if (frdlcmifullenquiryinterval.is_set || is_set(frdlcmifullenquiryinterval.yfilter)) leaf_name_data.push_back(frdlcmifullenquiryinterval.get_name_leafdata());
    if (frdlcmimaxsupportedvcs.is_set || is_set(frdlcmimaxsupportedvcs.yfilter)) leaf_name_data.push_back(frdlcmimaxsupportedvcs.get_name_leafdata());
    if (frdlcmimonitoredevents.is_set || is_set(frdlcmimonitoredevents.yfilter)) leaf_name_data.push_back(frdlcmimonitoredevents.get_name_leafdata());
    if (frdlcmimulticast.is_set || is_set(frdlcmimulticast.yfilter)) leaf_name_data.push_back(frdlcmimulticast.get_name_leafdata());
    if (frdlcmipollinginterval.is_set || is_set(frdlcmipollinginterval.yfilter)) leaf_name_data.push_back(frdlcmipollinginterval.get_name_leafdata());
    if (frdlcmistate.is_set || is_set(frdlcmistate.yfilter)) leaf_name_data.push_back(frdlcmistate.get_name_leafdata());


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

void Rfc1315Mib::Frdlcmitable::Frdlcmientry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frDlcmiIfIndex")
    {
        frdlcmiifindex = value;
        frdlcmiifindex.value_namespace = name_space;
        frdlcmiifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiAddress")
    {
        frdlcmiaddress = value;
        frdlcmiaddress.value_namespace = name_space;
        frdlcmiaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiAddressLen")
    {
        frdlcmiaddresslen = value;
        frdlcmiaddresslen.value_namespace = name_space;
        frdlcmiaddresslen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiErrorThreshold")
    {
        frdlcmierrorthreshold = value;
        frdlcmierrorthreshold.value_namespace = name_space;
        frdlcmierrorthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiFullEnquiryInterval")
    {
        frdlcmifullenquiryinterval = value;
        frdlcmifullenquiryinterval.value_namespace = name_space;
        frdlcmifullenquiryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMaxSupportedVCs")
    {
        frdlcmimaxsupportedvcs = value;
        frdlcmimaxsupportedvcs.value_namespace = name_space;
        frdlcmimaxsupportedvcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMonitoredEvents")
    {
        frdlcmimonitoredevents = value;
        frdlcmimonitoredevents.value_namespace = name_space;
        frdlcmimonitoredevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMulticast")
    {
        frdlcmimulticast = value;
        frdlcmimulticast.value_namespace = name_space;
        frdlcmimulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiPollingInterval")
    {
        frdlcmipollinginterval = value;
        frdlcmipollinginterval.value_namespace = name_space;
        frdlcmipollinginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate = value;
        frdlcmistate.value_namespace = name_space;
        frdlcmistate.value_namespace_prefix = name_space_prefix;
    }
}

void Rfc1315Mib::Frdlcmitable::Frdlcmientry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frDlcmiIfIndex")
    {
        frdlcmiifindex.yfilter = yfilter;
    }
    if(value_path == "frDlcmiAddress")
    {
        frdlcmiaddress.yfilter = yfilter;
    }
    if(value_path == "frDlcmiAddressLen")
    {
        frdlcmiaddresslen.yfilter = yfilter;
    }
    if(value_path == "frDlcmiErrorThreshold")
    {
        frdlcmierrorthreshold.yfilter = yfilter;
    }
    if(value_path == "frDlcmiFullEnquiryInterval")
    {
        frdlcmifullenquiryinterval.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMaxSupportedVCs")
    {
        frdlcmimaxsupportedvcs.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMonitoredEvents")
    {
        frdlcmimonitoredevents.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMulticast")
    {
        frdlcmimulticast.yfilter = yfilter;
    }
    if(value_path == "frDlcmiPollingInterval")
    {
        frdlcmipollinginterval.yfilter = yfilter;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate.yfilter = yfilter;
    }
}

bool Rfc1315Mib::Frdlcmitable::Frdlcmientry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiIfIndex" || name == "frDlcmiAddress" || name == "frDlcmiAddressLen" || name == "frDlcmiErrorThreshold" || name == "frDlcmiFullEnquiryInterval" || name == "frDlcmiMaxSupportedVCs" || name == "frDlcmiMonitoredEvents" || name == "frDlcmiMulticast" || name == "frDlcmiPollingInterval" || name == "frDlcmiState")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Rfc1315Mib::Frcircuittable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rfc1315Mib::Frcircuittable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rfc1315Mib::Frcircuittable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frcircuitifindex.yfilter)
	|| ydk::is_set(frcircuitdlci.yfilter)
	|| ydk::is_set(frcircuitcommittedburst.yfilter)
	|| ydk::is_set(frcircuitcreationtime.yfilter)
	|| ydk::is_set(frcircuitexcessburst.yfilter)
	|| ydk::is_set(frcircuitlasttimechange.yfilter)
	|| ydk::is_set(frcircuitreceivedbecns.yfilter)
	|| ydk::is_set(frcircuitreceivedfecns.yfilter)
	|| ydk::is_set(frcircuitreceivedframes.yfilter)
	|| ydk::is_set(frcircuitreceivedoctets.yfilter)
	|| ydk::is_set(frcircuitsentframes.yfilter)
	|| ydk::is_set(frcircuitsentoctets.yfilter)
	|| ydk::is_set(frcircuitstate.yfilter)
	|| ydk::is_set(frcircuitthroughput.yfilter);
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

    if (frcircuitifindex.is_set || is_set(frcircuitifindex.yfilter)) leaf_name_data.push_back(frcircuitifindex.get_name_leafdata());
    if (frcircuitdlci.is_set || is_set(frcircuitdlci.yfilter)) leaf_name_data.push_back(frcircuitdlci.get_name_leafdata());
    if (frcircuitcommittedburst.is_set || is_set(frcircuitcommittedburst.yfilter)) leaf_name_data.push_back(frcircuitcommittedburst.get_name_leafdata());
    if (frcircuitcreationtime.is_set || is_set(frcircuitcreationtime.yfilter)) leaf_name_data.push_back(frcircuitcreationtime.get_name_leafdata());
    if (frcircuitexcessburst.is_set || is_set(frcircuitexcessburst.yfilter)) leaf_name_data.push_back(frcircuitexcessburst.get_name_leafdata());
    if (frcircuitlasttimechange.is_set || is_set(frcircuitlasttimechange.yfilter)) leaf_name_data.push_back(frcircuitlasttimechange.get_name_leafdata());
    if (frcircuitreceivedbecns.is_set || is_set(frcircuitreceivedbecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedbecns.get_name_leafdata());
    if (frcircuitreceivedfecns.is_set || is_set(frcircuitreceivedfecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedfecns.get_name_leafdata());
    if (frcircuitreceivedframes.is_set || is_set(frcircuitreceivedframes.yfilter)) leaf_name_data.push_back(frcircuitreceivedframes.get_name_leafdata());
    if (frcircuitreceivedoctets.is_set || is_set(frcircuitreceivedoctets.yfilter)) leaf_name_data.push_back(frcircuitreceivedoctets.get_name_leafdata());
    if (frcircuitsentframes.is_set || is_set(frcircuitsentframes.yfilter)) leaf_name_data.push_back(frcircuitsentframes.get_name_leafdata());
    if (frcircuitsentoctets.is_set || is_set(frcircuitsentoctets.yfilter)) leaf_name_data.push_back(frcircuitsentoctets.get_name_leafdata());
    if (frcircuitstate.is_set || is_set(frcircuitstate.yfilter)) leaf_name_data.push_back(frcircuitstate.get_name_leafdata());
    if (frcircuitthroughput.is_set || is_set(frcircuitthroughput.yfilter)) leaf_name_data.push_back(frcircuitthroughput.get_name_leafdata());


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

void Rfc1315Mib::Frcircuittable::Frcircuitentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frCircuitIfIndex")
    {
        frcircuitifindex = value;
        frcircuitifindex.value_namespace = name_space;
        frcircuitifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitDlci")
    {
        frcircuitdlci = value;
        frcircuitdlci.value_namespace = name_space;
        frcircuitdlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitCommittedBurst")
    {
        frcircuitcommittedburst = value;
        frcircuitcommittedburst.value_namespace = name_space;
        frcircuitcommittedburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitCreationTime")
    {
        frcircuitcreationtime = value;
        frcircuitcreationtime.value_namespace = name_space;
        frcircuitcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst = value;
        frcircuitexcessburst.value_namespace = name_space;
        frcircuitexcessburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange = value;
        frcircuitlasttimechange.value_namespace = name_space;
        frcircuitlasttimechange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns = value;
        frcircuitreceivedbecns.value_namespace = name_space;
        frcircuitreceivedbecns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedFECNs")
    {
        frcircuitreceivedfecns = value;
        frcircuitreceivedfecns.value_namespace = name_space;
        frcircuitreceivedfecns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedFrames")
    {
        frcircuitreceivedframes = value;
        frcircuitreceivedframes.value_namespace = name_space;
        frcircuitreceivedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedOctets")
    {
        frcircuitreceivedoctets = value;
        frcircuitreceivedoctets.value_namespace = name_space;
        frcircuitreceivedoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitSentFrames")
    {
        frcircuitsentframes = value;
        frcircuitsentframes.value_namespace = name_space;
        frcircuitsentframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitSentOctets")
    {
        frcircuitsentoctets = value;
        frcircuitsentoctets.value_namespace = name_space;
        frcircuitsentoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitState")
    {
        frcircuitstate = value;
        frcircuitstate.value_namespace = name_space;
        frcircuitstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitThroughput")
    {
        frcircuitthroughput = value;
        frcircuitthroughput.value_namespace = name_space;
        frcircuitthroughput.value_namespace_prefix = name_space_prefix;
    }
}

void Rfc1315Mib::Frcircuittable::Frcircuitentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frCircuitIfIndex")
    {
        frcircuitifindex.yfilter = yfilter;
    }
    if(value_path == "frCircuitDlci")
    {
        frcircuitdlci.yfilter = yfilter;
    }
    if(value_path == "frCircuitCommittedBurst")
    {
        frcircuitcommittedburst.yfilter = yfilter;
    }
    if(value_path == "frCircuitCreationTime")
    {
        frcircuitcreationtime.yfilter = yfilter;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst.yfilter = yfilter;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedFECNs")
    {
        frcircuitreceivedfecns.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedFrames")
    {
        frcircuitreceivedframes.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedOctets")
    {
        frcircuitreceivedoctets.yfilter = yfilter;
    }
    if(value_path == "frCircuitSentFrames")
    {
        frcircuitsentframes.yfilter = yfilter;
    }
    if(value_path == "frCircuitSentOctets")
    {
        frcircuitsentoctets.yfilter = yfilter;
    }
    if(value_path == "frCircuitState")
    {
        frcircuitstate.yfilter = yfilter;
    }
    if(value_path == "frCircuitThroughput")
    {
        frcircuitthroughput.yfilter = yfilter;
    }
}

bool Rfc1315Mib::Frcircuittable::Frcircuitentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitIfIndex" || name == "frCircuitDlci" || name == "frCircuitCommittedBurst" || name == "frCircuitCreationTime" || name == "frCircuitExcessBurst" || name == "frCircuitLastTimeChange" || name == "frCircuitReceivedBECNs" || name == "frCircuitReceivedFECNs" || name == "frCircuitReceivedFrames" || name == "frCircuitReceivedOctets" || name == "frCircuitSentFrames" || name == "frCircuitSentOctets" || name == "frCircuitState" || name == "frCircuitThroughput")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Rfc1315Mib::Frerrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rfc1315Mib::Frerrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rfc1315Mib::Frerrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frerrifindex.yfilter)
	|| ydk::is_set(frerrdata.yfilter)
	|| ydk::is_set(frerrtime.yfilter)
	|| ydk::is_set(frerrtype.yfilter);
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

    if (frerrifindex.is_set || is_set(frerrifindex.yfilter)) leaf_name_data.push_back(frerrifindex.get_name_leafdata());
    if (frerrdata.is_set || is_set(frerrdata.yfilter)) leaf_name_data.push_back(frerrdata.get_name_leafdata());
    if (frerrtime.is_set || is_set(frerrtime.yfilter)) leaf_name_data.push_back(frerrtime.get_name_leafdata());
    if (frerrtype.is_set || is_set(frerrtype.yfilter)) leaf_name_data.push_back(frerrtype.get_name_leafdata());


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

void Rfc1315Mib::Frerrtable::Frerrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex = value;
        frerrifindex.value_namespace = name_space;
        frerrifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frErrData")
    {
        frerrdata = value;
        frerrdata.value_namespace = name_space;
        frerrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frErrTime")
    {
        frerrtime = value;
        frerrtime.value_namespace = name_space;
        frerrtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frErrType")
    {
        frerrtype = value;
        frerrtype.value_namespace = name_space;
        frerrtype.value_namespace_prefix = name_space_prefix;
    }
}

void Rfc1315Mib::Frerrtable::Frerrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex.yfilter = yfilter;
    }
    if(value_path == "frErrData")
    {
        frerrdata.yfilter = yfilter;
    }
    if(value_path == "frErrTime")
    {
        frerrtime.yfilter = yfilter;
    }
    if(value_path == "frErrType")
    {
        frerrtype.yfilter = yfilter;
    }
}

bool Rfc1315Mib::Frerrtable::Frerrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrIfIndex" || name == "frErrData" || name == "frErrTime" || name == "frErrType")
        return true;
    return false;
}

const Enum::YLeaf Rfc1315Mib::FrameRelayGlobals::Frtrapstate::enabled {1, "enabled"};
const Enum::YLeaf Rfc1315Mib::FrameRelayGlobals::Frtrapstate::disabled {2, "disabled"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmistate::noLmiConfigured {1, "noLmiConfigured"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmistate::lmiRev1 {2, "lmiRev1"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmistate::ansiT1_617_D {3, "ansiT1-617-D"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmistate::ansiT1_617_B {4, "ansiT1-617-B"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q921 {1, "q921"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922March90 {2, "q922March90"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922November90 {3, "q922November90"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922 {4, "q922"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::two_octets {2, "two-octets"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::three_octets {3, "three-octets"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::four_octets {4, "four-octets"};

const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmimulticast::nonBroadcast {1, "nonBroadcast"};
const Enum::YLeaf Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmimulticast::broadcast {2, "broadcast"};

const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::Frcircuitstate::invalid {1, "invalid"};
const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::Frcircuitstate::active {2, "active"};
const Enum::YLeaf Rfc1315Mib::Frcircuittable::Frcircuitentry::Frcircuitstate::inactive {3, "inactive"};

const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::unknownError {1, "unknownError"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::receiveShort {2, "receiveShort"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::receiveLong {3, "receiveLong"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::illegalDLCI {4, "illegalDLCI"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::unknownDLCI {5, "unknownDLCI"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::dlcmiProtoErr {6, "dlcmiProtoErr"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::dlcmiUnknownIE {7, "dlcmiUnknownIE"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::dlcmiSequenceErr {8, "dlcmiSequenceErr"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::dlcmiUnknownRpt {9, "dlcmiUnknownRpt"};
const Enum::YLeaf Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype::noErrorSinceReset {10, "noErrorSinceReset"};


}
}

