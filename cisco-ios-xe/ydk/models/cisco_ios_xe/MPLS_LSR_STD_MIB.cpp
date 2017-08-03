
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LSR_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LSR_STD_MIB {

MplsLsrStdMib::MplsLsrStdMib()
    :
    mplsinsegmentmaptable(std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable>())
	,mplsinsegmenttable(std::make_shared<MplsLsrStdMib::Mplsinsegmenttable>())
	,mplsinterfacetable(std::make_shared<MplsLsrStdMib::Mplsinterfacetable>())
	,mplslabelstacktable(std::make_shared<MplsLsrStdMib::Mplslabelstacktable>())
	,mplslsrobjects(std::make_shared<MplsLsrStdMib::Mplslsrobjects>())
	,mplsoutsegmenttable(std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable>())
	,mplsxctable(std::make_shared<MplsLsrStdMib::Mplsxctable>())
{
    mplsinsegmentmaptable->parent = this;

    mplsinsegmenttable->parent = this;

    mplsinterfacetable->parent = this;

    mplslabelstacktable->parent = this;

    mplslsrobjects->parent = this;

    mplsoutsegmenttable->parent = this;

    mplsxctable->parent = this;

    yang_name = "MPLS-LSR-STD-MIB"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::~MplsLsrStdMib()
{
}

bool MplsLsrStdMib::has_data() const
{
    return (mplsinsegmentmaptable !=  nullptr && mplsinsegmentmaptable->has_data())
	|| (mplsinsegmenttable !=  nullptr && mplsinsegmenttable->has_data())
	|| (mplsinterfacetable !=  nullptr && mplsinterfacetable->has_data())
	|| (mplslabelstacktable !=  nullptr && mplslabelstacktable->has_data())
	|| (mplslsrobjects !=  nullptr && mplslsrobjects->has_data())
	|| (mplsoutsegmenttable !=  nullptr && mplsoutsegmenttable->has_data())
	|| (mplsxctable !=  nullptr && mplsxctable->has_data());
}

bool MplsLsrStdMib::has_operation() const
{
    return is_set(yfilter)
	|| (mplsinsegmentmaptable !=  nullptr && mplsinsegmentmaptable->has_operation())
	|| (mplsinsegmenttable !=  nullptr && mplsinsegmenttable->has_operation())
	|| (mplsinterfacetable !=  nullptr && mplsinterfacetable->has_operation())
	|| (mplslabelstacktable !=  nullptr && mplslabelstacktable->has_operation())
	|| (mplslsrobjects !=  nullptr && mplslsrobjects->has_operation())
	|| (mplsoutsegmenttable !=  nullptr && mplsoutsegmenttable->has_operation())
	|| (mplsxctable !=  nullptr && mplsxctable->has_operation());
}

std::string MplsLsrStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLsrStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentMapTable")
    {
        if(mplsinsegmentmaptable == nullptr)
        {
            mplsinsegmentmaptable = std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable>();
        }
        return mplsinsegmentmaptable;
    }

    if(child_yang_name == "mplsInSegmentTable")
    {
        if(mplsinsegmenttable == nullptr)
        {
            mplsinsegmenttable = std::make_shared<MplsLsrStdMib::Mplsinsegmenttable>();
        }
        return mplsinsegmenttable;
    }

    if(child_yang_name == "mplsInterfaceTable")
    {
        if(mplsinterfacetable == nullptr)
        {
            mplsinterfacetable = std::make_shared<MplsLsrStdMib::Mplsinterfacetable>();
        }
        return mplsinterfacetable;
    }

    if(child_yang_name == "mplsLabelStackTable")
    {
        if(mplslabelstacktable == nullptr)
        {
            mplslabelstacktable = std::make_shared<MplsLsrStdMib::Mplslabelstacktable>();
        }
        return mplslabelstacktable;
    }

    if(child_yang_name == "mplsLsrObjects")
    {
        if(mplslsrobjects == nullptr)
        {
            mplslsrobjects = std::make_shared<MplsLsrStdMib::Mplslsrobjects>();
        }
        return mplslsrobjects;
    }

    if(child_yang_name == "mplsOutSegmentTable")
    {
        if(mplsoutsegmenttable == nullptr)
        {
            mplsoutsegmenttable = std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable>();
        }
        return mplsoutsegmenttable;
    }

    if(child_yang_name == "mplsXCTable")
    {
        if(mplsxctable == nullptr)
        {
            mplsxctable = std::make_shared<MplsLsrStdMib::Mplsxctable>();
        }
        return mplsxctable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsinsegmentmaptable != nullptr)
    {
        children["mplsInSegmentMapTable"] = mplsinsegmentmaptable;
    }

    if(mplsinsegmenttable != nullptr)
    {
        children["mplsInSegmentTable"] = mplsinsegmenttable;
    }

    if(mplsinterfacetable != nullptr)
    {
        children["mplsInterfaceTable"] = mplsinterfacetable;
    }

    if(mplslabelstacktable != nullptr)
    {
        children["mplsLabelStackTable"] = mplslabelstacktable;
    }

    if(mplslsrobjects != nullptr)
    {
        children["mplsLsrObjects"] = mplslsrobjects;
    }

    if(mplsoutsegmenttable != nullptr)
    {
        children["mplsOutSegmentTable"] = mplsoutsegmenttable;
    }

    if(mplsxctable != nullptr)
    {
        children["mplsXCTable"] = mplsxctable;
    }

    return children;
}

void MplsLsrStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLsrStdMib::clone_ptr() const
{
    return std::make_shared<MplsLsrStdMib>();
}

std::string MplsLsrStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsLsrStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsLsrStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLsrStdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsLsrStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentMapTable" || name == "mplsInSegmentTable" || name == "mplsInterfaceTable" || name == "mplsLabelStackTable" || name == "mplsLsrObjects" || name == "mplsOutSegmentTable" || name == "mplsXCTable")
        return true;
    return false;
}

MplsLsrStdMib::Mplslsrobjects::Mplslsrobjects()
    :
    mplsinsegmentindexnext{YType::str, "mplsInSegmentIndexNext"},
    mplslabelstackindexnext{YType::str, "mplsLabelStackIndexNext"},
    mplsmaxlabelstackdepth{YType::uint32, "mplsMaxLabelStackDepth"},
    mplsoutsegmentindexnext{YType::str, "mplsOutSegmentIndexNext"},
    mplsxcindexnext{YType::str, "mplsXCIndexNext"},
    mplsxcnotificationsenable{YType::boolean, "mplsXCNotificationsEnable"}
{
    yang_name = "mplsLsrObjects"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplslsrobjects::~Mplslsrobjects()
{
}

bool MplsLsrStdMib::Mplslsrobjects::has_data() const
{
    return mplsinsegmentindexnext.is_set
	|| mplslabelstackindexnext.is_set
	|| mplsmaxlabelstackdepth.is_set
	|| mplsoutsegmentindexnext.is_set
	|| mplsxcindexnext.is_set
	|| mplsxcnotificationsenable.is_set;
}

bool MplsLsrStdMib::Mplslsrobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentindexnext.yfilter)
	|| ydk::is_set(mplslabelstackindexnext.yfilter)
	|| ydk::is_set(mplsmaxlabelstackdepth.yfilter)
	|| ydk::is_set(mplsoutsegmentindexnext.yfilter)
	|| ydk::is_set(mplsxcindexnext.yfilter)
	|| ydk::is_set(mplsxcnotificationsenable.yfilter);
}

std::string MplsLsrStdMib::Mplslsrobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLsrObjects";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplslsrobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentindexnext.is_set || is_set(mplsinsegmentindexnext.yfilter)) leaf_name_data.push_back(mplsinsegmentindexnext.get_name_leafdata());
    if (mplslabelstackindexnext.is_set || is_set(mplslabelstackindexnext.yfilter)) leaf_name_data.push_back(mplslabelstackindexnext.get_name_leafdata());
    if (mplsmaxlabelstackdepth.is_set || is_set(mplsmaxlabelstackdepth.yfilter)) leaf_name_data.push_back(mplsmaxlabelstackdepth.get_name_leafdata());
    if (mplsoutsegmentindexnext.is_set || is_set(mplsoutsegmentindexnext.yfilter)) leaf_name_data.push_back(mplsoutsegmentindexnext.get_name_leafdata());
    if (mplsxcindexnext.is_set || is_set(mplsxcindexnext.yfilter)) leaf_name_data.push_back(mplsxcindexnext.get_name_leafdata());
    if (mplsxcnotificationsenable.is_set || is_set(mplsxcnotificationsenable.yfilter)) leaf_name_data.push_back(mplsxcnotificationsenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplslsrobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplslsrobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplslsrobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInSegmentIndexNext")
    {
        mplsinsegmentindexnext = value;
        mplsinsegmentindexnext.value_namespace = name_space;
        mplsinsegmentindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackIndexNext")
    {
        mplslabelstackindexnext = value;
        mplslabelstackindexnext.value_namespace = name_space;
        mplslabelstackindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsMaxLabelStackDepth")
    {
        mplsmaxlabelstackdepth = value;
        mplsmaxlabelstackdepth.value_namespace = name_space;
        mplsmaxlabelstackdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentIndexNext")
    {
        mplsoutsegmentindexnext = value;
        mplsoutsegmentindexnext.value_namespace = name_space;
        mplsoutsegmentindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCIndexNext")
    {
        mplsxcindexnext = value;
        mplsxcindexnext.value_namespace = name_space;
        mplsxcindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCNotificationsEnable")
    {
        mplsxcnotificationsenable = value;
        mplsxcnotificationsenable.value_namespace = name_space;
        mplsxcnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplslsrobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInSegmentIndexNext")
    {
        mplsinsegmentindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackIndexNext")
    {
        mplslabelstackindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsMaxLabelStackDepth")
    {
        mplsmaxlabelstackdepth.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentIndexNext")
    {
        mplsoutsegmentindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsXCIndexNext")
    {
        mplsxcindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsXCNotificationsEnable")
    {
        mplsxcnotificationsenable.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplslsrobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentIndexNext" || name == "mplsLabelStackIndexNext" || name == "mplsMaxLabelStackDepth" || name == "mplsOutSegmentIndexNext" || name == "mplsXCIndexNext" || name == "mplsXCNotificationsEnable")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinterfacetable::Mplsinterfacetable()
{
    yang_name = "mplsInterfaceTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplsinterfacetable::~Mplsinterfacetable()
{
}

bool MplsLsrStdMib::Mplsinterfacetable::has_data() const
{
    for (std::size_t index=0; index<mplsinterfaceentry.size(); index++)
    {
        if(mplsinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<mplsinterfaceentry.size(); index++)
    {
        if(mplsinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplsinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInterfaceTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInterfaceEntry")
    {
        for(auto const & c : mplsinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry>();
        c->parent = this;
        mplsinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplsinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplsinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInterfaceEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::Mplsinterfaceentry()
    :
    mplsinterfaceindex{YType::int32, "mplsInterfaceIndex"},
    mplsinterfaceavailablebandwidth{YType::uint32, "mplsInterfaceAvailableBandwidth"},
    mplsinterfacelabelmaxin{YType::uint32, "mplsInterfaceLabelMaxIn"},
    mplsinterfacelabelmaxout{YType::uint32, "mplsInterfaceLabelMaxOut"},
    mplsinterfacelabelminin{YType::uint32, "mplsInterfaceLabelMinIn"},
    mplsinterfacelabelminout{YType::uint32, "mplsInterfaceLabelMinOut"},
    mplsinterfacelabelparticipationtype{YType::bits, "mplsInterfaceLabelParticipationType"},
    mplsinterfaceperfinlabellookupfailures{YType::uint32, "mplsInterfacePerfInLabelLookupFailures"},
    mplsinterfaceperfinlabelsinuse{YType::uint32, "mplsInterfacePerfInLabelsInUse"},
    mplsinterfaceperfoutfragmentedpkts{YType::uint32, "mplsInterfacePerfOutFragmentedPkts"},
    mplsinterfaceperfoutlabelsinuse{YType::uint32, "mplsInterfacePerfOutLabelsInUse"},
    mplsinterfacetotalbandwidth{YType::uint32, "mplsInterfaceTotalBandwidth"}
{
    yang_name = "mplsInterfaceEntry"; yang_parent_name = "mplsInterfaceTable";
}

MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::~Mplsinterfaceentry()
{
}

bool MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::has_data() const
{
    return mplsinterfaceindex.is_set
	|| mplsinterfaceavailablebandwidth.is_set
	|| mplsinterfacelabelmaxin.is_set
	|| mplsinterfacelabelmaxout.is_set
	|| mplsinterfacelabelminin.is_set
	|| mplsinterfacelabelminout.is_set
	|| mplsinterfacelabelparticipationtype.is_set
	|| mplsinterfaceperfinlabellookupfailures.is_set
	|| mplsinterfaceperfinlabelsinuse.is_set
	|| mplsinterfaceperfoutfragmentedpkts.is_set
	|| mplsinterfaceperfoutlabelsinuse.is_set
	|| mplsinterfacetotalbandwidth.is_set;
}

bool MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinterfaceindex.yfilter)
	|| ydk::is_set(mplsinterfaceavailablebandwidth.yfilter)
	|| ydk::is_set(mplsinterfacelabelmaxin.yfilter)
	|| ydk::is_set(mplsinterfacelabelmaxout.yfilter)
	|| ydk::is_set(mplsinterfacelabelminin.yfilter)
	|| ydk::is_set(mplsinterfacelabelminout.yfilter)
	|| ydk::is_set(mplsinterfacelabelparticipationtype.yfilter)
	|| ydk::is_set(mplsinterfaceperfinlabellookupfailures.yfilter)
	|| ydk::is_set(mplsinterfaceperfinlabelsinuse.yfilter)
	|| ydk::is_set(mplsinterfaceperfoutfragmentedpkts.yfilter)
	|| ydk::is_set(mplsinterfaceperfoutlabelsinuse.yfilter)
	|| ydk::is_set(mplsinterfacetotalbandwidth.yfilter);
}

std::string MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInterfaceEntry" <<"[mplsInterfaceIndex='" <<mplsinterfaceindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinterfaceindex.is_set || is_set(mplsinterfaceindex.yfilter)) leaf_name_data.push_back(mplsinterfaceindex.get_name_leafdata());
    if (mplsinterfaceavailablebandwidth.is_set || is_set(mplsinterfaceavailablebandwidth.yfilter)) leaf_name_data.push_back(mplsinterfaceavailablebandwidth.get_name_leafdata());
    if (mplsinterfacelabelmaxin.is_set || is_set(mplsinterfacelabelmaxin.yfilter)) leaf_name_data.push_back(mplsinterfacelabelmaxin.get_name_leafdata());
    if (mplsinterfacelabelmaxout.is_set || is_set(mplsinterfacelabelmaxout.yfilter)) leaf_name_data.push_back(mplsinterfacelabelmaxout.get_name_leafdata());
    if (mplsinterfacelabelminin.is_set || is_set(mplsinterfacelabelminin.yfilter)) leaf_name_data.push_back(mplsinterfacelabelminin.get_name_leafdata());
    if (mplsinterfacelabelminout.is_set || is_set(mplsinterfacelabelminout.yfilter)) leaf_name_data.push_back(mplsinterfacelabelminout.get_name_leafdata());
    if (mplsinterfacelabelparticipationtype.is_set || is_set(mplsinterfacelabelparticipationtype.yfilter)) leaf_name_data.push_back(mplsinterfacelabelparticipationtype.get_name_leafdata());
    if (mplsinterfaceperfinlabellookupfailures.is_set || is_set(mplsinterfaceperfinlabellookupfailures.yfilter)) leaf_name_data.push_back(mplsinterfaceperfinlabellookupfailures.get_name_leafdata());
    if (mplsinterfaceperfinlabelsinuse.is_set || is_set(mplsinterfaceperfinlabelsinuse.yfilter)) leaf_name_data.push_back(mplsinterfaceperfinlabelsinuse.get_name_leafdata());
    if (mplsinterfaceperfoutfragmentedpkts.is_set || is_set(mplsinterfaceperfoutfragmentedpkts.yfilter)) leaf_name_data.push_back(mplsinterfaceperfoutfragmentedpkts.get_name_leafdata());
    if (mplsinterfaceperfoutlabelsinuse.is_set || is_set(mplsinterfaceperfoutlabelsinuse.yfilter)) leaf_name_data.push_back(mplsinterfaceperfoutlabelsinuse.get_name_leafdata());
    if (mplsinterfacetotalbandwidth.is_set || is_set(mplsinterfacetotalbandwidth.yfilter)) leaf_name_data.push_back(mplsinterfacetotalbandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInterfaceIndex")
    {
        mplsinterfaceindex = value;
        mplsinterfaceindex.value_namespace = name_space;
        mplsinterfaceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceAvailableBandwidth")
    {
        mplsinterfaceavailablebandwidth = value;
        mplsinterfaceavailablebandwidth.value_namespace = name_space;
        mplsinterfaceavailablebandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMaxIn")
    {
        mplsinterfacelabelmaxin = value;
        mplsinterfacelabelmaxin.value_namespace = name_space;
        mplsinterfacelabelmaxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMaxOut")
    {
        mplsinterfacelabelmaxout = value;
        mplsinterfacelabelmaxout.value_namespace = name_space;
        mplsinterfacelabelmaxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMinIn")
    {
        mplsinterfacelabelminin = value;
        mplsinterfacelabelminin.value_namespace = name_space;
        mplsinterfacelabelminin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMinOut")
    {
        mplsinterfacelabelminout = value;
        mplsinterfacelabelminout.value_namespace = name_space;
        mplsinterfacelabelminout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelParticipationType")
    {
        mplsinterfacelabelparticipationtype[value] = true;
    }
    if(value_path == "mplsInterfacePerfInLabelLookupFailures")
    {
        mplsinterfaceperfinlabellookupfailures = value;
        mplsinterfaceperfinlabellookupfailures.value_namespace = name_space;
        mplsinterfaceperfinlabellookupfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfInLabelsInUse")
    {
        mplsinterfaceperfinlabelsinuse = value;
        mplsinterfaceperfinlabelsinuse.value_namespace = name_space;
        mplsinterfaceperfinlabelsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfOutFragmentedPkts")
    {
        mplsinterfaceperfoutfragmentedpkts = value;
        mplsinterfaceperfoutfragmentedpkts.value_namespace = name_space;
        mplsinterfaceperfoutfragmentedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfOutLabelsInUse")
    {
        mplsinterfaceperfoutlabelsinuse = value;
        mplsinterfaceperfoutlabelsinuse.value_namespace = name_space;
        mplsinterfaceperfoutlabelsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceTotalBandwidth")
    {
        mplsinterfacetotalbandwidth = value;
        mplsinterfacetotalbandwidth.value_namespace = name_space;
        mplsinterfacetotalbandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInterfaceIndex")
    {
        mplsinterfaceindex.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceAvailableBandwidth")
    {
        mplsinterfaceavailablebandwidth.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMaxIn")
    {
        mplsinterfacelabelmaxin.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMaxOut")
    {
        mplsinterfacelabelmaxout.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMinIn")
    {
        mplsinterfacelabelminin.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMinOut")
    {
        mplsinterfacelabelminout.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelParticipationType")
    {
        mplsinterfacelabelparticipationtype.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfInLabelLookupFailures")
    {
        mplsinterfaceperfinlabellookupfailures.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfInLabelsInUse")
    {
        mplsinterfaceperfinlabelsinuse.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfOutFragmentedPkts")
    {
        mplsinterfaceperfoutfragmentedpkts.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfOutLabelsInUse")
    {
        mplsinterfaceperfoutlabelsinuse.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceTotalBandwidth")
    {
        mplsinterfacetotalbandwidth.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInterfaceIndex" || name == "mplsInterfaceAvailableBandwidth" || name == "mplsInterfaceLabelMaxIn" || name == "mplsInterfaceLabelMaxOut" || name == "mplsInterfaceLabelMinIn" || name == "mplsInterfaceLabelMinOut" || name == "mplsInterfaceLabelParticipationType" || name == "mplsInterfacePerfInLabelLookupFailures" || name == "mplsInterfacePerfInLabelsInUse" || name == "mplsInterfacePerfOutFragmentedPkts" || name == "mplsInterfacePerfOutLabelsInUse" || name == "mplsInterfaceTotalBandwidth")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmenttable()
{
    yang_name = "mplsInSegmentTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplsinsegmenttable::~Mplsinsegmenttable()
{
}

bool MplsLsrStdMib::Mplsinsegmenttable::has_data() const
{
    for (std::size_t index=0; index<mplsinsegmententry.size(); index++)
    {
        if(mplsinsegmententry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinsegmenttable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmententry.size(); index++)
    {
        if(mplsinsegmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplsinsegmenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinsegmenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinsegmenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentEntry")
    {
        for(auto const & c : mplsinsegmententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry>();
        c->parent = this;
        mplsinsegmententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinsegmententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinsegmenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplsinsegmenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplsinsegmenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::Mplsinsegmententry()
    :
    mplsinsegmentindex{YType::str, "mplsInSegmentIndex"},
    mplsinsegmentaddrfamily{YType::enumeration, "mplsInSegmentAddrFamily"},
    mplsinsegmentinterface{YType::int32, "mplsInSegmentInterface"},
    mplsinsegmentlabel{YType::uint32, "mplsInSegmentLabel"},
    mplsinsegmentlabelptr{YType::str, "mplsInSegmentLabelPtr"},
    mplsinsegmentnpop{YType::int32, "mplsInSegmentNPop"},
    mplsinsegmentowner{YType::enumeration, "mplsInSegmentOwner"},
    mplsinsegmentperfdiscards{YType::uint32, "mplsInSegmentPerfDiscards"},
    mplsinsegmentperfdiscontinuitytime{YType::uint32, "mplsInSegmentPerfDiscontinuityTime"},
    mplsinsegmentperferrors{YType::uint32, "mplsInSegmentPerfErrors"},
    mplsinsegmentperfhcoctets{YType::uint64, "mplsInSegmentPerfHCOctets"},
    mplsinsegmentperfoctets{YType::uint32, "mplsInSegmentPerfOctets"},
    mplsinsegmentperfpackets{YType::uint32, "mplsInSegmentPerfPackets"},
    mplsinsegmentrowstatus{YType::enumeration, "mplsInSegmentRowStatus"},
    mplsinsegmentstoragetype{YType::enumeration, "mplsInSegmentStorageType"},
    mplsinsegmenttrafficparamptr{YType::str, "mplsInSegmentTrafficParamPtr"},
    mplsinsegmentxcindex{YType::str, "mplsInSegmentXCIndex"}
{
    yang_name = "mplsInSegmentEntry"; yang_parent_name = "mplsInSegmentTable";
}

MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::~Mplsinsegmententry()
{
}

bool MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::has_data() const
{
    return mplsinsegmentindex.is_set
	|| mplsinsegmentaddrfamily.is_set
	|| mplsinsegmentinterface.is_set
	|| mplsinsegmentlabel.is_set
	|| mplsinsegmentlabelptr.is_set
	|| mplsinsegmentnpop.is_set
	|| mplsinsegmentowner.is_set
	|| mplsinsegmentperfdiscards.is_set
	|| mplsinsegmentperfdiscontinuitytime.is_set
	|| mplsinsegmentperferrors.is_set
	|| mplsinsegmentperfhcoctets.is_set
	|| mplsinsegmentperfoctets.is_set
	|| mplsinsegmentperfpackets.is_set
	|| mplsinsegmentrowstatus.is_set
	|| mplsinsegmentstoragetype.is_set
	|| mplsinsegmenttrafficparamptr.is_set
	|| mplsinsegmentxcindex.is_set;
}

bool MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentindex.yfilter)
	|| ydk::is_set(mplsinsegmentaddrfamily.yfilter)
	|| ydk::is_set(mplsinsegmentinterface.yfilter)
	|| ydk::is_set(mplsinsegmentlabel.yfilter)
	|| ydk::is_set(mplsinsegmentlabelptr.yfilter)
	|| ydk::is_set(mplsinsegmentnpop.yfilter)
	|| ydk::is_set(mplsinsegmentowner.yfilter)
	|| ydk::is_set(mplsinsegmentperfdiscards.yfilter)
	|| ydk::is_set(mplsinsegmentperfdiscontinuitytime.yfilter)
	|| ydk::is_set(mplsinsegmentperferrors.yfilter)
	|| ydk::is_set(mplsinsegmentperfhcoctets.yfilter)
	|| ydk::is_set(mplsinsegmentperfoctets.yfilter)
	|| ydk::is_set(mplsinsegmentperfpackets.yfilter)
	|| ydk::is_set(mplsinsegmentrowstatus.yfilter)
	|| ydk::is_set(mplsinsegmentstoragetype.yfilter)
	|| ydk::is_set(mplsinsegmenttrafficparamptr.yfilter)
	|| ydk::is_set(mplsinsegmentxcindex.yfilter);
}

std::string MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentEntry" <<"[mplsInSegmentIndex='" <<mplsinsegmentindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInSegmentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentindex.is_set || is_set(mplsinsegmentindex.yfilter)) leaf_name_data.push_back(mplsinsegmentindex.get_name_leafdata());
    if (mplsinsegmentaddrfamily.is_set || is_set(mplsinsegmentaddrfamily.yfilter)) leaf_name_data.push_back(mplsinsegmentaddrfamily.get_name_leafdata());
    if (mplsinsegmentinterface.is_set || is_set(mplsinsegmentinterface.yfilter)) leaf_name_data.push_back(mplsinsegmentinterface.get_name_leafdata());
    if (mplsinsegmentlabel.is_set || is_set(mplsinsegmentlabel.yfilter)) leaf_name_data.push_back(mplsinsegmentlabel.get_name_leafdata());
    if (mplsinsegmentlabelptr.is_set || is_set(mplsinsegmentlabelptr.yfilter)) leaf_name_data.push_back(mplsinsegmentlabelptr.get_name_leafdata());
    if (mplsinsegmentnpop.is_set || is_set(mplsinsegmentnpop.yfilter)) leaf_name_data.push_back(mplsinsegmentnpop.get_name_leafdata());
    if (mplsinsegmentowner.is_set || is_set(mplsinsegmentowner.yfilter)) leaf_name_data.push_back(mplsinsegmentowner.get_name_leafdata());
    if (mplsinsegmentperfdiscards.is_set || is_set(mplsinsegmentperfdiscards.yfilter)) leaf_name_data.push_back(mplsinsegmentperfdiscards.get_name_leafdata());
    if (mplsinsegmentperfdiscontinuitytime.is_set || is_set(mplsinsegmentperfdiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsinsegmentperfdiscontinuitytime.get_name_leafdata());
    if (mplsinsegmentperferrors.is_set || is_set(mplsinsegmentperferrors.yfilter)) leaf_name_data.push_back(mplsinsegmentperferrors.get_name_leafdata());
    if (mplsinsegmentperfhcoctets.is_set || is_set(mplsinsegmentperfhcoctets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfhcoctets.get_name_leafdata());
    if (mplsinsegmentperfoctets.is_set || is_set(mplsinsegmentperfoctets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfoctets.get_name_leafdata());
    if (mplsinsegmentperfpackets.is_set || is_set(mplsinsegmentperfpackets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfpackets.get_name_leafdata());
    if (mplsinsegmentrowstatus.is_set || is_set(mplsinsegmentrowstatus.yfilter)) leaf_name_data.push_back(mplsinsegmentrowstatus.get_name_leafdata());
    if (mplsinsegmentstoragetype.is_set || is_set(mplsinsegmentstoragetype.yfilter)) leaf_name_data.push_back(mplsinsegmentstoragetype.get_name_leafdata());
    if (mplsinsegmenttrafficparamptr.is_set || is_set(mplsinsegmenttrafficparamptr.yfilter)) leaf_name_data.push_back(mplsinsegmenttrafficparamptr.get_name_leafdata());
    if (mplsinsegmentxcindex.is_set || is_set(mplsinsegmentxcindex.yfilter)) leaf_name_data.push_back(mplsinsegmentxcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInSegmentIndex")
    {
        mplsinsegmentindex = value;
        mplsinsegmentindex.value_namespace = name_space;
        mplsinsegmentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentAddrFamily")
    {
        mplsinsegmentaddrfamily = value;
        mplsinsegmentaddrfamily.value_namespace = name_space;
        mplsinsegmentaddrfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentInterface")
    {
        mplsinsegmentinterface = value;
        mplsinsegmentinterface.value_namespace = name_space;
        mplsinsegmentinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentLabel")
    {
        mplsinsegmentlabel = value;
        mplsinsegmentlabel.value_namespace = name_space;
        mplsinsegmentlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentLabelPtr")
    {
        mplsinsegmentlabelptr = value;
        mplsinsegmentlabelptr.value_namespace = name_space;
        mplsinsegmentlabelptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentNPop")
    {
        mplsinsegmentnpop = value;
        mplsinsegmentnpop.value_namespace = name_space;
        mplsinsegmentnpop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentOwner")
    {
        mplsinsegmentowner = value;
        mplsinsegmentowner.value_namespace = name_space;
        mplsinsegmentowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfDiscards")
    {
        mplsinsegmentperfdiscards = value;
        mplsinsegmentperfdiscards.value_namespace = name_space;
        mplsinsegmentperfdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfDiscontinuityTime")
    {
        mplsinsegmentperfdiscontinuitytime = value;
        mplsinsegmentperfdiscontinuitytime.value_namespace = name_space;
        mplsinsegmentperfdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfErrors")
    {
        mplsinsegmentperferrors = value;
        mplsinsegmentperferrors.value_namespace = name_space;
        mplsinsegmentperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfHCOctets")
    {
        mplsinsegmentperfhcoctets = value;
        mplsinsegmentperfhcoctets.value_namespace = name_space;
        mplsinsegmentperfhcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfOctets")
    {
        mplsinsegmentperfoctets = value;
        mplsinsegmentperfoctets.value_namespace = name_space;
        mplsinsegmentperfoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfPackets")
    {
        mplsinsegmentperfpackets = value;
        mplsinsegmentperfpackets.value_namespace = name_space;
        mplsinsegmentperfpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentRowStatus")
    {
        mplsinsegmentrowstatus = value;
        mplsinsegmentrowstatus.value_namespace = name_space;
        mplsinsegmentrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentStorageType")
    {
        mplsinsegmentstoragetype = value;
        mplsinsegmentstoragetype.value_namespace = name_space;
        mplsinsegmentstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentTrafficParamPtr")
    {
        mplsinsegmenttrafficparamptr = value;
        mplsinsegmenttrafficparamptr.value_namespace = name_space;
        mplsinsegmenttrafficparamptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentXCIndex")
    {
        mplsinsegmentxcindex = value;
        mplsinsegmentxcindex.value_namespace = name_space;
        mplsinsegmentxcindex.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInSegmentIndex")
    {
        mplsinsegmentindex.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentAddrFamily")
    {
        mplsinsegmentaddrfamily.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentInterface")
    {
        mplsinsegmentinterface.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentLabel")
    {
        mplsinsegmentlabel.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentLabelPtr")
    {
        mplsinsegmentlabelptr.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentNPop")
    {
        mplsinsegmentnpop.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentOwner")
    {
        mplsinsegmentowner.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfDiscards")
    {
        mplsinsegmentperfdiscards.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfDiscontinuityTime")
    {
        mplsinsegmentperfdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfErrors")
    {
        mplsinsegmentperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfHCOctets")
    {
        mplsinsegmentperfhcoctets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfOctets")
    {
        mplsinsegmentperfoctets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfPackets")
    {
        mplsinsegmentperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentRowStatus")
    {
        mplsinsegmentrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentStorageType")
    {
        mplsinsegmentstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentTrafficParamPtr")
    {
        mplsinsegmenttrafficparamptr.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentXCIndex")
    {
        mplsinsegmentxcindex.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentIndex" || name == "mplsInSegmentAddrFamily" || name == "mplsInSegmentInterface" || name == "mplsInSegmentLabel" || name == "mplsInSegmentLabelPtr" || name == "mplsInSegmentNPop" || name == "mplsInSegmentOwner" || name == "mplsInSegmentPerfDiscards" || name == "mplsInSegmentPerfDiscontinuityTime" || name == "mplsInSegmentPerfErrors" || name == "mplsInSegmentPerfHCOctets" || name == "mplsInSegmentPerfOctets" || name == "mplsInSegmentPerfPackets" || name == "mplsInSegmentRowStatus" || name == "mplsInSegmentStorageType" || name == "mplsInSegmentTrafficParamPtr" || name == "mplsInSegmentXCIndex")
        return true;
    return false;
}

MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmenttable()
{
    yang_name = "mplsOutSegmentTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplsoutsegmenttable::~Mplsoutsegmenttable()
{
}

bool MplsLsrStdMib::Mplsoutsegmenttable::has_data() const
{
    for (std::size_t index=0; index<mplsoutsegmententry.size(); index++)
    {
        if(mplsoutsegmententry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsoutsegmenttable::has_operation() const
{
    for (std::size_t index=0; index<mplsoutsegmententry.size(); index++)
    {
        if(mplsoutsegmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplsoutsegmenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsoutsegmenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsoutsegmenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsOutSegmentEntry")
    {
        for(auto const & c : mplsoutsegmententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry>();
        c->parent = this;
        mplsoutsegmententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsoutsegmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsoutsegmententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsoutsegmenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplsoutsegmenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplsoutsegmenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::Mplsoutsegmententry()
    :
    mplsoutsegmentindex{YType::str, "mplsOutSegmentIndex"},
    mplsoutsegmentinterface{YType::int32, "mplsOutSegmentInterface"},
    mplsoutsegmentnexthopaddr{YType::str, "mplsOutSegmentNextHopAddr"},
    mplsoutsegmentnexthopaddrtype{YType::enumeration, "mplsOutSegmentNextHopAddrType"},
    mplsoutsegmentowner{YType::enumeration, "mplsOutSegmentOwner"},
    mplsoutsegmentperfdiscards{YType::uint32, "mplsOutSegmentPerfDiscards"},
    mplsoutsegmentperfdiscontinuitytime{YType::uint32, "mplsOutSegmentPerfDiscontinuityTime"},
    mplsoutsegmentperferrors{YType::uint32, "mplsOutSegmentPerfErrors"},
    mplsoutsegmentperfhcoctets{YType::uint64, "mplsOutSegmentPerfHCOctets"},
    mplsoutsegmentperfoctets{YType::uint32, "mplsOutSegmentPerfOctets"},
    mplsoutsegmentperfpackets{YType::uint32, "mplsOutSegmentPerfPackets"},
    mplsoutsegmentpushtoplabel{YType::boolean, "mplsOutSegmentPushTopLabel"},
    mplsoutsegmentrowstatus{YType::enumeration, "mplsOutSegmentRowStatus"},
    mplsoutsegmentstoragetype{YType::enumeration, "mplsOutSegmentStorageType"},
    mplsoutsegmenttoplabel{YType::uint32, "mplsOutSegmentTopLabel"},
    mplsoutsegmenttoplabelptr{YType::str, "mplsOutSegmentTopLabelPtr"},
    mplsoutsegmenttrafficparamptr{YType::str, "mplsOutSegmentTrafficParamPtr"},
    mplsoutsegmentxcindex{YType::str, "mplsOutSegmentXCIndex"}
{
    yang_name = "mplsOutSegmentEntry"; yang_parent_name = "mplsOutSegmentTable";
}

MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::~Mplsoutsegmententry()
{
}

bool MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::has_data() const
{
    return mplsoutsegmentindex.is_set
	|| mplsoutsegmentinterface.is_set
	|| mplsoutsegmentnexthopaddr.is_set
	|| mplsoutsegmentnexthopaddrtype.is_set
	|| mplsoutsegmentowner.is_set
	|| mplsoutsegmentperfdiscards.is_set
	|| mplsoutsegmentperfdiscontinuitytime.is_set
	|| mplsoutsegmentperferrors.is_set
	|| mplsoutsegmentperfhcoctets.is_set
	|| mplsoutsegmentperfoctets.is_set
	|| mplsoutsegmentperfpackets.is_set
	|| mplsoutsegmentpushtoplabel.is_set
	|| mplsoutsegmentrowstatus.is_set
	|| mplsoutsegmentstoragetype.is_set
	|| mplsoutsegmenttoplabel.is_set
	|| mplsoutsegmenttoplabelptr.is_set
	|| mplsoutsegmenttrafficparamptr.is_set
	|| mplsoutsegmentxcindex.is_set;
}

bool MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsoutsegmentindex.yfilter)
	|| ydk::is_set(mplsoutsegmentinterface.yfilter)
	|| ydk::is_set(mplsoutsegmentnexthopaddr.yfilter)
	|| ydk::is_set(mplsoutsegmentnexthopaddrtype.yfilter)
	|| ydk::is_set(mplsoutsegmentowner.yfilter)
	|| ydk::is_set(mplsoutsegmentperfdiscards.yfilter)
	|| ydk::is_set(mplsoutsegmentperfdiscontinuitytime.yfilter)
	|| ydk::is_set(mplsoutsegmentperferrors.yfilter)
	|| ydk::is_set(mplsoutsegmentperfhcoctets.yfilter)
	|| ydk::is_set(mplsoutsegmentperfoctets.yfilter)
	|| ydk::is_set(mplsoutsegmentperfpackets.yfilter)
	|| ydk::is_set(mplsoutsegmentpushtoplabel.yfilter)
	|| ydk::is_set(mplsoutsegmentrowstatus.yfilter)
	|| ydk::is_set(mplsoutsegmentstoragetype.yfilter)
	|| ydk::is_set(mplsoutsegmenttoplabel.yfilter)
	|| ydk::is_set(mplsoutsegmenttoplabelptr.yfilter)
	|| ydk::is_set(mplsoutsegmenttrafficparamptr.yfilter)
	|| ydk::is_set(mplsoutsegmentxcindex.yfilter);
}

std::string MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentEntry" <<"[mplsOutSegmentIndex='" <<mplsoutsegmentindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsOutSegmentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsoutsegmentindex.is_set || is_set(mplsoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentindex.get_name_leafdata());
    if (mplsoutsegmentinterface.is_set || is_set(mplsoutsegmentinterface.yfilter)) leaf_name_data.push_back(mplsoutsegmentinterface.get_name_leafdata());
    if (mplsoutsegmentnexthopaddr.is_set || is_set(mplsoutsegmentnexthopaddr.yfilter)) leaf_name_data.push_back(mplsoutsegmentnexthopaddr.get_name_leafdata());
    if (mplsoutsegmentnexthopaddrtype.is_set || is_set(mplsoutsegmentnexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsoutsegmentnexthopaddrtype.get_name_leafdata());
    if (mplsoutsegmentowner.is_set || is_set(mplsoutsegmentowner.yfilter)) leaf_name_data.push_back(mplsoutsegmentowner.get_name_leafdata());
    if (mplsoutsegmentperfdiscards.is_set || is_set(mplsoutsegmentperfdiscards.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfdiscards.get_name_leafdata());
    if (mplsoutsegmentperfdiscontinuitytime.is_set || is_set(mplsoutsegmentperfdiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfdiscontinuitytime.get_name_leafdata());
    if (mplsoutsegmentperferrors.is_set || is_set(mplsoutsegmentperferrors.yfilter)) leaf_name_data.push_back(mplsoutsegmentperferrors.get_name_leafdata());
    if (mplsoutsegmentperfhcoctets.is_set || is_set(mplsoutsegmentperfhcoctets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfhcoctets.get_name_leafdata());
    if (mplsoutsegmentperfoctets.is_set || is_set(mplsoutsegmentperfoctets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfoctets.get_name_leafdata());
    if (mplsoutsegmentperfpackets.is_set || is_set(mplsoutsegmentperfpackets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfpackets.get_name_leafdata());
    if (mplsoutsegmentpushtoplabel.is_set || is_set(mplsoutsegmentpushtoplabel.yfilter)) leaf_name_data.push_back(mplsoutsegmentpushtoplabel.get_name_leafdata());
    if (mplsoutsegmentrowstatus.is_set || is_set(mplsoutsegmentrowstatus.yfilter)) leaf_name_data.push_back(mplsoutsegmentrowstatus.get_name_leafdata());
    if (mplsoutsegmentstoragetype.is_set || is_set(mplsoutsegmentstoragetype.yfilter)) leaf_name_data.push_back(mplsoutsegmentstoragetype.get_name_leafdata());
    if (mplsoutsegmenttoplabel.is_set || is_set(mplsoutsegmenttoplabel.yfilter)) leaf_name_data.push_back(mplsoutsegmenttoplabel.get_name_leafdata());
    if (mplsoutsegmenttoplabelptr.is_set || is_set(mplsoutsegmenttoplabelptr.yfilter)) leaf_name_data.push_back(mplsoutsegmenttoplabelptr.get_name_leafdata());
    if (mplsoutsegmenttrafficparamptr.is_set || is_set(mplsoutsegmenttrafficparamptr.yfilter)) leaf_name_data.push_back(mplsoutsegmenttrafficparamptr.get_name_leafdata());
    if (mplsoutsegmentxcindex.is_set || is_set(mplsoutsegmentxcindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentxcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsOutSegmentIndex")
    {
        mplsoutsegmentindex = value;
        mplsoutsegmentindex.value_namespace = name_space;
        mplsoutsegmentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentInterface")
    {
        mplsoutsegmentinterface = value;
        mplsoutsegmentinterface.value_namespace = name_space;
        mplsoutsegmentinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentNextHopAddr")
    {
        mplsoutsegmentnexthopaddr = value;
        mplsoutsegmentnexthopaddr.value_namespace = name_space;
        mplsoutsegmentnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentNextHopAddrType")
    {
        mplsoutsegmentnexthopaddrtype = value;
        mplsoutsegmentnexthopaddrtype.value_namespace = name_space;
        mplsoutsegmentnexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentOwner")
    {
        mplsoutsegmentowner = value;
        mplsoutsegmentowner.value_namespace = name_space;
        mplsoutsegmentowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfDiscards")
    {
        mplsoutsegmentperfdiscards = value;
        mplsoutsegmentperfdiscards.value_namespace = name_space;
        mplsoutsegmentperfdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfDiscontinuityTime")
    {
        mplsoutsegmentperfdiscontinuitytime = value;
        mplsoutsegmentperfdiscontinuitytime.value_namespace = name_space;
        mplsoutsegmentperfdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfErrors")
    {
        mplsoutsegmentperferrors = value;
        mplsoutsegmentperferrors.value_namespace = name_space;
        mplsoutsegmentperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfHCOctets")
    {
        mplsoutsegmentperfhcoctets = value;
        mplsoutsegmentperfhcoctets.value_namespace = name_space;
        mplsoutsegmentperfhcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfOctets")
    {
        mplsoutsegmentperfoctets = value;
        mplsoutsegmentperfoctets.value_namespace = name_space;
        mplsoutsegmentperfoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfPackets")
    {
        mplsoutsegmentperfpackets = value;
        mplsoutsegmentperfpackets.value_namespace = name_space;
        mplsoutsegmentperfpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPushTopLabel")
    {
        mplsoutsegmentpushtoplabel = value;
        mplsoutsegmentpushtoplabel.value_namespace = name_space;
        mplsoutsegmentpushtoplabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentRowStatus")
    {
        mplsoutsegmentrowstatus = value;
        mplsoutsegmentrowstatus.value_namespace = name_space;
        mplsoutsegmentrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentStorageType")
    {
        mplsoutsegmentstoragetype = value;
        mplsoutsegmentstoragetype.value_namespace = name_space;
        mplsoutsegmentstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentTopLabel")
    {
        mplsoutsegmenttoplabel = value;
        mplsoutsegmenttoplabel.value_namespace = name_space;
        mplsoutsegmenttoplabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentTopLabelPtr")
    {
        mplsoutsegmenttoplabelptr = value;
        mplsoutsegmenttoplabelptr.value_namespace = name_space;
        mplsoutsegmenttoplabelptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentTrafficParamPtr")
    {
        mplsoutsegmenttrafficparamptr = value;
        mplsoutsegmenttrafficparamptr.value_namespace = name_space;
        mplsoutsegmenttrafficparamptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentXCIndex")
    {
        mplsoutsegmentxcindex = value;
        mplsoutsegmentxcindex.value_namespace = name_space;
        mplsoutsegmentxcindex.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsOutSegmentIndex")
    {
        mplsoutsegmentindex.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentInterface")
    {
        mplsoutsegmentinterface.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentNextHopAddr")
    {
        mplsoutsegmentnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentNextHopAddrType")
    {
        mplsoutsegmentnexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentOwner")
    {
        mplsoutsegmentowner.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfDiscards")
    {
        mplsoutsegmentperfdiscards.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfDiscontinuityTime")
    {
        mplsoutsegmentperfdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfErrors")
    {
        mplsoutsegmentperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfHCOctets")
    {
        mplsoutsegmentperfhcoctets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfOctets")
    {
        mplsoutsegmentperfoctets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfPackets")
    {
        mplsoutsegmentperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPushTopLabel")
    {
        mplsoutsegmentpushtoplabel.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentRowStatus")
    {
        mplsoutsegmentrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentStorageType")
    {
        mplsoutsegmentstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTopLabel")
    {
        mplsoutsegmenttoplabel.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTopLabelPtr")
    {
        mplsoutsegmenttoplabelptr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTrafficParamPtr")
    {
        mplsoutsegmenttrafficparamptr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentXCIndex")
    {
        mplsoutsegmentxcindex.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentIndex" || name == "mplsOutSegmentInterface" || name == "mplsOutSegmentNextHopAddr" || name == "mplsOutSegmentNextHopAddrType" || name == "mplsOutSegmentOwner" || name == "mplsOutSegmentPerfDiscards" || name == "mplsOutSegmentPerfDiscontinuityTime" || name == "mplsOutSegmentPerfErrors" || name == "mplsOutSegmentPerfHCOctets" || name == "mplsOutSegmentPerfOctets" || name == "mplsOutSegmentPerfPackets" || name == "mplsOutSegmentPushTopLabel" || name == "mplsOutSegmentRowStatus" || name == "mplsOutSegmentStorageType" || name == "mplsOutSegmentTopLabel" || name == "mplsOutSegmentTopLabelPtr" || name == "mplsOutSegmentTrafficParamPtr" || name == "mplsOutSegmentXCIndex")
        return true;
    return false;
}

MplsLsrStdMib::Mplsxctable::Mplsxctable()
{
    yang_name = "mplsXCTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplsxctable::~Mplsxctable()
{
}

bool MplsLsrStdMib::Mplsxctable::has_data() const
{
    for (std::size_t index=0; index<mplsxcentry.size(); index++)
    {
        if(mplsxcentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsxctable::has_operation() const
{
    for (std::size_t index=0; index<mplsxcentry.size(); index++)
    {
        if(mplsxcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplsxctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsXCTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsxctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsxctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsXCEntry")
    {
        for(auto const & c : mplsxcentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsxctable::Mplsxcentry>();
        c->parent = this;
        mplsxcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsxctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsxcentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsxctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplsxctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplsxctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcentry()
    :
    mplsxcindex{YType::str, "mplsXCIndex"},
    mplsxcinsegmentindex{YType::str, "mplsXCInSegmentIndex"},
    mplsxcoutsegmentindex{YType::str, "mplsXCOutSegmentIndex"},
    mplsxcadminstatus{YType::enumeration, "mplsXCAdminStatus"},
    mplsxclabelstackindex{YType::str, "mplsXCLabelStackIndex"},
    mplsxclspid{YType::str, "mplsXCLspId"},
    mplsxcoperstatus{YType::enumeration, "mplsXCOperStatus"},
    mplsxcowner{YType::enumeration, "mplsXCOwner"},
    mplsxcrowstatus{YType::enumeration, "mplsXCRowStatus"},
    mplsxcstoragetype{YType::enumeration, "mplsXCStorageType"}
{
    yang_name = "mplsXCEntry"; yang_parent_name = "mplsXCTable";
}

MplsLsrStdMib::Mplsxctable::Mplsxcentry::~Mplsxcentry()
{
}

bool MplsLsrStdMib::Mplsxctable::Mplsxcentry::has_data() const
{
    return mplsxcindex.is_set
	|| mplsxcinsegmentindex.is_set
	|| mplsxcoutsegmentindex.is_set
	|| mplsxcadminstatus.is_set
	|| mplsxclabelstackindex.is_set
	|| mplsxclspid.is_set
	|| mplsxcoperstatus.is_set
	|| mplsxcowner.is_set
	|| mplsxcrowstatus.is_set
	|| mplsxcstoragetype.is_set;
}

bool MplsLsrStdMib::Mplsxctable::Mplsxcentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsxcindex.yfilter)
	|| ydk::is_set(mplsxcinsegmentindex.yfilter)
	|| ydk::is_set(mplsxcoutsegmentindex.yfilter)
	|| ydk::is_set(mplsxcadminstatus.yfilter)
	|| ydk::is_set(mplsxclabelstackindex.yfilter)
	|| ydk::is_set(mplsxclspid.yfilter)
	|| ydk::is_set(mplsxcoperstatus.yfilter)
	|| ydk::is_set(mplsxcowner.yfilter)
	|| ydk::is_set(mplsxcrowstatus.yfilter)
	|| ydk::is_set(mplsxcstoragetype.yfilter);
}

std::string MplsLsrStdMib::Mplsxctable::Mplsxcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsXCEntry" <<"[mplsXCIndex='" <<mplsxcindex <<"']" <<"[mplsXCInSegmentIndex='" <<mplsxcinsegmentindex <<"']" <<"[mplsXCOutSegmentIndex='" <<mplsxcoutsegmentindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsxctable::Mplsxcentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsXCTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsxcindex.is_set || is_set(mplsxcindex.yfilter)) leaf_name_data.push_back(mplsxcindex.get_name_leafdata());
    if (mplsxcinsegmentindex.is_set || is_set(mplsxcinsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcinsegmentindex.get_name_leafdata());
    if (mplsxcoutsegmentindex.is_set || is_set(mplsxcoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcoutsegmentindex.get_name_leafdata());
    if (mplsxcadminstatus.is_set || is_set(mplsxcadminstatus.yfilter)) leaf_name_data.push_back(mplsxcadminstatus.get_name_leafdata());
    if (mplsxclabelstackindex.is_set || is_set(mplsxclabelstackindex.yfilter)) leaf_name_data.push_back(mplsxclabelstackindex.get_name_leafdata());
    if (mplsxclspid.is_set || is_set(mplsxclspid.yfilter)) leaf_name_data.push_back(mplsxclspid.get_name_leafdata());
    if (mplsxcoperstatus.is_set || is_set(mplsxcoperstatus.yfilter)) leaf_name_data.push_back(mplsxcoperstatus.get_name_leafdata());
    if (mplsxcowner.is_set || is_set(mplsxcowner.yfilter)) leaf_name_data.push_back(mplsxcowner.get_name_leafdata());
    if (mplsxcrowstatus.is_set || is_set(mplsxcrowstatus.yfilter)) leaf_name_data.push_back(mplsxcrowstatus.get_name_leafdata());
    if (mplsxcstoragetype.is_set || is_set(mplsxcstoragetype.yfilter)) leaf_name_data.push_back(mplsxcstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsxctable::Mplsxcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsxctable::Mplsxcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplsxctable::Mplsxcentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsXCAdminStatus")
    {
        mplsxcadminstatus = value;
        mplsxcadminstatus.value_namespace = name_space;
        mplsxcadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCLabelStackIndex")
    {
        mplsxclabelstackindex = value;
        mplsxclabelstackindex.value_namespace = name_space;
        mplsxclabelstackindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCLspId")
    {
        mplsxclspid = value;
        mplsxclspid.value_namespace = name_space;
        mplsxclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCOperStatus")
    {
        mplsxcoperstatus = value;
        mplsxcoperstatus.value_namespace = name_space;
        mplsxcoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCOwner")
    {
        mplsxcowner = value;
        mplsxcowner.value_namespace = name_space;
        mplsxcowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCRowStatus")
    {
        mplsxcrowstatus = value;
        mplsxcrowstatus.value_namespace = name_space;
        mplsxcrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCStorageType")
    {
        mplsxcstoragetype = value;
        mplsxcstoragetype.value_namespace = name_space;
        mplsxcstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplsxctable::Mplsxcentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsXCAdminStatus")
    {
        mplsxcadminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsXCLabelStackIndex")
    {
        mplsxclabelstackindex.yfilter = yfilter;
    }
    if(value_path == "mplsXCLspId")
    {
        mplsxclspid.yfilter = yfilter;
    }
    if(value_path == "mplsXCOperStatus")
    {
        mplsxcoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsXCOwner")
    {
        mplsxcowner.yfilter = yfilter;
    }
    if(value_path == "mplsXCRowStatus")
    {
        mplsxcrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsXCStorageType")
    {
        mplsxcstoragetype.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplsxctable::Mplsxcentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCIndex" || name == "mplsXCInSegmentIndex" || name == "mplsXCOutSegmentIndex" || name == "mplsXCAdminStatus" || name == "mplsXCLabelStackIndex" || name == "mplsXCLspId" || name == "mplsXCOperStatus" || name == "mplsXCOwner" || name == "mplsXCRowStatus" || name == "mplsXCStorageType")
        return true;
    return false;
}

MplsLsrStdMib::Mplslabelstacktable::Mplslabelstacktable()
{
    yang_name = "mplsLabelStackTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplslabelstacktable::~Mplslabelstacktable()
{
}

bool MplsLsrStdMib::Mplslabelstacktable::has_data() const
{
    for (std::size_t index=0; index<mplslabelstackentry.size(); index++)
    {
        if(mplslabelstackentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplslabelstacktable::has_operation() const
{
    for (std::size_t index=0; index<mplslabelstackentry.size(); index++)
    {
        if(mplslabelstackentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplslabelstacktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLabelStackTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplslabelstacktable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplslabelstacktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLabelStackEntry")
    {
        for(auto const & c : mplslabelstackentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry>();
        c->parent = this;
        mplslabelstackentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplslabelstacktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplslabelstackentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplslabelstacktable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplslabelstacktable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplslabelstacktable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLabelStackEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::Mplslabelstackentry()
    :
    mplslabelstackindex{YType::str, "mplsLabelStackIndex"},
    mplslabelstacklabelindex{YType::uint32, "mplsLabelStackLabelIndex"},
    mplslabelstacklabel{YType::uint32, "mplsLabelStackLabel"},
    mplslabelstacklabelptr{YType::str, "mplsLabelStackLabelPtr"},
    mplslabelstackrowstatus{YType::enumeration, "mplsLabelStackRowStatus"},
    mplslabelstackstoragetype{YType::enumeration, "mplsLabelStackStorageType"}
{
    yang_name = "mplsLabelStackEntry"; yang_parent_name = "mplsLabelStackTable";
}

MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::~Mplslabelstackentry()
{
}

bool MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::has_data() const
{
    return mplslabelstackindex.is_set
	|| mplslabelstacklabelindex.is_set
	|| mplslabelstacklabel.is_set
	|| mplslabelstacklabelptr.is_set
	|| mplslabelstackrowstatus.is_set
	|| mplslabelstackstoragetype.is_set;
}

bool MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplslabelstackindex.yfilter)
	|| ydk::is_set(mplslabelstacklabelindex.yfilter)
	|| ydk::is_set(mplslabelstacklabel.yfilter)
	|| ydk::is_set(mplslabelstacklabelptr.yfilter)
	|| ydk::is_set(mplslabelstackrowstatus.yfilter)
	|| ydk::is_set(mplslabelstackstoragetype.yfilter);
}

std::string MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLabelStackEntry" <<"[mplsLabelStackIndex='" <<mplslabelstackindex <<"']" <<"[mplsLabelStackLabelIndex='" <<mplslabelstacklabelindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsLabelStackTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplslabelstackindex.is_set || is_set(mplslabelstackindex.yfilter)) leaf_name_data.push_back(mplslabelstackindex.get_name_leafdata());
    if (mplslabelstacklabelindex.is_set || is_set(mplslabelstacklabelindex.yfilter)) leaf_name_data.push_back(mplslabelstacklabelindex.get_name_leafdata());
    if (mplslabelstacklabel.is_set || is_set(mplslabelstacklabel.yfilter)) leaf_name_data.push_back(mplslabelstacklabel.get_name_leafdata());
    if (mplslabelstacklabelptr.is_set || is_set(mplslabelstacklabelptr.yfilter)) leaf_name_data.push_back(mplslabelstacklabelptr.get_name_leafdata());
    if (mplslabelstackrowstatus.is_set || is_set(mplslabelstackrowstatus.yfilter)) leaf_name_data.push_back(mplslabelstackrowstatus.get_name_leafdata());
    if (mplslabelstackstoragetype.is_set || is_set(mplslabelstackstoragetype.yfilter)) leaf_name_data.push_back(mplslabelstackstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsLabelStackIndex")
    {
        mplslabelstackindex = value;
        mplslabelstackindex.value_namespace = name_space;
        mplslabelstackindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackLabelIndex")
    {
        mplslabelstacklabelindex = value;
        mplslabelstacklabelindex.value_namespace = name_space;
        mplslabelstacklabelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackLabel")
    {
        mplslabelstacklabel = value;
        mplslabelstacklabel.value_namespace = name_space;
        mplslabelstacklabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackLabelPtr")
    {
        mplslabelstacklabelptr = value;
        mplslabelstacklabelptr.value_namespace = name_space;
        mplslabelstacklabelptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackRowStatus")
    {
        mplslabelstackrowstatus = value;
        mplslabelstackrowstatus.value_namespace = name_space;
        mplslabelstackrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackStorageType")
    {
        mplslabelstackstoragetype = value;
        mplslabelstackstoragetype.value_namespace = name_space;
        mplslabelstackstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsLabelStackIndex")
    {
        mplslabelstackindex.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackLabelIndex")
    {
        mplslabelstacklabelindex.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackLabel")
    {
        mplslabelstacklabel.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackLabelPtr")
    {
        mplslabelstacklabelptr.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackRowStatus")
    {
        mplslabelstackrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackStorageType")
    {
        mplslabelstackstoragetype.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLabelStackIndex" || name == "mplsLabelStackLabelIndex" || name == "mplsLabelStackLabel" || name == "mplsLabelStackLabelPtr" || name == "mplsLabelStackRowStatus" || name == "mplsLabelStackStorageType")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmaptable()
{
    yang_name = "mplsInSegmentMapTable"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::Mplsinsegmentmaptable::~Mplsinsegmentmaptable()
{
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::has_data() const
{
    for (std::size_t index=0; index<mplsinsegmentmapentry.size(); index++)
    {
        if(mplsinsegmentmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmentmapentry.size(); index++)
    {
        if(mplsinsegmentmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsrStdMib::Mplsinsegmentmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentMapTable";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinsegmentmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinsegmentmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentMapEntry")
    {
        for(auto const & c : mplsinsegmentmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry>();
        c->parent = this;
        mplsinsegmentmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmentmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinsegmentmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinsegmentmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsrStdMib::Mplsinsegmentmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentMapEntry")
        return true;
    return false;
}

MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::Mplsinsegmentmapentry()
    :
    mplsinsegmentmapinterface{YType::int32, "mplsInSegmentMapInterface"},
    mplsinsegmentmaplabel{YType::uint32, "mplsInSegmentMapLabel"},
    mplsinsegmentmaplabelptrindex{YType::str, "mplsInSegmentMapLabelPtrIndex"},
    mplsinsegmentmapindex{YType::str, "mplsInSegmentMapIndex"}
{
    yang_name = "mplsInSegmentMapEntry"; yang_parent_name = "mplsInSegmentMapTable";
}

MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::~Mplsinsegmentmapentry()
{
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::has_data() const
{
    return mplsinsegmentmapinterface.is_set
	|| mplsinsegmentmaplabel.is_set
	|| mplsinsegmentmaplabelptrindex.is_set
	|| mplsinsegmentmapindex.is_set;
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentmapinterface.yfilter)
	|| ydk::is_set(mplsinsegmentmaplabel.yfilter)
	|| ydk::is_set(mplsinsegmentmaplabelptrindex.yfilter)
	|| ydk::is_set(mplsinsegmentmapindex.yfilter);
}

std::string MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentMapEntry" <<"[mplsInSegmentMapInterface='" <<mplsinsegmentmapinterface <<"']" <<"[mplsInSegmentMapLabel='" <<mplsinsegmentmaplabel <<"']" <<"[mplsInSegmentMapLabelPtrIndex='" <<mplsinsegmentmaplabelptrindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInSegmentMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentmapinterface.is_set || is_set(mplsinsegmentmapinterface.yfilter)) leaf_name_data.push_back(mplsinsegmentmapinterface.get_name_leafdata());
    if (mplsinsegmentmaplabel.is_set || is_set(mplsinsegmentmaplabel.yfilter)) leaf_name_data.push_back(mplsinsegmentmaplabel.get_name_leafdata());
    if (mplsinsegmentmaplabelptrindex.is_set || is_set(mplsinsegmentmaplabelptrindex.yfilter)) leaf_name_data.push_back(mplsinsegmentmaplabelptrindex.get_name_leafdata());
    if (mplsinsegmentmapindex.is_set || is_set(mplsinsegmentmapindex.yfilter)) leaf_name_data.push_back(mplsinsegmentmapindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInSegmentMapInterface")
    {
        mplsinsegmentmapinterface = value;
        mplsinsegmentmapinterface.value_namespace = name_space;
        mplsinsegmentmapinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentMapLabel")
    {
        mplsinsegmentmaplabel = value;
        mplsinsegmentmaplabel.value_namespace = name_space;
        mplsinsegmentmaplabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentMapLabelPtrIndex")
    {
        mplsinsegmentmaplabelptrindex = value;
        mplsinsegmentmaplabelptrindex.value_namespace = name_space;
        mplsinsegmentmaplabelptrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentMapIndex")
    {
        mplsinsegmentmapindex = value;
        mplsinsegmentmapindex.value_namespace = name_space;
        mplsinsegmentmapindex.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInSegmentMapInterface")
    {
        mplsinsegmentmapinterface.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentMapLabel")
    {
        mplsinsegmentmaplabel.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentMapLabelPtrIndex")
    {
        mplsinsegmentmaplabelptrindex.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentMapIndex")
    {
        mplsinsegmentmapindex.yfilter = yfilter;
    }
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentMapInterface" || name == "mplsInSegmentMapLabel" || name == "mplsInSegmentMapLabelPtrIndex" || name == "mplsInSegmentMapIndex")
        return true;
    return false;
}

const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcadminstatus::up {1, "up"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcadminstatus::down {2, "down"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcadminstatus::testing {3, "testing"};

const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::up {1, "up"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::down {2, "down"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::testing {3, "testing"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::unknown {4, "unknown"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::dormant {5, "dormant"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::notPresent {6, "notPresent"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus::lowerLayerDown {7, "lowerLayerDown"};


}
}

