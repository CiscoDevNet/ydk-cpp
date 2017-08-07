
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LDP_STD_MIB {

MplsLdpStdMib::MplsLdpStdMib()
    :
    mplsfecobjects(std::make_shared<MplsLdpStdMib::Mplsfecobjects>())
	,mplsfectable(std::make_shared<MplsLdpStdMib::Mplsfectable>())
	,mplsinsegmentldplsptable(std::make_shared<MplsLdpStdMib::Mplsinsegmentldplsptable>())
	,mplsldpentityobjects(std::make_shared<MplsLdpStdMib::Mplsldpentityobjects>())
	,mplsldpentitytable(std::make_shared<MplsLdpStdMib::Mplsldpentitytable>())
	,mplsldphelloadjacencytable(std::make_shared<MplsLdpStdMib::Mplsldphelloadjacencytable>())
	,mplsldplspfectable(std::make_shared<MplsLdpStdMib::Mplsldplspfectable>())
	,mplsldplsrobjects(std::make_shared<MplsLdpStdMib::Mplsldplsrobjects>())
	,mplsldppeertable(std::make_shared<MplsLdpStdMib::Mplsldppeertable>())
	,mplsldpsessionobjects(std::make_shared<MplsLdpStdMib::Mplsldpsessionobjects>())
	,mplsldpsessionpeeraddrtable(std::make_shared<MplsLdpStdMib::Mplsldpsessionpeeraddrtable>())
	,mplsoutsegmentldplsptable(std::make_shared<MplsLdpStdMib::Mplsoutsegmentldplsptable>())
{
    mplsfecobjects->parent = this;

    mplsfectable->parent = this;

    mplsinsegmentldplsptable->parent = this;

    mplsldpentityobjects->parent = this;

    mplsldpentitytable->parent = this;

    mplsldphelloadjacencytable->parent = this;

    mplsldplspfectable->parent = this;

    mplsldplsrobjects->parent = this;

    mplsldppeertable->parent = this;

    mplsldpsessionobjects->parent = this;

    mplsldpsessionpeeraddrtable->parent = this;

    mplsoutsegmentldplsptable->parent = this;

    yang_name = "MPLS-LDP-STD-MIB"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::~MplsLdpStdMib()
{
}

bool MplsLdpStdMib::has_data() const
{
    return (mplsfecobjects !=  nullptr && mplsfecobjects->has_data())
	|| (mplsfectable !=  nullptr && mplsfectable->has_data())
	|| (mplsinsegmentldplsptable !=  nullptr && mplsinsegmentldplsptable->has_data())
	|| (mplsldpentityobjects !=  nullptr && mplsldpentityobjects->has_data())
	|| (mplsldpentitytable !=  nullptr && mplsldpentitytable->has_data())
	|| (mplsldphelloadjacencytable !=  nullptr && mplsldphelloadjacencytable->has_data())
	|| (mplsldplspfectable !=  nullptr && mplsldplspfectable->has_data())
	|| (mplsldplsrobjects !=  nullptr && mplsldplsrobjects->has_data())
	|| (mplsldppeertable !=  nullptr && mplsldppeertable->has_data())
	|| (mplsldpsessionobjects !=  nullptr && mplsldpsessionobjects->has_data())
	|| (mplsldpsessionpeeraddrtable !=  nullptr && mplsldpsessionpeeraddrtable->has_data())
	|| (mplsoutsegmentldplsptable !=  nullptr && mplsoutsegmentldplsptable->has_data());
}

bool MplsLdpStdMib::has_operation() const
{
    return is_set(yfilter)
	|| (mplsfecobjects !=  nullptr && mplsfecobjects->has_operation())
	|| (mplsfectable !=  nullptr && mplsfectable->has_operation())
	|| (mplsinsegmentldplsptable !=  nullptr && mplsinsegmentldplsptable->has_operation())
	|| (mplsldpentityobjects !=  nullptr && mplsldpentityobjects->has_operation())
	|| (mplsldpentitytable !=  nullptr && mplsldpentitytable->has_operation())
	|| (mplsldphelloadjacencytable !=  nullptr && mplsldphelloadjacencytable->has_operation())
	|| (mplsldplspfectable !=  nullptr && mplsldplspfectable->has_operation())
	|| (mplsldplsrobjects !=  nullptr && mplsldplsrobjects->has_operation())
	|| (mplsldppeertable !=  nullptr && mplsldppeertable->has_operation())
	|| (mplsldpsessionobjects !=  nullptr && mplsldpsessionobjects->has_operation())
	|| (mplsldpsessionpeeraddrtable !=  nullptr && mplsldpsessionpeeraddrtable->has_operation())
	|| (mplsoutsegmentldplsptable !=  nullptr && mplsoutsegmentldplsptable->has_operation());
}

std::string MplsLdpStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLdpStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsFecObjects")
    {
        if(mplsfecobjects == nullptr)
        {
            mplsfecobjects = std::make_shared<MplsLdpStdMib::Mplsfecobjects>();
        }
        return mplsfecobjects;
    }

    if(child_yang_name == "mplsFecTable")
    {
        if(mplsfectable == nullptr)
        {
            mplsfectable = std::make_shared<MplsLdpStdMib::Mplsfectable>();
        }
        return mplsfectable;
    }

    if(child_yang_name == "mplsInSegmentLdpLspTable")
    {
        if(mplsinsegmentldplsptable == nullptr)
        {
            mplsinsegmentldplsptable = std::make_shared<MplsLdpStdMib::Mplsinsegmentldplsptable>();
        }
        return mplsinsegmentldplsptable;
    }

    if(child_yang_name == "mplsLdpEntityObjects")
    {
        if(mplsldpentityobjects == nullptr)
        {
            mplsldpentityobjects = std::make_shared<MplsLdpStdMib::Mplsldpentityobjects>();
        }
        return mplsldpentityobjects;
    }

    if(child_yang_name == "mplsLdpEntityTable")
    {
        if(mplsldpentitytable == nullptr)
        {
            mplsldpentitytable = std::make_shared<MplsLdpStdMib::Mplsldpentitytable>();
        }
        return mplsldpentitytable;
    }

    if(child_yang_name == "mplsLdpHelloAdjacencyTable")
    {
        if(mplsldphelloadjacencytable == nullptr)
        {
            mplsldphelloadjacencytable = std::make_shared<MplsLdpStdMib::Mplsldphelloadjacencytable>();
        }
        return mplsldphelloadjacencytable;
    }

    if(child_yang_name == "mplsLdpLspFecTable")
    {
        if(mplsldplspfectable == nullptr)
        {
            mplsldplspfectable = std::make_shared<MplsLdpStdMib::Mplsldplspfectable>();
        }
        return mplsldplspfectable;
    }

    if(child_yang_name == "mplsLdpLsrObjects")
    {
        if(mplsldplsrobjects == nullptr)
        {
            mplsldplsrobjects = std::make_shared<MplsLdpStdMib::Mplsldplsrobjects>();
        }
        return mplsldplsrobjects;
    }

    if(child_yang_name == "mplsLdpPeerTable")
    {
        if(mplsldppeertable == nullptr)
        {
            mplsldppeertable = std::make_shared<MplsLdpStdMib::Mplsldppeertable>();
        }
        return mplsldppeertable;
    }

    if(child_yang_name == "mplsLdpSessionObjects")
    {
        if(mplsldpsessionobjects == nullptr)
        {
            mplsldpsessionobjects = std::make_shared<MplsLdpStdMib::Mplsldpsessionobjects>();
        }
        return mplsldpsessionobjects;
    }

    if(child_yang_name == "mplsLdpSessionPeerAddrTable")
    {
        if(mplsldpsessionpeeraddrtable == nullptr)
        {
            mplsldpsessionpeeraddrtable = std::make_shared<MplsLdpStdMib::Mplsldpsessionpeeraddrtable>();
        }
        return mplsldpsessionpeeraddrtable;
    }

    if(child_yang_name == "mplsOutSegmentLdpLspTable")
    {
        if(mplsoutsegmentldplsptable == nullptr)
        {
            mplsoutsegmentldplsptable = std::make_shared<MplsLdpStdMib::Mplsoutsegmentldplsptable>();
        }
        return mplsoutsegmentldplsptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsfecobjects != nullptr)
    {
        children["mplsFecObjects"] = mplsfecobjects;
    }

    if(mplsfectable != nullptr)
    {
        children["mplsFecTable"] = mplsfectable;
    }

    if(mplsinsegmentldplsptable != nullptr)
    {
        children["mplsInSegmentLdpLspTable"] = mplsinsegmentldplsptable;
    }

    if(mplsldpentityobjects != nullptr)
    {
        children["mplsLdpEntityObjects"] = mplsldpentityobjects;
    }

    if(mplsldpentitytable != nullptr)
    {
        children["mplsLdpEntityTable"] = mplsldpentitytable;
    }

    if(mplsldphelloadjacencytable != nullptr)
    {
        children["mplsLdpHelloAdjacencyTable"] = mplsldphelloadjacencytable;
    }

    if(mplsldplspfectable != nullptr)
    {
        children["mplsLdpLspFecTable"] = mplsldplspfectable;
    }

    if(mplsldplsrobjects != nullptr)
    {
        children["mplsLdpLsrObjects"] = mplsldplsrobjects;
    }

    if(mplsldppeertable != nullptr)
    {
        children["mplsLdpPeerTable"] = mplsldppeertable;
    }

    if(mplsldpsessionobjects != nullptr)
    {
        children["mplsLdpSessionObjects"] = mplsldpsessionobjects;
    }

    if(mplsldpsessionpeeraddrtable != nullptr)
    {
        children["mplsLdpSessionPeerAddrTable"] = mplsldpsessionpeeraddrtable;
    }

    if(mplsoutsegmentldplsptable != nullptr)
    {
        children["mplsOutSegmentLdpLspTable"] = mplsoutsegmentldplsptable;
    }

    return children;
}

void MplsLdpStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLdpStdMib::clone_ptr() const
{
    return std::make_shared<MplsLdpStdMib>();
}

std::string MplsLdpStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsLdpStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsLdpStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLdpStdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsLdpStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecObjects" || name == "mplsFecTable" || name == "mplsInSegmentLdpLspTable" || name == "mplsLdpEntityObjects" || name == "mplsLdpEntityTable" || name == "mplsLdpHelloAdjacencyTable" || name == "mplsLdpLspFecTable" || name == "mplsLdpLsrObjects" || name == "mplsLdpPeerTable" || name == "mplsLdpSessionObjects" || name == "mplsLdpSessionPeerAddrTable" || name == "mplsOutSegmentLdpLspTable")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrobjects()
    :
    mplsldplsrid{YType::str, "mplsLdpLsrId"},
    mplsldplsrloopdetectioncapable{YType::enumeration, "mplsLdpLsrLoopDetectionCapable"}
{
    yang_name = "mplsLdpLsrObjects"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldplsrobjects::~Mplsldplsrobjects()
{
}

bool MplsLdpStdMib::Mplsldplsrobjects::has_data() const
{
    return mplsldplsrid.is_set
	|| mplsldplsrloopdetectioncapable.is_set;
}

bool MplsLdpStdMib::Mplsldplsrobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldplsrid.yfilter)
	|| ydk::is_set(mplsldplsrloopdetectioncapable.yfilter);
}

std::string MplsLdpStdMib::Mplsldplsrobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLsrObjects";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldplsrobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldplsrid.is_set || is_set(mplsldplsrid.yfilter)) leaf_name_data.push_back(mplsldplsrid.get_name_leafdata());
    if (mplsldplsrloopdetectioncapable.is_set || is_set(mplsldplsrloopdetectioncapable.yfilter)) leaf_name_data.push_back(mplsldplsrloopdetectioncapable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldplsrobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldplsrobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldplsrobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLdpStdMib::Mplsldplsrobjects::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLdpStdMib::Mplsldplsrobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLsrId" || name == "mplsLdpLsrLoopDetectionCapable")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpentityobjects::Mplsldpentityobjects()
    :
    mplsldpentityindexnext{YType::uint32, "mplsLdpEntityIndexNext"},
    mplsldpentitylastchange{YType::uint32, "mplsLdpEntityLastChange"}
{
    yang_name = "mplsLdpEntityObjects"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldpentityobjects::~Mplsldpentityobjects()
{
}

bool MplsLdpStdMib::Mplsldpentityobjects::has_data() const
{
    return mplsldpentityindexnext.is_set
	|| mplsldpentitylastchange.is_set;
}

bool MplsLdpStdMib::Mplsldpentityobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityindexnext.yfilter)
	|| ydk::is_set(mplsldpentitylastchange.yfilter);
}

std::string MplsLdpStdMib::Mplsldpentityobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityObjects";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpentityobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityindexnext.is_set || is_set(mplsldpentityindexnext.yfilter)) leaf_name_data.push_back(mplsldpentityindexnext.get_name_leafdata());
    if (mplsldpentitylastchange.is_set || is_set(mplsldpentitylastchange.yfilter)) leaf_name_data.push_back(mplsldpentitylastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpentityobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpentityobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldpentityobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpEntityIndexNext")
    {
        mplsldpentityindexnext = value;
        mplsldpentityindexnext.value_namespace = name_space;
        mplsldpentityindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityLastChange")
    {
        mplsldpentitylastchange = value;
        mplsldpentitylastchange.value_namespace = name_space;
        mplsldpentitylastchange.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldpentityobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityIndexNext")
    {
        mplsldpentityindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLastChange")
    {
        mplsldpentitylastchange.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldpentityobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityIndexNext" || name == "mplsLdpEntityLastChange")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpsessionobjects::Mplsldpsessionobjects()
    :
    mplsldplspfeclastchange{YType::uint32, "mplsLdpLspFecLastChange"},
    mplsldppeerlastchange{YType::uint32, "mplsLdpPeerLastChange"}
{
    yang_name = "mplsLdpSessionObjects"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldpsessionobjects::~Mplsldpsessionobjects()
{
}

bool MplsLdpStdMib::Mplsldpsessionobjects::has_data() const
{
    return mplsldplspfeclastchange.is_set
	|| mplsldppeerlastchange.is_set;
}

bool MplsLdpStdMib::Mplsldpsessionobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldplspfeclastchange.yfilter)
	|| ydk::is_set(mplsldppeerlastchange.yfilter);
}

std::string MplsLdpStdMib::Mplsldpsessionobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionObjects";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpsessionobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldplspfeclastchange.is_set || is_set(mplsldplspfeclastchange.yfilter)) leaf_name_data.push_back(mplsldplspfeclastchange.get_name_leafdata());
    if (mplsldppeerlastchange.is_set || is_set(mplsldppeerlastchange.yfilter)) leaf_name_data.push_back(mplsldppeerlastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpsessionobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpsessionobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldpsessionobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLdpLspFecLastChange")
    {
        mplsldplspfeclastchange = value;
        mplsldplspfeclastchange.value_namespace = name_space;
        mplsldplspfeclastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerLastChange")
    {
        mplsldppeerlastchange = value;
        mplsldppeerlastchange.value_namespace = name_space;
        mplsldppeerlastchange.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldpsessionobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpLspFecLastChange")
    {
        mplsldplspfeclastchange.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerLastChange")
    {
        mplsldppeerlastchange.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldpsessionobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLspFecLastChange" || name == "mplsLdpPeerLastChange")
        return true;
    return false;
}

MplsLdpStdMib::Mplsfecobjects::Mplsfecobjects()
    :
    mplsfecindexnext{YType::uint32, "mplsFecIndexNext"},
    mplsfeclastchange{YType::uint32, "mplsFecLastChange"}
{
    yang_name = "mplsFecObjects"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsfecobjects::~Mplsfecobjects()
{
}

bool MplsLdpStdMib::Mplsfecobjects::has_data() const
{
    return mplsfecindexnext.is_set
	|| mplsfeclastchange.is_set;
}

bool MplsLdpStdMib::Mplsfecobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsfecindexnext.yfilter)
	|| ydk::is_set(mplsfeclastchange.yfilter);
}

std::string MplsLdpStdMib::Mplsfecobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecObjects";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsfecobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsfecindexnext.is_set || is_set(mplsfecindexnext.yfilter)) leaf_name_data.push_back(mplsfecindexnext.get_name_leafdata());
    if (mplsfeclastchange.is_set || is_set(mplsfeclastchange.yfilter)) leaf_name_data.push_back(mplsfeclastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsfecobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsfecobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsfecobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsFecIndexNext")
    {
        mplsfecindexnext = value;
        mplsfecindexnext.value_namespace = name_space;
        mplsfecindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecLastChange")
    {
        mplsfeclastchange = value;
        mplsfeclastchange.value_namespace = name_space;
        mplsfeclastchange.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsfecobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsFecIndexNext")
    {
        mplsfecindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsFecLastChange")
    {
        mplsfeclastchange.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsfecobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecIndexNext" || name == "mplsFecLastChange")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpentitytable::Mplsldpentitytable()
{
    yang_name = "mplsLdpEntityTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldpentitytable::~Mplsldpentitytable()
{
}

bool MplsLdpStdMib::Mplsldpentitytable::has_data() const
{
    for (std::size_t index=0; index<mplsldpentityentry.size(); index++)
    {
        if(mplsldpentityentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsldpentitytable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpentityentry.size(); index++)
    {
        if(mplsldpentityentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsldpentitytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpentitytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpentitytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityEntry")
    {
        for(auto const & c : mplsldpentityentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry>();
        c->parent = this;
        mplsldpentityentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpentitytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldpentityentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsldpentitytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsldpentitytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsldpentitytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::uint32, "mplsLdpEntityIndex"},
    mplsldpentityadminstatus{YType::enumeration, "mplsLdpEntityAdminStatus"},
    mplsldpentitydiscontinuitytime{YType::uint32, "mplsLdpEntityDiscontinuityTime"},
    mplsldpentityhelloholdtimer{YType::uint32, "mplsLdpEntityHelloHoldTimer"},
    mplsldpentityhopcountlimit{YType::int32, "mplsLdpEntityHopCountLimit"},
    mplsldpentityinitsessionthreshold{YType::int32, "mplsLdpEntityInitSessionThreshold"},
    mplsldpentitykeepaliveholdtimer{YType::uint32, "mplsLdpEntityKeepAliveHoldTimer"},
    mplsldpentitylabeldistmethod{YType::enumeration, "mplsLdpEntityLabelDistMethod"},
    mplsldpentitylabelretentionmode{YType::enumeration, "mplsLdpEntityLabelRetentionMode"},
    mplsldpentitylabeltype{YType::enumeration, "mplsLdpEntityLabelType"},
    mplsldpentitymaxpdulength{YType::uint32, "mplsLdpEntityMaxPduLength"},
    mplsldpentityoperstatus{YType::enumeration, "mplsLdpEntityOperStatus"},
    mplsldpentitypathvectorlimit{YType::int32, "mplsLdpEntityPathVectorLimit"},
    mplsldpentityprotocolversion{YType::uint32, "mplsLdpEntityProtocolVersion"},
    mplsldpentityrowstatus{YType::enumeration, "mplsLdpEntityRowStatus"},
    mplsldpentitystatsbadldpidentifiererrors{YType::uint32, "mplsLdpEntityStatsBadLdpIdentifierErrors"},
    mplsldpentitystatsbadmessagelengtherrors{YType::uint32, "mplsLdpEntityStatsBadMessageLengthErrors"},
    mplsldpentitystatsbadpdulengtherrors{YType::uint32, "mplsLdpEntityStatsBadPduLengthErrors"},
    mplsldpentitystatsbadtlvlengtherrors{YType::uint32, "mplsLdpEntityStatsBadTlvLengthErrors"},
    mplsldpentitystatskeepalivetimerexperrors{YType::uint32, "mplsLdpEntityStatsKeepAliveTimerExpErrors"},
    mplsldpentitystatsmalformedtlvvalueerrors{YType::uint32, "mplsLdpEntityStatsMalformedTlvValueErrors"},
    mplsldpentitystatssessionattempts{YType::uint32, "mplsLdpEntityStatsSessionAttempts"},
    mplsldpentitystatssessionrejectedaderrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedAdErrors"},
    mplsldpentitystatssessionrejectedlrerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedLRErrors"},
    mplsldpentitystatssessionrejectedmaxpduerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedMaxPduErrors"},
    mplsldpentitystatssessionrejectednohelloerrors{YType::uint32, "mplsLdpEntityStatsSessionRejectedNoHelloErrors"},
    mplsldpentitystatsshutdownreceivednotifications{YType::uint32, "mplsLdpEntityStatsShutdownReceivedNotifications"},
    mplsldpentitystatsshutdownsentnotifications{YType::uint32, "mplsLdpEntityStatsShutdownSentNotifications"},
    mplsldpentitystoragetype{YType::enumeration, "mplsLdpEntityStorageType"},
    mplsldpentitytargetpeer{YType::boolean, "mplsLdpEntityTargetPeer"},
    mplsldpentitytargetpeeraddr{YType::str, "mplsLdpEntityTargetPeerAddr"},
    mplsldpentitytargetpeeraddrtype{YType::enumeration, "mplsLdpEntityTargetPeerAddrType"},
    mplsldpentitytcpport{YType::uint16, "mplsLdpEntityTcpPort"},
    mplsldpentitytransportaddrkind{YType::enumeration, "mplsLdpEntityTransportAddrKind"},
    mplsldpentityudpdscport{YType::uint16, "mplsLdpEntityUdpDscPort"}
{
    yang_name = "mplsLdpEntityEntry"; yang_parent_name = "mplsLdpEntityTable";
}

MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::~Mplsldpentityentry()
{
}

bool MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldpentityadminstatus.is_set
	|| mplsldpentitydiscontinuitytime.is_set
	|| mplsldpentityhelloholdtimer.is_set
	|| mplsldpentityhopcountlimit.is_set
	|| mplsldpentityinitsessionthreshold.is_set
	|| mplsldpentitykeepaliveholdtimer.is_set
	|| mplsldpentitylabeldistmethod.is_set
	|| mplsldpentitylabelretentionmode.is_set
	|| mplsldpentitylabeltype.is_set
	|| mplsldpentitymaxpdulength.is_set
	|| mplsldpentityoperstatus.is_set
	|| mplsldpentitypathvectorlimit.is_set
	|| mplsldpentityprotocolversion.is_set
	|| mplsldpentityrowstatus.is_set
	|| mplsldpentitystatsbadldpidentifiererrors.is_set
	|| mplsldpentitystatsbadmessagelengtherrors.is_set
	|| mplsldpentitystatsbadpdulengtherrors.is_set
	|| mplsldpentitystatsbadtlvlengtherrors.is_set
	|| mplsldpentitystatskeepalivetimerexperrors.is_set
	|| mplsldpentitystatsmalformedtlvvalueerrors.is_set
	|| mplsldpentitystatssessionattempts.is_set
	|| mplsldpentitystatssessionrejectedaderrors.is_set
	|| mplsldpentitystatssessionrejectedlrerrors.is_set
	|| mplsldpentitystatssessionrejectedmaxpduerrors.is_set
	|| mplsldpentitystatssessionrejectednohelloerrors.is_set
	|| mplsldpentitystatsshutdownreceivednotifications.is_set
	|| mplsldpentitystatsshutdownsentnotifications.is_set
	|| mplsldpentitystoragetype.is_set
	|| mplsldpentitytargetpeer.is_set
	|| mplsldpentitytargetpeeraddr.is_set
	|| mplsldpentitytargetpeeraddrtype.is_set
	|| mplsldpentitytcpport.is_set
	|| mplsldpentitytransportaddrkind.is_set
	|| mplsldpentityudpdscport.is_set;
}

bool MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldpentityadminstatus.yfilter)
	|| ydk::is_set(mplsldpentitydiscontinuitytime.yfilter)
	|| ydk::is_set(mplsldpentityhelloholdtimer.yfilter)
	|| ydk::is_set(mplsldpentityhopcountlimit.yfilter)
	|| ydk::is_set(mplsldpentityinitsessionthreshold.yfilter)
	|| ydk::is_set(mplsldpentitykeepaliveholdtimer.yfilter)
	|| ydk::is_set(mplsldpentitylabeldistmethod.yfilter)
	|| ydk::is_set(mplsldpentitylabelretentionmode.yfilter)
	|| ydk::is_set(mplsldpentitylabeltype.yfilter)
	|| ydk::is_set(mplsldpentitymaxpdulength.yfilter)
	|| ydk::is_set(mplsldpentityoperstatus.yfilter)
	|| ydk::is_set(mplsldpentitypathvectorlimit.yfilter)
	|| ydk::is_set(mplsldpentityprotocolversion.yfilter)
	|| ydk::is_set(mplsldpentityrowstatus.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadldpidentifiererrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadmessagelengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadpdulengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsbadtlvlengtherrors.yfilter)
	|| ydk::is_set(mplsldpentitystatskeepalivetimerexperrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsmalformedtlvvalueerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionattempts.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedaderrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedlrerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectedmaxpduerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatssessionrejectednohelloerrors.yfilter)
	|| ydk::is_set(mplsldpentitystatsshutdownreceivednotifications.yfilter)
	|| ydk::is_set(mplsldpentitystatsshutdownsentnotifications.yfilter)
	|| ydk::is_set(mplsldpentitystoragetype.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeer.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeeraddr.yfilter)
	|| ydk::is_set(mplsldpentitytargetpeeraddrtype.yfilter)
	|| ydk::is_set(mplsldpentitytcpport.yfilter)
	|| ydk::is_set(mplsldpentitytransportaddrkind.yfilter)
	|| ydk::is_set(mplsldpentityudpdscport.yfilter);
}

std::string MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpEntityTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentityadminstatus.is_set || is_set(mplsldpentityadminstatus.yfilter)) leaf_name_data.push_back(mplsldpentityadminstatus.get_name_leafdata());
    if (mplsldpentitydiscontinuitytime.is_set || is_set(mplsldpentitydiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsldpentitydiscontinuitytime.get_name_leafdata());
    if (mplsldpentityhelloholdtimer.is_set || is_set(mplsldpentityhelloholdtimer.yfilter)) leaf_name_data.push_back(mplsldpentityhelloholdtimer.get_name_leafdata());
    if (mplsldpentityhopcountlimit.is_set || is_set(mplsldpentityhopcountlimit.yfilter)) leaf_name_data.push_back(mplsldpentityhopcountlimit.get_name_leafdata());
    if (mplsldpentityinitsessionthreshold.is_set || is_set(mplsldpentityinitsessionthreshold.yfilter)) leaf_name_data.push_back(mplsldpentityinitsessionthreshold.get_name_leafdata());
    if (mplsldpentitykeepaliveholdtimer.is_set || is_set(mplsldpentitykeepaliveholdtimer.yfilter)) leaf_name_data.push_back(mplsldpentitykeepaliveholdtimer.get_name_leafdata());
    if (mplsldpentitylabeldistmethod.is_set || is_set(mplsldpentitylabeldistmethod.yfilter)) leaf_name_data.push_back(mplsldpentitylabeldistmethod.get_name_leafdata());
    if (mplsldpentitylabelretentionmode.is_set || is_set(mplsldpentitylabelretentionmode.yfilter)) leaf_name_data.push_back(mplsldpentitylabelretentionmode.get_name_leafdata());
    if (mplsldpentitylabeltype.is_set || is_set(mplsldpentitylabeltype.yfilter)) leaf_name_data.push_back(mplsldpentitylabeltype.get_name_leafdata());
    if (mplsldpentitymaxpdulength.is_set || is_set(mplsldpentitymaxpdulength.yfilter)) leaf_name_data.push_back(mplsldpentitymaxpdulength.get_name_leafdata());
    if (mplsldpentityoperstatus.is_set || is_set(mplsldpentityoperstatus.yfilter)) leaf_name_data.push_back(mplsldpentityoperstatus.get_name_leafdata());
    if (mplsldpentitypathvectorlimit.is_set || is_set(mplsldpentitypathvectorlimit.yfilter)) leaf_name_data.push_back(mplsldpentitypathvectorlimit.get_name_leafdata());
    if (mplsldpentityprotocolversion.is_set || is_set(mplsldpentityprotocolversion.yfilter)) leaf_name_data.push_back(mplsldpentityprotocolversion.get_name_leafdata());
    if (mplsldpentityrowstatus.is_set || is_set(mplsldpentityrowstatus.yfilter)) leaf_name_data.push_back(mplsldpentityrowstatus.get_name_leafdata());
    if (mplsldpentitystatsbadldpidentifiererrors.is_set || is_set(mplsldpentitystatsbadldpidentifiererrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadldpidentifiererrors.get_name_leafdata());
    if (mplsldpentitystatsbadmessagelengtherrors.is_set || is_set(mplsldpentitystatsbadmessagelengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadmessagelengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadpdulengtherrors.is_set || is_set(mplsldpentitystatsbadpdulengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadpdulengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadtlvlengtherrors.is_set || is_set(mplsldpentitystatsbadtlvlengtherrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsbadtlvlengtherrors.get_name_leafdata());
    if (mplsldpentitystatskeepalivetimerexperrors.is_set || is_set(mplsldpentitystatskeepalivetimerexperrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatskeepalivetimerexperrors.get_name_leafdata());
    if (mplsldpentitystatsmalformedtlvvalueerrors.is_set || is_set(mplsldpentitystatsmalformedtlvvalueerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatsmalformedtlvvalueerrors.get_name_leafdata());
    if (mplsldpentitystatssessionattempts.is_set || is_set(mplsldpentitystatssessionattempts.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionattempts.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedaderrors.is_set || is_set(mplsldpentitystatssessionrejectedaderrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedaderrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedlrerrors.is_set || is_set(mplsldpentitystatssessionrejectedlrerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedlrerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedmaxpduerrors.is_set || is_set(mplsldpentitystatssessionrejectedmaxpduerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedmaxpduerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectednohelloerrors.is_set || is_set(mplsldpentitystatssessionrejectednohelloerrors.yfilter)) leaf_name_data.push_back(mplsldpentitystatssessionrejectednohelloerrors.get_name_leafdata());
    if (mplsldpentitystatsshutdownreceivednotifications.is_set || is_set(mplsldpentitystatsshutdownreceivednotifications.yfilter)) leaf_name_data.push_back(mplsldpentitystatsshutdownreceivednotifications.get_name_leafdata());
    if (mplsldpentitystatsshutdownsentnotifications.is_set || is_set(mplsldpentitystatsshutdownsentnotifications.yfilter)) leaf_name_data.push_back(mplsldpentitystatsshutdownsentnotifications.get_name_leafdata());
    if (mplsldpentitystoragetype.is_set || is_set(mplsldpentitystoragetype.yfilter)) leaf_name_data.push_back(mplsldpentitystoragetype.get_name_leafdata());
    if (mplsldpentitytargetpeer.is_set || is_set(mplsldpentitytargetpeer.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeer.get_name_leafdata());
    if (mplsldpentitytargetpeeraddr.is_set || is_set(mplsldpentitytargetpeeraddr.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeeraddr.get_name_leafdata());
    if (mplsldpentitytargetpeeraddrtype.is_set || is_set(mplsldpentitytargetpeeraddrtype.yfilter)) leaf_name_data.push_back(mplsldpentitytargetpeeraddrtype.get_name_leafdata());
    if (mplsldpentitytcpport.is_set || is_set(mplsldpentitytcpport.yfilter)) leaf_name_data.push_back(mplsldpentitytcpport.get_name_leafdata());
    if (mplsldpentitytransportaddrkind.is_set || is_set(mplsldpentitytransportaddrkind.yfilter)) leaf_name_data.push_back(mplsldpentitytransportaddrkind.get_name_leafdata());
    if (mplsldpentityudpdscport.is_set || is_set(mplsldpentityudpdscport.yfilter)) leaf_name_data.push_back(mplsldpentityudpdscport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpEntityAdminStatus")
    {
        mplsldpentityadminstatus = value;
        mplsldpentityadminstatus.value_namespace = name_space;
        mplsldpentityadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityDiscontinuityTime")
    {
        mplsldpentitydiscontinuitytime = value;
        mplsldpentitydiscontinuitytime.value_namespace = name_space;
        mplsldpentitydiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityHelloHoldTimer")
    {
        mplsldpentityhelloholdtimer = value;
        mplsldpentityhelloholdtimer.value_namespace = name_space;
        mplsldpentityhelloholdtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityHopCountLimit")
    {
        mplsldpentityhopcountlimit = value;
        mplsldpentityhopcountlimit.value_namespace = name_space;
        mplsldpentityhopcountlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityInitSessionThreshold")
    {
        mplsldpentityinitsessionthreshold = value;
        mplsldpentityinitsessionthreshold.value_namespace = name_space;
        mplsldpentityinitsessionthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityKeepAliveHoldTimer")
    {
        mplsldpentitykeepaliveholdtimer = value;
        mplsldpentitykeepaliveholdtimer.value_namespace = name_space;
        mplsldpentitykeepaliveholdtimer.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsLdpEntityLabelType")
    {
        mplsldpentitylabeltype = value;
        mplsldpentitylabeltype.value_namespace = name_space;
        mplsldpentitylabeltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityMaxPduLength")
    {
        mplsldpentitymaxpdulength = value;
        mplsldpentitymaxpdulength.value_namespace = name_space;
        mplsldpentitymaxpdulength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityOperStatus")
    {
        mplsldpentityoperstatus = value;
        mplsldpentityoperstatus.value_namespace = name_space;
        mplsldpentityoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityPathVectorLimit")
    {
        mplsldpentitypathvectorlimit = value;
        mplsldpentitypathvectorlimit.value_namespace = name_space;
        mplsldpentitypathvectorlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityProtocolVersion")
    {
        mplsldpentityprotocolversion = value;
        mplsldpentityprotocolversion.value_namespace = name_space;
        mplsldpentityprotocolversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityRowStatus")
    {
        mplsldpentityrowstatus = value;
        mplsldpentityrowstatus.value_namespace = name_space;
        mplsldpentityrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadLdpIdentifierErrors")
    {
        mplsldpentitystatsbadldpidentifiererrors = value;
        mplsldpentitystatsbadldpidentifiererrors.value_namespace = name_space;
        mplsldpentitystatsbadldpidentifiererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadMessageLengthErrors")
    {
        mplsldpentitystatsbadmessagelengtherrors = value;
        mplsldpentitystatsbadmessagelengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadmessagelengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadPduLengthErrors")
    {
        mplsldpentitystatsbadpdulengtherrors = value;
        mplsldpentitystatsbadpdulengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadpdulengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsBadTlvLengthErrors")
    {
        mplsldpentitystatsbadtlvlengtherrors = value;
        mplsldpentitystatsbadtlvlengtherrors.value_namespace = name_space;
        mplsldpentitystatsbadtlvlengtherrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsKeepAliveTimerExpErrors")
    {
        mplsldpentitystatskeepalivetimerexperrors = value;
        mplsldpentitystatskeepalivetimerexperrors.value_namespace = name_space;
        mplsldpentitystatskeepalivetimerexperrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsMalformedTlvValueErrors")
    {
        mplsldpentitystatsmalformedtlvvalueerrors = value;
        mplsldpentitystatsmalformedtlvvalueerrors.value_namespace = name_space;
        mplsldpentitystatsmalformedtlvvalueerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionAttempts")
    {
        mplsldpentitystatssessionattempts = value;
        mplsldpentitystatssessionattempts.value_namespace = name_space;
        mplsldpentitystatssessionattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedAdErrors")
    {
        mplsldpentitystatssessionrejectedaderrors = value;
        mplsldpentitystatssessionrejectedaderrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedaderrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedLRErrors")
    {
        mplsldpentitystatssessionrejectedlrerrors = value;
        mplsldpentitystatssessionrejectedlrerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedlrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedMaxPduErrors")
    {
        mplsldpentitystatssessionrejectedmaxpduerrors = value;
        mplsldpentitystatssessionrejectedmaxpduerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectedmaxpduerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedNoHelloErrors")
    {
        mplsldpentitystatssessionrejectednohelloerrors = value;
        mplsldpentitystatssessionrejectednohelloerrors.value_namespace = name_space;
        mplsldpentitystatssessionrejectednohelloerrors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsLdpEntityStorageType")
    {
        mplsldpentitystoragetype = value;
        mplsldpentitystoragetype.value_namespace = name_space;
        mplsldpentitystoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeer")
    {
        mplsldpentitytargetpeer = value;
        mplsldpentitytargetpeer.value_namespace = name_space;
        mplsldpentitytargetpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddr")
    {
        mplsldpentitytargetpeeraddr = value;
        mplsldpentitytargetpeeraddr.value_namespace = name_space;
        mplsldpentitytargetpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddrType")
    {
        mplsldpentitytargetpeeraddrtype = value;
        mplsldpentitytargetpeeraddrtype.value_namespace = name_space;
        mplsldpentitytargetpeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTcpPort")
    {
        mplsldpentitytcpport = value;
        mplsldpentitytcpport.value_namespace = name_space;
        mplsldpentitytcpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityTransportAddrKind")
    {
        mplsldpentitytransportaddrkind = value;
        mplsldpentitytransportaddrkind.value_namespace = name_space;
        mplsldpentitytransportaddrkind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityUdpDscPort")
    {
        mplsldpentityudpdscport = value;
        mplsldpentityudpdscport.value_namespace = name_space;
        mplsldpentityudpdscport.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityAdminStatus")
    {
        mplsldpentityadminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityDiscontinuityTime")
    {
        mplsldpentitydiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityHelloHoldTimer")
    {
        mplsldpentityhelloholdtimer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityHopCountLimit")
    {
        mplsldpentityhopcountlimit.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityInitSessionThreshold")
    {
        mplsldpentityinitsessionthreshold.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityKeepAliveHoldTimer")
    {
        mplsldpentitykeepaliveholdtimer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelDistMethod")
    {
        mplsldpentitylabeldistmethod.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelRetentionMode")
    {
        mplsldpentitylabelretentionmode.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityLabelType")
    {
        mplsldpentitylabeltype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityMaxPduLength")
    {
        mplsldpentitymaxpdulength.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityOperStatus")
    {
        mplsldpentityoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityPathVectorLimit")
    {
        mplsldpentitypathvectorlimit.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityProtocolVersion")
    {
        mplsldpentityprotocolversion.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityRowStatus")
    {
        mplsldpentityrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadLdpIdentifierErrors")
    {
        mplsldpentitystatsbadldpidentifiererrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadMessageLengthErrors")
    {
        mplsldpentitystatsbadmessagelengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadPduLengthErrors")
    {
        mplsldpentitystatsbadpdulengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsBadTlvLengthErrors")
    {
        mplsldpentitystatsbadtlvlengtherrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsKeepAliveTimerExpErrors")
    {
        mplsldpentitystatskeepalivetimerexperrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsMalformedTlvValueErrors")
    {
        mplsldpentitystatsmalformedtlvvalueerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionAttempts")
    {
        mplsldpentitystatssessionattempts.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedAdErrors")
    {
        mplsldpentitystatssessionrejectedaderrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedLRErrors")
    {
        mplsldpentitystatssessionrejectedlrerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedMaxPduErrors")
    {
        mplsldpentitystatssessionrejectedmaxpduerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedNoHelloErrors")
    {
        mplsldpentitystatssessionrejectednohelloerrors.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsShutdownReceivedNotifications")
    {
        mplsldpentitystatsshutdownreceivednotifications.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStatsShutdownSentNotifications")
    {
        mplsldpentitystatsshutdownsentnotifications.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityStorageType")
    {
        mplsldpentitystoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeer")
    {
        mplsldpentitytargetpeer.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddr")
    {
        mplsldpentitytargetpeeraddr.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddrType")
    {
        mplsldpentitytargetpeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTcpPort")
    {
        mplsldpentitytcpport.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityTransportAddrKind")
    {
        mplsldpentitytransportaddrkind.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityUdpDscPort")
    {
        mplsldpentityudpdscport.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpEntityAdminStatus" || name == "mplsLdpEntityDiscontinuityTime" || name == "mplsLdpEntityHelloHoldTimer" || name == "mplsLdpEntityHopCountLimit" || name == "mplsLdpEntityInitSessionThreshold" || name == "mplsLdpEntityKeepAliveHoldTimer" || name == "mplsLdpEntityLabelDistMethod" || name == "mplsLdpEntityLabelRetentionMode" || name == "mplsLdpEntityLabelType" || name == "mplsLdpEntityMaxPduLength" || name == "mplsLdpEntityOperStatus" || name == "mplsLdpEntityPathVectorLimit" || name == "mplsLdpEntityProtocolVersion" || name == "mplsLdpEntityRowStatus" || name == "mplsLdpEntityStatsBadLdpIdentifierErrors" || name == "mplsLdpEntityStatsBadMessageLengthErrors" || name == "mplsLdpEntityStatsBadPduLengthErrors" || name == "mplsLdpEntityStatsBadTlvLengthErrors" || name == "mplsLdpEntityStatsKeepAliveTimerExpErrors" || name == "mplsLdpEntityStatsMalformedTlvValueErrors" || name == "mplsLdpEntityStatsSessionAttempts" || name == "mplsLdpEntityStatsSessionRejectedAdErrors" || name == "mplsLdpEntityStatsSessionRejectedLRErrors" || name == "mplsLdpEntityStatsSessionRejectedMaxPduErrors" || name == "mplsLdpEntityStatsSessionRejectedNoHelloErrors" || name == "mplsLdpEntityStatsShutdownReceivedNotifications" || name == "mplsLdpEntityStatsShutdownSentNotifications" || name == "mplsLdpEntityStorageType" || name == "mplsLdpEntityTargetPeer" || name == "mplsLdpEntityTargetPeerAddr" || name == "mplsLdpEntityTargetPeerAddrType" || name == "mplsLdpEntityTcpPort" || name == "mplsLdpEntityTransportAddrKind" || name == "mplsLdpEntityUdpDscPort")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldppeertable::Mplsldppeertable()
{
    yang_name = "mplsLdpPeerTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldppeertable::~Mplsldppeertable()
{
}

bool MplsLdpStdMib::Mplsldppeertable::has_data() const
{
    for (std::size_t index=0; index<mplsldppeerentry.size(); index++)
    {
        if(mplsldppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsldppeertable::has_operation() const
{
    for (std::size_t index=0; index<mplsldppeerentry.size(); index++)
    {
        if(mplsldppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsldppeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpPeerTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldppeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldppeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpPeerEntry")
    {
        for(auto const & c : mplsldppeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry>();
        c->parent = this;
        mplsldppeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldppeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldppeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsldppeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsldppeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsldppeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpPeerEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldppeerentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldppeerlabeldistmethod{YType::enumeration, "mplsLdpPeerLabelDistMethod"},
    mplsldppeerpathvectorlimit{YType::int32, "mplsLdpPeerPathVectorLimit"},
    mplsldppeertransportaddr{YType::str, "mplsLdpPeerTransportAddr"},
    mplsldppeertransportaddrtype{YType::enumeration, "mplsLdpPeerTransportAddrType"},
    mplsldpsessiondiscontinuitytime{YType::uint32, "mplsLdpSessionDiscontinuityTime"},
    mplsldpsessionkeepaliveholdtimerem{YType::int32, "mplsLdpSessionKeepAliveHoldTimeRem"},
    mplsldpsessionkeepalivetime{YType::uint32, "mplsLdpSessionKeepAliveTime"},
    mplsldpsessionmaxpdulength{YType::uint32, "mplsLdpSessionMaxPduLength"},
    mplsldpsessionprotocolversion{YType::uint32, "mplsLdpSessionProtocolVersion"},
    mplsldpsessionrole{YType::enumeration, "mplsLdpSessionRole"},
    mplsldpsessionstate{YType::enumeration, "mplsLdpSessionState"},
    mplsldpsessionstatelastchange{YType::uint32, "mplsLdpSessionStateLastChange"},
    mplsldpsessionstatsunknownmestypeerrors{YType::uint32, "mplsLdpSessionStatsUnknownMesTypeErrors"},
    mplsldpsessionstatsunknowntlverrors{YType::uint32, "mplsLdpSessionStatsUnknownTlvErrors"}
{
    yang_name = "mplsLdpPeerEntry"; yang_parent_name = "mplsLdpPeerTable";
}

MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::~Mplsldppeerentry()
{
}

bool MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldppeerlabeldistmethod.is_set
	|| mplsldppeerpathvectorlimit.is_set
	|| mplsldppeertransportaddr.is_set
	|| mplsldppeertransportaddrtype.is_set
	|| mplsldpsessiondiscontinuitytime.is_set
	|| mplsldpsessionkeepaliveholdtimerem.is_set
	|| mplsldpsessionkeepalivetime.is_set
	|| mplsldpsessionmaxpdulength.is_set
	|| mplsldpsessionprotocolversion.is_set
	|| mplsldpsessionrole.is_set
	|| mplsldpsessionstate.is_set
	|| mplsldpsessionstatelastchange.is_set
	|| mplsldpsessionstatsunknownmestypeerrors.is_set
	|| mplsldpsessionstatsunknowntlverrors.is_set;
}

bool MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldppeerlabeldistmethod.yfilter)
	|| ydk::is_set(mplsldppeerpathvectorlimit.yfilter)
	|| ydk::is_set(mplsldppeertransportaddr.yfilter)
	|| ydk::is_set(mplsldppeertransportaddrtype.yfilter)
	|| ydk::is_set(mplsldpsessiondiscontinuitytime.yfilter)
	|| ydk::is_set(mplsldpsessionkeepaliveholdtimerem.yfilter)
	|| ydk::is_set(mplsldpsessionkeepalivetime.yfilter)
	|| ydk::is_set(mplsldpsessionmaxpdulength.yfilter)
	|| ydk::is_set(mplsldpsessionprotocolversion.yfilter)
	|| ydk::is_set(mplsldpsessionrole.yfilter)
	|| ydk::is_set(mplsldpsessionstate.yfilter)
	|| ydk::is_set(mplsldpsessionstatelastchange.yfilter)
	|| ydk::is_set(mplsldpsessionstatsunknownmestypeerrors.yfilter)
	|| ydk::is_set(mplsldpsessionstatsunknowntlverrors.yfilter);
}

std::string MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpPeerEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldppeerlabeldistmethod.is_set || is_set(mplsldppeerlabeldistmethod.yfilter)) leaf_name_data.push_back(mplsldppeerlabeldistmethod.get_name_leafdata());
    if (mplsldppeerpathvectorlimit.is_set || is_set(mplsldppeerpathvectorlimit.yfilter)) leaf_name_data.push_back(mplsldppeerpathvectorlimit.get_name_leafdata());
    if (mplsldppeertransportaddr.is_set || is_set(mplsldppeertransportaddr.yfilter)) leaf_name_data.push_back(mplsldppeertransportaddr.get_name_leafdata());
    if (mplsldppeertransportaddrtype.is_set || is_set(mplsldppeertransportaddrtype.yfilter)) leaf_name_data.push_back(mplsldppeertransportaddrtype.get_name_leafdata());
    if (mplsldpsessiondiscontinuitytime.is_set || is_set(mplsldpsessiondiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsldpsessiondiscontinuitytime.get_name_leafdata());
    if (mplsldpsessionkeepaliveholdtimerem.is_set || is_set(mplsldpsessionkeepaliveholdtimerem.yfilter)) leaf_name_data.push_back(mplsldpsessionkeepaliveholdtimerem.get_name_leafdata());
    if (mplsldpsessionkeepalivetime.is_set || is_set(mplsldpsessionkeepalivetime.yfilter)) leaf_name_data.push_back(mplsldpsessionkeepalivetime.get_name_leafdata());
    if (mplsldpsessionmaxpdulength.is_set || is_set(mplsldpsessionmaxpdulength.yfilter)) leaf_name_data.push_back(mplsldpsessionmaxpdulength.get_name_leafdata());
    if (mplsldpsessionprotocolversion.is_set || is_set(mplsldpsessionprotocolversion.yfilter)) leaf_name_data.push_back(mplsldpsessionprotocolversion.get_name_leafdata());
    if (mplsldpsessionrole.is_set || is_set(mplsldpsessionrole.yfilter)) leaf_name_data.push_back(mplsldpsessionrole.get_name_leafdata());
    if (mplsldpsessionstate.is_set || is_set(mplsldpsessionstate.yfilter)) leaf_name_data.push_back(mplsldpsessionstate.get_name_leafdata());
    if (mplsldpsessionstatelastchange.is_set || is_set(mplsldpsessionstatelastchange.yfilter)) leaf_name_data.push_back(mplsldpsessionstatelastchange.get_name_leafdata());
    if (mplsldpsessionstatsunknownmestypeerrors.is_set || is_set(mplsldpsessionstatsunknownmestypeerrors.yfilter)) leaf_name_data.push_back(mplsldpsessionstatsunknownmestypeerrors.get_name_leafdata());
    if (mplsldpsessionstatsunknowntlverrors.is_set || is_set(mplsldpsessionstatsunknowntlverrors.yfilter)) leaf_name_data.push_back(mplsldpsessionstatsunknowntlverrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpPeerTransportAddr")
    {
        mplsldppeertransportaddr = value;
        mplsldppeertransportaddr.value_namespace = name_space;
        mplsldppeertransportaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpPeerTransportAddrType")
    {
        mplsldppeertransportaddrtype = value;
        mplsldppeertransportaddrtype.value_namespace = name_space;
        mplsldppeertransportaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionDiscontinuityTime")
    {
        mplsldpsessiondiscontinuitytime = value;
        mplsldpsessiondiscontinuitytime.value_namespace = name_space;
        mplsldpsessiondiscontinuitytime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsLdpSessionProtocolVersion")
    {
        mplsldpsessionprotocolversion = value;
        mplsldpsessionprotocolversion.value_namespace = name_space;
        mplsldpsessionprotocolversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionRole")
    {
        mplsldpsessionrole = value;
        mplsldpsessionrole.value_namespace = name_space;
        mplsldpsessionrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionState")
    {
        mplsldpsessionstate = value;
        mplsldpsessionstate.value_namespace = name_space;
        mplsldpsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionStateLastChange")
    {
        mplsldpsessionstatelastchange = value;
        mplsldpsessionstatelastchange.value_namespace = name_space;
        mplsldpsessionstatelastchange.value_namespace_prefix = name_space_prefix;
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

void MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsLdpPeerTransportAddr")
    {
        mplsldppeertransportaddr.yfilter = yfilter;
    }
    if(value_path == "mplsLdpPeerTransportAddrType")
    {
        mplsldppeertransportaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionDiscontinuityTime")
    {
        mplsldpsessiondiscontinuitytime.yfilter = yfilter;
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
    if(value_path == "mplsLdpSessionProtocolVersion")
    {
        mplsldpsessionprotocolversion.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionRole")
    {
        mplsldpsessionrole.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionState")
    {
        mplsldpsessionstate.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionStateLastChange")
    {
        mplsldpsessionstatelastchange.yfilter = yfilter;
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

bool MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpPeerLabelDistMethod" || name == "mplsLdpPeerPathVectorLimit" || name == "mplsLdpPeerTransportAddr" || name == "mplsLdpPeerTransportAddrType" || name == "mplsLdpSessionDiscontinuityTime" || name == "mplsLdpSessionKeepAliveHoldTimeRem" || name == "mplsLdpSessionKeepAliveTime" || name == "mplsLdpSessionMaxPduLength" || name == "mplsLdpSessionProtocolVersion" || name == "mplsLdpSessionRole" || name == "mplsLdpSessionState" || name == "mplsLdpSessionStateLastChange" || name == "mplsLdpSessionStatsUnknownMesTypeErrors" || name == "mplsLdpSessionStatsUnknownTlvErrors")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencytable()
{
    yang_name = "mplsLdpHelloAdjacencyTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldphelloadjacencytable::~Mplsldphelloadjacencytable()
{
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::has_data() const
{
    for (std::size_t index=0; index<mplsldphelloadjacencyentry.size(); index++)
    {
        if(mplsldphelloadjacencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::has_operation() const
{
    for (std::size_t index=0; index<mplsldphelloadjacencyentry.size(); index++)
    {
        if(mplsldphelloadjacencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsldphelloadjacencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpHelloAdjacencyTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldphelloadjacencytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldphelloadjacencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpHelloAdjacencyEntry")
    {
        for(auto const & c : mplsldphelloadjacencyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry>();
        c->parent = this;
        mplsldphelloadjacencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldphelloadjacencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldphelloadjacencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsldphelloadjacencytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsldphelloadjacencytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpHelloAdjacencyEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::Mplsldphelloadjacencyentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldphelloadjacencyindex{YType::uint32, "mplsLdpHelloAdjacencyIndex"},
    mplsldphelloadjacencyholdtime{YType::uint32, "mplsLdpHelloAdjacencyHoldTime"},
    mplsldphelloadjacencyholdtimerem{YType::int32, "mplsLdpHelloAdjacencyHoldTimeRem"},
    mplsldphelloadjacencytype{YType::enumeration, "mplsLdpHelloAdjacencyType"}
{
    yang_name = "mplsLdpHelloAdjacencyEntry"; yang_parent_name = "mplsLdpHelloAdjacencyTable";
}

MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::~Mplsldphelloadjacencyentry()
{
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldphelloadjacencyindex.is_set
	|| mplsldphelloadjacencyholdtime.is_set
	|| mplsldphelloadjacencyholdtimerem.is_set
	|| mplsldphelloadjacencytype.is_set;
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyindex.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyholdtime.yfilter)
	|| ydk::is_set(mplsldphelloadjacencyholdtimerem.yfilter)
	|| ydk::is_set(mplsldphelloadjacencytype.yfilter);
}

std::string MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpHelloAdjacencyEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']" <<"[mplsLdpHelloAdjacencyIndex='" <<mplsldphelloadjacencyindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpHelloAdjacencyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldphelloadjacencyindex.is_set || is_set(mplsldphelloadjacencyindex.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyindex.get_name_leafdata());
    if (mplsldphelloadjacencyholdtime.is_set || is_set(mplsldphelloadjacencyholdtime.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyholdtime.get_name_leafdata());
    if (mplsldphelloadjacencyholdtimerem.is_set || is_set(mplsldphelloadjacencyholdtimerem.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencyholdtimerem.get_name_leafdata());
    if (mplsldphelloadjacencytype.is_set || is_set(mplsldphelloadjacencytype.yfilter)) leaf_name_data.push_back(mplsldphelloadjacencytype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpHelloAdjacencyHoldTime")
    {
        mplsldphelloadjacencyholdtime = value;
        mplsldphelloadjacencyholdtime.value_namespace = name_space;
        mplsldphelloadjacencyholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTimeRem")
    {
        mplsldphelloadjacencyholdtimerem = value;
        mplsldphelloadjacencyholdtimerem.value_namespace = name_space;
        mplsldphelloadjacencyholdtimerem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpHelloAdjacencyType")
    {
        mplsldphelloadjacencytype = value;
        mplsldphelloadjacencytype.value_namespace = name_space;
        mplsldphelloadjacencytype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsLdpHelloAdjacencyHoldTime")
    {
        mplsldphelloadjacencyholdtime.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTimeRem")
    {
        mplsldphelloadjacencyholdtimerem.yfilter = yfilter;
    }
    if(value_path == "mplsLdpHelloAdjacencyType")
    {
        mplsldphelloadjacencytype.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpHelloAdjacencyIndex" || name == "mplsLdpHelloAdjacencyHoldTime" || name == "mplsLdpHelloAdjacencyHoldTimeRem" || name == "mplsLdpHelloAdjacencyType")
        return true;
    return false;
}

MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplsptable()
{
    yang_name = "mplsInSegmentLdpLspTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsinsegmentldplsptable::~Mplsinsegmentldplsptable()
{
}

bool MplsLdpStdMib::Mplsinsegmentldplsptable::has_data() const
{
    for (std::size_t index=0; index<mplsinsegmentldplspentry.size(); index++)
    {
        if(mplsinsegmentldplspentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsinsegmentldplsptable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmentldplspentry.size(); index++)
    {
        if(mplsinsegmentldplspentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsinsegmentldplsptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentLdpLspTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsinsegmentldplsptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsinsegmentldplsptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentLdpLspEntry")
    {
        for(auto const & c : mplsinsegmentldplspentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry>();
        c->parent = this;
        mplsinsegmentldplspentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsinsegmentldplsptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinsegmentldplspentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsinsegmentldplsptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsinsegmentldplsptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsinsegmentldplsptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentLdpLspEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::Mplsinsegmentldplspentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsinsegmentldplspindex{YType::str, "mplsInSegmentLdpLspIndex"},
    mplsinsegmentldplsplabeltype{YType::enumeration, "mplsInSegmentLdpLspLabelType"},
    mplsinsegmentldplsptype{YType::enumeration, "mplsInSegmentLdpLspType"}
{
    yang_name = "mplsInSegmentLdpLspEntry"; yang_parent_name = "mplsInSegmentLdpLspTable";
}

MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::~Mplsinsegmentldplspentry()
{
}

bool MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsinsegmentldplspindex.is_set
	|| mplsinsegmentldplsplabeltype.is_set
	|| mplsinsegmentldplsptype.is_set;
}

bool MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsinsegmentldplspindex.yfilter)
	|| ydk::is_set(mplsinsegmentldplsplabeltype.yfilter)
	|| ydk::is_set(mplsinsegmentldplsptype.yfilter);
}

std::string MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentLdpLspEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']" <<"[mplsInSegmentLdpLspIndex='" <<mplsinsegmentldplspindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsInSegmentLdpLspTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsinsegmentldplspindex.is_set || is_set(mplsinsegmentldplspindex.yfilter)) leaf_name_data.push_back(mplsinsegmentldplspindex.get_name_leafdata());
    if (mplsinsegmentldplsplabeltype.is_set || is_set(mplsinsegmentldplsplabeltype.yfilter)) leaf_name_data.push_back(mplsinsegmentldplsplabeltype.get_name_leafdata());
    if (mplsinsegmentldplsptype.is_set || is_set(mplsinsegmentldplsptype.yfilter)) leaf_name_data.push_back(mplsinsegmentldplsptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsInSegmentLdpLspIndex" || name == "mplsInSegmentLdpLspLabelType" || name == "mplsInSegmentLdpLspType")
        return true;
    return false;
}

MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplsptable()
{
    yang_name = "mplsOutSegmentLdpLspTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsoutsegmentldplsptable::~Mplsoutsegmentldplsptable()
{
}

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::has_data() const
{
    for (std::size_t index=0; index<mplsoutsegmentldplspentry.size(); index++)
    {
        if(mplsoutsegmentldplspentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::has_operation() const
{
    for (std::size_t index=0; index<mplsoutsegmentldplspentry.size(); index++)
    {
        if(mplsoutsegmentldplspentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsoutsegmentldplsptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentLdpLspTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsoutsegmentldplsptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsoutsegmentldplsptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsOutSegmentLdpLspEntry")
    {
        for(auto const & c : mplsoutsegmentldplspentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry>();
        c->parent = this;
        mplsoutsegmentldplspentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsoutsegmentldplsptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsoutsegmentldplspentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsoutsegmentldplsptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsoutsegmentldplsptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentLdpLspEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::Mplsoutsegmentldplspentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsoutsegmentldplspindex{YType::str, "mplsOutSegmentLdpLspIndex"},
    mplsoutsegmentldplsplabeltype{YType::enumeration, "mplsOutSegmentLdpLspLabelType"},
    mplsoutsegmentldplsptype{YType::enumeration, "mplsOutSegmentLdpLspType"}
{
    yang_name = "mplsOutSegmentLdpLspEntry"; yang_parent_name = "mplsOutSegmentLdpLspTable";
}

MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::~Mplsoutsegmentldplspentry()
{
}

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsoutsegmentldplspindex.is_set
	|| mplsoutsegmentldplsplabeltype.is_set
	|| mplsoutsegmentldplsptype.is_set;
}

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsoutsegmentldplspindex.yfilter)
	|| ydk::is_set(mplsoutsegmentldplsplabeltype.yfilter)
	|| ydk::is_set(mplsoutsegmentldplsptype.yfilter);
}

std::string MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentLdpLspEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']" <<"[mplsOutSegmentLdpLspIndex='" <<mplsoutsegmentldplspindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsOutSegmentLdpLspTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsoutsegmentldplspindex.is_set || is_set(mplsoutsegmentldplspindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplspindex.get_name_leafdata());
    if (mplsoutsegmentldplsplabeltype.is_set || is_set(mplsoutsegmentldplsplabeltype.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplsplabeltype.get_name_leafdata());
    if (mplsoutsegmentldplsptype.is_set || is_set(mplsoutsegmentldplsptype.yfilter)) leaf_name_data.push_back(mplsoutsegmentldplsptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsOutSegmentLdpLspIndex" || name == "mplsOutSegmentLdpLspLabelType" || name == "mplsOutSegmentLdpLspType")
        return true;
    return false;
}

MplsLdpStdMib::Mplsfectable::Mplsfectable()
{
    yang_name = "mplsFecTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsfectable::~Mplsfectable()
{
}

bool MplsLdpStdMib::Mplsfectable::has_data() const
{
    for (std::size_t index=0; index<mplsfecentry.size(); index++)
    {
        if(mplsfecentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsfectable::has_operation() const
{
    for (std::size_t index=0; index<mplsfecentry.size(); index++)
    {
        if(mplsfecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsfectable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsfectable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsfectable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsFecEntry")
    {
        for(auto const & c : mplsfecentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsfectable::Mplsfecentry>();
        c->parent = this;
        mplsfecentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsfectable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsfecentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsfectable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsfectable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsfectable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsfectable::Mplsfecentry::Mplsfecentry()
    :
    mplsfecindex{YType::uint32, "mplsFecIndex"},
    mplsfecaddr{YType::str, "mplsFecAddr"},
    mplsfecaddrprefixlength{YType::uint32, "mplsFecAddrPrefixLength"},
    mplsfecaddrtype{YType::enumeration, "mplsFecAddrType"},
    mplsfecrowstatus{YType::enumeration, "mplsFecRowStatus"},
    mplsfecstoragetype{YType::enumeration, "mplsFecStorageType"},
    mplsfectype{YType::enumeration, "mplsFecType"}
{
    yang_name = "mplsFecEntry"; yang_parent_name = "mplsFecTable";
}

MplsLdpStdMib::Mplsfectable::Mplsfecentry::~Mplsfecentry()
{
}

bool MplsLdpStdMib::Mplsfectable::Mplsfecentry::has_data() const
{
    return mplsfecindex.is_set
	|| mplsfecaddr.is_set
	|| mplsfecaddrprefixlength.is_set
	|| mplsfecaddrtype.is_set
	|| mplsfecrowstatus.is_set
	|| mplsfecstoragetype.is_set
	|| mplsfectype.is_set;
}

bool MplsLdpStdMib::Mplsfectable::Mplsfecentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsfecindex.yfilter)
	|| ydk::is_set(mplsfecaddr.yfilter)
	|| ydk::is_set(mplsfecaddrprefixlength.yfilter)
	|| ydk::is_set(mplsfecaddrtype.yfilter)
	|| ydk::is_set(mplsfecrowstatus.yfilter)
	|| ydk::is_set(mplsfecstoragetype.yfilter)
	|| ydk::is_set(mplsfectype.yfilter);
}

std::string MplsLdpStdMib::Mplsfectable::Mplsfecentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsFecEntry" <<"[mplsFecIndex='" <<mplsfecindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsfectable::Mplsfecentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsFecTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsfecindex.is_set || is_set(mplsfecindex.yfilter)) leaf_name_data.push_back(mplsfecindex.get_name_leafdata());
    if (mplsfecaddr.is_set || is_set(mplsfecaddr.yfilter)) leaf_name_data.push_back(mplsfecaddr.get_name_leafdata());
    if (mplsfecaddrprefixlength.is_set || is_set(mplsfecaddrprefixlength.yfilter)) leaf_name_data.push_back(mplsfecaddrprefixlength.get_name_leafdata());
    if (mplsfecaddrtype.is_set || is_set(mplsfecaddrtype.yfilter)) leaf_name_data.push_back(mplsfecaddrtype.get_name_leafdata());
    if (mplsfecrowstatus.is_set || is_set(mplsfecrowstatus.yfilter)) leaf_name_data.push_back(mplsfecrowstatus.get_name_leafdata());
    if (mplsfecstoragetype.is_set || is_set(mplsfecstoragetype.yfilter)) leaf_name_data.push_back(mplsfecstoragetype.get_name_leafdata());
    if (mplsfectype.is_set || is_set(mplsfectype.yfilter)) leaf_name_data.push_back(mplsfectype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsfectable::Mplsfecentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsfectable::Mplsfecentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsfectable::Mplsfecentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsFecIndex")
    {
        mplsfecindex = value;
        mplsfecindex.value_namespace = name_space;
        mplsfecindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecAddr")
    {
        mplsfecaddr = value;
        mplsfecaddr.value_namespace = name_space;
        mplsfecaddr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsFecRowStatus")
    {
        mplsfecrowstatus = value;
        mplsfecrowstatus.value_namespace = name_space;
        mplsfecrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecStorageType")
    {
        mplsfecstoragetype = value;
        mplsfecstoragetype.value_namespace = name_space;
        mplsfecstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsFecType")
    {
        mplsfectype = value;
        mplsfectype.value_namespace = name_space;
        mplsfectype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsfectable::Mplsfecentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsFecIndex")
    {
        mplsfecindex.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddr")
    {
        mplsfecaddr.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddrPrefixLength")
    {
        mplsfecaddrprefixlength.yfilter = yfilter;
    }
    if(value_path == "mplsFecAddrType")
    {
        mplsfecaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsFecRowStatus")
    {
        mplsfecrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsFecStorageType")
    {
        mplsfecstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsFecType")
    {
        mplsfectype.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsfectable::Mplsfecentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsFecIndex" || name == "mplsFecAddr" || name == "mplsFecAddrPrefixLength" || name == "mplsFecAddrType" || name == "mplsFecRowStatus" || name == "mplsFecStorageType" || name == "mplsFecType")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfectable()
{
    yang_name = "mplsLdpLspFecTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldplspfectable::~Mplsldplspfectable()
{
}

bool MplsLdpStdMib::Mplsldplspfectable::has_data() const
{
    for (std::size_t index=0; index<mplsldplspfecentry.size(); index++)
    {
        if(mplsldplspfecentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsldplspfectable::has_operation() const
{
    for (std::size_t index=0; index<mplsldplspfecentry.size(); index++)
    {
        if(mplsldplspfecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsldplspfectable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLspFecTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldplspfectable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldplspfectable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpLspFecEntry")
    {
        for(auto const & c : mplsldplspfecentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry>();
        c->parent = this;
        mplsldplspfecentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldplspfectable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldplspfecentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsldplspfectable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsldplspfectable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsldplspfectable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpLspFecEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::Mplsldplspfecentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldplspfecsegment{YType::enumeration, "mplsLdpLspFecSegment"},
    mplsldplspfecsegmentindex{YType::str, "mplsLdpLspFecSegmentIndex"},
    mplsldplspfecindex{YType::uint32, "mplsLdpLspFecIndex"},
    mplsldplspfecrowstatus{YType::enumeration, "mplsLdpLspFecRowStatus"},
    mplsldplspfecstoragetype{YType::enumeration, "mplsLdpLspFecStorageType"}
{
    yang_name = "mplsLdpLspFecEntry"; yang_parent_name = "mplsLdpLspFecTable";
}

MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::~Mplsldplspfecentry()
{
}

bool MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldplspfecsegment.is_set
	|| mplsldplspfecsegmentindex.is_set
	|| mplsldplspfecindex.is_set
	|| mplsldplspfecrowstatus.is_set
	|| mplsldplspfecstoragetype.is_set;
}

bool MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldplspfecsegment.yfilter)
	|| ydk::is_set(mplsldplspfecsegmentindex.yfilter)
	|| ydk::is_set(mplsldplspfecindex.yfilter)
	|| ydk::is_set(mplsldplspfecrowstatus.yfilter)
	|| ydk::is_set(mplsldplspfecstoragetype.yfilter);
}

std::string MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpLspFecEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']" <<"[mplsLdpLspFecSegment='" <<mplsldplspfecsegment <<"']" <<"[mplsLdpLspFecSegmentIndex='" <<mplsldplspfecsegmentindex <<"']" <<"[mplsLdpLspFecIndex='" <<mplsldplspfecindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpLspFecTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldplspfecsegment.is_set || is_set(mplsldplspfecsegment.yfilter)) leaf_name_data.push_back(mplsldplspfecsegment.get_name_leafdata());
    if (mplsldplspfecsegmentindex.is_set || is_set(mplsldplspfecsegmentindex.yfilter)) leaf_name_data.push_back(mplsldplspfecsegmentindex.get_name_leafdata());
    if (mplsldplspfecindex.is_set || is_set(mplsldplspfecindex.yfilter)) leaf_name_data.push_back(mplsldplspfecindex.get_name_leafdata());
    if (mplsldplspfecrowstatus.is_set || is_set(mplsldplspfecrowstatus.yfilter)) leaf_name_data.push_back(mplsldplspfecrowstatus.get_name_leafdata());
    if (mplsldplspfecstoragetype.is_set || is_set(mplsldplspfecstoragetype.yfilter)) leaf_name_data.push_back(mplsldplspfecstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpLspFecRowStatus")
    {
        mplsldplspfecrowstatus = value;
        mplsldplspfecrowstatus.value_namespace = name_space;
        mplsldplspfecrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpLspFecStorageType")
    {
        mplsldplspfecstoragetype = value;
        mplsldplspfecstoragetype.value_namespace = name_space;
        mplsldplspfecstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsLdpLspFecRowStatus")
    {
        mplsldplspfecrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpLspFecStorageType")
    {
        mplsldplspfecstoragetype.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpLspFecSegment" || name == "mplsLdpLspFecSegmentIndex" || name == "mplsLdpLspFecIndex" || name == "mplsLdpLspFecRowStatus" || name == "mplsLdpLspFecStorageType")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrtable()
{
    yang_name = "mplsLdpSessionPeerAddrTable"; yang_parent_name = "MPLS-LDP-STD-MIB";
}

MplsLdpStdMib::Mplsldpsessionpeeraddrtable::~Mplsldpsessionpeeraddrtable()
{
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::has_data() const
{
    for (std::size_t index=0; index<mplsldpsessionpeeraddrentry.size(); index++)
    {
        if(mplsldpsessionpeeraddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpsessionpeeraddrentry.size(); index++)
    {
        if(mplsldpsessionpeeraddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpStdMib::Mplsldpsessionpeeraddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionPeerAddrTable";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpsessionpeeraddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpsessionpeeraddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpSessionPeerAddrEntry")
    {
        for(auto const & c : mplsldpsessionpeeraddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry>();
        c->parent = this;
        mplsldpsessionpeeraddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpsessionpeeraddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldpsessionpeeraddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpSessionPeerAddrEntry")
        return true;
    return false;
}

MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::Mplsldpsessionpeeraddrentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldppeerldpid{YType::str, "mplsLdpPeerLdpId"},
    mplsldpsessionpeeraddrindex{YType::uint32, "mplsLdpSessionPeerAddrIndex"},
    mplsldpsessionpeernexthopaddr{YType::str, "mplsLdpSessionPeerNextHopAddr"},
    mplsldpsessionpeernexthopaddrtype{YType::enumeration, "mplsLdpSessionPeerNextHopAddrType"}
{
    yang_name = "mplsLdpSessionPeerAddrEntry"; yang_parent_name = "mplsLdpSessionPeerAddrTable";
}

MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::~Mplsldpsessionpeeraddrentry()
{
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldppeerldpid.is_set
	|| mplsldpsessionpeeraddrindex.is_set
	|| mplsldpsessionpeernexthopaddr.is_set
	|| mplsldpsessionpeernexthopaddrtype.is_set;
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldppeerldpid.yfilter)
	|| ydk::is_set(mplsldpsessionpeeraddrindex.yfilter)
	|| ydk::is_set(mplsldpsessionpeernexthopaddr.yfilter)
	|| ydk::is_set(mplsldpsessionpeernexthopaddrtype.yfilter);
}

std::string MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpSessionPeerAddrEntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpPeerLdpId='" <<mplsldppeerldpid <<"']" <<"[mplsLdpSessionPeerAddrIndex='" <<mplsldpsessionpeeraddrindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-STD-MIB:MPLS-LDP-STD-MIB/mplsLdpSessionPeerAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.yfilter)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldpsessionpeeraddrindex.is_set || is_set(mplsldpsessionpeeraddrindex.yfilter)) leaf_name_data.push_back(mplsldpsessionpeeraddrindex.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddr.is_set || is_set(mplsldpsessionpeernexthopaddr.yfilter)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddr.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddrtype.is_set || is_set(mplsldpsessionpeernexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpSessionPeerNextHopAddr")
    {
        mplsldpsessionpeernexthopaddr = value;
        mplsldpsessionpeernexthopaddr.value_namespace = name_space;
        mplsldpsessionpeernexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddrType")
    {
        mplsldpsessionpeernexthopaddrtype = value;
        mplsldpsessionpeernexthopaddrtype.value_namespace = name_space;
        mplsldpsessionpeernexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsLdpSessionPeerNextHopAddr")
    {
        mplsldpsessionpeernexthopaddr.yfilter = yfilter;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddrType")
    {
        mplsldpsessionpeernexthopaddrtype.yfilter = yfilter;
    }
}

bool MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpPeerLdpId" || name == "mplsLdpSessionPeerAddrIndex" || name == "mplsLdpSessionPeerNextHopAddr" || name == "mplsLdpSessionPeerNextHopAddrType")
        return true;
    return false;
}

const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable::none {1, "none"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable::other {2, "other"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable::hopCount {3, "hopCount"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable::pathVector {4, "pathVector"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable::hopCountAndPathVector {5, "hopCountAndPathVector"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityadminstatus::enable {1, "enable"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityadminstatus::disable {2, "disable"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityoperstatus::unknown {1, "unknown"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityoperstatus::enabled {2, "enabled"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityoperstatus::disabled {3, "disabled"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentitytransportaddrkind::interface {1, "interface"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentitytransportaddrkind::loopback {2, "loopback"};

const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate::nonexistent {1, "nonexistent"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate::initialized {2, "initialized"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate::openrec {3, "openrec"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate::opensent {4, "opensent"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate::operational {5, "operational"};

const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionrole::unknown {1, "unknown"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionrole::active {2, "active"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionrole::passive {3, "passive"};

const Enum::YLeaf MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::Mplsldphelloadjacencytype::link {1, "link"};
const Enum::YLeaf MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::Mplsldphelloadjacencytype::targeted {2, "targeted"};

const Enum::YLeaf MplsLdpStdMib::Mplsfectable::Mplsfecentry::Mplsfectype::prefix {1, "prefix"};
const Enum::YLeaf MplsLdpStdMib::Mplsfectable::Mplsfecentry::Mplsfectype::hostAddress {2, "hostAddress"};

const Enum::YLeaf MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::Mplsldplspfecsegment::inSegment {1, "inSegment"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::Mplsldplspfecsegment::outSegment {2, "outSegment"};


}
}

