
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LDP_GENERIC_STD_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void MplsLdpGenericStdMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation);
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

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsldpentityldpid.operation)
	|| is_set(mplsldpentityindex.operation)
	|| is_set(mplsldpentitygenericlrmin.operation)
	|| is_set(mplsldpentitygenericlrmax.operation)
	|| is_set(mplsldpentitygenericifindexorzero.operation)
	|| is_set(mplsldpentitygenericlabelspace.operation)
	|| is_set(mplsldpentitygenericlrrowstatus.operation)
	|| is_set(mplsldpentitygenericlrstoragetype.operation);
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

    if (mplsldpentityldpid.is_set || is_set(mplsldpentityldpid.operation)) leaf_name_data.push_back(mplsldpentityldpid.get_name_leafdata());
    if (mplsldpentityindex.is_set || is_set(mplsldpentityindex.operation)) leaf_name_data.push_back(mplsldpentityindex.get_name_leafdata());
    if (mplsldpentitygenericlrmin.is_set || is_set(mplsldpentitygenericlrmin.operation)) leaf_name_data.push_back(mplsldpentitygenericlrmin.get_name_leafdata());
    if (mplsldpentitygenericlrmax.is_set || is_set(mplsldpentitygenericlrmax.operation)) leaf_name_data.push_back(mplsldpentitygenericlrmax.get_name_leafdata());
    if (mplsldpentitygenericifindexorzero.is_set || is_set(mplsldpentitygenericifindexorzero.operation)) leaf_name_data.push_back(mplsldpentitygenericifindexorzero.get_name_leafdata());
    if (mplsldpentitygenericlabelspace.is_set || is_set(mplsldpentitygenericlabelspace.operation)) leaf_name_data.push_back(mplsldpentitygenericlabelspace.get_name_leafdata());
    if (mplsldpentitygenericlrrowstatus.is_set || is_set(mplsldpentitygenericlrrowstatus.operation)) leaf_name_data.push_back(mplsldpentitygenericlrrowstatus.get_name_leafdata());
    if (mplsldpentitygenericlrstoragetype.is_set || is_set(mplsldpentitygenericlrstoragetype.operation)) leaf_name_data.push_back(mplsldpentitygenericlrstoragetype.get_name_leafdata());


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

void MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLdpEntityLdpId")
    {
        mplsldpentityldpid = value;
    }
    if(value_path == "mplsLdpEntityIndex")
    {
        mplsldpentityindex = value;
    }
    if(value_path == "mplsLdpEntityGenericLRMin")
    {
        mplsldpentitygenericlrmin = value;
    }
    if(value_path == "mplsLdpEntityGenericLRMax")
    {
        mplsldpentitygenericlrmax = value;
    }
    if(value_path == "mplsLdpEntityGenericIfIndexOrZero")
    {
        mplsldpentitygenericifindexorzero = value;
    }
    if(value_path == "mplsLdpEntityGenericLabelSpace")
    {
        mplsldpentitygenericlabelspace = value;
    }
    if(value_path == "mplsLdpEntityGenericLRRowStatus")
    {
        mplsldpentitygenericlrrowstatus = value;
    }
    if(value_path == "mplsLdpEntityGenericLRStorageType")
    {
        mplsldpentitygenericlrstoragetype = value;
    }
}

const Enum::YLeaf MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::MplsldpentitygenericlabelspaceEnum::perPlatform {1, "perPlatform"};
const Enum::YLeaf MplsLdpGenericStdMib::Mplsldpentitygenericlrtable::Mplsldpentitygenericlrentry::MplsldpentitygenericlabelspaceEnum::perInterface {2, "perInterface"};


}
}

