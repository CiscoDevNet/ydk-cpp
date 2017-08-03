
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_GENERIC_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LDP_GENERIC_STD_MIB {

MplsLdpGenericStdMib::MplsLdpGenericStdMib()
    :
    mplsldpentitygenericlrtable(std::make_shared<MplsLdpGenericStdMib::Mplsldpentitygenericlrtable>())
{
    mplsldpentitygenericlrtable->parent = this;

    yang_name = "MPLS-LDP-GENERIC-STD-MIB"; yang_parent_name = "MPLS-LDP-GENERIC-STD-MIB";
}

MplsLdpGenericStdMib::~MplsLdpGenericStdMib()
{
}

bool MplsLdpGenericStdMib::has_data() const
{
    return (mplsldpentitygenericlrtable !=  nullptr && mplsldpentitygenericlrtable->has_data());
}

bool MplsLdpGenericStdMib::has_operation() const
{
    return is_set(yfilter)
	|| (mplsldpentitygenericlrtable !=  nullptr && mplsldpentitygenericlrtable->has_operation());
}

std::string MplsLdpGenericStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB";

    return path_buffer.str();

}

const EntityPath MplsLdpGenericStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLdpGenericStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityGenericLRTable")
    {
        if(mplsldpentitygenericlrtable == nullptr)
        {
            mplsldpentitygenericlrtable = std::make_shared<MplsLdpGenericStdMib::Mplsldpentitygenericlrtable>();
        }
        return mplsldpentitygenericlrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpGenericStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsldpentitygenericlrtable != nullptr)
    {
        children["mplsLdpEntityGenericLRTable"] = mplsldpentitygenericlrtable;
    }

    return children;
}

void MplsLdpGenericStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpGenericStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLdpGenericStdMib::clone_ptr() const
{
    return std::make_shared<MplsLdpGenericStdMib>();
}

std::string MplsLdpGenericStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsLdpGenericStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsLdpGenericStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLdpGenericStdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsLdpGenericStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityGenericLRTable")
        return true;
    return false;
}

MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrtable()
{
    yang_name = "mplsLdpEntityGenericLRTable"; yang_parent_name = "MPLS-LDP-GENERIC-STD-MIB";
}

MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::~Mplsldpentitygenericlrtable()
{
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::has_data() const
{
    for (std::size_t index=0; index<mplsldpentitygenericlrentry.size(); index++)
    {
        if(mplsldpentitygenericlrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::has_operation() const
{
    for (std::size_t index=0; index<mplsldpentitygenericlrentry.size(); index++)
    {
        if(mplsldpentitygenericlrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityGenericLRTable";

    return path_buffer.str();

}

const EntityPath MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLdpEntityGenericLREntry")
    {
        for(auto const & c : mplsldpentitygenericlrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry>();
        c->parent = this;
        mplsldpentitygenericlrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsldpentitygenericlrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityGenericLREntry")
        return true;
    return false;
}

MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::Mplsldpentitygenericlrentry()
    :
    mplsldpentityldpid{YType::str, "mplsLdpEntityLdpId"},
    mplsldpentityindex{YType::str, "mplsLdpEntityIndex"},
    mplsldpentitygenericlrmin{YType::uint32, "mplsLdpEntityGenericLRMin"},
    mplsldpentitygenericlrmax{YType::uint32, "mplsLdpEntityGenericLRMax"},
    mplsldpentitygenericifindexorzero{YType::int32, "mplsLdpEntityGenericIfIndexOrZero"},
    mplsldpentitygenericlabelspace{YType::enumeration, "mplsLdpEntityGenericLabelSpace"},
    mplsldpentitygenericlrrowstatus{YType::enumeration, "mplsLdpEntityGenericLRRowStatus"},
    mplsldpentitygenericlrstoragetype{YType::enumeration, "mplsLdpEntityGenericLRStorageType"}
{
    yang_name = "mplsLdpEntityGenericLREntry"; yang_parent_name = "mplsLdpEntityGenericLRTable";
}

MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::~Mplsldpentitygenericlrentry()
{
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::has_data() const
{
    return mplsldpentityldpid.is_set
	|| mplsldpentityindex.is_set
	|| mplsldpentitygenericlrmin.is_set
	|| mplsldpentitygenericlrmax.is_set
	|| mplsldpentitygenericifindexorzero.is_set
	|| mplsldpentitygenericlabelspace.is_set
	|| mplsldpentitygenericlrrowstatus.is_set
	|| mplsldpentitygenericlrstoragetype.is_set;
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsldpentityldpid.yfilter)
	|| ydk::is_set(mplsldpentityindex.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrmin.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrmax.yfilter)
	|| ydk::is_set(mplsldpentitygenericifindexorzero.yfilter)
	|| ydk::is_set(mplsldpentitygenericlabelspace.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrrowstatus.yfilter)
	|| ydk::is_set(mplsldpentitygenericlrstoragetype.yfilter);
}

std::string MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLdpEntityGenericLREntry" <<"[mplsLdpEntityLdpId='" <<mplsldpentityldpid <<"']" <<"[mplsLdpEntityIndex='" <<mplsldpentityindex <<"']" <<"[mplsLdpEntityGenericLRMin='" <<mplsldpentitygenericlrmin <<"']" <<"[mplsLdpEntityGenericLRMax='" <<mplsldpentitygenericlrmax <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LDP-GENERIC-STD-MIB:MPLS-LDP-GENERIC-STD-MIB/mplsLdpEntityGenericLRTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.yfilter)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.yfilter)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentitygenericlrmin.is_set || is_set(mplsldpentitygenericlrmin.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrmin.get_name_leafdata());
    if (mplsldpentitygenericlrmax.is_set || is_set(mplsldpentitygenericlrmax.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrmax.get_name_leafdata());
    if (mplsldpentitygenericifindexorzero.is_set || is_set(mplsldpentitygenericifindexorzero.yfilter)) leaf_name_data.push_back(mplsldpentitygenericifindexorzero.get_name_leafdata());
    if (mplsldpentitygenericlabelspace.is_set || is_set(mplsldpentitygenericlabelspace.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlabelspace.get_name_leafdata());
    if (mplsldpentitygenericlrrowstatus.is_set || is_set(mplsldpentitygenericlrrowstatus.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrrowstatus.get_name_leafdata());
    if (mplsldpentitygenericlrstoragetype.is_set || is_set(mplsldpentitygenericlrstoragetype.yfilter)) leaf_name_data.push_back(mplsldpentitygenericlrstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsLdpEntityGenericIfIndexOrZero")
    {
        mplsldpentitygenericifindexorzero = value;
        mplsldpentitygenericifindexorzero.value_namespace = name_space;
        mplsldpentitygenericifindexorzero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLabelSpace")
    {
        mplsldpentitygenericlabelspace = value;
        mplsldpentitygenericlabelspace.value_namespace = name_space;
        mplsldpentitygenericlabelspace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRRowStatus")
    {
        mplsldpentitygenericlrrowstatus = value;
        mplsldpentitygenericlrrowstatus.value_namespace = name_space;
        mplsldpentitygenericlrrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLdpEntityGenericLRStorageType")
    {
        mplsldpentitygenericlrstoragetype = value;
        mplsldpentitygenericlrstoragetype.value_namespace = name_space;
        mplsldpentitygenericlrstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsLdpEntityGenericIfIndexOrZero")
    {
        mplsldpentitygenericifindexorzero.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLabelSpace")
    {
        mplsldpentitygenericlabelspace.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRRowStatus")
    {
        mplsldpentitygenericlrrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLdpEntityGenericLRStorageType")
    {
        mplsldpentitygenericlrstoragetype.yfilter = yfilter;
    }
}

bool MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLdpEntityLdpId" || name == "mplsLdpEntityIndex" || name == "mplsLdpEntityGenericLRMin" || name == "mplsLdpEntityGenericLRMax" || name == "mplsLdpEntityGenericIfIndexOrZero" || name == "mplsLdpEntityGenericLabelSpace" || name == "mplsLdpEntityGenericLRRowStatus" || name == "mplsLdpEntityGenericLRStorageType")
        return true;
    return false;
}

const Enum::YLeaf MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::Mplsldpentitygenericlabelspace::perPlatform {1, "perPlatform"};
const Enum::YLeaf MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::Mplsldpentitygenericlabelspace::perInterface {2, "perInterface"};


}
}

