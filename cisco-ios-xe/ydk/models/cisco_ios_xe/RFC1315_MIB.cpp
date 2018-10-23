
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RFC1315_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RFC1315_MIB {

RFC1315MIB::RFC1315MIB()
    :
    frame_relay_globals(std::make_shared<RFC1315MIB::FrameRelayGlobals>())
    , frdlcmitable(std::make_shared<RFC1315MIB::FrDlcmiTable>())
    , frcircuittable(std::make_shared<RFC1315MIB::FrCircuitTable>())
    , frerrtable(std::make_shared<RFC1315MIB::FrErrTable>())
{
    frame_relay_globals->parent = this;
    frdlcmitable->parent = this;
    frcircuittable->parent = this;
    frerrtable->parent = this;

    yang_name = "RFC1315-MIB"; yang_parent_name = "RFC1315-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

RFC1315MIB::~RFC1315MIB()
{
}

bool RFC1315MIB::has_data() const
{
    if (is_presence_container) return true;
    return (frame_relay_globals !=  nullptr && frame_relay_globals->has_data())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_data())
	|| (frcircuittable !=  nullptr && frcircuittable->has_data())
	|| (frerrtable !=  nullptr && frerrtable->has_data());
}

bool RFC1315MIB::has_operation() const
{
    return is_set(yfilter)
	|| (frame_relay_globals !=  nullptr && frame_relay_globals->has_operation())
	|| (frdlcmitable !=  nullptr && frdlcmitable->has_operation())
	|| (frcircuittable !=  nullptr && frcircuittable->has_operation())
	|| (frerrtable !=  nullptr && frerrtable->has_operation());
}

std::string RFC1315MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame-relay-globals")
    {
        if(frame_relay_globals == nullptr)
        {
            frame_relay_globals = std::make_shared<RFC1315MIB::FrameRelayGlobals>();
        }
        return frame_relay_globals;
    }

    if(child_yang_name == "frDlcmiTable")
    {
        if(frdlcmitable == nullptr)
        {
            frdlcmitable = std::make_shared<RFC1315MIB::FrDlcmiTable>();
        }
        return frdlcmitable;
    }

    if(child_yang_name == "frCircuitTable")
    {
        if(frcircuittable == nullptr)
        {
            frcircuittable = std::make_shared<RFC1315MIB::FrCircuitTable>();
        }
        return frcircuittable;
    }

    if(child_yang_name == "frErrTable")
    {
        if(frerrtable == nullptr)
        {
            frerrtable = std::make_shared<RFC1315MIB::FrErrTable>();
        }
        return frerrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frame_relay_globals != nullptr)
    {
        _children["frame-relay-globals"] = frame_relay_globals;
    }

    if(frdlcmitable != nullptr)
    {
        _children["frDlcmiTable"] = frdlcmitable;
    }

    if(frcircuittable != nullptr)
    {
        _children["frCircuitTable"] = frcircuittable;
    }

    if(frerrtable != nullptr)
    {
        _children["frErrTable"] = frerrtable;
    }

    return _children;
}

void RFC1315MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1315MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RFC1315MIB::clone_ptr() const
{
    return std::make_shared<RFC1315MIB>();
}

std::string RFC1315MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RFC1315MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RFC1315MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RFC1315MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RFC1315MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame-relay-globals" || name == "frDlcmiTable" || name == "frCircuitTable" || name == "frErrTable")
        return true;
    return false;
}

RFC1315MIB::FrameRelayGlobals::FrameRelayGlobals()
    :
    frtrapstate{YType::enumeration, "frTrapState"}
{

    yang_name = "frame-relay-globals"; yang_parent_name = "RFC1315-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrameRelayGlobals::~FrameRelayGlobals()
{
}

bool RFC1315MIB::FrameRelayGlobals::has_data() const
{
    if (is_presence_container) return true;
    return frtrapstate.is_set;
}

bool RFC1315MIB::FrameRelayGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frtrapstate.yfilter);
}

std::string RFC1315MIB::FrameRelayGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrameRelayGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay-globals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrameRelayGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frtrapstate.is_set || is_set(frtrapstate.yfilter)) leaf_name_data.push_back(frtrapstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrameRelayGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrameRelayGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RFC1315MIB::FrameRelayGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frTrapState")
    {
        frtrapstate = value;
        frtrapstate.value_namespace = name_space;
        frtrapstate.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1315MIB::FrameRelayGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frTrapState")
    {
        frtrapstate.yfilter = yfilter;
    }
}

bool RFC1315MIB::FrameRelayGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frTrapState")
        return true;
    return false;
}

RFC1315MIB::FrDlcmiTable::FrDlcmiTable()
    :
    frdlcmientry(this, {"frdlcmiifindex"})
{

    yang_name = "frDlcmiTable"; yang_parent_name = "RFC1315-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrDlcmiTable::~FrDlcmiTable()
{
}

bool RFC1315MIB::FrDlcmiTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frdlcmientry.len(); index++)
    {
        if(frdlcmientry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1315MIB::FrDlcmiTable::has_operation() const
{
    for (std::size_t index=0; index<frdlcmientry.len(); index++)
    {
        if(frdlcmientry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1315MIB::FrDlcmiTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrDlcmiTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrDlcmiTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrDlcmiTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frDlcmiEntry")
    {
        auto ent_ = std::make_shared<RFC1315MIB::FrDlcmiTable::FrDlcmiEntry>();
        ent_->parent = this;
        frdlcmientry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrDlcmiTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frdlcmientry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RFC1315MIB::FrDlcmiTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1315MIB::FrDlcmiTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1315MIB::FrDlcmiTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiEntry")
        return true;
    return false;
}

RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiEntry()
    :
    frdlcmiifindex{YType::int32, "frDlcmiIfIndex"},
    frdlcmistate{YType::enumeration, "frDlcmiState"},
    frdlcmiaddress{YType::enumeration, "frDlcmiAddress"},
    frdlcmiaddresslen{YType::enumeration, "frDlcmiAddressLen"},
    frdlcmipollinginterval{YType::int32, "frDlcmiPollingInterval"},
    frdlcmifullenquiryinterval{YType::int32, "frDlcmiFullEnquiryInterval"},
    frdlcmierrorthreshold{YType::int32, "frDlcmiErrorThreshold"},
    frdlcmimonitoredevents{YType::int32, "frDlcmiMonitoredEvents"},
    frdlcmimaxsupportedvcs{YType::int32, "frDlcmiMaxSupportedVCs"},
    frdlcmimulticast{YType::enumeration, "frDlcmiMulticast"}
{

    yang_name = "frDlcmiEntry"; yang_parent_name = "frDlcmiTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::~FrDlcmiEntry()
{
}

bool RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::has_data() const
{
    if (is_presence_container) return true;
    return frdlcmiifindex.is_set
	|| frdlcmistate.is_set
	|| frdlcmiaddress.is_set
	|| frdlcmiaddresslen.is_set
	|| frdlcmipollinginterval.is_set
	|| frdlcmifullenquiryinterval.is_set
	|| frdlcmierrorthreshold.is_set
	|| frdlcmimonitoredevents.is_set
	|| frdlcmimaxsupportedvcs.is_set
	|| frdlcmimulticast.is_set;
}

bool RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frdlcmiifindex.yfilter)
	|| ydk::is_set(frdlcmistate.yfilter)
	|| ydk::is_set(frdlcmiaddress.yfilter)
	|| ydk::is_set(frdlcmiaddresslen.yfilter)
	|| ydk::is_set(frdlcmipollinginterval.yfilter)
	|| ydk::is_set(frdlcmifullenquiryinterval.yfilter)
	|| ydk::is_set(frdlcmierrorthreshold.yfilter)
	|| ydk::is_set(frdlcmimonitoredevents.yfilter)
	|| ydk::is_set(frdlcmimaxsupportedvcs.yfilter)
	|| ydk::is_set(frdlcmimulticast.yfilter);
}

std::string RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/frDlcmiTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frDlcmiEntry";
    ADD_KEY_TOKEN(frdlcmiifindex, "frDlcmiIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frdlcmiifindex.is_set || is_set(frdlcmiifindex.yfilter)) leaf_name_data.push_back(frdlcmiifindex.get_name_leafdata());
    if (frdlcmistate.is_set || is_set(frdlcmistate.yfilter)) leaf_name_data.push_back(frdlcmistate.get_name_leafdata());
    if (frdlcmiaddress.is_set || is_set(frdlcmiaddress.yfilter)) leaf_name_data.push_back(frdlcmiaddress.get_name_leafdata());
    if (frdlcmiaddresslen.is_set || is_set(frdlcmiaddresslen.yfilter)) leaf_name_data.push_back(frdlcmiaddresslen.get_name_leafdata());
    if (frdlcmipollinginterval.is_set || is_set(frdlcmipollinginterval.yfilter)) leaf_name_data.push_back(frdlcmipollinginterval.get_name_leafdata());
    if (frdlcmifullenquiryinterval.is_set || is_set(frdlcmifullenquiryinterval.yfilter)) leaf_name_data.push_back(frdlcmifullenquiryinterval.get_name_leafdata());
    if (frdlcmierrorthreshold.is_set || is_set(frdlcmierrorthreshold.yfilter)) leaf_name_data.push_back(frdlcmierrorthreshold.get_name_leafdata());
    if (frdlcmimonitoredevents.is_set || is_set(frdlcmimonitoredevents.yfilter)) leaf_name_data.push_back(frdlcmimonitoredevents.get_name_leafdata());
    if (frdlcmimaxsupportedvcs.is_set || is_set(frdlcmimaxsupportedvcs.yfilter)) leaf_name_data.push_back(frdlcmimaxsupportedvcs.get_name_leafdata());
    if (frdlcmimulticast.is_set || is_set(frdlcmimulticast.yfilter)) leaf_name_data.push_back(frdlcmimulticast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frDlcmiIfIndex")
    {
        frdlcmiifindex = value;
        frdlcmiifindex.value_namespace = name_space;
        frdlcmiifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate = value;
        frdlcmistate.value_namespace = name_space;
        frdlcmistate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "frDlcmiPollingInterval")
    {
        frdlcmipollinginterval = value;
        frdlcmipollinginterval.value_namespace = name_space;
        frdlcmipollinginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiFullEnquiryInterval")
    {
        frdlcmifullenquiryinterval = value;
        frdlcmifullenquiryinterval.value_namespace = name_space;
        frdlcmifullenquiryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiErrorThreshold")
    {
        frdlcmierrorthreshold = value;
        frdlcmierrorthreshold.value_namespace = name_space;
        frdlcmierrorthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMonitoredEvents")
    {
        frdlcmimonitoredevents = value;
        frdlcmimonitoredevents.value_namespace = name_space;
        frdlcmimonitoredevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMaxSupportedVCs")
    {
        frdlcmimaxsupportedvcs = value;
        frdlcmimaxsupportedvcs.value_namespace = name_space;
        frdlcmimaxsupportedvcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frDlcmiMulticast")
    {
        frdlcmimulticast = value;
        frdlcmimulticast.value_namespace = name_space;
        frdlcmimulticast.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frDlcmiIfIndex")
    {
        frdlcmiifindex.yfilter = yfilter;
    }
    if(value_path == "frDlcmiState")
    {
        frdlcmistate.yfilter = yfilter;
    }
    if(value_path == "frDlcmiAddress")
    {
        frdlcmiaddress.yfilter = yfilter;
    }
    if(value_path == "frDlcmiAddressLen")
    {
        frdlcmiaddresslen.yfilter = yfilter;
    }
    if(value_path == "frDlcmiPollingInterval")
    {
        frdlcmipollinginterval.yfilter = yfilter;
    }
    if(value_path == "frDlcmiFullEnquiryInterval")
    {
        frdlcmifullenquiryinterval.yfilter = yfilter;
    }
    if(value_path == "frDlcmiErrorThreshold")
    {
        frdlcmierrorthreshold.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMonitoredEvents")
    {
        frdlcmimonitoredevents.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMaxSupportedVCs")
    {
        frdlcmimaxsupportedvcs.yfilter = yfilter;
    }
    if(value_path == "frDlcmiMulticast")
    {
        frdlcmimulticast.yfilter = yfilter;
    }
}

bool RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frDlcmiIfIndex" || name == "frDlcmiState" || name == "frDlcmiAddress" || name == "frDlcmiAddressLen" || name == "frDlcmiPollingInterval" || name == "frDlcmiFullEnquiryInterval" || name == "frDlcmiErrorThreshold" || name == "frDlcmiMonitoredEvents" || name == "frDlcmiMaxSupportedVCs" || name == "frDlcmiMulticast")
        return true;
    return false;
}

RFC1315MIB::FrCircuitTable::FrCircuitTable()
    :
    frcircuitentry(this, {"frcircuitifindex", "frcircuitdlci"})
{

    yang_name = "frCircuitTable"; yang_parent_name = "RFC1315-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrCircuitTable::~FrCircuitTable()
{
}

bool RFC1315MIB::FrCircuitTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frcircuitentry.len(); index++)
    {
        if(frcircuitentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1315MIB::FrCircuitTable::has_operation() const
{
    for (std::size_t index=0; index<frcircuitentry.len(); index++)
    {
        if(frcircuitentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1315MIB::FrCircuitTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrCircuitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrCircuitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrCircuitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frCircuitEntry")
    {
        auto ent_ = std::make_shared<RFC1315MIB::FrCircuitTable::FrCircuitEntry>();
        ent_->parent = this;
        frcircuitentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrCircuitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frcircuitentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RFC1315MIB::FrCircuitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1315MIB::FrCircuitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1315MIB::FrCircuitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitEntry")
        return true;
    return false;
}

RFC1315MIB::FrCircuitTable::FrCircuitEntry::FrCircuitEntry()
    :
    frcircuitifindex{YType::int32, "frCircuitIfIndex"},
    frcircuitdlci{YType::int32, "frCircuitDlci"},
    frcircuitstate{YType::enumeration, "frCircuitState"},
    frcircuitreceivedfecns{YType::uint32, "frCircuitReceivedFECNs"},
    frcircuitreceivedbecns{YType::uint32, "frCircuitReceivedBECNs"},
    frcircuitsentframes{YType::uint32, "frCircuitSentFrames"},
    frcircuitsentoctets{YType::uint32, "frCircuitSentOctets"},
    frcircuitreceivedframes{YType::uint32, "frCircuitReceivedFrames"},
    frcircuitreceivedoctets{YType::uint32, "frCircuitReceivedOctets"},
    frcircuitcreationtime{YType::uint32, "frCircuitCreationTime"},
    frcircuitlasttimechange{YType::uint32, "frCircuitLastTimeChange"},
    frcircuitcommittedburst{YType::int32, "frCircuitCommittedBurst"},
    frcircuitexcessburst{YType::int32, "frCircuitExcessBurst"},
    frcircuitthroughput{YType::int32, "frCircuitThroughput"}
{

    yang_name = "frCircuitEntry"; yang_parent_name = "frCircuitTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrCircuitTable::FrCircuitEntry::~FrCircuitEntry()
{
}

bool RFC1315MIB::FrCircuitTable::FrCircuitEntry::has_data() const
{
    if (is_presence_container) return true;
    return frcircuitifindex.is_set
	|| frcircuitdlci.is_set
	|| frcircuitstate.is_set
	|| frcircuitreceivedfecns.is_set
	|| frcircuitreceivedbecns.is_set
	|| frcircuitsentframes.is_set
	|| frcircuitsentoctets.is_set
	|| frcircuitreceivedframes.is_set
	|| frcircuitreceivedoctets.is_set
	|| frcircuitcreationtime.is_set
	|| frcircuitlasttimechange.is_set
	|| frcircuitcommittedburst.is_set
	|| frcircuitexcessburst.is_set
	|| frcircuitthroughput.is_set;
}

bool RFC1315MIB::FrCircuitTable::FrCircuitEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frcircuitifindex.yfilter)
	|| ydk::is_set(frcircuitdlci.yfilter)
	|| ydk::is_set(frcircuitstate.yfilter)
	|| ydk::is_set(frcircuitreceivedfecns.yfilter)
	|| ydk::is_set(frcircuitreceivedbecns.yfilter)
	|| ydk::is_set(frcircuitsentframes.yfilter)
	|| ydk::is_set(frcircuitsentoctets.yfilter)
	|| ydk::is_set(frcircuitreceivedframes.yfilter)
	|| ydk::is_set(frcircuitreceivedoctets.yfilter)
	|| ydk::is_set(frcircuitcreationtime.yfilter)
	|| ydk::is_set(frcircuitlasttimechange.yfilter)
	|| ydk::is_set(frcircuitcommittedburst.yfilter)
	|| ydk::is_set(frcircuitexcessburst.yfilter)
	|| ydk::is_set(frcircuitthroughput.yfilter);
}

std::string RFC1315MIB::FrCircuitTable::FrCircuitEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/frCircuitTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrCircuitTable::FrCircuitEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frCircuitEntry";
    ADD_KEY_TOKEN(frcircuitifindex, "frCircuitIfIndex");
    ADD_KEY_TOKEN(frcircuitdlci, "frCircuitDlci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrCircuitTable::FrCircuitEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frcircuitifindex.is_set || is_set(frcircuitifindex.yfilter)) leaf_name_data.push_back(frcircuitifindex.get_name_leafdata());
    if (frcircuitdlci.is_set || is_set(frcircuitdlci.yfilter)) leaf_name_data.push_back(frcircuitdlci.get_name_leafdata());
    if (frcircuitstate.is_set || is_set(frcircuitstate.yfilter)) leaf_name_data.push_back(frcircuitstate.get_name_leafdata());
    if (frcircuitreceivedfecns.is_set || is_set(frcircuitreceivedfecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedfecns.get_name_leafdata());
    if (frcircuitreceivedbecns.is_set || is_set(frcircuitreceivedbecns.yfilter)) leaf_name_data.push_back(frcircuitreceivedbecns.get_name_leafdata());
    if (frcircuitsentframes.is_set || is_set(frcircuitsentframes.yfilter)) leaf_name_data.push_back(frcircuitsentframes.get_name_leafdata());
    if (frcircuitsentoctets.is_set || is_set(frcircuitsentoctets.yfilter)) leaf_name_data.push_back(frcircuitsentoctets.get_name_leafdata());
    if (frcircuitreceivedframes.is_set || is_set(frcircuitreceivedframes.yfilter)) leaf_name_data.push_back(frcircuitreceivedframes.get_name_leafdata());
    if (frcircuitreceivedoctets.is_set || is_set(frcircuitreceivedoctets.yfilter)) leaf_name_data.push_back(frcircuitreceivedoctets.get_name_leafdata());
    if (frcircuitcreationtime.is_set || is_set(frcircuitcreationtime.yfilter)) leaf_name_data.push_back(frcircuitcreationtime.get_name_leafdata());
    if (frcircuitlasttimechange.is_set || is_set(frcircuitlasttimechange.yfilter)) leaf_name_data.push_back(frcircuitlasttimechange.get_name_leafdata());
    if (frcircuitcommittedburst.is_set || is_set(frcircuitcommittedburst.yfilter)) leaf_name_data.push_back(frcircuitcommittedburst.get_name_leafdata());
    if (frcircuitexcessburst.is_set || is_set(frcircuitexcessburst.yfilter)) leaf_name_data.push_back(frcircuitexcessburst.get_name_leafdata());
    if (frcircuitthroughput.is_set || is_set(frcircuitthroughput.yfilter)) leaf_name_data.push_back(frcircuitthroughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrCircuitTable::FrCircuitEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrCircuitTable::FrCircuitEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RFC1315MIB::FrCircuitTable::FrCircuitEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "frCircuitState")
    {
        frcircuitstate = value;
        frcircuitstate.value_namespace = name_space;
        frcircuitstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedFECNs")
    {
        frcircuitreceivedfecns = value;
        frcircuitreceivedfecns.value_namespace = name_space;
        frcircuitreceivedfecns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns = value;
        frcircuitreceivedbecns.value_namespace = name_space;
        frcircuitreceivedbecns.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "frCircuitCreationTime")
    {
        frcircuitcreationtime = value;
        frcircuitcreationtime.value_namespace = name_space;
        frcircuitcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange = value;
        frcircuitlasttimechange.value_namespace = name_space;
        frcircuitlasttimechange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitCommittedBurst")
    {
        frcircuitcommittedburst = value;
        frcircuitcommittedburst.value_namespace = name_space;
        frcircuitcommittedburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst = value;
        frcircuitexcessburst.value_namespace = name_space;
        frcircuitexcessburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frCircuitThroughput")
    {
        frcircuitthroughput = value;
        frcircuitthroughput.value_namespace = name_space;
        frcircuitthroughput.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1315MIB::FrCircuitTable::FrCircuitEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frCircuitIfIndex")
    {
        frcircuitifindex.yfilter = yfilter;
    }
    if(value_path == "frCircuitDlci")
    {
        frcircuitdlci.yfilter = yfilter;
    }
    if(value_path == "frCircuitState")
    {
        frcircuitstate.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedFECNs")
    {
        frcircuitreceivedfecns.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedBECNs")
    {
        frcircuitreceivedbecns.yfilter = yfilter;
    }
    if(value_path == "frCircuitSentFrames")
    {
        frcircuitsentframes.yfilter = yfilter;
    }
    if(value_path == "frCircuitSentOctets")
    {
        frcircuitsentoctets.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedFrames")
    {
        frcircuitreceivedframes.yfilter = yfilter;
    }
    if(value_path == "frCircuitReceivedOctets")
    {
        frcircuitreceivedoctets.yfilter = yfilter;
    }
    if(value_path == "frCircuitCreationTime")
    {
        frcircuitcreationtime.yfilter = yfilter;
    }
    if(value_path == "frCircuitLastTimeChange")
    {
        frcircuitlasttimechange.yfilter = yfilter;
    }
    if(value_path == "frCircuitCommittedBurst")
    {
        frcircuitcommittedburst.yfilter = yfilter;
    }
    if(value_path == "frCircuitExcessBurst")
    {
        frcircuitexcessburst.yfilter = yfilter;
    }
    if(value_path == "frCircuitThroughput")
    {
        frcircuitthroughput.yfilter = yfilter;
    }
}

bool RFC1315MIB::FrCircuitTable::FrCircuitEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frCircuitIfIndex" || name == "frCircuitDlci" || name == "frCircuitState" || name == "frCircuitReceivedFECNs" || name == "frCircuitReceivedBECNs" || name == "frCircuitSentFrames" || name == "frCircuitSentOctets" || name == "frCircuitReceivedFrames" || name == "frCircuitReceivedOctets" || name == "frCircuitCreationTime" || name == "frCircuitLastTimeChange" || name == "frCircuitCommittedBurst" || name == "frCircuitExcessBurst" || name == "frCircuitThroughput")
        return true;
    return false;
}

RFC1315MIB::FrErrTable::FrErrTable()
    :
    frerrentry(this, {"frerrifindex"})
{

    yang_name = "frErrTable"; yang_parent_name = "RFC1315-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrErrTable::~FrErrTable()
{
}

bool RFC1315MIB::FrErrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frerrentry.len(); index++)
    {
        if(frerrentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1315MIB::FrErrTable::has_operation() const
{
    for (std::size_t index=0; index<frerrentry.len(); index++)
    {
        if(frerrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1315MIB::FrErrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrErrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrErrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrErrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frErrEntry")
    {
        auto ent_ = std::make_shared<RFC1315MIB::FrErrTable::FrErrEntry>();
        ent_->parent = this;
        frerrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrErrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frerrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RFC1315MIB::FrErrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1315MIB::FrErrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1315MIB::FrErrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrEntry")
        return true;
    return false;
}

RFC1315MIB::FrErrTable::FrErrEntry::FrErrEntry()
    :
    frerrifindex{YType::int32, "frErrIfIndex"},
    frerrtype{YType::enumeration, "frErrType"},
    frerrdata{YType::str, "frErrData"},
    frerrtime{YType::uint32, "frErrTime"}
{

    yang_name = "frErrEntry"; yang_parent_name = "frErrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RFC1315MIB::FrErrTable::FrErrEntry::~FrErrEntry()
{
}

bool RFC1315MIB::FrErrTable::FrErrEntry::has_data() const
{
    if (is_presence_container) return true;
    return frerrifindex.is_set
	|| frerrtype.is_set
	|| frerrdata.is_set
	|| frerrtime.is_set;
}

bool RFC1315MIB::FrErrTable::FrErrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frerrifindex.yfilter)
	|| ydk::is_set(frerrtype.yfilter)
	|| ydk::is_set(frerrdata.yfilter)
	|| ydk::is_set(frerrtime.yfilter);
}

std::string RFC1315MIB::FrErrTable::FrErrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1315-MIB:RFC1315-MIB/frErrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1315MIB::FrErrTable::FrErrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frErrEntry";
    ADD_KEY_TOKEN(frerrifindex, "frErrIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1315MIB::FrErrTable::FrErrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frerrifindex.is_set || is_set(frerrifindex.yfilter)) leaf_name_data.push_back(frerrifindex.get_name_leafdata());
    if (frerrtype.is_set || is_set(frerrtype.yfilter)) leaf_name_data.push_back(frerrtype.get_name_leafdata());
    if (frerrdata.is_set || is_set(frerrdata.yfilter)) leaf_name_data.push_back(frerrdata.get_name_leafdata());
    if (frerrtime.is_set || is_set(frerrtime.yfilter)) leaf_name_data.push_back(frerrtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RFC1315MIB::FrErrTable::FrErrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RFC1315MIB::FrErrTable::FrErrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RFC1315MIB::FrErrTable::FrErrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex = value;
        frerrifindex.value_namespace = name_space;
        frerrifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frErrType")
    {
        frerrtype = value;
        frerrtype.value_namespace = name_space;
        frerrtype.value_namespace_prefix = name_space_prefix;
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
}

void RFC1315MIB::FrErrTable::FrErrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frErrIfIndex")
    {
        frerrifindex.yfilter = yfilter;
    }
    if(value_path == "frErrType")
    {
        frerrtype.yfilter = yfilter;
    }
    if(value_path == "frErrData")
    {
        frerrdata.yfilter = yfilter;
    }
    if(value_path == "frErrTime")
    {
        frerrtime.yfilter = yfilter;
    }
}

bool RFC1315MIB::FrErrTable::FrErrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frErrIfIndex" || name == "frErrType" || name == "frErrData" || name == "frErrTime")
        return true;
    return false;
}

const Enum::YLeaf RFC1315MIB::FrameRelayGlobals::FrTrapState::enabled {1, "enabled"};
const Enum::YLeaf RFC1315MIB::FrameRelayGlobals::FrTrapState::disabled {2, "disabled"};

const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState::noLmiConfigured {1, "noLmiConfigured"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState::lmiRev1 {2, "lmiRev1"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState::ansiT1_617_D {3, "ansiT1-617-D"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState::ansiT1_617_B {4, "ansiT1-617-B"};

const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress::q921 {1, "q921"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress::q922March90 {2, "q922March90"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress::q922November90 {3, "q922November90"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress::q922 {4, "q922"};

const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddressLen::two_octets {2, "two-octets"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddressLen::three_octets {3, "three-octets"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddressLen::four_octets {4, "four-octets"};

const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiMulticast::nonBroadcast {1, "nonBroadcast"};
const Enum::YLeaf RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiMulticast::broadcast {2, "broadcast"};

const Enum::YLeaf RFC1315MIB::FrCircuitTable::FrCircuitEntry::FrCircuitState::invalid {1, "invalid"};
const Enum::YLeaf RFC1315MIB::FrCircuitTable::FrCircuitEntry::FrCircuitState::active {2, "active"};
const Enum::YLeaf RFC1315MIB::FrCircuitTable::FrCircuitEntry::FrCircuitState::inactive {3, "inactive"};

const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::unknownError {1, "unknownError"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::receiveShort {2, "receiveShort"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::receiveLong {3, "receiveLong"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::illegalDLCI {4, "illegalDLCI"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::unknownDLCI {5, "unknownDLCI"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::dlcmiProtoErr {6, "dlcmiProtoErr"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::dlcmiUnknownIE {7, "dlcmiUnknownIE"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::dlcmiSequenceErr {8, "dlcmiSequenceErr"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::dlcmiUnknownRpt {9, "dlcmiUnknownRpt"};
const Enum::YLeaf RFC1315MIB::FrErrTable::FrErrEntry::FrErrType::noErrorSinceReset {10, "noErrorSinceReset"};


}
}

