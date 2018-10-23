
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_GENERIC_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LDP_GENERIC_STD_MIB {

MPLSLDPGENERICSTDMIB::MPLSLDPGENERICSTDMIB()
    :
    mplsldpentitygenericlrtable(std::make_shared<MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable>())
{
    mplsldpentitygenericlrtable->parent = this;

    yang_name = "MPLS-LDP-GENERIC-STD-MIB"; yang_parent_name = "MPLS-LDP-GENERIC-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

MPLSLDPGENERICSTDMIB::~MPLSLDPGENERICSTDMIB()
{
}

bool MPLSLDPGENERICSTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mplsldpentitygenericlrtable !=  nullptr && mplsldpentitygenericlrtable->has_data());
}

bool MPLSLDPGENERICSTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplsldpentitygenericlrtable !=  nullptr && mplsldpentitygenericlrtable->has_operation());
}

std::string MPLSLDPGENERICSTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPGENERICSTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSLDPGENERICSTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityGenericLRTable")
    {
        if(mplsldpentitygenericlrtable == nullptr)
        {
            mplsldpentitygenericlrtable = std::make_shared<MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable>();
        }
        return mplsldpentitygenericlrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSLDPGENERICSTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mplsldpentitygenericlrtable != nullptr)
    {
        _children["mplsLdpEntityGenericLRTable"] = mplsldpentitygenericlrtable;
    }

    return _children;
}

void MPLSLDPGENERICSTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPGENERICSTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MPLSLDPGENERICSTDMIB::clone_ptr() const
{
    return std::make_shared<MPLSLDPGENERICSTDMIB>();
}

std::string MPLSLDPGENERICSTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSLDPGENERICSTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSLDPGENERICSTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSLDPGENERICSTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSLDPGENERICSTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityGenericLRTable")
        return true;
    return false;
}

MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLRTable()
    :
    mplsldpentitygenericlrentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldpentitygenericlrmin", "mplsldpentitygenericlrmax"})
{

    yang_name = "mplsLdpEntityGenericLRTable"; yang_parent_name = "MPLS-LDP-GENERIC-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::~MplsLdpEntityGenericLRTable()
{
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldpentitygenericlrentry.len(); index++)
    {
        if(mplsldpentitygenericlrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpentitygenericlrentry.len(); index++)
    {
        if(mplsldpentitygenericlrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityGenericLRTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityGenericLREntry")
    {
        auto ent_ = std::make_shared<MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry>();
        ent_->parent = this;
        mplsldpentitygenericlrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsldpentitygenericlrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityGenericLREntry")
        return true;
    return false;
}

MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::MplsLdpEntityGenericLREntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldpentitygenericlrmin{YType::uint32, "mplsLdpEntityGenericLRMin"},
    mplsldpentitygenericlrmax{YType::uint32, "mplsLdpEntityGenericLRMax"},
    mplsldpentitygenericlabelspace{YType::enumeration, "mplsLdpEntityGenericLabelSpace"},
    mplsldpentitygenericifindexorzero{YType::int32, "mplsLdpEntityGenericIfIndexOrZero"},
    mplsldpentitygenericlrstoragetype{YType::enumeration, "mplsLdpEntityGenericLRStorageType"},
    mplsldpentitygenericlrrowstatus{YType::enumeration, "mplsLdpEntityGenericLRRowStatus"}
{

    yang_name = "mplsLdpEntityGenericLREntry"; yang_parent_name = "mplsLdpEntityGenericLRTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::~MplsLdpEntityGenericLREntry()
{
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldpentitygenericlrmin.is_set
	|| mplsldpentitygenericlrmax.is_set
	|| mplsldpentitygenericlabelspace.is_set
	|| mplsldpentitygenericifindexorzero.is_set
	|| mplsldpentitygenericlrstoragetype.is_set
	|| mplsldpentitygenericlrrowstatus.is_set;
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrmin.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrmax.yfilter)
	|| ydk::is_set(mplsldpentitygenericlabelspace.yfilter)
	|| ydk::is_set(mplsldpentitygenericifindexorzero.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrstoragetype.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrrowstatus.yfilter);
}

std::string MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB/mplsLdpEntityGenericLRTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityGenericLREntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldpentitygenericlrmin, "mplsLdpEntityGenericLRMin");
    ADD_KEY_TOKEN(mplsldpentitygenericlrmax, "mplsLdpEntityGenericLRMax");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentitygenericlrmin.is_set || is_set(mplsldpentitygenericlrmin.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrmin.get_name_leafdata());
    if (mplsldpentitygenericlrmax.is_set || is_set(mplsldpentitygenericlrmax.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrmax.get_name_leafdata());
    if (mplsldpentitygenericlabelspace.is_set || is_set(mplsldpentitygenericlabelspace.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlabelspace.get_name_leafdata());
    if (mplsldpentitygenericifindexorzero.is_set || is_set(mplsldpentitygenericifindexorzero.yfilter)) leaf_name_data.push_back(mplsldpentitygenericifindexorzero.get_name_leafdata());
    if (mplsldpentitygenericlrstoragetype.is_set || is_set(mplsldpentitygenericlrstoragetype.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrstoragetype.get_name_leafdata());
    if (mplsldpentitygenericlrrowstatus.is_set || is_set(mplsldpentitygenericlrrowstatus.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
        mplsldpentityldpid.value_namespace = name_space;
        mplsldpentityldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
        mplsldpentityindex.value_namespace = name_space;
        mplsldpentityindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRMin")
    {
        mplsldpentitygenericlrmin = value;
        mplsldpentitygenericlrmin.value_namespace = name_space;
        mplsldpentitygenericlrmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRMax")
    {
        mplsldpentitygenericlrmax = value;
        mplsldpentitygenericlrmax.value_namespace = name_space;
        mplsldpentitygenericlrmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLabelSpace")
    {
        mplsldpentitygenericlabelspace = value;
        mplsldpentitygenericlabelspace.value_namespace = name_space;
        mplsldpentitygenericlabelspace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericIfIndexOrZero")
    {
        mplsldpentitygenericifindexorzero = value;
        mplsldpentitygenericifindexorzero.value_namespace = name_space;
        mplsldpentitygenericifindexorzero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRStorageType")
    {
        mplsldpentitygenericlrstoragetype = value;
        mplsldpentitygenericlrstoragetype.value_namespace = name_space;
        mplsldpentitygenericlrstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRRowStatus")
    {
        mplsldpentitygenericlrrowstatus = value;
        mplsldpentitygenericlrrowstatus.value_namespace = name_space;
        mplsldpentitygenericlrrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRMin")
    {
        mplsldpentitygenericlrmin.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRMax")
    {
        mplsldpentitygenericlrmax.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLabelSpace")
    {
        mplsldpentitygenericlabelspace.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericIfIndexOrZero")
    {
        mplsldpentitygenericifindexorzero.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRStorageType")
    {
        mplsldpentitygenericlrstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRRowStatus")
    {
        mplsldpentitygenericlrrowstatus.yfilter = yfilter;
    }
}

bool MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpEntityGenericLRMin" || name == "mplsLdpEntityGenericLRMax" || name == "mplsLdpEntityGenericLabelSpace" || name == "mplsLdpEntityGenericIfIndexOrZero" || name == "mplsLdpEntityGenericLRStorageType" || name == "mplsLdpEntityGenericLRRowStatus")
        return true;
    return false;
}

const Enum::YLeaf MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::MplsLdpEntityGenericLabelSpace::perPlatform {1, "perPlatform"};
const Enum::YLeaf MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::MplsLdpEntityGenericLabelSpace::perInterface {2, "perInterface"};


}
}

