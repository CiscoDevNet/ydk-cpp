
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "FRAME_RELAY_DTE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace FRAME_RELAY_DTE_MIB {

FrameRelayDteMib::FrameRelayDteMib()
    :
    framerelaytrapcontrol(std::make_shared<FrameRelayDteMib::Framerelaytrapcontrol>())
	,frcircuittable(std::make_shared<FrameRelayDteMib::Frcircuittable>())
	,frdlcmitable(std::make_shared<FrameRelayDteMib::Frdlcmitable>())
	,frerrtable(std::make_shared<FrameRelayDteMib::Frerrtable>())
{
    framerelaytrapcontrol->parent = this;

    frcircuittable->parent = this;

    frdlcmitable->parent = this;

    frerrtable->parent = this;

    yang_name = "FRAME-RELAY-DTE-MIB"; yang_parent_name = "FRAME-RELAY-DTE-MIB";
}

FrameRelayDteMib::~FrameRelayDteMib()
{
}

bool FrameRelayDteMib::has_data() const
{
    return (framerelaytrapcontrol !=  nullptr && framerelaytrapcontrol->has_data())
	|| (frcircuittable !=  nullptr && frcircuittable->has_data())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_data())
	|| (frerrtable !=  nullptr && frerrtable->has_data());
}

bool FrameRelayDteMib::has_operation() const
{
    return is_set(yfilter)
	|| (framerelaytrapcontrol !=  nullptr && framerelaytrapcontrol->has_operation())
	|| (frcircuittable !=  nullptr && frcircuittable->has_operation())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_operation())
	|| (frerrtable !=  nullptr && frerrtable->has_operation());
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
        if(framerelaytrapcontrol == nullptr)
        {
            framerelaytrapcontrol = std::make_shared<FrameRelayDteMib::Framerelaytrapcontrol>();
        }
        return framerelaytrapcontrol;
    }

    if(child_yang_name == "frCircuitTable")
    {
        if(frcircuittable == nullptr)
        {
            frcircuittable = std::make_shared<FrameRelayDteMib::Frcircuittable>();
        }
        return frcircuittable;
    }

    if(child_yang_name == "frDlcmiTable")
    {
        if(frdlcmitable == nullptr)
        {
            frdlcmitable = std::make_shared<FrameRelayDteMib::Frdlcmitable>();
        }
        return frdlcmitable;
    }

    if(child_yang_name == "frErrTable")
    {
        if(frerrtable == nullptr)
        {
            frerrtable = std::make_shared<FrameRelayDteMib::Frerrtable>();
        }
        return frerrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(framerelaytrapcontrol != nullptr)
    {
        children["frameRelayTrapControl"] = framerelaytrapcontrol;
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

void FrameRelayDteMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrameRelayDteMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> FrameRelayDteMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FrameRelayDteMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frameRelayTrapControl" || name == "frCircuitTable" || name == "frDlcmiTable" || name == "frErrTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frtrapmaxrate.yfilter)
	|| ydk::is_set(frtrapstate.yfilter);
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

    if (frtrapmaxrate.is_set || is_set(frtrapmaxrate.yfilter)) leaf_name_data.push_back(frtrapmaxrate.get_name_leafdata());
    if (frtrapstate.is_set || is_set(frtrapstate.yfilter)) leaf_name_data.push_back(frtrapstate.get_name_leafdata());


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

void FrameRelayDteMib::Framerelaytrapcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frTrapMaxRate")
    {
        frtrapmaxrate = value;
        frtrapmaxrate.value_namespace = name_space;
        frtrapmaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frTrapState")
    {
        frtrapstate = value;
        frtrapstate.value_namespace = name_space;
        frtrapstate.value_namespace_prefix = name_space_prefix;
    }
}

void FrameRelayDteMib::Framerelaytrapcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frTrapMaxRate")
    {
        frtrapmaxrate.yfilter = yfilter;
    }
    if(value_path == "frTrapState")
    {
        frtrapstate.yfilter = yfilter;
    }
}

bool FrameRelayDteMib::Framerelaytrapcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frTrapMaxRate" || name == "frTrapState")
        return true;
    return false;
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
    for (std::size_t index=0; index<frdlcmientry.size(); index++)
    {
        if(frdlcmientry[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frdlcmitable::has_operation() const
{
    for (std::size_t index=0; index<frdlcmientry.size(); index++)
    {
        if(frdlcmientry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : frdlcmientry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frdlcmitable::Frdlcmientry>();
        c->parent = this;
        frdlcmientry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frdlcmitable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frdlcmientry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frdlcmitable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrameRelayDteMib::Frdlcmitable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrameRelayDteMib::Frdlcmitable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiEntry")
        return true;
    return false;
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
	|| ydk::is_set(frdlcmirowstatus.yfilter)
	|| ydk::is_set(frdlcmistate.yfilter)
	|| ydk::is_set(frdlcmistatus.yfilter);
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

    if (frdlcmiifindex.is_set || is_set(frdlcmiifindex.yfilter)) leaf_name_data.push_back(frdlcmiifindex.get_name_leafdata());
    if (frdlcmiaddress.is_set || is_set(frdlcmiaddress.yfilter)) leaf_name_data.push_back(frdlcmiaddress.get_name_leafdata());
    if (frdlcmiaddresslen.is_set || is_set(frdlcmiaddresslen.yfilter)) leaf_name_data.push_back(frdlcmiaddresslen.get_name_leafdata());
    if (frdlcmierrorthreshold.is_set || is_set(frdlcmierrorthreshold.yfilter)) leaf_name_data.push_back(frdlcmierrorthreshold.get_name_leafdata());
    if (frdlcmifullenquiryinterval.is_set || is_set(frdlcmifullenquiryinterval.yfilter)) leaf_name_data.push_back(frdlcmifullenquiryinterval.get_name_leafdata());
    if (frdlcmimaxsupportedvcs.is_set || is_set(frdlcmimaxsupportedvcs.yfilter)) leaf_name_data.push_back(frdlcmimaxsupportedvcs.get_name_leafdata());
    if (frdlcmimonitoredevents.is_set || is_set(frdlcmimonitoredevents.yfilter)) leaf_name_data.push_back(frdlcmimonitoredevents.get_name_leafdata());
    if (frdlcmimulticast.is_set || is_set(frdlcmimulticast.yfilter)) leaf_name_data.push_back(frdlcmimulticast.get_name_leafdata());
    if (frdlcmipollinginterval.is_set || is_set(frdlcmipollinginterval.yfilter)) leaf_name_data.push_back(frdlcmipollinginterval.get_name_leafdata());
    if (frdlcmirowstatus.is_set || is_set(frdlcmirowstatus.yfilter)) leaf_name_data.push_back(frdlcmirowstatus.get_name_leafdata());
    if (frdlcmistate.is_set || is_set(frdlcmistate.yfilter)) leaf_name_data.push_back(frdlcmistate.get_name_leafdata());
    if (frdlcmistatus.is_set || is_set(frdlcmistatus.yfilter)) leaf_name_data.push_back(frdlcmistatus.get_name_leafdata());


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

void FrameRelayDteMib::Frdlcmitable::Frdlcmientry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "frDlcmiRowStatus")
    {
        frdlcmirowstatus = value;
        frdlcmirowstatus.value_namespace = name_space;
        frdlcmirowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate = value;
        frdlcmistate.value_namespace = name_space;
        frdlcmistate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiStatus")
    {
        frdlcmistatus = value;
        frdlcmistatus.value_namespace = name_space;
        frdlcmistatus.value_namespace_prefix = name_space_prefix;
    }
}

void FrameRelayDteMib::Frdlcmitable::Frdlcmientry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "frDlcmiRowStatus")
    {
        frdlcmirowstatus.yfilter = yfilter;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate.yfilter = yfilter;
    }
    if(value_path == "frDlcmiStatus")
    {
        frdlcmistatus.yfilter = yfilter;
    }
}

bool FrameRelayDteMib::Frdlcmitable::Frdlcmientry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiIfIndex" || name == "frDlcmiAddress" || name == "frDlcmiAddressLen" || name == "frDlcmiErrorThreshold" || name == "frDlcmiFullEnquiryInterval" || name == "frDlcmiMaxSupportedVCs" || name == "frDlcmiMonitoredEvents" || name == "frDlcmiMulticast" || name == "frDlcmiPollingInterval" || name == "frDlcmiRowStatus" || name == "frDlcmiState" || name == "frDlcmiStatus")
        return true;
    return false;
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
    for (std::size_t index=0; index<frcircuitentry.size(); index++)
    {
        if(frcircuitentry[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frcircuittable::has_operation() const
{
    for (std::size_t index=0; index<frcircuitentry.size(); index++)
    {
        if(frcircuitentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : frcircuitentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frcircuittable::Frcircuitentry>();
        c->parent = this;
        frcircuitentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frcircuittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frcircuitentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frcircuittable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrameRelayDteMib::Frcircuittable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrameRelayDteMib::Frcircuittable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frcircuitifindex.yfilter)
	|| ydk::is_set(frcircuitdlci.yfilter)
	|| ydk::is_set(frcircuitcommittedburst.yfilter)
	|| ydk::is_set(frcircuitcreationtime.yfilter)
	|| ydk::is_set(frcircuitdiscards.yfilter)
	|| ydk::is_set(frcircuitexcessburst.yfilter)
	|| ydk::is_set(frcircuitlasttimechange.yfilter)
	|| ydk::is_set(frcircuitlogicalifindex.yfilter)
	|| ydk::is_set(frcircuitmulticast.yfilter)
	|| ydk::is_set(frcircuitreceivedbecns.yfilter)
	|| ydk::is_set(frcircuitreceiveddes.yfilter)
	|| ydk::is_set(frcircuitreceivedfecns.yfilter)
	|| ydk::is_set(frcircuitreceivedframes.yfilter)
	|| ydk::is_set(frcircuitreceivedoctets.yfilter)
	|| ydk::is_set(frcircuitrowstatus.yfilter)
	|| ydk::is_set(frcircuitsentdes.yfilter)
	|| ydk::is_set(frcircuitsentframes.yfilter)
	|| ydk::is_set(frcircuitsentoctets.yfilter)
	|| ydk::is_set(frcircuitstate.yfilter)
	|| ydk::is_set(frcircuitthroughput.yfilter)
	|| ydk::is_set(frcircuittype.yfilter);
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

    if (frcircuitifindex.is_set || is_set(frcircuitifindex.yfilter)) leaf_name_data.push_back(frcircuitifindex.get_name_leafdata());
    if (frcircuitdlci.is_set || is_set(frcircuitdlci.yfilter)) leaf_name_data.push_back(frcircuitdlci.get_name_leafdata());
    if (frcircuitcommittedburst.is_set || is_set(frcircuitcommittedburst.yfilter)) leaf_name_data.push_back(frcircuitcommittedburst.get_name_leafdata());
    if (frcircuitcreationtime.is_set || is_set(frcircuitcreationtime.yfilter)) leaf_name_data.push_back(frcircuitcreationtime.get_name_leafdata());
    if (frcircuitdiscards.is_set || is_set(frcircuitdiscards.yfilter)) leaf_name_data.push_back(frcircuitdiscards.get_name_leafdata());
    if (frcircuitexcessburst.is_set || is_set(frcircuitexcessburst.yfilter)) leaf_name_data.push_back(frcircuitexcessburst.get_name_leafdata());
    if (frcircuitlasttimechange.is_set || is_set(frcircuitlasttimechange.yfilter)) leaf_name_data.push_back(frcircuitlasttimechange.get_name_leafdata());
    if (frcircuitlogicalifindex.is_set || is_set(frcircuitlogicalifindex.yfilter)) leaf_name_data.push_back(frcircuitlogicalifindex.get_name_leafdata());
    if (frcircuitmulticast.is_set || is_set(frcircuitmulticast.yfilter)) leaf_name_data.push_back(frcircuitmulticast.get_name_leafdata());
    if (frcircuitreceivedbecns.is_set || is_set(frcircuitreceivedbecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedbecns.get_name_leafdata());
    if (frcircuitreceiveddes.is_set || is_set(frcircuitreceiveddes.yfilter)) leaf_name_data.push_back(frcircuitreceiveddes.get_name_leafdata());
    if (frcircuitreceivedfecns.is_set || is_set(frcircuitreceivedfecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedfecns.get_name_leafdata());
    if (frcircuitreceivedframes.is_set || is_set(frcircuitreceivedframes.yfilter)) leaf_name_data.push_back(frcircuitreceivedframes.get_name_leafdata());
    if (frcircuitreceivedoctets.is_set || is_set(frcircuitreceivedoctets.yfilter)) leaf_name_data.push_back(frcircuitreceivedoctets.get_name_leafdata());
    if (frcircuitrowstatus.is_set || is_set(frcircuitrowstatus.yfilter)) leaf_name_data.push_back(frcircuitrowstatus.get_name_leafdata());
    if (frcircuitsentdes.is_set || is_set(frcircuitsentdes.yfilter)) leaf_name_data.push_back(frcircuitsentdes.get_name_leafdata());
    if (frcircuitsentframes.is_set || is_set(frcircuitsentframes.yfilter)) leaf_name_data.push_back(frcircuitsentframes.get_name_leafdata());
    if (frcircuitsentoctets.is_set || is_set(frcircuitsentoctets.yfilter)) leaf_name_data.push_back(frcircuitsentoctets.get_name_leafdata());
    if (frcircuitstate.is_set || is_set(frcircuitstate.yfilter)) leaf_name_data.push_back(frcircuitstate.get_name_leafdata());
    if (frcircuitthroughput.is_set || is_set(frcircuitthroughput.yfilter)) leaf_name_data.push_back(frcircuitthroughput.get_name_leafdata());
    if (frcircuittype.is_set || is_set(frcircuittype.yfilter)) leaf_name_data.push_back(frcircuittype.get_name_leafdata());


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

void FrameRelayDteMib::Frcircuittable::Frcircuitentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "frCircuitDiscards")
    {
        frcircuitdiscards = value;
        frcircuitdiscards.value_namespace = name_space;
        frcircuitdiscards.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "frCircuitLogicalIfIndex")
    {
        frcircuitlogicalifindex = value;
        frcircuitlogicalifindex.value_namespace = name_space;
        frcircuitlogicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitMulticast")
    {
        frcircuitmulticast = value;
        frcircuitmulticast.value_namespace = name_space;
        frcircuitmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns = value;
        frcircuitreceivedbecns.value_namespace = name_space;
        frcircuitreceivedbecns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedDEs")
    {
        frcircuitreceiveddes = value;
        frcircuitreceiveddes.value_namespace = name_space;
        frcircuitreceiveddes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "frCircuitRowStatus")
    {
        frcircuitrowstatus = value;
        frcircuitrowstatus.value_namespace = name_space;
        frcircuitrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitSentDEs")
    {
        frcircuitsentdes = value;
        frcircuitsentdes.value_namespace = name_space;
        frcircuitsentdes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "frCircuitType")
    {
        frcircuittype = value;
        frcircuittype.value_namespace = name_space;
        frcircuittype.value_namespace_prefix = name_space_prefix;
    }
}

void FrameRelayDteMib::Frcircuittable::Frcircuitentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "frCircuitDiscards")
    {
        frcircuitdiscards.yfilter = yfilter;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst.yfilter = yfilter;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange.yfilter = yfilter;
    }
    if(value_path == "frCircuitLogicalIfIndex")
    {
        frcircuitlogicalifindex.yfilter = yfilter;
    }
    if(value_path == "frCircuitMulticast")
    {
        frcircuitmulticast.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedDEs")
    {
        frcircuitreceiveddes.yfilter = yfilter;
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
    if(value_path == "frCircuitRowStatus")
    {
        frcircuitrowstatus.yfilter = yfilter;
    }
    if(value_path == "frCircuitSentDEs")
    {
        frcircuitsentdes.yfilter = yfilter;
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
    if(value_path == "frCircuitType")
    {
        frcircuittype.yfilter = yfilter;
    }
}

bool FrameRelayDteMib::Frcircuittable::Frcircuitentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitIfIndex" || name == "frCircuitDlci" || name == "frCircuitCommittedBurst" || name == "frCircuitCreationTime" || name == "frCircuitDiscards" || name == "frCircuitExcessBurst" || name == "frCircuitLastTimeChange" || name == "frCircuitLogicalIfIndex" || name == "frCircuitMulticast" || name == "frCircuitReceivedBECNs" || name == "frCircuitReceivedDEs" || name == "frCircuitReceivedFECNs" || name == "frCircuitReceivedFrames" || name == "frCircuitReceivedOctets" || name == "frCircuitRowStatus" || name == "frCircuitSentDEs" || name == "frCircuitSentFrames" || name == "frCircuitSentOctets" || name == "frCircuitState" || name == "frCircuitThroughput" || name == "frCircuitType")
        return true;
    return false;
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
    for (std::size_t index=0; index<frerrentry.size(); index++)
    {
        if(frerrentry[index]->has_data())
            return true;
    }
    return false;
}

bool FrameRelayDteMib::Frerrtable::has_operation() const
{
    for (std::size_t index=0; index<frerrentry.size(); index++)
    {
        if(frerrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : frerrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrameRelayDteMib::Frerrtable::Frerrentry>();
        c->parent = this;
        frerrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrameRelayDteMib::Frerrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frerrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrameRelayDteMib::Frerrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrameRelayDteMib::Frerrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrameRelayDteMib::Frerrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(frerrifindex.yfilter)
	|| ydk::is_set(frerrdata.yfilter)
	|| ydk::is_set(frerrfaults.yfilter)
	|| ydk::is_set(frerrfaulttime.yfilter)
	|| ydk::is_set(frerrtime.yfilter)
	|| ydk::is_set(frerrtype.yfilter);
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

    if (frerrifindex.is_set || is_set(frerrifindex.yfilter)) leaf_name_data.push_back(frerrifindex.get_name_leafdata());
    if (frerrdata.is_set || is_set(frerrdata.yfilter)) leaf_name_data.push_back(frerrdata.get_name_leafdata());
    if (frerrfaults.is_set || is_set(frerrfaults.yfilter)) leaf_name_data.push_back(frerrfaults.get_name_leafdata());
    if (frerrfaulttime.is_set || is_set(frerrfaulttime.yfilter)) leaf_name_data.push_back(frerrfaulttime.get_name_leafdata());
    if (frerrtime.is_set || is_set(frerrtime.yfilter)) leaf_name_data.push_back(frerrtime.get_name_leafdata());
    if (frerrtype.is_set || is_set(frerrtype.yfilter)) leaf_name_data.push_back(frerrtype.get_name_leafdata());


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

void FrameRelayDteMib::Frerrtable::Frerrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "frErrFaults")
    {
        frerrfaults = value;
        frerrfaults.value_namespace = name_space;
        frerrfaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frErrFaultTime")
    {
        frerrfaulttime = value;
        frerrfaulttime.value_namespace = name_space;
        frerrfaulttime.value_namespace_prefix = name_space_prefix;
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

void FrameRelayDteMib::Frerrtable::Frerrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex.yfilter = yfilter;
    }
    if(value_path == "frErrData")
    {
        frerrdata.yfilter = yfilter;
    }
    if(value_path == "frErrFaults")
    {
        frerrfaults.yfilter = yfilter;
    }
    if(value_path == "frErrFaultTime")
    {
        frerrfaulttime.yfilter = yfilter;
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

bool FrameRelayDteMib::Frerrtable::Frerrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrIfIndex" || name == "frErrData" || name == "frErrFaults" || name == "frErrFaultTime" || name == "frErrTime" || name == "frErrType")
        return true;
    return false;
}

const Enum::YLeaf FrameRelayDteMib::Framerelaytrapcontrol::Frtrapstate::enabled {1, "enabled"};
const Enum::YLeaf FrameRelayDteMib::Framerelaytrapcontrol::Frtrapstate::disabled {2, "disabled"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::noLmiConfigured {1, "noLmiConfigured"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::lmiRev1 {2, "lmiRev1"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::ansiT1617D {3, "ansiT1617D"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::ansiT1617B {4, "ansiT1617B"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::itut933A {5, "itut933A"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistate::ansiT1617D1994 {6, "ansiT1617D1994"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q921 {1, "q921"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922March90 {2, "q922March90"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922November90 {3, "q922November90"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress::q922 {4, "q922"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::twoOctets {2, "twoOctets"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::threeOctets {3, "threeOctets"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen::fourOctets {4, "fourOctets"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmimulticast::nonBroadcast {1, "nonBroadcast"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmimulticast::broadcast {2, "broadcast"};

const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistatus::running {1, "running"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistatus::fault {2, "fault"};
const Enum::YLeaf FrameRelayDteMib::Frdlcmitable::Frdlcmientry::Frdlcmistatus::initializing {3, "initializing"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitstate::invalid {1, "invalid"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitstate::active {2, "active"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitstate::inactive {3, "inactive"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitmulticast::unicast {1, "unicast"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitmulticast::oneWay {2, "oneWay"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitmulticast::twoWay {3, "twoWay"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuitmulticast::nWay {4, "nWay"};

const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuittype::static_ {1, "static"};
const Enum::YLeaf FrameRelayDteMib::Frcircuittable::Frcircuitentry::Frcircuittype::dynamic {2, "dynamic"};

const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::unknownError {1, "unknownError"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::receiveShort {2, "receiveShort"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::receiveLong {3, "receiveLong"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::illegalAddress {4, "illegalAddress"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::unknownAddress {5, "unknownAddress"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::dlcmiProtoErr {6, "dlcmiProtoErr"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::dlcmiUnknownIE {7, "dlcmiUnknownIE"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::dlcmiSequenceErr {8, "dlcmiSequenceErr"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::dlcmiUnknownRpt {9, "dlcmiUnknownRpt"};
const Enum::YLeaf FrameRelayDteMib::Frerrtable::Frerrentry::Frerrtype::noErrorSinceReset {10, "noErrorSinceReset"};


}
}

