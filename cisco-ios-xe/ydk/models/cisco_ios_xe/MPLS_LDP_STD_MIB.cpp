
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_STD_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void MplsLdpStdMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(mplsldplsrid.operation)
	|| is_set(mplsldplsrloopdetectioncapable.operation);
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

    if (mplsldplsrid.is_set || is_set(mplsldplsrid.operation)) leaf_name_data.push_back(mplsldplsrid.get_name_leafdata());
    if (mplsldplsrloopdetectioncapable.is_set || is_set(mplsldplsrloopdetectioncapable.operation)) leaf_name_data.push_back(mplsldplsrloopdetectioncapable.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldplsrobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpLsrId")
    {
        mplsldplsrid = value;
    }
    if(value_path == "mplsLdpLsrLoopDetectionCapable")
    {
        mplsldplsrloopdetectioncapable = value;
    }
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
    return is_set(operation)
	|| is_set(mplsldpentityindexnext.operation)
	|| is_set(mplsldpentitylastchange.operation);
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

    if (mplsldpentityindexnext.is_set || is_set(mplsldpentityindexnext.operation)) leaf_name_data.push_back(mplsldpentityindexnext.get_name_leafdata());
    if (mplsldpentitylastchange.is_set || is_set(mplsldpentitylastchange.operation)) leaf_name_data.push_back(mplsldpentitylastchange.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldpentityobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityIndexNext")
    {
        mplsldpentityindexnext = value;
    }
    if(value_path == "mplsLdpEntityLastChange")
    {
        mplsldpentitylastchange = value;
    }
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
    return is_set(operation)
	|| is_set(mplsldplspfeclastchange.operation)
	|| is_set(mplsldppeerlastchange.operation);
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

    if (mplsldplspfeclastchange.is_set || is_set(mplsldplspfeclastchange.operation)) leaf_name_data.push_back(mplsldplspfeclastchange.get_name_leafdata());
    if (mplsldppeerlastchange.is_set || is_set(mplsldppeerlastchange.operation)) leaf_name_data.push_back(mplsldppeerlastchange.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldpsessionobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpLspFecLastChange")
    {
        mplsldplspfeclastchange = value;
    }
    if(value_path == "mplsLdpPeerLastChange")
    {
        mplsldppeerlastchange = value;
    }
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
    return is_set(operation)
	|| is_set(mplsfecindexnext.operation)
	|| is_set(mplsfeclastchange.operation);
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

    if (mplsfecindexnext.is_set || is_set(mplsfecindexnext.operation)) leaf_name_data.push_back(mplsfecindexnext.get_name_leafdata());
    if (mplsfeclastchange.is_set || is_set(mplsfeclastchange.operation)) leaf_name_data.push_back(mplsfeclastchange.get_name_leafdata());


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

void MplsLdpStdMib::Mplsfecobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsFecIndexNext")
    {
        mplsfecindexnext = value;
    }
    if(value_path == "mplsFecLastChange")
    {
        mplsfeclastchange = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsldpentitytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldpentityadminstatus.operation)
	|| is_set(mplsldpentitydiscontinuitytime.operation)
	|| is_set(mplsldpentityhelloholdtimer.operation)
	|| is_set(mplsldpentityhopcountlimit.operation)
	|| is_set(mplsldpentityinitsessionthreshold.operation)
	|| is_set(mplsldpentitykeepaliveholdtimer.operation)
	|| is_set(mplsldpentitylabeldistmethod.operation)
	|| is_set(mplsldpentitylabelretentionmode.operation)
	|| is_set(mplsldpentitylabeltype.operation)
	|| is_set(mplsldpentitymaxpdulength.operation)
	|| is_set(mplsldpentityoperstatus.operation)
	|| is_set(mplsldpentitypathvectorlimit.operation)
	|| is_set(mplsldpentityprotocolversion.operation)
	|| is_set(mplsldpentityrowstatus.operation)
	|| is_set(mplsldpentitystatsbadldpidentifiererrors.operation)
	|| is_set(mplsldpentitystatsbadmessagelengtherrors.operation)
	|| is_set(mplsldpentitystatsbadpdulengtherrors.operation)
	|| is_set(mplsldpentitystatsbadtlvlengtherrors.operation)
	|| is_set(mplsldpentitystatskeepalivetimerexperrors.operation)
	|| is_set(mplsldpentitystatsmalformedtlvvalueerrors.operation)
	|| is_set(mplsldpentitystatssessionattempts.operation)
	|| is_set(mplsldpentitystatssessionrejectedaderrors.operation)
	|| is_set(mplsldpentitystatssessionrejectedlrerrors.operation)
	|| is_set(mplsldpentitystatssessionrejectedmaxpduerrors.operation)
	|| is_set(mplsldpentitystatssessionrejectednohelloerrors.operation)
	|| is_set(mplsldpentitystatsshutdownreceivednotifications.operation)
	|| is_set(mplsldpentitystatsshutdownsentnotifications.operation)
	|| is_set(mplsldpentitystoragetype.operation)
	|| is_set(mplsldpentitytargetpeer.operation)
	|| is_set(mplsldpentitytargetpeeraddr.operation)
	|| is_set(mplsldpentitytargetpeeraddrtype.operation)
	|| is_set(mplsldpentitytcpport.operation)
	|| is_set(mplsldpentitytransportaddrkind.operation)
	|| is_set(mplsldpentityudpdscport.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentityadminstatus.is_set || is_set(mplsldpentityadminstatus.operation)) leaf_name_data.push_back(mplsldpentityadminstatus.get_name_leafdata());
    if (mplsldpentitydiscontinuitytime.is_set || is_set(mplsldpentitydiscontinuitytime.operation)) leaf_name_data.push_back(mplsldpentitydiscontinuitytime.get_name_leafdata());
    if (mplsldpentityhelloholdtimer.is_set || is_set(mplsldpentityhelloholdtimer.operation)) leaf_name_data.push_back(mplsldpentityhelloholdtimer.get_name_leafdata());
    if (mplsldpentityhopcountlimit.is_set || is_set(mplsldpentityhopcountlimit.operation)) leaf_name_data.push_back(mplsldpentityhopcountlimit.get_name_leafdata());
    if (mplsldpentityinitsessionthreshold.is_set || is_set(mplsldpentityinitsessionthreshold.operation)) leaf_name_data.push_back(mplsldpentityinitsessionthreshold.get_name_leafdata());
    if (mplsldpentitykeepaliveholdtimer.is_set || is_set(mplsldpentitykeepaliveholdtimer.operation)) leaf_name_data.push_back(mplsldpentitykeepaliveholdtimer.get_name_leafdata());
    if (mplsldpentitylabeldistmethod.is_set || is_set(mplsldpentitylabeldistmethod.operation)) leaf_name_data.push_back(mplsldpentitylabeldistmethod.get_name_leafdata());
    if (mplsldpentitylabelretentionmode.is_set || is_set(mplsldpentitylabelretentionmode.operation)) leaf_name_data.push_back(mplsldpentitylabelretentionmode.get_name_leafdata());
    if (mplsldpentitylabeltype.is_set || is_set(mplsldpentitylabeltype.operation)) leaf_name_data.push_back(mplsldpentitylabeltype.get_name_leafdata());
    if (mplsldpentitymaxpdulength.is_set || is_set(mplsldpentitymaxpdulength.operation)) leaf_name_data.push_back(mplsldpentitymaxpdulength.get_name_leafdata());
    if (mplsldpentityoperstatus.is_set || is_set(mplsldpentityoperstatus.operation)) leaf_name_data.push_back(mplsldpentityoperstatus.get_name_leafdata());
    if (mplsldpentitypathvectorlimit.is_set || is_set(mplsldpentitypathvectorlimit.operation)) leaf_name_data.push_back(mplsldpentitypathvectorlimit.get_name_leafdata());
    if (mplsldpentityprotocolversion.is_set || is_set(mplsldpentityprotocolversion.operation)) leaf_name_data.push_back(mplsldpentityprotocolversion.get_name_leafdata());
    if (mplsldpentityrowstatus.is_set || is_set(mplsldpentityrowstatus.operation)) leaf_name_data.push_back(mplsldpentityrowstatus.get_name_leafdata());
    if (mplsldpentitystatsbadldpidentifiererrors.is_set || is_set(mplsldpentitystatsbadldpidentifiererrors.operation)) leaf_name_data.push_back(mplsldpentitystatsbadldpidentifiererrors.get_name_leafdata());
    if (mplsldpentitystatsbadmessagelengtherrors.is_set || is_set(mplsldpentitystatsbadmessagelengtherrors.operation)) leaf_name_data.push_back(mplsldpentitystatsbadmessagelengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadpdulengtherrors.is_set || is_set(mplsldpentitystatsbadpdulengtherrors.operation)) leaf_name_data.push_back(mplsldpentitystatsbadpdulengtherrors.get_name_leafdata());
    if (mplsldpentitystatsbadtlvlengtherrors.is_set || is_set(mplsldpentitystatsbadtlvlengtherrors.operation)) leaf_name_data.push_back(mplsldpentitystatsbadtlvlengtherrors.get_name_leafdata());
    if (mplsldpentitystatskeepalivetimerexperrors.is_set || is_set(mplsldpentitystatskeepalivetimerexperrors.operation)) leaf_name_data.push_back(mplsldpentitystatskeepalivetimerexperrors.get_name_leafdata());
    if (mplsldpentitystatsmalformedtlvvalueerrors.is_set || is_set(mplsldpentitystatsmalformedtlvvalueerrors.operation)) leaf_name_data.push_back(mplsldpentitystatsmalformedtlvvalueerrors.get_name_leafdata());
    if (mplsldpentitystatssessionattempts.is_set || is_set(mplsldpentitystatssessionattempts.operation)) leaf_name_data.push_back(mplsldpentitystatssessionattempts.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedaderrors.is_set || is_set(mplsldpentitystatssessionrejectedaderrors.operation)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedaderrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedlrerrors.is_set || is_set(mplsldpentitystatssessionrejectedlrerrors.operation)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedlrerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectedmaxpduerrors.is_set || is_set(mplsldpentitystatssessionrejectedmaxpduerrors.operation)) leaf_name_data.push_back(mplsldpentitystatssessionrejectedmaxpduerrors.get_name_leafdata());
    if (mplsldpentitystatssessionrejectednohelloerrors.is_set || is_set(mplsldpentitystatssessionrejectednohelloerrors.operation)) leaf_name_data.push_back(mplsldpentitystatssessionrejectednohelloerrors.get_name_leafdata());
    if (mplsldpentitystatsshutdownreceivednotifications.is_set || is_set(mplsldpentitystatsshutdownreceivednotifications.operation)) leaf_name_data.push_back(mplsldpentitystatsshutdownreceivednotifications.get_name_leafdata());
    if (mplsldpentitystatsshutdownsentnotifications.is_set || is_set(mplsldpentitystatsshutdownsentnotifications.operation)) leaf_name_data.push_back(mplsldpentitystatsshutdownsentnotifications.get_name_leafdata());
    if (mplsldpentitystoragetype.is_set || is_set(mplsldpentitystoragetype.operation)) leaf_name_data.push_back(mplsldpentitystoragetype.get_name_leafdata());
    if (mplsldpentitytargetpeer.is_set || is_set(mplsldpentitytargetpeer.operation)) leaf_name_data.push_back(mplsldpentitytargetpeer.get_name_leafdata());
    if (mplsldpentitytargetpeeraddr.is_set || is_set(mplsldpentitytargetpeeraddr.operation)) leaf_name_data.push_back(mplsldpentitytargetpeeraddr.get_name_leafdata());
    if (mplsldpentitytargetpeeraddrtype.is_set || is_set(mplsldpentitytargetpeeraddrtype.operation)) leaf_name_data.push_back(mplsldpentitytargetpeeraddrtype.get_name_leafdata());
    if (mplsldpentitytcpport.is_set || is_set(mplsldpentitytcpport.operation)) leaf_name_data.push_back(mplsldpentitytcpport.get_name_leafdata());
    if (mplsldpentitytransportaddrkind.is_set || is_set(mplsldpentitytransportaddrkind.operation)) leaf_name_data.push_back(mplsldpentitytransportaddrkind.get_name_leafdata());
    if (mplsldpentityudpdscport.is_set || is_set(mplsldpentityudpdscport.operation)) leaf_name_data.push_back(mplsldpentityudpdscport.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpEntityAdminStatus")
    {
        mplsldpentityadminstatus = value;
    }
    if(value_path == "mplsLdpEntityDiscontinuityTime")
    {
        mplsldpentitydiscontinuitytime = value;
    }
    if(value_path == "mplsLdpEntityHelloHoldTimer")
    {
        mplsldpentityhelloholdtimer = value;
    }
    if(value_path == "mplsLdpEntityHopCountLimit")
    {
        mplsldpentityhopcountlimit = value;
    }
    if(value_path == "mplsLdpEntityInitSessionThreshold")
    {
        mplsldpentityinitsessionthreshold = value;
    }
    if(value_path == "mplsLdpEntityKeepAliveHoldTimer")
    {
        mplsldpentitykeepaliveholdtimer = value;
    }
    if(value_path == "mplsLdpEntityLabelDistMethod")
    {
        mplsldpentitylabeldistmethod = value;
    }
    if(value_path == "mplsLdpEntityLabelRetentionMode")
    {
        mplsldpentitylabelretentionmode = value;
    }
    if(value_path == "mplsLdpEntityLabelType")
    {
        mplsldpentitylabeltype = value;
    }
    if(value_path == "mplsLdpEntityMaxPduLength")
    {
        mplsldpentitymaxpdulength = value;
    }
    if(value_path == "mplsLdpEntityOperStatus")
    {
        mplsldpentityoperstatus = value;
    }
    if(value_path == "mplsLdpEntityPathVectorLimit")
    {
        mplsldpentitypathvectorlimit = value;
    }
    if(value_path == "mplsLdpEntityProtocolVersion")
    {
        mplsldpentityprotocolversion = value;
    }
    if(value_path == "mplsLdpEntityRowStatus")
    {
        mplsldpentityrowstatus = value;
    }
    if(value_path == "mplsLdpEntityStatsBadLdpIdentifierErrors")
    {
        mplsldpentitystatsbadldpidentifiererrors = value;
    }
    if(value_path == "mplsLdpEntityStatsBadMessageLengthErrors")
    {
        mplsldpentitystatsbadmessagelengtherrors = value;
    }
    if(value_path == "mplsLdpEntityStatsBadPduLengthErrors")
    {
        mplsldpentitystatsbadpdulengtherrors = value;
    }
    if(value_path == "mplsLdpEntityStatsBadTlvLengthErrors")
    {
        mplsldpentitystatsbadtlvlengtherrors = value;
    }
    if(value_path == "mplsLdpEntityStatsKeepAliveTimerExpErrors")
    {
        mplsldpentitystatskeepalivetimerexperrors = value;
    }
    if(value_path == "mplsLdpEntityStatsMalformedTlvValueErrors")
    {
        mplsldpentitystatsmalformedtlvvalueerrors = value;
    }
    if(value_path == "mplsLdpEntityStatsSessionAttempts")
    {
        mplsldpentitystatssessionattempts = value;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedAdErrors")
    {
        mplsldpentitystatssessionrejectedaderrors = value;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedLRErrors")
    {
        mplsldpentitystatssessionrejectedlrerrors = value;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedMaxPduErrors")
    {
        mplsldpentitystatssessionrejectedmaxpduerrors = value;
    }
    if(value_path == "mplsLdpEntityStatsSessionRejectedNoHelloErrors")
    {
        mplsldpentitystatssessionrejectednohelloerrors = value;
    }
    if(value_path == "mplsLdpEntityStatsShutdownReceivedNotifications")
    {
        mplsldpentitystatsshutdownreceivednotifications = value;
    }
    if(value_path == "mplsLdpEntityStatsShutdownSentNotifications")
    {
        mplsldpentitystatsshutdownsentnotifications = value;
    }
    if(value_path == "mplsLdpEntityStorageType")
    {
        mplsldpentitystoragetype = value;
    }
    if(value_path == "mplsLdpEntityTargetPeer")
    {
        mplsldpentitytargetpeer = value;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddr")
    {
        mplsldpentitytargetpeeraddr = value;
    }
    if(value_path == "mplsLdpEntityTargetPeerAddrType")
    {
        mplsldpentitytargetpeeraddrtype = value;
    }
    if(value_path == "mplsLdpEntityTcpPort")
    {
        mplsldpentitytcpport = value;
    }
    if(value_path == "mplsLdpEntityTransportAddrKind")
    {
        mplsldpentitytransportaddrkind = value;
    }
    if(value_path == "mplsLdpEntityUdpDscPort")
    {
        mplsldpentityudpdscport = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsldppeertable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsldppeerlabeldistmethod.operation)
	|| is_set(mplsldppeerpathvectorlimit.operation)
	|| is_set(mplsldppeertransportaddr.operation)
	|| is_set(mplsldppeertransportaddrtype.operation)
	|| is_set(mplsldpsessiondiscontinuitytime.operation)
	|| is_set(mplsldpsessionkeepaliveholdtimerem.operation)
	|| is_set(mplsldpsessionkeepalivetime.operation)
	|| is_set(mplsldpsessionmaxpdulength.operation)
	|| is_set(mplsldpsessionprotocolversion.operation)
	|| is_set(mplsldpsessionrole.operation)
	|| is_set(mplsldpsessionstate.operation)
	|| is_set(mplsldpsessionstatelastchange.operation)
	|| is_set(mplsldpsessionstatsunknownmestypeerrors.operation)
	|| is_set(mplsldpsessionstatsunknowntlverrors.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldppeerlabeldistmethod.is_set || is_set(mplsldppeerlabeldistmethod.operation)) leaf_name_data.push_back(mplsldppeerlabeldistmethod.get_name_leafdata());
    if (mplsldppeerpathvectorlimit.is_set || is_set(mplsldppeerpathvectorlimit.operation)) leaf_name_data.push_back(mplsldppeerpathvectorlimit.get_name_leafdata());
    if (mplsldppeertransportaddr.is_set || is_set(mplsldppeertransportaddr.operation)) leaf_name_data.push_back(mplsldppeertransportaddr.get_name_leafdata());
    if (mplsldppeertransportaddrtype.is_set || is_set(mplsldppeertransportaddrtype.operation)) leaf_name_data.push_back(mplsldppeertransportaddrtype.get_name_leafdata());
    if (mplsldpsessiondiscontinuitytime.is_set || is_set(mplsldpsessiondiscontinuitytime.operation)) leaf_name_data.push_back(mplsldpsessiondiscontinuitytime.get_name_leafdata());
    if (mplsldpsessionkeepaliveholdtimerem.is_set || is_set(mplsldpsessionkeepaliveholdtimerem.operation)) leaf_name_data.push_back(mplsldpsessionkeepaliveholdtimerem.get_name_leafdata());
    if (mplsldpsessionkeepalivetime.is_set || is_set(mplsldpsessionkeepalivetime.operation)) leaf_name_data.push_back(mplsldpsessionkeepalivetime.get_name_leafdata());
    if (mplsldpsessionmaxpdulength.is_set || is_set(mplsldpsessionmaxpdulength.operation)) leaf_name_data.push_back(mplsldpsessionmaxpdulength.get_name_leafdata());
    if (mplsldpsessionprotocolversion.is_set || is_set(mplsldpsessionprotocolversion.operation)) leaf_name_data.push_back(mplsldpsessionprotocolversion.get_name_leafdata());
    if (mplsldpsessionrole.is_set || is_set(mplsldpsessionrole.operation)) leaf_name_data.push_back(mplsldpsessionrole.get_name_leafdata());
    if (mplsldpsessionstate.is_set || is_set(mplsldpsessionstate.operation)) leaf_name_data.push_back(mplsldpsessionstate.get_name_leafdata());
    if (mplsldpsessionstatelastchange.is_set || is_set(mplsldpsessionstatelastchange.operation)) leaf_name_data.push_back(mplsldpsessionstatelastchange.get_name_leafdata());
    if (mplsldpsessionstatsunknownmestypeerrors.is_set || is_set(mplsldpsessionstatsunknownmestypeerrors.operation)) leaf_name_data.push_back(mplsldpsessionstatsunknownmestypeerrors.get_name_leafdata());
    if (mplsldpsessionstatsunknowntlverrors.is_set || is_set(mplsldpsessionstatsunknowntlverrors.operation)) leaf_name_data.push_back(mplsldpsessionstatsunknowntlverrors.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsLdpPeerLabelDistMethod")
    {
        mplsldppeerlabeldistmethod = value;
    }
    if(value_path == "mplsLdpPeerPathVectorLimit")
    {
        mplsldppeerpathvectorlimit = value;
    }
    if(value_path == "mplsLdpPeerTransportAddr")
    {
        mplsldppeertransportaddr = value;
    }
    if(value_path == "mplsLdpPeerTransportAddrType")
    {
        mplsldppeertransportaddrtype = value;
    }
    if(value_path == "mplsLdpSessionDiscontinuityTime")
    {
        mplsldpsessiondiscontinuitytime = value;
    }
    if(value_path == "mplsLdpSessionKeepAliveHoldTimeRem")
    {
        mplsldpsessionkeepaliveholdtimerem = value;
    }
    if(value_path == "mplsLdpSessionKeepAliveTime")
    {
        mplsldpsessionkeepalivetime = value;
    }
    if(value_path == "mplsLdpSessionMaxPduLength")
    {
        mplsldpsessionmaxpdulength = value;
    }
    if(value_path == "mplsLdpSessionProtocolVersion")
    {
        mplsldpsessionprotocolversion = value;
    }
    if(value_path == "mplsLdpSessionRole")
    {
        mplsldpsessionrole = value;
    }
    if(value_path == "mplsLdpSessionState")
    {
        mplsldpsessionstate = value;
    }
    if(value_path == "mplsLdpSessionStateLastChange")
    {
        mplsldpsessionstatelastchange = value;
    }
    if(value_path == "mplsLdpSessionStatsUnknownMesTypeErrors")
    {
        mplsldpsessionstatsunknownmestypeerrors = value;
    }
    if(value_path == "mplsLdpSessionStatsUnknownTlvErrors")
    {
        mplsldpsessionstatsunknowntlverrors = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsldphelloadjacencytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsldphelloadjacencyindex.operation)
	|| is_set(mplsldphelloadjacencyholdtime.operation)
	|| is_set(mplsldphelloadjacencyholdtimerem.operation)
	|| is_set(mplsldphelloadjacencytype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldphelloadjacencyindex.is_set || is_set(mplsldphelloadjacencyindex.operation)) leaf_name_data.push_back(mplsldphelloadjacencyindex.get_name_leafdata());
    if (mplsldphelloadjacencyholdtime.is_set || is_set(mplsldphelloadjacencyholdtime.operation)) leaf_name_data.push_back(mplsldphelloadjacencyholdtime.get_name_leafdata());
    if (mplsldphelloadjacencyholdtimerem.is_set || is_set(mplsldphelloadjacencyholdtimerem.operation)) leaf_name_data.push_back(mplsldphelloadjacencyholdtimerem.get_name_leafdata());
    if (mplsldphelloadjacencytype.is_set || is_set(mplsldphelloadjacencytype.operation)) leaf_name_data.push_back(mplsldphelloadjacencytype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsLdpHelloAdjacencyIndex")
    {
        mplsldphelloadjacencyindex = value;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTime")
    {
        mplsldphelloadjacencyholdtime = value;
    }
    if(value_path == "mplsLdpHelloAdjacencyHoldTimeRem")
    {
        mplsldphelloadjacencyholdtimerem = value;
    }
    if(value_path == "mplsLdpHelloAdjacencyType")
    {
        mplsldphelloadjacencytype = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsinsegmentldplsptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsinsegmentldplspindex.operation)
	|| is_set(mplsinsegmentldplsplabeltype.operation)
	|| is_set(mplsinsegmentldplsptype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsinsegmentldplspindex.is_set || is_set(mplsinsegmentldplspindex.operation)) leaf_name_data.push_back(mplsinsegmentldplspindex.get_name_leafdata());
    if (mplsinsegmentldplsplabeltype.is_set || is_set(mplsinsegmentldplsplabeltype.operation)) leaf_name_data.push_back(mplsinsegmentldplsplabeltype.get_name_leafdata());
    if (mplsinsegmentldplsptype.is_set || is_set(mplsinsegmentldplsptype.operation)) leaf_name_data.push_back(mplsinsegmentldplsptype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsInSegmentLdpLspIndex")
    {
        mplsinsegmentldplspindex = value;
    }
    if(value_path == "mplsInSegmentLdpLspLabelType")
    {
        mplsinsegmentldplsplabeltype = value;
    }
    if(value_path == "mplsInSegmentLdpLspType")
    {
        mplsinsegmentldplsptype = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsoutsegmentldplsptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsoutsegmentldplspindex.operation)
	|| is_set(mplsoutsegmentldplsplabeltype.operation)
	|| is_set(mplsoutsegmentldplsptype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsoutsegmentldplspindex.is_set || is_set(mplsoutsegmentldplspindex.operation)) leaf_name_data.push_back(mplsoutsegmentldplspindex.get_name_leafdata());
    if (mplsoutsegmentldplsplabeltype.is_set || is_set(mplsoutsegmentldplsplabeltype.operation)) leaf_name_data.push_back(mplsoutsegmentldplsplabeltype.get_name_leafdata());
    if (mplsoutsegmentldplsptype.is_set || is_set(mplsoutsegmentldplsptype.operation)) leaf_name_data.push_back(mplsoutsegmentldplsptype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsOutSegmentLdpLspIndex")
    {
        mplsoutsegmentldplspindex = value;
    }
    if(value_path == "mplsOutSegmentLdpLspLabelType")
    {
        mplsoutsegmentldplsplabeltype = value;
    }
    if(value_path == "mplsOutSegmentLdpLspType")
    {
        mplsoutsegmentldplsptype = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsfectable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsfecindex.operation)
	|| is_set(mplsfecaddr.operation)
	|| is_set(mplsfecaddrprefixlength.operation)
	|| is_set(mplsfecaddrtype.operation)
	|| is_set(mplsfecrowstatus.operation)
	|| is_set(mplsfecstoragetype.operation)
	|| is_set(mplsfectype.operation);
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

    if (mplsfecindex.is_set || is_set(mplsfecindex.operation)) leaf_name_data.push_back(mplsfecindex.get_name_leafdata());
    if (mplsfecaddr.is_set || is_set(mplsfecaddr.operation)) leaf_name_data.push_back(mplsfecaddr.get_name_leafdata());
    if (mplsfecaddrprefixlength.is_set || is_set(mplsfecaddrprefixlength.operation)) leaf_name_data.push_back(mplsfecaddrprefixlength.get_name_leafdata());
    if (mplsfecaddrtype.is_set || is_set(mplsfecaddrtype.operation)) leaf_name_data.push_back(mplsfecaddrtype.get_name_leafdata());
    if (mplsfecrowstatus.is_set || is_set(mplsfecrowstatus.operation)) leaf_name_data.push_back(mplsfecrowstatus.get_name_leafdata());
    if (mplsfecstoragetype.is_set || is_set(mplsfecstoragetype.operation)) leaf_name_data.push_back(mplsfecstoragetype.get_name_leafdata());
    if (mplsfectype.is_set || is_set(mplsfectype.operation)) leaf_name_data.push_back(mplsfectype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsfectable::Mplsfecentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsFecIndex")
    {
        mplsfecindex = value;
    }
    if(value_path == "mplsFecAddr")
    {
        mplsfecaddr = value;
    }
    if(value_path == "mplsFecAddrPrefixLength")
    {
        mplsfecaddrprefixlength = value;
    }
    if(value_path == "mplsFecAddrType")
    {
        mplsfecaddrtype = value;
    }
    if(value_path == "mplsFecRowStatus")
    {
        mplsfecrowstatus = value;
    }
    if(value_path == "mplsFecStorageType")
    {
        mplsfecstoragetype = value;
    }
    if(value_path == "mplsFecType")
    {
        mplsfectype = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsldplspfectable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsldplspfecsegment.operation)
	|| is_set(mplsldplspfecsegmentindex.operation)
	|| is_set(mplsldplspfecindex.operation)
	|| is_set(mplsldplspfecrowstatus.operation)
	|| is_set(mplsldplspfecstoragetype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldplspfecsegment.is_set || is_set(mplsldplspfecsegment.operation)) leaf_name_data.push_back(mplsldplspfecsegment.get_name_leafdata());
    if (mplsldplspfecsegmentindex.is_set || is_set(mplsldplspfecsegmentindex.operation)) leaf_name_data.push_back(mplsldplspfecsegmentindex.get_name_leafdata());
    if (mplsldplspfecindex.is_set || is_set(mplsldplspfecindex.operation)) leaf_name_data.push_back(mplsldplspfecindex.get_name_leafdata());
    if (mplsldplspfecrowstatus.is_set || is_set(mplsldplspfecrowstatus.operation)) leaf_name_data.push_back(mplsldplspfecrowstatus.get_name_leafdata());
    if (mplsldplspfecstoragetype.is_set || is_set(mplsldplspfecstoragetype.operation)) leaf_name_data.push_back(mplsldplspfecstoragetype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsLdpLspFecSegment")
    {
        mplsldplspfecsegment = value;
    }
    if(value_path == "mplsLdpLspFecSegmentIndex")
    {
        mplsldplspfecsegmentindex = value;
    }
    if(value_path == "mplsLdpLspFecIndex")
    {
        mplsldplspfecindex = value;
    }
    if(value_path == "mplsLdpLspFecRowStatus")
    {
        mplsldplspfecrowstatus = value;
    }
    if(value_path == "mplsLdpLspFecStorageType")
    {
        mplsldplspfecstoragetype = value;
    }
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
    return is_set(operation);
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

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldppeerldpid.operation)
	|| is_set(mplsldpsessionpeeraddrindex.operation)
	|| is_set(mplsldpsessionpeernexthopaddr.operation)
	|| is_set(mplsldpsessionpeernexthopaddrtype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldppeerldpid.is_set || is_set(mplsldppeerldpid.operation)) leaf_name_data.push_back(mplsldppeerldpid.get_name_leafdata());
    if (mplsldpsessionpeeraddrindex.is_set || is_set(mplsldpsessionpeeraddrindex.operation)) leaf_name_data.push_back(mplsldpsessionpeeraddrindex.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddr.is_set || is_set(mplsldpsessionpeernexthopaddr.operation)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddr.get_name_leafdata());
    if (mplsldpsessionpeernexthopaddrtype.is_set || is_set(mplsldpsessionpeernexthopaddrtype.operation)) leaf_name_data.push_back(mplsldpsessionpeernexthopaddrtype.get_name_leafdata());


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

void MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpPeerLdpId")
    {
        mplsldppeerldpid = value;
    }
    if(value_path == "mplsLdpSessionPeerAddrIndex")
    {
        mplsldpsessionpeeraddrindex = value;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddr")
    {
        mplsldpsessionpeernexthopaddr = value;
    }
    if(value_path == "mplsLdpSessionPeerNextHopAddrType")
    {
        mplsldpsessionpeernexthopaddrtype = value;
    }
}

const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum::none {1, "none"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum::other {2, "other"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum::hopCount {3, "hopCount"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum::pathVector {4, "pathVector"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum::hopCountAndPathVector {5, "hopCountAndPathVector"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityadminstatusEnum::enable {1, "enable"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityadminstatusEnum::disable {2, "disable"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityoperstatusEnum::unknown {1, "unknown"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityoperstatusEnum::enabled {2, "enabled"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityoperstatusEnum::disabled {3, "disabled"};

const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentitytransportaddrkindEnum::interface {1, "interface"};
const Enum::YLeaf MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentitytransportaddrkindEnum::loopback {2, "loopback"};

const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum::nonexistent {1, "nonexistent"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum::initialized {2, "initialized"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum::openrec {3, "openrec"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum::opensent {4, "opensent"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum::operational {5, "operational"};

const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionroleEnum::unknown {1, "unknown"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionroleEnum::active {2, "active"};
const Enum::YLeaf MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionroleEnum::passive {3, "passive"};

const Enum::YLeaf MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::MplsldphelloadjacencytypeEnum::link {1, "link"};
const Enum::YLeaf MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::MplsldphelloadjacencytypeEnum::targeted {2, "targeted"};

const Enum::YLeaf MplsLdpStdMib::Mplsfectable::Mplsfecentry::MplsfectypeEnum::prefix {1, "prefix"};
const Enum::YLeaf MplsLdpStdMib::Mplsfectable::Mplsfecentry::MplsfectypeEnum::hostAddress {2, "hostAddress"};

const Enum::YLeaf MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::MplsldplspfecsegmentEnum::inSegment {1, "inSegment"};
const Enum::YLeaf MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::MplsldplspfecsegmentEnum::outSegment {2, "outSegment"};


}
}

