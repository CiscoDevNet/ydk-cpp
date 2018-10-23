
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_DNIS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VOICE_DNIS_MIB {

CISCOVOICEDNISMIB::CISCOVOICEDNISMIB()
    :
    cvdnismappingtable(std::make_shared<CISCOVOICEDNISMIB::CvDnisMappingTable>())
    , cvdnisnodetable(std::make_shared<CISCOVOICEDNISMIB::CvDnisNodeTable>())
{
    cvdnismappingtable->parent = this;
    cvdnisnodetable->parent = this;

    yang_name = "CISCO-VOICE-DNIS-MIB"; yang_parent_name = "CISCO-VOICE-DNIS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOVOICEDNISMIB::~CISCOVOICEDNISMIB()
{
}

bool CISCOVOICEDNISMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cvdnismappingtable !=  nullptr && cvdnismappingtable->has_data())
	|| (cvdnisnodetable !=  nullptr && cvdnisnodetable->has_data());
}

bool CISCOVOICEDNISMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cvdnismappingtable !=  nullptr && cvdnismappingtable->has_operation())
	|| (cvdnisnodetable !=  nullptr && cvdnisnodetable->has_operation());
}

std::string CISCOVOICEDNISMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDNISMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisMappingTable")
    {
        if(cvdnismappingtable == nullptr)
        {
            cvdnismappingtable = std::make_shared<CISCOVOICEDNISMIB::CvDnisMappingTable>();
        }
        return cvdnismappingtable;
    }

    if(child_yang_name == "cvDnisNodeTable")
    {
        if(cvdnisnodetable == nullptr)
        {
            cvdnisnodetable = std::make_shared<CISCOVOICEDNISMIB::CvDnisNodeTable>();
        }
        return cvdnisnodetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVOICEDNISMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cvdnismappingtable != nullptr)
    {
        _children["cvDnisMappingTable"] = cvdnismappingtable;
    }

    if(cvdnisnodetable != nullptr)
    {
        _children["cvDnisNodeTable"] = cvdnisnodetable;
    }

    return _children;
}

void CISCOVOICEDNISMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDNISMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::clone_ptr() const
{
    return std::make_shared<CISCOVOICEDNISMIB>();
}

std::string CISCOVOICEDNISMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVOICEDNISMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVOICEDNISMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVOICEDNISMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVOICEDNISMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingTable" || name == "cvDnisNodeTable")
        return true;
    return false;
}

CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingTable()
    :
    cvdnismappingentry(this, {"cvdnismappingname"})
{

    yang_name = "cvDnisMappingTable"; yang_parent_name = "CISCO-VOICE-DNIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVOICEDNISMIB::CvDnisMappingTable::~CvDnisMappingTable()
{
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvdnismappingentry.len(); index++)
    {
        if(cvdnismappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cvdnismappingentry.len(); index++)
    {
        if(cvdnismappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDNISMIB::CvDnisMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDNISMIB::CvDnisMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDNISMIB::CvDnisMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::CvDnisMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisMappingEntry")
    {
        auto ent_ = std::make_shared<CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry>();
        ent_->parent = this;
        cvdnismappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVOICEDNISMIB::CvDnisMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvdnismappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVOICEDNISMIB::CvDnisMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDNISMIB::CvDnisMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingEntry")
        return true;
    return false;
}

CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::CvDnisMappingEntry()
    :
    cvdnismappingname{YType::str, "cvDnisMappingName"},
    cvdnismappingurl{YType::str, "cvDnisMappingUrl"},
    cvdnismappingrefresh{YType::enumeration, "cvDnisMappingRefresh"},
    cvdnismappingurlaccesserror{YType::str, "cvDnisMappingUrlAccessError"},
    cvdnismappingstatus{YType::enumeration, "cvDnisMappingStatus"}
{

    yang_name = "cvDnisMappingEntry"; yang_parent_name = "cvDnisMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::~CvDnisMappingEntry()
{
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvdnismappingname.is_set
	|| cvdnismappingurl.is_set
	|| cvdnismappingrefresh.is_set
	|| cvdnismappingurlaccesserror.is_set
	|| cvdnismappingstatus.is_set;
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvdnismappingname.yfilter)
	|| ydk::is_set(cvdnismappingurl.yfilter)
	|| ydk::is_set(cvdnismappingrefresh.yfilter)
	|| ydk::is_set(cvdnismappingurlaccesserror.yfilter)
	|| ydk::is_set(cvdnismappingstatus.yfilter);
}

std::string CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/cvDnisMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisMappingEntry";
    ADD_KEY_TOKEN(cvdnismappingname, "cvDnisMappingName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.yfilter)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnismappingurl.is_set || is_set(cvdnismappingurl.yfilter)) leaf_name_data.push_back(cvdnismappingurl.get_name_leafdata());
    if (cvdnismappingrefresh.is_set || is_set(cvdnismappingrefresh.yfilter)) leaf_name_data.push_back(cvdnismappingrefresh.get_name_leafdata());
    if (cvdnismappingurlaccesserror.is_set || is_set(cvdnismappingurlaccesserror.yfilter)) leaf_name_data.push_back(cvdnismappingurlaccesserror.get_name_leafdata());
    if (cvdnismappingstatus.is_set || is_set(cvdnismappingstatus.yfilter)) leaf_name_data.push_back(cvdnismappingstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
        cvdnismappingname.value_namespace = name_space;
        cvdnismappingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingUrl")
    {
        cvdnismappingurl = value;
        cvdnismappingurl.value_namespace = name_space;
        cvdnismappingurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingRefresh")
    {
        cvdnismappingrefresh = value;
        cvdnismappingrefresh.value_namespace = name_space;
        cvdnismappingrefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingUrlAccessError")
    {
        cvdnismappingurlaccesserror = value;
        cvdnismappingurlaccesserror.value_namespace = name_space;
        cvdnismappingurlaccesserror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingStatus")
    {
        cvdnismappingstatus = value;
        cvdnismappingstatus.value_namespace = name_space;
        cvdnismappingstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingUrl")
    {
        cvdnismappingurl.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingRefresh")
    {
        cvdnismappingrefresh.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingUrlAccessError")
    {
        cvdnismappingurlaccesserror.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingStatus")
    {
        cvdnismappingstatus.yfilter = yfilter;
    }
}

bool CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingName" || name == "cvDnisMappingUrl" || name == "cvDnisMappingRefresh" || name == "cvDnisMappingUrlAccessError" || name == "cvDnisMappingStatus")
        return true;
    return false;
}

CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeTable()
    :
    cvdnisnodeentry(this, {"cvdnismappingname", "cvdnisnumber"})
{

    yang_name = "cvDnisNodeTable"; yang_parent_name = "CISCO-VOICE-DNIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVOICEDNISMIB::CvDnisNodeTable::~CvDnisNodeTable()
{
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cvdnisnodeentry.len(); index++)
    {
        if(cvdnisnodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::has_operation() const
{
    for (std::size_t index=0; index<cvdnisnodeentry.len(); index++)
    {
        if(cvdnisnodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDNISMIB::CvDnisNodeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDNISMIB::CvDnisNodeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisNodeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDNISMIB::CvDnisNodeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::CvDnisNodeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisNodeEntry")
    {
        auto ent_ = std::make_shared<CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry>();
        ent_->parent = this;
        cvdnisnodeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVOICEDNISMIB::CvDnisNodeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cvdnisnodeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVOICEDNISMIB::CvDnisNodeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDNISMIB::CvDnisNodeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisNodeEntry")
        return true;
    return false;
}

CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::CvDnisNodeEntry()
    :
    cvdnismappingname{YType::str, "cvDnisMappingName"},
    cvdnisnumber{YType::str, "cvDnisNumber"},
    cvdnisnodeurl{YType::str, "cvDnisNodeUrl"},
    cvdnisnodemodifiable{YType::boolean, "cvDnisNodeModifiable"},
    cvdnisnodestatus{YType::enumeration, "cvDnisNodeStatus"}
{

    yang_name = "cvDnisNodeEntry"; yang_parent_name = "cvDnisNodeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::~CvDnisNodeEntry()
{
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::has_data() const
{
    if (is_presence_container) return true;
    return cvdnismappingname.is_set
	|| cvdnisnumber.is_set
	|| cvdnisnodeurl.is_set
	|| cvdnisnodemodifiable.is_set
	|| cvdnisnodestatus.is_set;
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvdnismappingname.yfilter)
	|| ydk::is_set(cvdnisnumber.yfilter)
	|| ydk::is_set(cvdnisnodeurl.yfilter)
	|| ydk::is_set(cvdnisnodemodifiable.yfilter)
	|| ydk::is_set(cvdnisnodestatus.yfilter);
}

std::string CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/cvDnisNodeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisNodeEntry";
    ADD_KEY_TOKEN(cvdnismappingname, "cvDnisMappingName");
    ADD_KEY_TOKEN(cvdnisnumber, "cvDnisNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.yfilter)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnisnumber.is_set || is_set(cvdnisnumber.yfilter)) leaf_name_data.push_back(cvdnisnumber.get_name_leafdata());
    if (cvdnisnodeurl.is_set || is_set(cvdnisnodeurl.yfilter)) leaf_name_data.push_back(cvdnisnodeurl.get_name_leafdata());
    if (cvdnisnodemodifiable.is_set || is_set(cvdnisnodemodifiable.yfilter)) leaf_name_data.push_back(cvdnisnodemodifiable.get_name_leafdata());
    if (cvdnisnodestatus.is_set || is_set(cvdnisnodestatus.yfilter)) leaf_name_data.push_back(cvdnisnodestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
        cvdnismappingname.value_namespace = name_space;
        cvdnismappingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNumber")
    {
        cvdnisnumber = value;
        cvdnisnumber.value_namespace = name_space;
        cvdnisnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeUrl")
    {
        cvdnisnodeurl = value;
        cvdnisnodeurl.value_namespace = name_space;
        cvdnisnodeurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeModifiable")
    {
        cvdnisnodemodifiable = value;
        cvdnisnodemodifiable.value_namespace = name_space;
        cvdnisnodemodifiable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeStatus")
    {
        cvdnisnodestatus = value;
        cvdnisnodestatus.value_namespace = name_space;
        cvdnisnodestatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname.yfilter = yfilter;
    }
    if(value_path == "cvDnisNumber")
    {
        cvdnisnumber.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeUrl")
    {
        cvdnisnodeurl.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeModifiable")
    {
        cvdnisnodemodifiable.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeStatus")
    {
        cvdnisnodestatus.yfilter = yfilter;
    }
}

bool CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingName" || name == "cvDnisNumber" || name == "cvDnisNodeUrl" || name == "cvDnisNodeModifiable" || name == "cvDnisNodeStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::CvDnisMappingRefresh::idle {1, "idle"};
const Enum::YLeaf CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::CvDnisMappingRefresh::refresh {2, "refresh"};


}
}

