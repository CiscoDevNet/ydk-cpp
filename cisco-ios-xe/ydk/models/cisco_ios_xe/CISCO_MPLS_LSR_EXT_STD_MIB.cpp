
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_MPLS_LSR_EXT_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_MPLS_LSR_EXT_STD_MIB {

CiscoMplsLsrExtStdMib::CiscoMplsLsrExtStdMib()
    :
    cmplsxcexttable(std::make_shared<CiscoMplsLsrExtStdMib::Cmplsxcexttable>())
{
    cmplsxcexttable->parent = this;

    yang_name = "CISCO-MPLS-LSR-EXT-STD-MIB"; yang_parent_name = "CISCO-MPLS-LSR-EXT-STD-MIB";
}

CiscoMplsLsrExtStdMib::~CiscoMplsLsrExtStdMib()
{
}

bool CiscoMplsLsrExtStdMib::has_data() const
{
    return (cmplsxcexttable !=  nullptr && cmplsxcexttable->has_data());
}

bool CiscoMplsLsrExtStdMib::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsxcexttable !=  nullptr && cmplsxcexttable->has_operation());
}

std::string CiscoMplsLsrExtStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB";

    return path_buffer.str();

}

const EntityPath CiscoMplsLsrExtStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoMplsLsrExtStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsXCExtTable")
    {
        if(cmplsxcexttable == nullptr)
        {
            cmplsxcexttable = std::make_shared<CiscoMplsLsrExtStdMib::Cmplsxcexttable>();
        }
        return cmplsxcexttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMplsLsrExtStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsxcexttable != nullptr)
    {
        children["cmplsXCExtTable"] = cmplsxcexttable;
    }

    return children;
}

void CiscoMplsLsrExtStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoMplsLsrExtStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoMplsLsrExtStdMib::clone_ptr() const
{
    return std::make_shared<CiscoMplsLsrExtStdMib>();
}

std::string CiscoMplsLsrExtStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoMplsLsrExtStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoMplsLsrExtStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoMplsLsrExtStdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoMplsLsrExtStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsXCExtTable")
        return true;
    return false;
}

CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcexttable()
{
    yang_name = "cmplsXCExtTable"; yang_parent_name = "CISCO-MPLS-LSR-EXT-STD-MIB";
}

CiscoMplsLsrExtStdMib::Cmplsxcexttable::~Cmplsxcexttable()
{
}

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::has_data() const
{
    for (std::size_t index=0; index<cmplsxcextentry.size(); index++)
    {
        if(cmplsxcextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::has_operation() const
{
    for (std::size_t index=0; index<cmplsxcextentry.size(); index++)
    {
        if(cmplsxcextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoMplsLsrExtStdMib::Cmplsxcexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsXCExtTable";

    return path_buffer.str();

}

const EntityPath CiscoMplsLsrExtStdMib::Cmplsxcexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMplsLsrExtStdMib::Cmplsxcexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsXCExtEntry")
    {
        for(auto const & c : cmplsxcextentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry>();
        c->parent = this;
        cmplsxcextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMplsLsrExtStdMib::Cmplsxcexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsxcextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMplsLsrExtStdMib::Cmplsxcexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoMplsLsrExtStdMib::Cmplsxcexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsXCExtEntry")
        return true;
    return false;
}

CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::Cmplsxcextentry()
    :
    mplsxcindex{YType::str, "mplsXCIndex"},
    mplsxcinsegmentindex{YType::str, "mplsXCInSegmentIndex"},
    mplsxcoutsegmentindex{YType::str, "mplsXCOutSegmentIndex"},
    cmplsxcexttunnelpointer{YType::str, "cmplsXCExtTunnelPointer"},
    cmplsxcoppositedirxcptr{YType::str, "cmplsXCOppositeDirXCPtr"}
{
    yang_name = "cmplsXCExtEntry"; yang_parent_name = "cmplsXCExtTable";
}

CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::~Cmplsxcextentry()
{
}

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::has_data() const
{
    return mplsxcindex.is_set
	|| mplsxcinsegmentindex.is_set
	|| mplsxcoutsegmentindex.is_set
	|| cmplsxcexttunnelpointer.is_set
	|| cmplsxcoppositedirxcptr.is_set;
}

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsxcindex.yfilter)
	|| ydk::is_set(mplsxcinsegmentindex.yfilter)
	|| ydk::is_set(mplsxcoutsegmentindex.yfilter)
	|| ydk::is_set(cmplsxcexttunnelpointer.yfilter)
	|| ydk::is_set(cmplsxcoppositedirxcptr.yfilter);
}

std::string CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsXCExtEntry" <<"[mplsXCIndex='" <<mplsxcindex <<"']" <<"[mplsXCInSegmentIndex='" <<mplsxcinsegmentindex <<"']" <<"[mplsXCOutSegmentIndex='" <<mplsxcoutsegmentindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MPLS-LSR-EXT-STD-MIB:CISCO-MPLS-LSR-EXT-STD-MIB/cmplsXCExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsxcindex.is_set || is_set(mplsxcindex.yfilter)) leaf_name_data.push_back(mplsxcindex.get_name_leafdata());
    if (mplsxcinsegmentindex.is_set || is_set(mplsxcinsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcinsegmentindex.get_name_leafdata());
    if (mplsxcoutsegmentindex.is_set || is_set(mplsxcoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcoutsegmentindex.get_name_leafdata());
    if (cmplsxcexttunnelpointer.is_set || is_set(cmplsxcexttunnelpointer.yfilter)) leaf_name_data.push_back(cmplsxcexttunnelpointer.get_name_leafdata());
    if (cmplsxcoppositedirxcptr.is_set || is_set(cmplsxcoppositedirxcptr.yfilter)) leaf_name_data.push_back(cmplsxcoppositedirxcptr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCIndex" || name == "mplsXCInSegmentIndex" || name == "mplsXCOutSegmentIndex" || name == "cmplsXCExtTunnelPointer" || name == "cmplsXCOppositeDirXCPtr")
        return true;
    return false;
}


}
}
