
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_MPLS_LSR_EXT_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_MPLS_LSR_EXT_STD_MIB {

CISCOMPLSLSREXTSTDMIB::CISCOMPLSLSREXTSTDMIB()
    :
    cmplsxcexttable(std::make_shared<CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable>())
{
    cmplsxcexttable->parent = this;

    yang_name = "CISCO-MPLS-LSR-EXT-STD-MIB"; yang_parent_name = "CISCO-MPLS-LSR-EXT-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOMPLSLSREXTSTDMIB::~CISCOMPLSLSREXTSTDMIB()
{
}

bool CISCOMPLSLSREXTSTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cmplsxcexttable !=  nullptr && cmplsxcexttable->has_data());
}

bool CISCOMPLSLSREXTSTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsxcexttable !=  nullptr && cmplsxcexttable->has_operation());
}

std::string CISCOMPLSLSREXTSTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMPLSLSREXTSTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMPLSLSREXTSTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsXCExtTable")
    {
        if(cmplsxcexttable == nullptr)
        {
            cmplsxcexttable = std::make_shared<CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable>();
        }
        return cmplsxcexttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMPLSLSREXTSTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmplsxcexttable != nullptr)
    {
        _children["cmplsXCExtTable"] = cmplsxcexttable;
    }

    return _children;
}

void CISCOMPLSLSREXTSTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMPLSLSREXTSTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOMPLSLSREXTSTDMIB::clone_ptr() const
{
    return std::make_shared<CISCOMPLSLSREXTSTDMIB>();
}

std::string CISCOMPLSLSREXTSTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOMPLSLSREXTSTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOMPLSLSREXTSTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOMPLSLSREXTSTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOMPLSLSREXTSTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsXCExtTable")
        return true;
    return false;
}

CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtTable()
    :
    cmplsxcextentry(this, {"mplsxcindex", "mplsxcinsegmentindex", "mplsxcoutsegmentindex"})
{

    yang_name = "cmplsXCExtTable"; yang_parent_name = "CISCO-MPLS-LSR-EXT-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::~CmplsXCExtTable()
{
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsxcextentry.len(); index++)
    {
        if(cmplsxcextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsxcextentry.len(); index++)
    {
        if(cmplsxcextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsXCExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsXCExtEntry")
    {
        auto ent_ = std::make_shared<CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry>();
        ent_->parent = this;
        cmplsxcextentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsxcextentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsXCExtEntry")
        return true;
    return false;
}

CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::CmplsXCExtEntry()
    :
    mplsxcindex{YType::str, "mplsXCIndex"},
    mplsxcinsegmentindex{YType::str, "mplsXCInSegmentIndex"},
    mplsxcoutsegmentindex{YType::str, "mplsXCOutSegmentIndex"},
    cmplsxcexttunnelpointer{YType::str, "cmplsXCExtTunnelPointer"},
    cmplsxcoppositedirxcptr{YType::str, "cmplsXCOppositeDirXCPtr"}
{

    yang_name = "cmplsXCExtEntry"; yang_parent_name = "cmplsXCExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::~CmplsXCExtEntry()
{
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsxcindex.is_set
	|| mplsxcinsegmentindex.is_set
	|| mplsxcoutsegmentindex.is_set
	|| cmplsxcexttunnelpointer.is_set
	|| cmplsxcoppositedirxcptr.is_set;
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsxcindex.yfilter)
	|| ydk::is_set(mplsxcinsegmentindex.yfilter)
	|| ydk::is_set(mplsxcoutsegmentindex.yfilter)
	|| ydk::is_set(cmplsxcexttunnelpointer.yfilter)
	|| ydk::is_set(cmplsxcoppositedirxcptr.yfilter);
}

std::string CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB/cmplsXCExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsXCExtEntry";
    ADD_KEY_TOKEN(mplsxcindex, "mplsXCIndex");
    ADD_KEY_TOKEN(mplsxcinsegmentindex, "mplsXCInSegmentIndex");
    ADD_KEY_TOKEN(mplsxcoutsegmentindex, "mplsXCOutSegmentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsxcindex.is_set || is_set(mplsxcindex.yfilter)) leaf_name_data.push_back(mplsxcindex.get_name_leafdata());
    if (mplsxcinsegmentindex.is_set || is_set(mplsxcinsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcinsegmentindex.get_name_leafdata());
    if (mplsxcoutsegmentindex.is_set || is_set(mplsxcoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcoutsegmentindex.get_name_leafdata());
    if (cmplsxcexttunnelpointer.is_set || is_set(cmplsxcexttunnelpointer.yfilter)) leaf_name_data.push_back(cmplsxcexttunnelpointer.get_name_leafdata());
    if (cmplsxcoppositedirxcptr.is_set || is_set(cmplsxcoppositedirxcptr.yfilter)) leaf_name_data.push_back(cmplsxcoppositedirxcptr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsXCIndex")
    {
        mplsxcindex = value;
        mplsxcindex.value_namespace = name_space;
        mplsxcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCInSegmentIndex")
    {
        mplsxcinsegmentindex = value;
        mplsxcinsegmentindex.value_namespace = name_space;
        mplsxcinsegmentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCOutSegmentIndex")
    {
        mplsxcoutsegmentindex = value;
        mplsxcoutsegmentindex.value_namespace = name_space;
        mplsxcoutsegmentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsXCExtTunnelPointer")
    {
        cmplsxcexttunnelpointer = value;
        cmplsxcexttunnelpointer.value_namespace = name_space;
        cmplsxcexttunnelpointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsXCOppositeDirXCPtr")
    {
        cmplsxcoppositedirxcptr = value;
        cmplsxcoppositedirxcptr.value_namespace = name_space;
        cmplsxcoppositedirxcptr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsXCIndex")
    {
        mplsxcindex.yfilter = yfilter;
    }
    if(value_path == "mplsXCInSegmentIndex")
    {
        mplsxcinsegmentindex.yfilter = yfilter;
    }
    if(value_path == "mplsXCOutSegmentIndex")
    {
        mplsxcoutsegmentindex.yfilter = yfilter;
    }
    if(value_path == "cmplsXCExtTunnelPointer")
    {
        cmplsxcexttunnelpointer.yfilter = yfilter;
    }
    if(value_path == "cmplsXCOppositeDirXCPtr")
    {
        cmplsxcoppositedirxcptr.yfilter = yfilter;
    }
}

bool CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCIndex" || name == "mplsXCInSegmentIndex" || name == "mplsXCOutSegmentIndex" || name == "cmplsXCExtTunnelPointer" || name == "cmplsXCOppositeDirXCPtr")
        return true;
    return false;
}


}
}

