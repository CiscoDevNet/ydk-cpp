
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LDP_STD_MIB {

MPLSLDPSTDMIB::MPLSLDPSTDMIB()
    :
    mplsldplsrobjects(std::make_shared<MPLSLDPSTDMIB::MplsLdpLsrObjects>())
    , mplsldpentityobjects(std::make_shared<MPLSLDPSTDMIB::MplsLdpEntityObjects>())
    , mplsldpsessionobjects(std::make_shared<MPLSLDPSTDMIB::MplsLdpSessionObjects>())
    , mplsfecobjects(std::make_shared<MPLSLDPSTDMIB::MplsFecObjects>())
    , mplsldpentitytable(std::make_shared<MPLSLDPSTDMIB::MplsLdpEntityTable>())
    , mplsldppeertable(std::make_shared<MPLSLDPSTDMIB::MplsLdpPeerTable>())
    , mplsldphelloadjacencytable(std::make_shared<MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable>())
    , mplsinsegmentldplsptable(std::make_shared<MPLSLDPSTDMIB::MplsInSegmentLdpLspTable>())
    , mplsoutsegmentldplsptable(std::make_shared<MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable>())
    , mplsfectable(std::make_shared<MPLSLDPSTDMIB::MplsFecTable>())
    , mplsldplspfectable(std::make_shared<MPLSLDPSTDMIB::MplsLdpLspFecTable>())
    , mplsldpsessionpeeraddrtable(std::make_shared<MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable>())
{
    mplsldplsrobjects->parent = this;
    mplsldpentityobjects->parent = this;
    mplsldpsessionobjects->parent = this;
    mplsfecobjects->parent = this;
    mplsldpentitytable->parent = this;
    mplsldppeertable->parent = this;
    mplsldphelloadjacencytable->parent = this;
    mplsinsegmentldplsptable->parent = this;
    mplsoutsegmentldplsptable->parent = this;
    mplsfectable->parent = this;
    mplsldplspfectable->parent = this;
    mplsldpsessionpeeraddrtable->parent = this;

    yang_name = "MPLS-LDP-STD-MIB"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::~MPLSLDPSTDMIB()
{
}

bool MPLSLDPSTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mplsldplsrobjects !=  nullptr && mplsldplsrobjects->has_data())
	|| (mplsldpentityobjects !=  nullptr && mplsldpentityobjects->has_data())
	|| (mplsldpsessionobjects !=  nullptr && mplsldpsessionobjects->has_data())
	|| (mplsfecobjects !=  nullptr && mplsfecobjects->has_data())
	|| (mplsldpentitytable !=  nullptr && mplsldpentitytable->has_data())
	|| (mplsldppeertable !=  nullptr && mplsldppeertable->has_data())
	|| (mplsldphelloadjacencytable !=  nullptr && mplsldphelloadjacencytable->has_data())
	|| (mplsinsegmentldplsptable !=  nullptr && mplsinsegmentldplsptable->has_data())
	|| (mplsoutsegmentldplsptable !=  nullptr && mplsoutsegmentldplsptable->has_data())
	|| (mplsfectable !=  nullptr && mplsfectable->has_data())
	|| (mplsldplspfectable !=  nullptr && mplsldplspfectable->has_data())
	|| (mplsldpsessionpeeraddrtable !=  nullptr && mplsldpsessionpeeraddrtable->has_data());
}

bool MPLSLDPSTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplsldplsrobjects !=  nullptr && mplsldplsrobjects->has_operation())
	|| (mplsldpentityobjects !=  nullptr && mplsldpentityobjects->has_operation())
	|| (mplsldpsessionobjects !=  nullptr && mplsldpsessionobjects->has_operation())
	|| (mplsfecobjects !=  nullptr && mplsfecobjects->has_operation())
	|| (mplsldpentitytable !=  nullptr && mplsldpentitytable->has_operation())
	|| (mplsldppeertable !=  nullptr && mplsldppeertable->has_operation())
	|| (mplsldphelloadjacencytable !=  nullptr && mplsldphelloadjacencytable->has_operation())
	|| (mplsinsegmentldplsptable !=  nullptr && mplsinsegmentldplsptable->has_operation())
	|| (mplsoutsegmentldplsptable !=  nullptr && mplsoutsegmentldplsptable->has_operation())
	|| (mplsfectable !=  nullptr && mplsfectable->has_operation())
	|| (mplsldplspfectable !=  nullptr && mplsldplspfectable->has_operation())
	|| (mplsldpsessionpeeraddrtable !=  nullptr && mplsldpsessionpeeraddrtable->has_operation());
}

std::string MPLSLDPSTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpLsrObjects")
    {
        if(mplsldplsrobjects == nullptr)
        {
            mplsldplsrobjects = std::make_shared<MPLSLDPSTDMIB::MplsLdpLsrObjects>();
        }
        return mplsldplsrobjects;
    }

    if(child_yang_name == "mplsLdpEntityObjects")
    {
        if(mplsldpentityobjects == nullptr)
        {
            mplsldpentityobjects = std::make_shared<MPLSLDPSTDMIB::MplsLdpEntityObjects>();
        }
        return mplsldpentityobjects;
    }

    if(child_yang_name == "mplsLdpSessionObjects")
    {
        if(mplsldpsessionobjects == nullptr)
        {
            mplsldpsessionobjects = std::make_shared<MPLSLDPSTDMIB::MplsLdpSessionObjects>();
        }
        return mplsldpsessionobjects;
    }

    if(child_yang_name == "mplsFecObjects")
    {
        if(mplsfecobjects == nullptr)
        {
            mplsfecobjects = std::make_shared<MPLSLDPSTDMIB::MplsFecObjects>();
        }
        return mplsfecobjects;
    }

    if(child_yang_name == "mplsLdpEntityTable")
    {
        if(mplsldpentitytable == nullptr)
        {
            mplsldpentitytable = std::make_shared<MPLSLDPSTDMIB::MplsLdpEntityTable>();
        }
        return mplsldpentitytable;
    }

    if(child_yang_name == "mplsLdpPeerTable")
    {
        if(mplsldppeertable == nullptr)
        {
            mplsldppeertable = std::make_shared<MPLSLDPSTDMIB::MplsLdpPeerTable>();
        }
        return mplsldppeertable;
    }

    if(child_yang_name == "mplsLdpHelloAdjacencyTable")
    {
        if(mplsldphelloadjacencytable == nullptr)
        {
            mplsldphelloadjacencytable = std::make_shared<MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable>();
        }
        return mplsldphelloadjacencytable;
    }

    if(child_yang_name == "mplsInSegmentLdpLspTable")
    {
        if(mplsinsegmentldplsptable == nullptr)
        {
            mplsinsegmentldplsptable = std::make_shared<MPLSLDPSTDMIB::MplsInSegmentLdpLspTable>();
        }
        return mplsinsegmentldplsptable;
    }

    if(child_yang_name == "mplsOutSegmentLdpLspTable")
    {
        if(mplsoutsegmentldplsptable == nullptr)
        {
            mplsoutsegmentldplsptable = std::make_shared<MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable>();
        }
        return mplsoutsegmentldplsptable;
    }

    if(child_yang_name == "mplsFecTable")
    {
        if(mplsfectable == nullptr)
        {
            mplsfectable = std::make_shared<MPLSLDPSTDMIB::MplsFecTable>();
        }
        return mplsfectable;
    }

    if(child_yang_name == "mplsLdpLspFecTable")
    {
        if(mplsldplspfectable == nullptr)
        {
            mplsldplspfectable = std::make_shared<MPLSLDPSTDMIB::MplsLdpLspFecTable>();
        }
        return mplsldplspfectable;
    }

    if(child_yang_name == "mplsLdpSessionPeerAddrTable")
    {
        if(mplsldpsessionpeeraddrtable == nullptr)
        {
            mplsldpsessionpeeraddrtable = std::make_shared<MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable>();
        }
        return mplsldpsessionpeeraddrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplsldplsrobjects != nullptr)
    {
        children["mplsLdpLsrObjects"] = mplsldplsrobjects;
    }

    if(mplsldpentityobjects != nullptr)
    {
        children["mplsLdpEntityObjects"] = mplsldpentityobjects;
    }

    if(mplsldpsessionobjects != nullptr)
    {
        children["mplsLdpSessionObjects"] = mplsldpsessionobjects;
    }

    if(mplsfecobjects != nullptr)
    {
        children["mplsFecObjects"] = mplsfecobjects;
    }

    if(mplsldpentitytable != nullptr)
    {
        children["mplsLdpEntityTable"] = mplsldpentitytable;
    }

    if(mplsldppeertable != nullptr)
    {
        children["mplsLdpPeerTable"] = mplsldppeertable;
    }

    if(mplsldphelloadjacencytable != nullptr)
    {
        children["mplsLdpHelloAdjacencyTable"] = mplsldphelloadjacencytable;
    }

    if(mplsinsegmentldplsptable != nullptr)
    {
        children["mplsInSegmentLdpLspTable"] = mplsinsegmentldplsptable;
    }

    if(mplsoutsegmentldplsptable != nullptr)
    {
        children["mplsOutSegmentLdpLspTable"] = mplsoutsegmentldplsptable;
    }

    if(mplsfectable != nullptr)
    {
        children["mplsFecTable"] = mplsfectable;
    }

    if(mplsldplspfectable != nullptr)
    {
        children["mplsLdpLspFecTable"] = mplsldplspfectable;
    }

    if(mplsldpsessionpeeraddrtable != nullptr)
    {
        children["mplsLdpSessionPeerAddrTable"] = mplsldpsessionpeeraddrtable;
    }

    return children;
}

void MPLSLDPSTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MPLSLDPSTDMIB::clone_ptr() const
{
    return std::make_shared<MPLSLDPSTDMIB>();
}

std::string MPLSLDPSTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSLDPSTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSLDPSTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSLDPSTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSLDPSTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLsrObjects" || name == "mplsLdpEntityObjects" || name == "mplsLdpSessionObjects" || name == "mplsFecObjects" || name == "mplsLdpEntityTable" || name == "mplsLdpPeerTable" || name == "mplsLdpHelloAdjacencyTable" || name == "mplsInSegmentLdpLspTable" || name == "mplsOutSegmentLdpLspTable" || name == "mplsFecTable" || name == "mplsLdpLspFecTable" || name == "mplsLdpSessionPeerAddrTable")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrObjects()
    :
    mplsldplsrid{YType::str, "mplsLdpLsrId"},
    mplsldplsrloopdetectioncapable{YType::enumeration, "mplsLdpLsrLoopDetectionCapable"}
{

    yang_name = "mplsLdpLsrObjects"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpLsrObjects::~MplsLdpLsrObjects()
{
}

bool MPLSLDPSTDMIB::MplsLdpLsrObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplsldplsrid.is_set
	|| mplsldplsrloopdetectioncapable.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpLsrObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldplsrid.yfilter)
	|| ydk::is_set(mplsldplsrloopdetectioncapable.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpLsrObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpLsrObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLsrObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpLsrObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldplsrid.is_set || is_set(mplsldplsrid.yfilter)) leaf_name_data.push_back(mplsldplsrid.get_name_leafdata());
    if (mplsldplsrloopdetectioncapable.is_set || is_set(mplsldplsrloopdetectioncapable.yfilter)) leaf_name_data.push_back(mplsldplsrloopdetectioncapable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpLsrObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpLsrObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpLsrObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpLsrId")
    {
        mplsldplsrid = value;
        mplsldplsrid.value_namespace = name_space;
        mplsldplsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLsrLoopDetectionCapable")
    {
        mplsldplsrloopdetectioncapable = value;
        mplsldplsrloopdetectioncapable.value_namespace = name_space;
        mplsldplsrloopdetectioncapable.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpLsrObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpLsrId")
    {
        mplsldplsrid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLsrLoopDetectionCapable")
    {
        mplsldplsrloopdetectioncapable.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpLsrObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLsrId" || name == "mplsLdpLsrLoopDetectionCapable")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpEntityObjects::MplsLdpEntityObjects()
    :
    mplsldpentitylastchange{YType::uint32, "mplsLdpEntityLastChange"},
    mplsldpentityindexnext{YType::uint32, "mplsLdpEntityIndexNext"}
{

    yang_name = "mplsLdpEntityObjects"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpEntityObjects::~MplsLdpEntityObjects()
{
}

bool MPLSLDPSTDMIB::MplsLdpEntityObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentitylastchange.is_set
	|| mplsldpentityindexnext.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpEntityObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentitylastchange.yfilter)
	|| ydk::is_set(mplsldpentityindexnext.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpEntityObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpEntityObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpEntityObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentitylastchange.is_set || is_set(mplsldpentitylastchange.yfilter)) leaf_name_data.push_back(mplsldpentitylastchange.get_name_leafdata());
    if (mplsldpentityindexnext.is_set || is_set(mplsldpentityindexnext.yfilter)) leaf_name_data.push_back(mplsldpentityindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpEntityObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpEntityObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpEntityObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpEntityLastChange")
    {
        mplsldpentitylastchange = value;
        mplsldpentitylastchange.value_namespace = name_space;
        mplsldpentitylastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityIndexNext")
    {
        mplsldpentityindexnext = value;
        mplsldpentityindexnext.value_namespace = name_space;
        mplsldpentityindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpEntityObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLastChange")
    {
        mplsldpentitylastchange.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndexNext")
    {
        mplsldpentityindexnext.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpEntityObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLastChange" || name == "mplsLdpEntityIndexNext")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpSessionObjects::MplsLdpSessionObjects()
    :
    mplsldppeerlastchange{YType::uint32, "mplsLdpPeerLastChange"},
    mplsldplspfeclastchange{YType::uint32, "mplsLdpLspFecLastChange"}
{

    yang_name = "mplsLdpSessionObjects"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpSessionObjects::~MplsLdpSessionObjects()
{
}

bool MPLSLDPSTDMIB::MplsLdpSessionObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplsldppeerlastchange.is_set
	|| mplsldplspfeclastchange.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpSessionObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldppeerlastchange.yfilter)
	|| ydk::is_set(mplsldplspfeclastchange.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpSessionObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpSessionObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpSessionObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldppeerlastchange.is_set || is_set(mplsldppeerlastchange.yfilter)) leaf_name_data.push_back(mplsldppeerlastchange.get_name_leafdata());
    if (mplsldplspfeclastchange.is_set || is_set(mplsldplspfeclastchange.yfilter)) leaf_name_data.push_back(mplsldplspfeclastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpSessionObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpSessionObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpSessionObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpPeerLastChange")
    {
        mplsldppeerlastchange = value;
        mplsldppeerlastchange.value_namespace = name_space;
        mplsldppeerlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecLastChange")
    {
        mplsldplspfeclastchange = value;
        mplsldplspfeclastchange.value_namespace = name_space;
        mplsldplspfeclastchange.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpSessionObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpPeerLastChange")
    {
        mplsldppeerlastchange.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecLastChange")
    {
        mplsldplspfeclastchange.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpSessionObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpPeerLastChange" || name == "mplsLdpLspFecLastChange")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsFecObjects::MplsFecObjects()
    :
    mplsfeclastchange{YType::uint32, "mplsFecLastChange"},
    mplsfecindexnext{YType::uint32, "mplsFecIndexNext"}
{

    yang_name = "mplsFecObjects"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsFecObjects::~MplsFecObjects()
{
}

bool MPLSLDPSTDMIB::MplsFecObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplsfeclastchange.is_set
	|| mplsfecindexnext.is_set;
}

bool MPLSLDPSTDMIB::MplsFecObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsfeclastchange.yfilter)
	|| ydk::is_set(mplsfecindexnext.yfilter);
}

std::string MPLSLDPSTDMIB::MplsFecObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsFecObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsFecObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsfeclastchange.is_set || is_set(mplsfeclastchange.yfilter)) leaf_name_data.push_back(mplsfeclastchange.get_name_leafdata());
    if (mplsfecindexnext.is_set || is_set(mplsfecindexnext.yfilter)) leaf_name_data.push_back(mplsfecindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsFecObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsFecObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsFecObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsFecLastChange")
    {
        mplsfeclastchange = value;
        mplsfeclastchange.value_namespace = name_space;
        mplsfeclastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecIndexNext")
    {
        mplsfecindexnext = value;
        mplsfecindexnext.value_namespace = name_space;
        mplsfecindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsFecObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsFecLastChange")
    {
        mplsfeclastchange.yfilter = yfilter;
    }
    if(value_path == "mplsFecIndexNext")
    {
        mplsfecindexnext.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsFecObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecLastChange" || name == "mplsFecIndexNext")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityTable()
    :
    mplsldpentityentry(this, {"mplsldpentityldpid", "mplsldpentityindex"})
{

    yang_name = "mplsLdpEntityTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpEntityTable::~MplsLdpEntityTable()
{
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldpentityentry.len(); index++)
    {
        if(mplsldpentityentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpentityentry.len(); index++)
    {
        if(mplsldpentityentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpEntityTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpEntityTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpEntityTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpEntityTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry>();
        c->parent = this;
        mplsldpentityentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpEntityTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsldpentityentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsLdpEntityTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsLdpEntityTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::uint32, "mplsLdpEntityIndex"},
    mplsldpentityprotocolversion{YType::uint32, "mplsLdpEntityProtocolVersion"},
    mplsldpentityadminstatus{YType::enumeration, "mplsLdpEntityAdminStatus"},
    mplsldpentityoperstatus{YType::enumeration, "mplsLdpEntityOperStatus"},
    mplsldpentitytcpport{YType::uint16, "mplsLdpEntityTcpPort"},
    mplsldpentityudpdscport{YType::uint16, "mplsLdpEntityUdpDscPort"},
    mplsldpentitymaxpdulength{YType::uint32, "mplsLdpEntityMaxPduLength"},
    mplsldpentitykeepaliveholdtimer{YType::uint32, "mplsLdpEntityKeepAliveHoldTimer"},
    mplsldpentityhelloholdtimer{YType::uint32, "mplsLdpEntityHelloHoldTimer"},
    mplsldpentityinitsessionthreshold{YType::int32, "mplsLdpEntityInitSessionThreshold"},
    mplsldpentitylabeldistmethod{YType::enumeration, "mplsLdpEntityLabelDistMethod"},
    mplsldpentitylabelretentionmode{YType::enumeration, "mplsLdpEntityLabelRetentionMode"},
    mplsldpentitypathvectorlimit{YType::int32, "mplsLdpEntityPathVectorLimit"},
    mplsldpentityhopcountlimit{YType::int32, "mplsLdpEntityHopCountLimit"},
    mplsldpentitytransportaddrkind{YType::enumeration, "mplsLdpEntityTransportAddrKind"},
    mplsldpentitytargetpeer{YType::boolean, "mplsLdpEntityTargetPeer"},
    mplsldpentitytargetpeeraddrtype{YType::enumeration, "mplsLdpEntityTargetPeerAddrType"},
    mplsldpentitytargetpeeraddr{YType::str, "mplsLdpEntityTargetPeerAddr"},
    mplsldpentitylabeltype{YType::enumeration, "mplsLdpEntityLabelType"},
    mplsldpentitydiscontinuitytime{YType::uint32, "mplsLdpEntityDiscontinuityTime"},
    mplsldpentitystoragetype{YType::enumeration, "mplsLdpEntityStorageType"},
    mplsldpentityrowstatus{YType::enumeration, "mplsLdpEntityRowStatus"},
    mplsldpentitystatssessionattempts{YType::uint32, "mplsLdpEntityStatsSessionAttempts"},
    mplsldpentitystatssessionrejectednohelloerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedNoHelloErrors"},
    mplsldpentitystatssessionrejectedaderrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedAdErrors"},
    mplsldpentitystatssessionrejectedmaxpduerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedMaxPduErrors"},
    mplsldpentitystatssessionrejectedlrerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedLRErrors"},
    mplsldpentitystatsbadldpidentifiererrors{YType::uint32, "mplsLdpEntityStatsBadLdpIdentifierErrors"},
    mplsldpentitystatsbadpdulengtherrors{YType::uint32, "mplsLdpEntityStatsBadPduLengthErrors"},
    mplsldpentitystatsbadmessagelengtherrors{YType::uint32, "mplsLdpEntityStatsBadMessageLengthErrors"},
    mplsldpentitystatsbadtlvlengtherrors{YType::uint32, "mplsLdpEntityStatsBadTlvLengthErrors"},
    mplsldpentitystatsmalformedtlvvalueerrors{YType::uint32, "mplsLdpEntityStatsMalformedTlvValueErrors"},
    mplsldpentitystatskeepalivetimerexperrors{YType::uint32, "mplsLdpEntityStatsKeepAliveTimerExpErrors"},
    mplsldpentitystatsshutdownreceivednotifications{YType::uint32, "mplsLdpEntityStatsShutdownReceivedNotifications"},
    mplsldpentitystatsshutdownsentnotifications{YType::uint32, "mplsLdpEntityStatsShutdownSentNotifications"}
{

    yang_name = "mplsLdpEntityEntry"; yang_parent_name = "mplsLdpEntityTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::~MplsLdpEntityEntry()
{
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldpentityprotocolversion.is_set
	|| mplsldpentityadminstatus.is_set
	|| mplsldpentityoperstatus.is_set
	|| mplsldpentitytcpport.is_set
	|| mplsldpentityudpdscport.is_set
	|| mplsldpentitymaxpdulength.is_set
	|| mplsldpentitykeepaliveholdtimer.is_set
	|| mplsldpentityhelloholdtimer.is_set
	|| mplsldpentityinitsessionthreshold.is_set
	|| mplsldpentitylabeldistmethod.is_set
	|| mplsldpentitylabelretentionmode.is_set
	|| mplsldpentitypathvectorlimit.is_set
	|| mplsldpentityhopcountlimit.is_set
	|| mplsldpentitytransportaddrkind.is_set
	|| mplsldpentitytargetpeer.is_set
	|| mplsldpentitytargetpeeraddrtype.is_set
	|| mplsldpentitytargetpeeraddr.is_set
	|| mplsldpentitylabeltype.is_set
	|| mplsldpentitydiscontinuitytime.is_set
	|| mplsldpentitystoragetype.is_set
	|| mplsldpentityrowstatus.is_set
	|| mplsldpentitystatssessionattempts.is_set
	|| mplsldpentitystatssessionrejectednohelloerrors.is_set
	|| mplsldpentitystatssessionrejectedaderrors.is_set
	|| mplsldpentitystatssessionrejectedmaxpduerrors.is_set
	|| mplsldpentitystatssessionrejectedlrerrors.is_set
	|| mplsldpentitystatsbadldpidentifiererrors.is_set
	|| mplsldpentitystatsbadpdulengtherrors.is_set
	|| mplsldpentitystatsbadmessagelengtherrors.is_set
	|| mplsldpentitystatsbadtlvlengtherrors.is_set
	|| mplsldpentitystatsmalformedtlvvalueerrors.is_set
	|| mplsldpentitystatskeepalivetimerexperrors.is_set
	|| mplsldpentitystatsshutdownreceivednotifications.is_set
	|| mplsldpentitystatsshutdownsentnotifications.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldpentityprotocolversion.yfilter)
	|| ydk::is_set(mplsldpentityadminstatus.yfilter)
	|| ydk::is_set(mplsldpentityoperstatus.yfilter)
	|| ydk::is_set(mplsldpentitytcpport.yfilter)
	|| ydk::is_set(mplsldpentityudpdscport.yfilter)
	|| ydk::is_set(mplsldpentitymaxpdulength.yfilter)
	|| ydk::is_set(mplsldpentitykeepaliveholdtimer.yfilter)
	|| ydk::is_set(mplsldpentityhelloholdtimer.yfilter)
	|| ydk::is_set(mplsldpentityinitsessionthreshold.yfilter)
	|| ydk::is_set(mplsldpentitylabeldistmethod.yfilter)
	|| ydk::is_set(mplsldpentitylabelretentionmode.yfilter)
	|| ydk::is_set(mplsldpentitypathvectorlimit.yfilter)
	|| ydk::is_set(mplsldpentityhopcountlimit.yfilter)
	|| ydk::is_set(mplsldpentitytransportaddrkind.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeer.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeeraddrtype.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeeraddr.yfilter)
	|| ydk::is_set(mplsldpentitylabeltype.yfilter)
	|| ydk::is_set(mplsldpentitydiscontinuitytime.yfilter)
	|| ydk::is_set(mplsldpentitystoragetype.yfilter)
	|| ydk::is_set(mplsldpentityrowstatus.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionattempts.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectednohelloerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedaderrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedmaxpduerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedlrerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadldpidentifiererrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadpdulengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadmessagelengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadtlvlengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsmalformedtlvvalueerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatskeepalivetimerexperrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsshutdownreceivednotifications.yfilter)
	|| ydk::is_set(mplsldpentitystatsshutdownsentnotifications.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpEntityTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentityprotocolversion.is_set || is_set(mplsldpentityprotocolversion.yfilter)) leaf_name_data.push_back(mplsldpentityprotocolversion.get_name_leafdata());
    if (mplsldpentityadminstatus.is_set || is_set(mplsldpentityadminstatus.yfilter)) leaf_name_data.push_back(mplsldpentityadminstatus.get_name_leafdata());
    if (mplsldpentityoperstatus.is_set || is_set(mplsldpentityoperstatus.yfilter)) leaf_name_data.push_back(mplsldpentityoperstatus.get_name_leafdata());
    if (mplsldpentitytcpport.is_set || is_set(mplsldpentitytcpport.yfilter)) leaf_name_data.push_back(mplsldpentitytcpport.get_name_leafdata());
    if (mplsldpentityudpdscport.is_set || is_set(mplsldpentityudpdscport.yfilter)) leaf_name_data.push_back(mplsldpentityudpdscport.get_name_leafdata());
    if (mplsldpentitymaxpdulength.is_set || is_set(mplsldpentitymaxpdulength.yfilter)) leaf_name_data.push_back(mplsldpentitymaxpdulength.get_name_leafdata());
    if (mplsldpentitykeepaliveholdtimer.is_set || is_set(mplsldpentitykeepaliveholdtimer.yfilter)) leaf_name_data.push_back(mplsldpentitykeepaliveholdtimer.get_name_leafdata());
    if (mplsldpentityhelloholdtimer.is_set || is_set(mplsldpentityhelloholdtimer.yfilter)) leaf_name_data.push_back(mplsldpentityhelloholdtimer.get_name_leafdata());
    if (mplsldpentityinitsessionthreshold.is_set || is_set(mplsldpentityinitsessionthreshold.yfilter)) leaf_name_data.push_back(mplsldpentityinitsessionthreshold.get_name_leafdata());
    if (mplsldpentitylabeldistmethod.is_set || is_set(mplsldpentitylabeldistmethod.yfilter)) leaf_name_data.push_back(mplsldpentitylabeldistmethod.get_name_leafdata());
    if (mplsldpentitylabelretentionmode.is_set || is_set(mplsldpentitylabelretentionmode.yfilter)) leaf_name_data.push_back(mplsldpentitylabelretentionmode.get_name_leafdata());
    if (mplsldpentitypathvectorlimit.is_set || is_set(mplsldpentitypathvectorlimit.yfilter)) leaf_name_data.push_back(mplsldpentitypathvectorlimit.get_name_leafdata());
    if (mplsldpentityhopcountlimit.is_set || is_set(mplsldpentityhopcountlimit.yfilter)) leaf_name_data.push_back(mplsldpentityhopcountlimit.get_name_leafdata());
    if (mplsldpentitytransportaddrkind.is_set || is_set(mplsldpentitytransportaddrkind.yfilter)) leaf_name_data.push_back(mplsldpentitytransportaddrkind.get_name_leafdata());
    if (mplsldpentitytargetpeer.is_set || is_set(mplsldpentitytargetpeer.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeer.get_name_leafdata());
    if (mplsldpentitytargetpeeraddrtype.is_set || is_set(mplsldpentitytargetpeeraddrtype.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeeraddrtype.get_name_leafdata());
    if (mplsldpentitytargetpeeraddr.is_set || is_set(mplsldpentitytargetpeeraddr.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeeraddr.get_name_leafdata());
    if (mplsldpentitylabeltype.is_set || is_set(mplsldpentitylabeltype.yfilter)) leaf_name_data.push_back(mplsldpentitylabeltype.get_name_leafdata());
    if (mplsldpentitydiscontinuitytime.is_set || is_set(mplsldpentitydiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsldpentitydiscontinuitytime.get_name_leafdata());
    if (mplsldpentitystoragetype.is_set || is_set(mplsldpentitystoragetype.yfilter)) leaf_name_data.push_back(mplsldpentitystoragetype.get_name_leafdata());
    if (mplsldpentityrowstatus.is_set || is_set(mplsldpentityrowstatus.yfilter)) leaf_name_data.push_back(mplsldpentityrowstatus.get_name_leafdata());
    if (mplsldpentitystatssessionattempts.is_set || is_set(mplsldpentitystatssessionattempts.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionattempts.get_name_leafdata());
    if (mplsldpentitystatssessionrejectednohelloerrors.is_set || is_set(mplsldpentitystatssessionrejectednohelloerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectednohelloerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedaderrors.is_set || is_set(mplsldpentitystatssessionrejectedaderrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedaderrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedmaxpduerrors.is_set || is_set(mplsldpentitystatssessionrejectedmaxpduerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedmaxpduerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedlrerrors.is_set || is_set(mplsldpentitystatssessionrejectedlrerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedlrerrors.get_name_leafdata());
    if (mplsldpentitystatsbadldpidentifiererrors.is_set || is_set(mplsldpentitystatsbadldpidentifiererrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadldpidentifiererrors.get_name_leafdata());
    if (mplsldpentitystatsbadpdulengtherrors.is_set || is_set(mplsldpentitystatsbadpdulengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadpdulengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadmessagelengtherrors.is_set || is_set(mplsldpentitystatsbadmessagelengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadmessagelengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadtlvlengtherrors.is_set || is_set(mplsldpentitystatsbadtlvlengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadtlvlengtherrors.get_name_leafdata());
    if (mplsldpentitystatsmalformedtlvvalueerrors.is_set || is_set(mplsldpentitystatsmalformedtlvvalueerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsmalformedtlvvalueerrors.get_name_leafdata());
    if (mplsldpentitystatskeepalivetimerexperrors.is_set || is_set(mplsldpentitystatskeepalivetimerexperrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatskeepalivetimerexperrors.get_name_leafdata());
    if (mplsldpentitystatsshutdownreceivednotifications.is_set || is_set(mplsldpentitystatsshutdownreceivednotifications.yfilter)) leaf_name_data.push_back(mplsldpentitystatsshutdownreceivednotifications.get_name_leafdata());
    if (mplsldpentitystatsshutdownsentnotifications.is_set || is_set(mplsldpentitystatsshutdownsentnotifications.yfilter)) leaf_name_data.push_back(mplsldpentitystatsshutdownsentnotifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpEntityProtocolVersion")
    {
        mplsldpentityprotocolversion = value;
        mplsldpentityprotocolversion.value_namespace = name_space;
        mplsldpentityprotocolversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityAdminStatus")
    {
        mplsldpentityadminstatus = value;
        mplsldpentityadminstatus.value_namespace = name_space;
        mplsldpentityadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityOperStatus")
    {
        mplsldpentityoperstatus = value;
        mplsldpentityoperstatus.value_namespace = name_space;
        mplsldpentityoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTcpPort")
    {
        mplsldpentitytcpport = value;
        mplsldpentitytcpport.value_namespace = name_space;
        mplsldpentitytcpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityUdpDscPort")
    {
        mplsldpentityudpdscport = value;
        mplsldpentityudpdscport.value_namespace = name_space;
        mplsldpentityudpdscport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityMaxPduLength")
    {
        mplsldpentitymaxpdulength = value;
        mplsldpentitymaxpdulength.value_namespace = name_space;
        mplsldpentitymaxpdulength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityKeepAliveHoldTimer")
    {
        mplsldpentitykeepaliveholdtimer = value;
        mplsldpentitykeepaliveholdtimer.value_namespace = name_space;
        mplsldpentitykeepaliveholdtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityHelloHoldTimer")
    {
        mplsldpentityhelloholdtimer = value;
        mplsldpentityhelloholdtimer.value_namespace = name_space;
        mplsldpentityhelloholdtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityInitSessionThreshold")
    {
        mplsldpentityinitsessionthreshold = value;
        mplsldpentityinitsessionthreshold.value_namespace = name_space;
        mplsldpentityinitsessionthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityLabelDistMethod")
    {
        mplsldpentitylabeldistmethod = value;
        mplsldpentitylabeldistmethod.value_namespace = name_space;
        mplsldpentitylabeldistmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityLabelRetentionMode")
    {
        mplsldpentitylabelretentionmode = value;
        mplsldpentitylabelretentionmode.value_namespace = name_space;
        mplsldpentitylabelretentionmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityPathVectorLimit")
    {
        mplsldpentitypathvectorlimit = value;
        mplsldpentitypathvectorlimit.value_namespace = name_space;
        mplsldpentitypathvectorlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityHopCountLimit")
    {
        mplsldpentityhopcountlimit = value;
        mplsldpentityhopcountlimit.value_namespace = name_space;
        mplsldpentityhopcountlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTransportAddrKind")
    {
        mplsldpentitytransportaddrkind = value;
        mplsldpentitytransportaddrkind.value_namespace = name_space;
        mplsldpentitytransportaddrkind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeer")
    {
        mplsldpentitytargetpeer = value;
        mplsldpentitytargetpeer.value_namespace = name_space;
        mplsldpentitytargetpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddrType")
    {
        mplsldpentitytargetpeeraddrtype = value;
        mplsldpentitytargetpeeraddrtype.value_namespace = name_space;
        mplsldpentitytargetpeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddr")
    {
        mplsldpentitytargetpeeraddr = value;
        mplsldpentitytargetpeeraddr.value_namespace = name_space;
        mplsldpentitytargetpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityLabelType")
    {
        mplsldpentitylabeltype = value;
        mplsldpentitylabeltype.value_namespace = name_space;
        mplsldpentitylabeltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityDiscontinuityTime")
    {
        mplsldpentitydiscontinuitytime = value;
        mplsldpentitydiscontinuitytime.value_namespace = name_space;
        mplsldpentitydiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStorageType")
    {
        mplsldpentitystoragetype = value;
        mplsldpentitystoragetype.value_namespace = name_space;
        mplsldpentitystoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityRowStatus")
    {
        mplsldpentityrowstatus = value;
        mplsldpentityrowstatus.value_namespace = name_space;
        mplsldpentityrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionAttempts")
    {
        mplsldpentitystatssessionattempts = value;
        mplsldpentitystatssessionattempts.value_namespace = name_space;
        mplsldpentitystatssessionattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedNoHelloErrors")
    {
        mplsldpentitystatssessionrejectednohelloerrors = value;
        mplsldpentitystatssessionrejectednohelloerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectednohelloerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedAdErrors")
    {
        mplsldpentitystatssessionrejectedaderrors = value;
        mplsldpentitystatssessionrejectedaderrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedaderrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedMaxPduErrors")
    {
        mplsldpentitystatssessionrejectedmaxpduerrors = value;
        mplsldpentitystatssessionrejectedmaxpduerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedmaxpduerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedLRErrors")
    {
        mplsldpentitystatssessionrejectedlrerrors = value;
        mplsldpentitystatssessionrejectedlrerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedlrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadLdpIdentifierErrors")
    {
        mplsldpentitystatsbadldpidentifiererrors = value;
        mplsldpentitystatsbadldpidentifiererrors.value_namespace = name_space;
        mplsldpentitystatsbadldpidentifiererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadPduLengthErrors")
    {
        mplsldpentitystatsbadpdulengtherrors = value;
        mplsldpentitystatsbadpdulengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadpdulengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadMessageLengthErrors")
    {
        mplsldpentitystatsbadmessagelengtherrors = value;
        mplsldpentitystatsbadmessagelengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadmessagelengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadTlvLengthErrors")
    {
        mplsldpentitystatsbadtlvlengtherrors = value;
        mplsldpentitystatsbadtlvlengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadtlvlengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsMalformedTlvValueErrors")
    {
        mplsldpentitystatsmalformedtlvvalueerrors = value;
        mplsldpentitystatsmalformedtlvvalueerrors.value_namespace = name_space;
        mplsldpentitystatsmalformedtlvvalueerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsKeepAliveTimerExpErrors")
    {
        mplsldpentitystatskeepalivetimerexperrors = value;
        mplsldpentitystatskeepalivetimerexperrors.value_namespace = name_space;
        mplsldpentitystatskeepalivetimerexperrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsShutdownReceivedNotifications")
    {
        mplsldpentitystatsshutdownreceivednotifications = value;
        mplsldpentitystatsshutdownreceivednotifications.value_namespace = name_space;
        mplsldpentitystatsshutdownreceivednotifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsShutdownSentNotifications")
    {
        mplsldpentitystatsshutdownsentnotifications = value;
        mplsldpentitystatsshutdownsentnotifications.value_namespace = name_space;
        mplsldpentitystatsshutdownsentnotifications.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityProtocolVersion")
    {
        mplsldpentityprotocolversion.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityAdminStatus")
    {
        mplsldpentityadminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityOperStatus")
    {
        mplsldpentityoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTcpPort")
    {
        mplsldpentitytcpport.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityUdpDscPort")
    {
        mplsldpentityudpdscport.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityMaxPduLength")
    {
        mplsldpentitymaxpdulength.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityKeepAliveHoldTimer")
    {
        mplsldpentitykeepaliveholdtimer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityHelloHoldTimer")
    {
        mplsldpentityhelloholdtimer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityInitSessionThreshold")
    {
        mplsldpentityinitsessionthreshold.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelDistMethod")
    {
        mplsldpentitylabeldistmethod.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelRetentionMode")
    {
        mplsldpentitylabelretentionmode.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityPathVectorLimit")
    {
        mplsldpentitypathvectorlimit.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityHopCountLimit")
    {
        mplsldpentityhopcountlimit.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTransportAddrKind")
    {
        mplsldpentitytransportaddrkind.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeer")
    {
        mplsldpentitytargetpeer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddrType")
    {
        mplsldpentitytargetpeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddr")
    {
        mplsldpentitytargetpeeraddr.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelType")
    {
        mplsldpentitylabeltype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityDiscontinuityTime")
    {
        mplsldpentitydiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStorageType")
    {
        mplsldpentitystoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityRowStatus")
    {
        mplsldpentityrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionAttempts")
    {
        mplsldpentitystatssessionattempts.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedNoHelloErrors")
    {
        mplsldpentitystatssessionrejectednohelloerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedAdErrors")
    {
        mplsldpentitystatssessionrejectedaderrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedMaxPduErrors")
    {
        mplsldpentitystatssessionrejectedmaxpduerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedLRErrors")
    {
        mplsldpentitystatssessionrejectedlrerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadLdpIdentifierErrors")
    {
        mplsldpentitystatsbadldpidentifiererrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadPduLengthErrors")
    {
        mplsldpentitystatsbadpdulengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadMessageLengthErrors")
    {
        mplsldpentitystatsbadmessagelengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadTlvLengthErrors")
    {
        mplsldpentitystatsbadtlvlengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsMalformedTlvValueErrors")
    {
        mplsldpentitystatsmalformedtlvvalueerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsKeepAliveTimerExpErrors")
    {
        mplsldpentitystatskeepalivetimerexperrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsShutdownReceivedNotifications")
    {
        mplsldpentitystatsshutdownreceivednotifications.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsShutdownSentNotifications")
    {
        mplsldpentitystatsshutdownsentnotifications.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpEntityProtocolVersion" || name == "mplsLdpEntityAdminStatus" || name == "mplsLdpEntityOperStatus" || name == "mplsLdpEntityTcpPort" || name == "mplsLdpEntityUdpDscPort" || name == "mplsLdpEntityMaxPduLength" || name == "mplsLdpEntityKeepAliveHoldTimer" || name == "mplsLdpEntityHelloHoldTimer" || name == "mplsLdpEntityInitSessionThreshold" || name == "mplsLdpEntityLabelDistMethod" || name == "mplsLdpEntityLabelRetentionMode" || name == "mplsLdpEntityPathVectorLimit" || name == "mplsLdpEntityHopCountLimit" || name == "mplsLdpEntityTransportAddrKind" || name == "mplsLdpEntityTargetPeer" || name == "mplsLdpEntityTargetPeerAddrType" || name == "mplsLdpEntityTargetPeerAddr" || name == "mplsLdpEntityLabelType" || name == "mplsLdpEntityDiscontinuityTime" || name == "mplsLdpEntityStorageType" || name == "mplsLdpEntityRowStatus" || name == "mplsLdpEntityStatsSessionAttempts" || name == "mplsLdpEntityStatsSessionRejectedNoHelloErrors" || name == "mplsLdpEntityStatsSessionRejectedAdErrors" || name == "mplsLdpEntityStatsSessionRejectedMaxPduErrors" || name == "mplsLdpEntityStatsSessionRejectedLRErrors" || name == "mplsLdpEntityStatsBadLdpIdentifierErrors" || name == "mplsLdpEntityStatsBadPduLengthErrors" || name == "mplsLdpEntityStatsBadMessageLengthErrors" || name == "mplsLdpEntityStatsBadTlvLengthErrors" || name == "mplsLdpEntityStatsMalformedTlvValueErrors" || name == "mplsLdpEntityStatsKeepAliveTimerExpErrors" || name == "mplsLdpEntityStatsShutdownReceivedNotifications" || name == "mplsLdpEntityStatsShutdownSentNotifications")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerTable()
    :
    mplsldppeerentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid"})
{

    yang_name = "mplsLdpPeerTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpPeerTable::~MplsLdpPeerTable()
{
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldppeerentry.len(); index++)
    {
        if(mplsldppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldppeerentry.len(); index++)
    {
        if(mplsldppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpPeerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpPeerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpPeerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpPeerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpPeerEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry>();
        c->parent = this;
        mplsldppeerentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpPeerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsldppeerentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsLdpPeerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsLdpPeerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpPeerEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpPeerEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldppeerlabeldistmethod{YType::enumeration, "mplsLdpPeerLabelDistMethod"},
    mplsldppeerpathvectorlimit{YType::int32, "mplsLdpPeerPathVectorLimit"},
    mplsldppeertransportaddrtype{YType::enumeration, "mplsLdpPeerTransportAddrType"},
    mplsldppeertransportaddr{YType::str, "mplsLdpPeerTransportAddr"},
    mplsldpsessionstatelastchange{YType::uint32, "mplsLdpSessionStateLastChange"},
    mplsldpsessionstate{YType::enumeration, "mplsLdpSessionState"},
    mplsldpsessionrole{YType::enumeration, "mplsLdpSessionRole"},
    mplsldpsessionprotocolversion{YType::uint32, "mplsLdpSessionProtocolVersion"},
    mplsldpsessionkeepaliveholdtimerem{YType::int32, "mplsLdpSessionKeepAliveHoldTimeRem"},
    mplsldpsessionkeepalivetime{YType::uint32, "mplsLdpSessionKeepAliveTime"},
    mplsldpsessionmaxpdulength{YType::uint32, "mplsLdpSessionMaxPduLength"},
    mplsldpsessiondiscontinuitytime{YType::uint32, "mplsLdpSessionDiscontinuityTime"},
    mplsldpsessionstatsunknownmestypeerrors{YType::uint32, "mplsLdpSessionStatsUnknownMesTypeErrors"},
    mplsldpsessionstatsunknowntlverrors{YType::uint32, "mplsLdpSessionStatsUnknownTlvErrors"}
{

    yang_name = "mplsLdpPeerEntry"; yang_parent_name = "mplsLdpPeerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::~MplsLdpPeerEntry()
{
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldppeerlabeldistmethod.is_set
	|| mplsldppeerpathvectorlimit.is_set
	|| mplsldppeertransportaddrtype.is_set
	|| mplsldppeertransportaddr.is_set
	|| mplsldpsessionstatelastchange.is_set
	|| mplsldpsessionstate.is_set
	|| mplsldpsessionrole.is_set
	|| mplsldpsessionprotocolversion.is_set
	|| mplsldpsessionkeepaliveholdtimerem.is_set
	|| mplsldpsessionkeepalivetime.is_set
	|| mplsldpsessionmaxpdulength.is_set
	|| mplsldpsessiondiscontinuitytime.is_set
	|| mplsldpsessionstatsunknownmestypeerrors.is_set
	|| mplsldpsessionstatsunknowntlverrors.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldppeerlabeldistmethod.yfilter)
	|| ydk::is_set(mplsldppeerpathvectorlimit.yfilter)
	|| ydk::is_set(mplsldppeertransportaddrtype.yfilter)
	|| ydk::is_set(mplsldppeertransportaddr.yfilter)
	|| ydk::is_set(mplsldpsessionstatelastchange.yfilter)
	|| ydk::is_set(mplsldpsessionstate.yfilter)
	|| ydk::is_set(mplsldpsessionrole.yfilter)
	|| ydk::is_set(mplsldpsessionprotocolversion.yfilter)
	|| ydk::is_set(mplsldpsessionkeepaliveholdtimerem.yfilter)
	|| ydk::is_set(mplsldpsessionkeepalivetime.yfilter)
	|| ydk::is_set(mplsldpsessionmaxpdulength.yfilter)
	|| ydk::is_set(mplsldpsessiondiscontinuitytime.yfilter)
	|| ydk::is_set(mplsldpsessionstatsunknownmestypeerrors.yfilter)
	|| ydk::is_set(mplsldpsessionstatsunknowntlverrors.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpPeerEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldppeerlabeldistmethod.is_set || is_set(mplsldppeerlabeldistmethod.yfilter)) leaf_name_data.push_back(mplsldppeerlabeldistmethod.get_name_leafdata());
    if (mplsldppeerpathvectorlimit.is_set || is_set(mplsldppeerpathvectorlimit.yfilter)) leaf_name_data.push_back(mplsldppeerpathvectorlimit.get_name_leafdata());
    if (mplsldppeertransportaddrtype.is_set || is_set(mplsldppeertransportaddrtype.yfilter)) leaf_name_data.push_back(mplsldppeertransportaddrtype.get_name_leafdata());
    if (mplsldppeertransportaddr.is_set || is_set(mplsldppeertransportaddr.yfilter)) leaf_name_data.push_back(mplsldppeertransportaddr.get_name_leafdata());
    if (mplsldpsessionstatelastchange.is_set || is_set(mplsldpsessionstatelastchange.yfilter)) leaf_name_data.push_back(mplsldpsessionstatelastchange.get_name_leafdata());
    if (mplsldpsessionstate.is_set || is_set(mplsldpsessionstate.yfilter)) leaf_name_data.push_back(mplsldpsessionstate.get_name_leafdata());
    if (mplsldpsessionrole.is_set || is_set(mplsldpsessionrole.yfilter)) leaf_name_data.push_back(mplsldpsessionrole.get_name_leafdata());
    if (mplsldpsessionprotocolversion.is_set || is_set(mplsldpsessionprotocolversion.yfilter)) leaf_name_data.push_back(mplsldpsessionprotocolversion.get_name_leafdata());
    if (mplsldpsessionkeepaliveholdtimerem.is_set || is_set(mplsldpsessionkeepaliveholdtimerem.yfilter)) leaf_name_data.push_back(mplsldpsessionkeepaliveholdtimerem.get_name_leafdata());
    if (mplsldpsessionkeepalivetime.is_set || is_set(mplsldpsessionkeepalivetime.yfilter)) leaf_name_data.push_back(mplsldpsessionkeepalivetime.get_name_leafdata());
    if (mplsldpsessionmaxpdulength.is_set || is_set(mplsldpsessionmaxpdulength.yfilter)) leaf_name_data.push_back(mplsldpsessionmaxpdulength.get_name_leafdata());
    if (mplsldpsessiondiscontinuitytime.is_set || is_set(mplsldpsessiondiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsldpsessiondiscontinuitytime.get_name_leafdata());
    if (mplsldpsessionstatsunknownmestypeerrors.is_set || is_set(mplsldpsessionstatsunknownmestypeerrors.yfilter)) leaf_name_data.push_back(mplsldpsessionstatsunknownmestypeerrors.get_name_leafdata());
    if (mplsldpsessionstatsunknowntlverrors.is_set || is_set(mplsldpsessionstatsunknowntlverrors.yfilter)) leaf_name_data.push_back(mplsldpsessionstatsunknowntlverrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerLabelDistMethod")
    {
        mplsldppeerlabeldistmethod = value;
        mplsldppeerlabeldistmethod.value_namespace = name_space;
        mplsldppeerlabeldistmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerPathVectorLimit")
    {
        mplsldppeerpathvectorlimit = value;
        mplsldppeerpathvectorlimit.value_namespace = name_space;
        mplsldppeerpathvectorlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerTransportAddrType")
    {
        mplsldppeertransportaddrtype = value;
        mplsldppeertransportaddrtype.value_namespace = name_space;
        mplsldppeertransportaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerTransportAddr")
    {
        mplsldppeertransportaddr = value;
        mplsldppeertransportaddr.value_namespace = name_space;
        mplsldppeertransportaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionStateLastChange")
    {
        mplsldpsessionstatelastchange = value;
        mplsldpsessionstatelastchange.value_namespace = name_space;
        mplsldpsessionstatelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionState")
    {
        mplsldpsessionstate = value;
        mplsldpsessionstate.value_namespace = name_space;
        mplsldpsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionRole")
    {
        mplsldpsessionrole = value;
        mplsldpsessionrole.value_namespace = name_space;
        mplsldpsessionrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionProtocolVersion")
    {
        mplsldpsessionprotocolversion = value;
        mplsldpsessionprotocolversion.value_namespace = name_space;
        mplsldpsessionprotocolversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionKeepAliveHoldTimeRem")
    {
        mplsldpsessionkeepaliveholdtimerem = value;
        mplsldpsessionkeepaliveholdtimerem.value_namespace = name_space;
        mplsldpsessionkeepaliveholdtimerem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionKeepAliveTime")
    {
        mplsldpsessionkeepalivetime = value;
        mplsldpsessionkeepalivetime.value_namespace = name_space;
        mplsldpsessionkeepalivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionMaxPduLength")
    {
        mplsldpsessionmaxpdulength = value;
        mplsldpsessionmaxpdulength.value_namespace = name_space;
        mplsldpsessionmaxpdulength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionDiscontinuityTime")
    {
        mplsldpsessiondiscontinuitytime = value;
        mplsldpsessiondiscontinuitytime.value_namespace = name_space;
        mplsldpsessiondiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionStatsUnknownMesTypeErrors")
    {
        mplsldpsessionstatsunknownmestypeerrors = value;
        mplsldpsessionstatsunknownmestypeerrors.value_namespace = name_space;
        mplsldpsessionstatsunknownmestypeerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionStatsUnknownTlvErrors")
    {
        mplsldpsessionstatsunknowntlverrors = value;
        mplsldpsessionstatsunknowntlverrors.value_namespace = name_space;
        mplsldpsessionstatsunknowntlverrors.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLabelDistMethod")
    {
        mplsldppeerlabeldistmethod.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerPathVectorLimit")
    {
        mplsldppeerpathvectorlimit.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerTransportAddrType")
    {
        mplsldppeertransportaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerTransportAddr")
    {
        mplsldppeertransportaddr.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionStateLastChange")
    {
        mplsldpsessionstatelastchange.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionState")
    {
        mplsldpsessionstate.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionRole")
    {
        mplsldpsessionrole.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionProtocolVersion")
    {
        mplsldpsessionprotocolversion.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionKeepAliveHoldTimeRem")
    {
        mplsldpsessionkeepaliveholdtimerem.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionKeepAliveTime")
    {
        mplsldpsessionkeepalivetime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionMaxPduLength")
    {
        mplsldpsessionmaxpdulength.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionDiscontinuityTime")
    {
        mplsldpsessiondiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionStatsUnknownMesTypeErrors")
    {
        mplsldpsessionstatsunknownmestypeerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionStatsUnknownTlvErrors")
    {
        mplsldpsessionstatsunknowntlverrors.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpPeerLabelDistMethod" || name == "mplsLdpPeerPathVectorLimit" || name == "mplsLdpPeerTransportAddrType" || name == "mplsLdpPeerTransportAddr" || name == "mplsLdpSessionStateLastChange" || name == "mplsLdpSessionState" || name == "mplsLdpSessionRole" || name == "mplsLdpSessionProtocolVersion" || name == "mplsLdpSessionKeepAliveHoldTimeRem" || name == "mplsLdpSessionKeepAliveTime" || name == "mplsLdpSessionMaxPduLength" || name == "mplsLdpSessionDiscontinuityTime" || name == "mplsLdpSessionStatsUnknownMesTypeErrors" || name == "mplsLdpSessionStatsUnknownTlvErrors")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyTable()
    :
    mplsldphelloadjacencyentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid", "mplsldphelloadjacencyindex"})
{

    yang_name = "mplsLdpHelloAdjacencyTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::~MplsLdpHelloAdjacencyTable()
{
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldphelloadjacencyentry.len(); index++)
    {
        if(mplsldphelloadjacencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldphelloadjacencyentry.len(); index++)
    {
        if(mplsldphelloadjacencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpHelloAdjacencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpHelloAdjacencyEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry>();
        c->parent = this;
        mplsldphelloadjacencyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsldphelloadjacencyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpHelloAdjacencyEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::MplsLdpHelloAdjacencyEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldphelloadjacencyindex{YType::uint32, "mplsLdpHelloAdjacencyIndex"},
    mplsldphelloadjacencyholdtimerem{YType::int32, "mplsLdpHelloAdjacencyHoldTimeRem"},
    mplsldphelloadjacencyholdtime{YType::uint32, "mplsLdpHelloAdjacencyHoldTime"},
    mplsldphelloadjacencytype{YType::enumeration, "mplsLdpHelloAdjacencyType"}
{

    yang_name = "mplsLdpHelloAdjacencyEntry"; yang_parent_name = "mplsLdpHelloAdjacencyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::~MplsLdpHelloAdjacencyEntry()
{
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldphelloadjacencyindex.is_set
	|| mplsldphelloadjacencyholdtimerem.is_set
	|| mplsldphelloadjacencyholdtime.is_set
	|| mplsldphelloadjacencytype.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyindex.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyholdtimerem.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyholdtime.yfilter)
	|| ydk::is_set(mplsldphelloadjacencytype.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpHelloAdjacencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpHelloAdjacencyEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    ADD_KEY_TOKEN(mplsldphelloadjacencyindex, "mplsLdpHelloAdjacencyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldphelloadjacencyindex.is_set || is_set(mplsldphelloadjacencyindex.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyindex.get_name_leafdata());
    if (mplsldphelloadjacencyholdtimerem.is_set || is_set(mplsldphelloadjacencyholdtimerem.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyholdtimerem.get_name_leafdata());
    if (mplsldphelloadjacencyholdtime.is_set || is_set(mplsldphelloadjacencyholdtime.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyholdtime.get_name_leafdata());
    if (mplsldphelloadjacencytype.is_set || is_set(mplsldphelloadjacencytype.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencytype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyIndex")
    {
        mplsldphelloadjacencyindex = value;
        mplsldphelloadjacencyindex.value_namespace = name_space;
        mplsldphelloadjacencyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTimeRem")
    {
        mplsldphelloadjacencyholdtimerem = value;
        mplsldphelloadjacencyholdtimerem.value_namespace = name_space;
        mplsldphelloadjacencyholdtimerem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTime")
    {
        mplsldphelloadjacencyholdtime = value;
        mplsldphelloadjacencyholdtime.value_namespace = name_space;
        mplsldphelloadjacencyholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyType")
    {
        mplsldphelloadjacencytype = value;
        mplsldphelloadjacencytype.value_namespace = name_space;
        mplsldphelloadjacencytype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyIndex")
    {
        mplsldphelloadjacencyindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTimeRem")
    {
        mplsldphelloadjacencyholdtimerem.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTime")
    {
        mplsldphelloadjacencyholdtime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyType")
    {
        mplsldphelloadjacencytype.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpHelloAdjacencyIndex" || name == "mplsLdpHelloAdjacencyHoldTimeRem" || name == "mplsLdpHelloAdjacencyHoldTime" || name == "mplsLdpHelloAdjacencyType")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspTable()
    :
    mplsinsegmentldplspentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid", "mplsinsegmentldplspindex"})
{

    yang_name = "mplsInSegmentLdpLspTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::~MplsInSegmentLdpLspTable()
{
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsinsegmentldplspentry.len(); index++)
    {
        if(mplsinsegmentldplspentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmentldplspentry.len(); index++)
    {
        if(mplsinsegmentldplspentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentLdpLspTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentLdpLspEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry>();
        c->parent = this;
        mplsinsegmentldplspentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsinsegmentldplspentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentLdpLspEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::MplsInSegmentLdpLspEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsinsegmentldplspindex{YType::str, "mplsInSegmentLdpLspIndex"},
    mplsinsegmentldplsplabeltype{YType::enumeration, "mplsInSegmentLdpLspLabelType"},
    mplsinsegmentldplsptype{YType::enumeration, "mplsInSegmentLdpLspType"}
{

    yang_name = "mplsInSegmentLdpLspEntry"; yang_parent_name = "mplsInSegmentLdpLspTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::~MplsInSegmentLdpLspEntry()
{
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsinsegmentldplspindex.is_set
	|| mplsinsegmentldplsplabeltype.is_set
	|| mplsinsegmentldplsptype.is_set;
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsinsegmentldplspindex.yfilter)
	|| ydk::is_set(mplsinsegmentldplsplabeltype.yfilter)
	|| ydk::is_set(mplsinsegmentldplsptype.yfilter);
}

std::string MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsInSegmentLdpLspTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentLdpLspEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    ADD_KEY_TOKEN(mplsinsegmentldplspindex, "mplsInSegmentLdpLspIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsinsegmentldplspindex.is_set || is_set(mplsinsegmentldplspindex.yfilter)) leaf_name_data.push_back(mplsinsegmentldplspindex.get_name_leafdata());
    if (mplsinsegmentldplsplabeltype.is_set || is_set(mplsinsegmentldplsplabeltype.yfilter)) leaf_name_data.push_back(mplsinsegmentldplsplabeltype.get_name_leafdata());
    if (mplsinsegmentldplsptype.is_set || is_set(mplsinsegmentldplsptype.yfilter)) leaf_name_data.push_back(mplsinsegmentldplsptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentLdpLspIndex")
    {
        mplsinsegmentldplspindex = value;
        mplsinsegmentldplspindex.value_namespace = name_space;
        mplsinsegmentldplspindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentLdpLspLabelType")
    {
        mplsinsegmentldplsplabeltype = value;
        mplsinsegmentldplsplabeltype.value_namespace = name_space;
        mplsinsegmentldplsplabeltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentLdpLspType")
    {
        mplsinsegmentldplsptype = value;
        mplsinsegmentldplsptype.value_namespace = name_space;
        mplsinsegmentldplsptype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentLdpLspIndex")
    {
        mplsinsegmentldplspindex.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentLdpLspLabelType")
    {
        mplsinsegmentldplsplabeltype.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentLdpLspType")
    {
        mplsinsegmentldplsptype.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsInSegmentLdpLspIndex" || name == "mplsInSegmentLdpLspLabelType" || name == "mplsInSegmentLdpLspType")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspTable()
    :
    mplsoutsegmentldplspentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid", "mplsoutsegmentldplspindex"})
{

    yang_name = "mplsOutSegmentLdpLspTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::~MplsOutSegmentLdpLspTable()
{
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsoutsegmentldplspentry.len(); index++)
    {
        if(mplsoutsegmentldplspentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::has_operation() const
{
    for (std::size_t index=0; index<mplsoutsegmentldplspentry.len(); index++)
    {
        if(mplsoutsegmentldplspentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentLdpLspTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsOutSegmentLdpLspEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry>();
        c->parent = this;
        mplsoutsegmentldplspentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsoutsegmentldplspentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentLdpLspEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::MplsOutSegmentLdpLspEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsoutsegmentldplspindex{YType::str, "mplsOutSegmentLdpLspIndex"},
    mplsoutsegmentldplsplabeltype{YType::enumeration, "mplsOutSegmentLdpLspLabelType"},
    mplsoutsegmentldplsptype{YType::enumeration, "mplsOutSegmentLdpLspType"}
{

    yang_name = "mplsOutSegmentLdpLspEntry"; yang_parent_name = "mplsOutSegmentLdpLspTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::~MplsOutSegmentLdpLspEntry()
{
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsoutsegmentldplspindex.is_set
	|| mplsoutsegmentldplsplabeltype.is_set
	|| mplsoutsegmentldplsptype.is_set;
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsoutsegmentldplspindex.yfilter)
	|| ydk::is_set(mplsoutsegmentldplsplabeltype.yfilter)
	|| ydk::is_set(mplsoutsegmentldplsptype.yfilter);
}

std::string MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsOutSegmentLdpLspTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentLdpLspEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    ADD_KEY_TOKEN(mplsoutsegmentldplspindex, "mplsOutSegmentLdpLspIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsoutsegmentldplspindex.is_set || is_set(mplsoutsegmentldplspindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplspindex.get_name_leafdata());
    if (mplsoutsegmentldplsplabeltype.is_set || is_set(mplsoutsegmentldplsplabeltype.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplsplabeltype.get_name_leafdata());
    if (mplsoutsegmentldplsptype.is_set || is_set(mplsoutsegmentldplsptype.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplsptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentLdpLspIndex")
    {
        mplsoutsegmentldplspindex = value;
        mplsoutsegmentldplspindex.value_namespace = name_space;
        mplsoutsegmentldplspindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentLdpLspLabelType")
    {
        mplsoutsegmentldplsplabeltype = value;
        mplsoutsegmentldplsplabeltype.value_namespace = name_space;
        mplsoutsegmentldplsplabeltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentLdpLspType")
    {
        mplsoutsegmentldplsptype = value;
        mplsoutsegmentldplsptype.value_namespace = name_space;
        mplsoutsegmentldplsptype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentLdpLspIndex")
    {
        mplsoutsegmentldplspindex.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentLdpLspLabelType")
    {
        mplsoutsegmentldplsplabeltype.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentLdpLspType")
    {
        mplsoutsegmentldplsptype.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsOutSegmentLdpLspIndex" || name == "mplsOutSegmentLdpLspLabelType" || name == "mplsOutSegmentLdpLspType")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsFecTable::MplsFecTable()
    :
    mplsfecentry(this, {"mplsfecindex"})
{

    yang_name = "mplsFecTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsFecTable::~MplsFecTable()
{
}

bool MPLSLDPSTDMIB::MplsFecTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsfecentry.len(); index++)
    {
        if(mplsfecentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsFecTable::has_operation() const
{
    for (std::size_t index=0; index<mplsfecentry.len(); index++)
    {
        if(mplsfecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsFecTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsFecTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsFecTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsFecTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsFecEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry>();
        c->parent = this;
        mplsfecentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsFecTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsfecentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsFecTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsFecTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsFecTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::MplsFecEntry()
    :
    mplsfecindex{YType::uint32, "mplsFecIndex"},
    mplsfectype{YType::enumeration, "mplsFecType"},
    mplsfecaddrprefixlength{YType::uint32, "mplsFecAddrPrefixLength"},
    mplsfecaddrtype{YType::enumeration, "mplsFecAddrType"},
    mplsfecaddr{YType::str, "mplsFecAddr"},
    mplsfecstoragetype{YType::enumeration, "mplsFecStorageType"},
    mplsfecrowstatus{YType::enumeration, "mplsFecRowStatus"}
{

    yang_name = "mplsFecEntry"; yang_parent_name = "mplsFecTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::~MplsFecEntry()
{
}

bool MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsfecindex.is_set
	|| mplsfectype.is_set
	|| mplsfecaddrprefixlength.is_set
	|| mplsfecaddrtype.is_set
	|| mplsfecaddr.is_set
	|| mplsfecstoragetype.is_set
	|| mplsfecrowstatus.is_set;
}

bool MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsfecindex.yfilter)
	|| ydk::is_set(mplsfectype.yfilter)
	|| ydk::is_set(mplsfecaddrprefixlength.yfilter)
	|| ydk::is_set(mplsfecaddrtype.yfilter)
	|| ydk::is_set(mplsfecaddr.yfilter)
	|| ydk::is_set(mplsfecstoragetype.yfilter)
	|| ydk::is_set(mplsfecrowstatus.yfilter);
}

std::string MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsFecTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecEntry";
    ADD_KEY_TOKEN(mplsfecindex, "mplsFecIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsfecindex.is_set || is_set(mplsfecindex.yfilter)) leaf_name_data.push_back(mplsfecindex.get_name_leafdata());
    if (mplsfectype.is_set || is_set(mplsfectype.yfilter)) leaf_name_data.push_back(mplsfectype.get_name_leafdata());
    if (mplsfecaddrprefixlength.is_set || is_set(mplsfecaddrprefixlength.yfilter)) leaf_name_data.push_back(mplsfecaddrprefixlength.get_name_leafdata());
    if (mplsfecaddrtype.is_set || is_set(mplsfecaddrtype.yfilter)) leaf_name_data.push_back(mplsfecaddrtype.get_name_leafdata());
    if (mplsfecaddr.is_set || is_set(mplsfecaddr.yfilter)) leaf_name_data.push_back(mplsfecaddr.get_name_leafdata());
    if (mplsfecstoragetype.is_set || is_set(mplsfecstoragetype.yfilter)) leaf_name_data.push_back(mplsfecstoragetype.get_name_leafdata());
    if (mplsfecrowstatus.is_set || is_set(mplsfecrowstatus.yfilter)) leaf_name_data.push_back(mplsfecrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsFecIndex")
    {
        mplsfecindex = value;
        mplsfecindex.value_namespace = name_space;
        mplsfecindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecType")
    {
        mplsfectype = value;
        mplsfectype.value_namespace = name_space;
        mplsfectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecAddrPrefixLength")
    {
        mplsfecaddrprefixlength = value;
        mplsfecaddrprefixlength.value_namespace = name_space;
        mplsfecaddrprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecAddrType")
    {
        mplsfecaddrtype = value;
        mplsfecaddrtype.value_namespace = name_space;
        mplsfecaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecAddr")
    {
        mplsfecaddr = value;
        mplsfecaddr.value_namespace = name_space;
        mplsfecaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecStorageType")
    {
        mplsfecstoragetype = value;
        mplsfecstoragetype.value_namespace = name_space;
        mplsfecstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecRowStatus")
    {
        mplsfecrowstatus = value;
        mplsfecrowstatus.value_namespace = name_space;
        mplsfecrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsFecIndex")
    {
        mplsfecindex.yfilter = yfilter;
    }
    if(value_path == "mplsFecType")
    {
        mplsfectype.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddrPrefixLength")
    {
        mplsfecaddrprefixlength.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddrType")
    {
        mplsfecaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddr")
    {
        mplsfecaddr.yfilter = yfilter;
    }
    if(value_path == "mplsFecStorageType")
    {
        mplsfecstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsFecRowStatus")
    {
        mplsfecrowstatus.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecIndex" || name == "mplsFecType" || name == "mplsFecAddrPrefixLength" || name == "mplsFecAddrType" || name == "mplsFecAddr" || name == "mplsFecStorageType" || name == "mplsFecRowStatus")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecTable()
    :
    mplsldplspfecentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid", "mplsldplspfecsegment", "mplsldplspfecsegmentindex", "mplsldplspfecindex"})
{

    yang_name = "mplsLdpLspFecTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpLspFecTable::~MplsLdpLspFecTable()
{
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldplspfecentry.len(); index++)
    {
        if(mplsldplspfecentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldplspfecentry.len(); index++)
    {
        if(mplsldplspfecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpLspFecTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpLspFecTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLspFecTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpLspFecTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpLspFecTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpLspFecEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry>();
        c->parent = this;
        mplsldplspfecentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpLspFecTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsldplspfecentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsLdpLspFecTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsLdpLspFecTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLspFecEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::MplsLdpLspFecEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldplspfecsegment{YType::enumeration, "mplsLdpLspFecSegment"},
    mplsldplspfecsegmentindex{YType::str, "mplsLdpLspFecSegmentIndex"},
    mplsldplspfecindex{YType::uint32, "mplsLdpLspFecIndex"},
    mplsldplspfecstoragetype{YType::enumeration, "mplsLdpLspFecStorageType"},
    mplsldplspfecrowstatus{YType::enumeration, "mplsLdpLspFecRowStatus"}
{

    yang_name = "mplsLdpLspFecEntry"; yang_parent_name = "mplsLdpLspFecTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::~MplsLdpLspFecEntry()
{
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldplspfecsegment.is_set
	|| mplsldplspfecsegmentindex.is_set
	|| mplsldplspfecindex.is_set
	|| mplsldplspfecstoragetype.is_set
	|| mplsldplspfecrowstatus.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldplspfecsegment.yfilter)
	|| ydk::is_set(mplsldplspfecsegmentindex.yfilter)
	|| ydk::is_set(mplsldplspfecindex.yfilter)
	|| ydk::is_set(mplsldplspfecstoragetype.yfilter)
	|| ydk::is_set(mplsldplspfecrowstatus.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpLspFecTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLspFecEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    ADD_KEY_TOKEN(mplsldplspfecsegment, "mplsLdpLspFecSegment");
    ADD_KEY_TOKEN(mplsldplspfecsegmentindex, "mplsLdpLspFecSegmentIndex");
    ADD_KEY_TOKEN(mplsldplspfecindex, "mplsLdpLspFecIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldplspfecsegment.is_set || is_set(mplsldplspfecsegment.yfilter)) leaf_name_data.push_back(mplsldplspfecsegment.get_name_leafdata());
    if (mplsldplspfecsegmentindex.is_set || is_set(mplsldplspfecsegmentindex.yfilter)) leaf_name_data.push_back(mplsldplspfecsegmentindex.get_name_leafdata());
    if (mplsldplspfecindex.is_set || is_set(mplsldplspfecindex.yfilter)) leaf_name_data.push_back(mplsldplspfecindex.get_name_leafdata());
    if (mplsldplspfecstoragetype.is_set || is_set(mplsldplspfecstoragetype.yfilter)) leaf_name_data.push_back(mplsldplspfecstoragetype.get_name_leafdata());
    if (mplsldplspfecrowstatus.is_set || is_set(mplsldplspfecrowstatus.yfilter)) leaf_name_data.push_back(mplsldplspfecrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecSegment")
    {
        mplsldplspfecsegment = value;
        mplsldplspfecsegment.value_namespace = name_space;
        mplsldplspfecsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecSegmentIndex")
    {
        mplsldplspfecsegmentindex = value;
        mplsldplspfecsegmentindex.value_namespace = name_space;
        mplsldplspfecsegmentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecIndex")
    {
        mplsldplspfecindex = value;
        mplsldplspfecindex.value_namespace = name_space;
        mplsldplspfecindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecStorageType")
    {
        mplsldplspfecstoragetype = value;
        mplsldplspfecstoragetype.value_namespace = name_space;
        mplsldplspfecstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecRowStatus")
    {
        mplsldplspfecrowstatus = value;
        mplsldplspfecrowstatus.value_namespace = name_space;
        mplsldplspfecrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecSegment")
    {
        mplsldplspfecsegment.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecSegmentIndex")
    {
        mplsldplspfecsegmentindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecIndex")
    {
        mplsldplspfecindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecStorageType")
    {
        mplsldplspfecstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecRowStatus")
    {
        mplsldplspfecrowstatus.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpLspFecSegment" || name == "mplsLdpLspFecSegmentIndex" || name == "mplsLdpLspFecIndex" || name == "mplsLdpLspFecStorageType" || name == "mplsLdpLspFecRowStatus")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrTable()
    :
    mplsldpsessionpeeraddrentry(this, {"mplsldpentityldpid", "mplsldpentityindex", "mplsldppeerldpid", "mplsldpsessionpeeraddrindex"})
{

    yang_name = "mplsLdpSessionPeerAddrTable"; yang_parent_name = "MPLS-LDP-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::~MplsLdpSessionPeerAddrTable()
{
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsldpsessionpeeraddrentry.len(); index++)
    {
        if(mplsldpsessionpeeraddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpsessionpeeraddrentry.len(); index++)
    {
        if(mplsldpsessionpeeraddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionPeerAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpSessionPeerAddrEntry")
    {
        auto c = std::make_shared<MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry>();
        c->parent = this;
        mplsldpsessionpeeraddrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsldpsessionpeeraddrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpSessionPeerAddrEntry")
        return true;
    return false;
}

MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::MplsLdpSessionPeerAddrEntry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldpsessionpeeraddrindex{YType::uint32, "mplsLdpSessionPeerAddrIndex"},
    mplsldpsessionpeernexthopaddrtype{YType::enumeration, "mplsLdpSessionPeerNextHopAddrType"},
    mplsldpsessionpeernexthopaddr{YType::str, "mplsLdpSessionPeerNextHopAddr"}
{

    yang_name = "mplsLdpSessionPeerAddrEntry"; yang_parent_name = "mplsLdpSessionPeerAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::~MplsLdpSessionPeerAddrEntry()
{
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldpsessionpeeraddrindex.is_set
	|| mplsldpsessionpeernexthopaddrtype.is_set
	|| mplsldpsessionpeernexthopaddr.is_set;
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldpsessionpeeraddrindex.yfilter)
	|| ydk::is_set(mplsldpsessionpeernexthopaddrtype.yfilter)
	|| ydk::is_set(mplsldpsessionpeernexthopaddr.yfilter);
}

std::string MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpSessionPeerAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionPeerAddrEntry";
    ADD_KEY_TOKEN(mplsldpentityldpid, "mplsLdpEntityLdpId");
    ADD_KEY_TOKEN(mplsldpentityindex, "mplsLdpEntityIndex");
    ADD_KEY_TOKEN(mplsldppeerldpid, "mplsLdpPeerLdpId");
    ADD_KEY_TOKEN(mplsldpsessionpeeraddrindex, "mplsLdpSessionPeerAddrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldpsessionpeeraddrindex.is_set || is_set(mplsldpsessionpeeraddrindex.yfilter)) leaf_name_data.push_back(mplsldpsessionpeeraddrindex.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddrtype.is_set || is_set(mplsldpsessionpeernexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddrtype.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddr.is_set || is_set(mplsldpsessionpeernexthopaddr.yfilter)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
        mplsldppeerldpid.value_namespace = name_space;
        mplsldppeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionPeerAddrIndex")
    {
        mplsldpsessionpeeraddrindex = value;
        mplsldpsessionpeeraddrindex.value_namespace = name_space;
        mplsldpsessionpeeraddrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddrType")
    {
        mplsldpsessionpeernexthopaddrtype = value;
        mplsldpsessionpeernexthopaddrtype.value_namespace = name_space;
        mplsldpsessionpeernexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddr")
    {
        mplsldpsessionpeernexthopaddr = value;
        mplsldpsessionpeernexthopaddr.value_namespace = name_space;
        mplsldpsessionpeernexthopaddr.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionPeerAddrIndex")
    {
        mplsldpsessionpeeraddrindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddrType")
    {
        mplsldpsessionpeernexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddr")
    {
        mplsldpsessionpeernexthopaddr.yfilter = yfilter;
    }
}

bool MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpSessionPeerAddrIndex" || name == "mplsLdpSessionPeerNextHopAddrType" || name == "mplsLdpSessionPeerNextHopAddr")
        return true;
    return false;
}

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable::none {1, "none"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable::other {2, "other"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable::hopCount {3, "hopCount"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable::pathVector {4, "pathVector"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable::hopCountAndPathVector {5, "hopCountAndPathVector"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityAdminStatus::enable {1, "enable"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityAdminStatus::disable {2, "disable"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityOperStatus::unknown {1, "unknown"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityOperStatus::enabled {2, "enabled"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityOperStatus::disabled {3, "disabled"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityTransportAddrKind::interface {1, "interface"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityTransportAddrKind::loopback {2, "loopback"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState::nonexistent {1, "nonexistent"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState::initialized {2, "initialized"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState::openrec {3, "openrec"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState::opensent {4, "opensent"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState::operational {5, "operational"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionRole::unknown {1, "unknown"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionRole::active {2, "active"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionRole::passive {3, "passive"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::MplsLdpHelloAdjacencyType::link {1, "link"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::MplsLdpHelloAdjacencyType::targeted {2, "targeted"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::MplsFecType::prefix {1, "prefix"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::MplsFecType::hostAddress {2, "hostAddress"};

const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::MplsLdpLspFecSegment::inSegment {1, "inSegment"};
const Enum::YLeaf MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::MplsLdpLspFecSegment::outSegment {2, "outSegment"};


}
}

