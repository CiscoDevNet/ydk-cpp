
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LSR_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_LSR_STD_MIB {

MPLSLSRSTDMIB::MPLSLSRSTDMIB()
    :
    mplslsrobjects(std::make_shared<MPLSLSRSTDMIB::MplsLsrObjects>())
    , mplsinterfacetable(std::make_shared<MPLSLSRSTDMIB::MplsInterfaceTable>())
    , mplsinsegmenttable(std::make_shared<MPLSLSRSTDMIB::MplsInSegmentTable>())
    , mplsoutsegmenttable(std::make_shared<MPLSLSRSTDMIB::MplsOutSegmentTable>())
    , mplsxctable(std::make_shared<MPLSLSRSTDMIB::MplsXCTable>())
    , mplslabelstacktable(std::make_shared<MPLSLSRSTDMIB::MplsLabelStackTable>())
    , mplsinsegmentmaptable(std::make_shared<MPLSLSRSTDMIB::MplsInSegmentMapTable>())
{
    mplslsrobjects->parent = this;
    mplsinterfacetable->parent = this;
    mplsinsegmenttable->parent = this;
    mplsoutsegmenttable->parent = this;
    mplsxctable->parent = this;
    mplslabelstacktable->parent = this;
    mplsinsegmentmaptable->parent = this;

    yang_name = "MPLS-LSR-STD-MIB"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::~MPLSLSRSTDMIB()
{
}

bool MPLSLSRSTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mplslsrobjects !=  nullptr && mplslsrobjects->has_data())
	|| (mplsinterfacetable !=  nullptr && mplsinterfacetable->has_data())
	|| (mplsinsegmenttable !=  nullptr && mplsinsegmenttable->has_data())
	|| (mplsoutsegmenttable !=  nullptr && mplsoutsegmenttable->has_data())
	|| (mplsxctable !=  nullptr && mplsxctable->has_data())
	|| (mplslabelstacktable !=  nullptr && mplslabelstacktable->has_data())
	|| (mplsinsegmentmaptable !=  nullptr && mplsinsegmentmaptable->has_data());
}

bool MPLSLSRSTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplslsrobjects !=  nullptr && mplslsrobjects->has_operation())
	|| (mplsinterfacetable !=  nullptr && mplsinterfacetable->has_operation())
	|| (mplsinsegmenttable !=  nullptr && mplsinsegmenttable->has_operation())
	|| (mplsoutsegmenttable !=  nullptr && mplsoutsegmenttable->has_operation())
	|| (mplsxctable !=  nullptr && mplsxctable->has_operation())
	|| (mplslabelstacktable !=  nullptr && mplslabelstacktable->has_operation())
	|| (mplsinsegmentmaptable !=  nullptr && mplsinsegmentmaptable->has_operation());
}

std::string MPLSLSRSTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLsrObjects")
    {
        if(mplslsrobjects == nullptr)
        {
            mplslsrobjects = std::make_shared<MPLSLSRSTDMIB::MplsLsrObjects>();
        }
        return mplslsrobjects;
    }

    if(child_yang_name == "mplsInterfaceTable")
    {
        if(mplsinterfacetable == nullptr)
        {
            mplsinterfacetable = std::make_shared<MPLSLSRSTDMIB::MplsInterfaceTable>();
        }
        return mplsinterfacetable;
    }

    if(child_yang_name == "mplsInSegmentTable")
    {
        if(mplsinsegmenttable == nullptr)
        {
            mplsinsegmenttable = std::make_shared<MPLSLSRSTDMIB::MplsInSegmentTable>();
        }
        return mplsinsegmenttable;
    }

    if(child_yang_name == "mplsOutSegmentTable")
    {
        if(mplsoutsegmenttable == nullptr)
        {
            mplsoutsegmenttable = std::make_shared<MPLSLSRSTDMIB::MplsOutSegmentTable>();
        }
        return mplsoutsegmenttable;
    }

    if(child_yang_name == "mplsXCTable")
    {
        if(mplsxctable == nullptr)
        {
            mplsxctable = std::make_shared<MPLSLSRSTDMIB::MplsXCTable>();
        }
        return mplsxctable;
    }

    if(child_yang_name == "mplsLabelStackTable")
    {
        if(mplslabelstacktable == nullptr)
        {
            mplslabelstacktable = std::make_shared<MPLSLSRSTDMIB::MplsLabelStackTable>();
        }
        return mplslabelstacktable;
    }

    if(child_yang_name == "mplsInSegmentMapTable")
    {
        if(mplsinsegmentmaptable == nullptr)
        {
            mplsinsegmentmaptable = std::make_shared<MPLSLSRSTDMIB::MplsInSegmentMapTable>();
        }
        return mplsinsegmentmaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplslsrobjects != nullptr)
    {
        children["mplsLsrObjects"] = mplslsrobjects;
    }

    if(mplsinterfacetable != nullptr)
    {
        children["mplsInterfaceTable"] = mplsinterfacetable;
    }

    if(mplsinsegmenttable != nullptr)
    {
        children["mplsInSegmentTable"] = mplsinsegmenttable;
    }

    if(mplsoutsegmenttable != nullptr)
    {
        children["mplsOutSegmentTable"] = mplsoutsegmenttable;
    }

    if(mplsxctable != nullptr)
    {
        children["mplsXCTable"] = mplsxctable;
    }

    if(mplslabelstacktable != nullptr)
    {
        children["mplsLabelStackTable"] = mplslabelstacktable;
    }

    if(mplsinsegmentmaptable != nullptr)
    {
        children["mplsInSegmentMapTable"] = mplsinsegmentmaptable;
    }

    return children;
}

void MPLSLSRSTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MPLSLSRSTDMIB::clone_ptr() const
{
    return std::make_shared<MPLSLSRSTDMIB>();
}

std::string MPLSLSRSTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSLSRSTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSLSRSTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSLSRSTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSLSRSTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLsrObjects" || name == "mplsInterfaceTable" || name == "mplsInSegmentTable" || name == "mplsOutSegmentTable" || name == "mplsXCTable" || name == "mplsLabelStackTable" || name == "mplsInSegmentMapTable")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsLsrObjects::MplsLsrObjects()
    :
    mplsinsegmentindexnext{YType::str, "mplsInSegmentIndexNext"},
    mplsoutsegmentindexnext{YType::str, "mplsOutSegmentIndexNext"},
    mplsxcindexnext{YType::str, "mplsXCIndexNext"},
    mplsmaxlabelstackdepth{YType::uint32, "mplsMaxLabelStackDepth"},
    mplslabelstackindexnext{YType::str, "mplsLabelStackIndexNext"},
    mplsxcnotificationsenable{YType::boolean, "mplsXCNotificationsEnable"}
{

    yang_name = "mplsLsrObjects"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsLsrObjects::~MplsLsrObjects()
{
}

bool MPLSLSRSTDMIB::MplsLsrObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplsinsegmentindexnext.is_set
	|| mplsoutsegmentindexnext.is_set
	|| mplsxcindexnext.is_set
	|| mplsmaxlabelstackdepth.is_set
	|| mplslabelstackindexnext.is_set
	|| mplsxcnotificationsenable.is_set;
}

bool MPLSLSRSTDMIB::MplsLsrObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentindexnext.yfilter)
	|| ydk::is_set(mplsoutsegmentindexnext.yfilter)
	|| ydk::is_set(mplsxcindexnext.yfilter)
	|| ydk::is_set(mplsmaxlabelstackdepth.yfilter)
	|| ydk::is_set(mplslabelstackindexnext.yfilter)
	|| ydk::is_set(mplsxcnotificationsenable.yfilter);
}

std::string MPLSLSRSTDMIB::MplsLsrObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsLsrObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLsrObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsLsrObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentindexnext.is_set || is_set(mplsinsegmentindexnext.yfilter)) leaf_name_data.push_back(mplsinsegmentindexnext.get_name_leafdata());
    if (mplsoutsegmentindexnext.is_set || is_set(mplsoutsegmentindexnext.yfilter)) leaf_name_data.push_back(mplsoutsegmentindexnext.get_name_leafdata());
    if (mplsxcindexnext.is_set || is_set(mplsxcindexnext.yfilter)) leaf_name_data.push_back(mplsxcindexnext.get_name_leafdata());
    if (mplsmaxlabelstackdepth.is_set || is_set(mplsmaxlabelstackdepth.yfilter)) leaf_name_data.push_back(mplsmaxlabelstackdepth.get_name_leafdata());
    if (mplslabelstackindexnext.is_set || is_set(mplslabelstackindexnext.yfilter)) leaf_name_data.push_back(mplslabelstackindexnext.get_name_leafdata());
    if (mplsxcnotificationsenable.is_set || is_set(mplsxcnotificationsenable.yfilter)) leaf_name_data.push_back(mplsxcnotificationsenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsLsrObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsLsrObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsLsrObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInSegmentIndexNext")
    {
        mplsinsegmentindexnext = value;
        mplsinsegmentindexnext.value_namespace = name_space;
        mplsinsegmentindexnext.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsMaxLabelStackDepth")
    {
        mplsmaxlabelstackdepth = value;
        mplsmaxlabelstackdepth.value_namespace = name_space;
        mplsmaxlabelstackdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsLabelStackIndexNext")
    {
        mplslabelstackindexnext = value;
        mplslabelstackindexnext.value_namespace = name_space;
        mplslabelstackindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCNotificationsEnable")
    {
        mplsxcnotificationsenable = value;
        mplsxcnotificationsenable.value_namespace = name_space;
        mplsxcnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLSRSTDMIB::MplsLsrObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInSegmentIndexNext")
    {
        mplsinsegmentindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentIndexNext")
    {
        mplsoutsegmentindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsXCIndexNext")
    {
        mplsxcindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsMaxLabelStackDepth")
    {
        mplsmaxlabelstackdepth.yfilter = yfilter;
    }
    if(value_path == "mplsLabelStackIndexNext")
    {
        mplslabelstackindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsXCNotificationsEnable")
    {
        mplsxcnotificationsenable.yfilter = yfilter;
    }
}

bool MPLSLSRSTDMIB::MplsLsrObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentIndexNext" || name == "mplsOutSegmentIndexNext" || name == "mplsXCIndexNext" || name == "mplsMaxLabelStackDepth" || name == "mplsLabelStackIndexNext" || name == "mplsXCNotificationsEnable")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceTable()
    :
    mplsinterfaceentry(this, {"mplsinterfaceindex"})
{

    yang_name = "mplsInterfaceTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInterfaceTable::~MplsInterfaceTable()
{
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsinterfaceentry.len(); index++)
    {
        if(mplsinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<mplsinterfaceentry.len(); index++)
    {
        if(mplsinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInterfaceEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry>();
        c->parent = this;
        mplsinterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsinterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInterfaceEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::MplsInterfaceEntry()
    :
    mplsinterfaceindex{YType::int32, "mplsInterfaceIndex"},
    mplsinterfacelabelminin{YType::uint32, "mplsInterfaceLabelMinIn"},
    mplsinterfacelabelmaxin{YType::uint32, "mplsInterfaceLabelMaxIn"},
    mplsinterfacelabelminout{YType::uint32, "mplsInterfaceLabelMinOut"},
    mplsinterfacelabelmaxout{YType::uint32, "mplsInterfaceLabelMaxOut"},
    mplsinterfacetotalbandwidth{YType::uint32, "mplsInterfaceTotalBandwidth"},
    mplsinterfaceavailablebandwidth{YType::uint32, "mplsInterfaceAvailableBandwidth"},
    mplsinterfacelabelparticipationtype{YType::bits, "mplsInterfaceLabelParticipationType"},
    mplsinterfaceperfinlabelsinuse{YType::uint32, "mplsInterfacePerfInLabelsInUse"},
    mplsinterfaceperfinlabellookupfailures{YType::uint32, "mplsInterfacePerfInLabelLookupFailures"},
    mplsinterfaceperfoutlabelsinuse{YType::uint32, "mplsInterfacePerfOutLabelsInUse"},
    mplsinterfaceperfoutfragmentedpkts{YType::uint32, "mplsInterfacePerfOutFragmentedPkts"}
{

    yang_name = "mplsInterfaceEntry"; yang_parent_name = "mplsInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::~MplsInterfaceEntry()
{
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsinterfaceindex.is_set
	|| mplsinterfacelabelminin.is_set
	|| mplsinterfacelabelmaxin.is_set
	|| mplsinterfacelabelminout.is_set
	|| mplsinterfacelabelmaxout.is_set
	|| mplsinterfacetotalbandwidth.is_set
	|| mplsinterfaceavailablebandwidth.is_set
	|| mplsinterfacelabelparticipationtype.is_set
	|| mplsinterfaceperfinlabelsinuse.is_set
	|| mplsinterfaceperfinlabellookupfailures.is_set
	|| mplsinterfaceperfoutlabelsinuse.is_set
	|| mplsinterfaceperfoutfragmentedpkts.is_set;
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinterfaceindex.yfilter)
	|| ydk::is_set(mplsinterfacelabelminin.yfilter)
	|| ydk::is_set(mplsinterfacelabelmaxin.yfilter)
	|| ydk::is_set(mplsinterfacelabelminout.yfilter)
	|| ydk::is_set(mplsinterfacelabelmaxout.yfilter)
	|| ydk::is_set(mplsinterfacetotalbandwidth.yfilter)
	|| ydk::is_set(mplsinterfaceavailablebandwidth.yfilter)
	|| ydk::is_set(mplsinterfacelabelparticipationtype.yfilter)
	|| ydk::is_set(mplsinterfaceperfinlabelsinuse.yfilter)
	|| ydk::is_set(mplsinterfaceperfinlabellookupfailures.yfilter)
	|| ydk::is_set(mplsinterfaceperfoutlabelsinuse.yfilter)
	|| ydk::is_set(mplsinterfaceperfoutfragmentedpkts.yfilter);
}

std::string MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInterfaceEntry";
    ADD_KEY_TOKEN(mplsinterfaceindex, "mplsInterfaceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinterfaceindex.is_set || is_set(mplsinterfaceindex.yfilter)) leaf_name_data.push_back(mplsinterfaceindex.get_name_leafdata());
    if (mplsinterfacelabelminin.is_set || is_set(mplsinterfacelabelminin.yfilter)) leaf_name_data.push_back(mplsinterfacelabelminin.get_name_leafdata());
    if (mplsinterfacelabelmaxin.is_set || is_set(mplsinterfacelabelmaxin.yfilter)) leaf_name_data.push_back(mplsinterfacelabelmaxin.get_name_leafdata());
    if (mplsinterfacelabelminout.is_set || is_set(mplsinterfacelabelminout.yfilter)) leaf_name_data.push_back(mplsinterfacelabelminout.get_name_leafdata());
    if (mplsinterfacelabelmaxout.is_set || is_set(mplsinterfacelabelmaxout.yfilter)) leaf_name_data.push_back(mplsinterfacelabelmaxout.get_name_leafdata());
    if (mplsinterfacetotalbandwidth.is_set || is_set(mplsinterfacetotalbandwidth.yfilter)) leaf_name_data.push_back(mplsinterfacetotalbandwidth.get_name_leafdata());
    if (mplsinterfaceavailablebandwidth.is_set || is_set(mplsinterfaceavailablebandwidth.yfilter)) leaf_name_data.push_back(mplsinterfaceavailablebandwidth.get_name_leafdata());
    if (mplsinterfacelabelparticipationtype.is_set || is_set(mplsinterfacelabelparticipationtype.yfilter)) leaf_name_data.push_back(mplsinterfacelabelparticipationtype.get_name_leafdata());
    if (mplsinterfaceperfinlabelsinuse.is_set || is_set(mplsinterfaceperfinlabelsinuse.yfilter)) leaf_name_data.push_back(mplsinterfaceperfinlabelsinuse.get_name_leafdata());
    if (mplsinterfaceperfinlabellookupfailures.is_set || is_set(mplsinterfaceperfinlabellookupfailures.yfilter)) leaf_name_data.push_back(mplsinterfaceperfinlabellookupfailures.get_name_leafdata());
    if (mplsinterfaceperfoutlabelsinuse.is_set || is_set(mplsinterfaceperfoutlabelsinuse.yfilter)) leaf_name_data.push_back(mplsinterfaceperfoutlabelsinuse.get_name_leafdata());
    if (mplsinterfaceperfoutfragmentedpkts.is_set || is_set(mplsinterfaceperfoutfragmentedpkts.yfilter)) leaf_name_data.push_back(mplsinterfaceperfoutfragmentedpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInterfaceIndex")
    {
        mplsinterfaceindex = value;
        mplsinterfaceindex.value_namespace = name_space;
        mplsinterfaceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMinIn")
    {
        mplsinterfacelabelminin = value;
        mplsinterfacelabelminin.value_namespace = name_space;
        mplsinterfacelabelminin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMaxIn")
    {
        mplsinterfacelabelmaxin = value;
        mplsinterfacelabelmaxin.value_namespace = name_space;
        mplsinterfacelabelmaxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMinOut")
    {
        mplsinterfacelabelminout = value;
        mplsinterfacelabelminout.value_namespace = name_space;
        mplsinterfacelabelminout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelMaxOut")
    {
        mplsinterfacelabelmaxout = value;
        mplsinterfacelabelmaxout.value_namespace = name_space;
        mplsinterfacelabelmaxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceTotalBandwidth")
    {
        mplsinterfacetotalbandwidth = value;
        mplsinterfacetotalbandwidth.value_namespace = name_space;
        mplsinterfacetotalbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceAvailableBandwidth")
    {
        mplsinterfaceavailablebandwidth = value;
        mplsinterfaceavailablebandwidth.value_namespace = name_space;
        mplsinterfaceavailablebandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfaceLabelParticipationType")
    {
        mplsinterfacelabelparticipationtype[value] = true;
    }
    if(value_path == "mplsInterfacePerfInLabelsInUse")
    {
        mplsinterfaceperfinlabelsinuse = value;
        mplsinterfaceperfinlabelsinuse.value_namespace = name_space;
        mplsinterfaceperfinlabelsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfInLabelLookupFailures")
    {
        mplsinterfaceperfinlabellookupfailures = value;
        mplsinterfaceperfinlabellookupfailures.value_namespace = name_space;
        mplsinterfaceperfinlabellookupfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfOutLabelsInUse")
    {
        mplsinterfaceperfoutlabelsinuse = value;
        mplsinterfaceperfoutlabelsinuse.value_namespace = name_space;
        mplsinterfaceperfoutlabelsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInterfacePerfOutFragmentedPkts")
    {
        mplsinterfaceperfoutfragmentedpkts = value;
        mplsinterfaceperfoutfragmentedpkts.value_namespace = name_space;
        mplsinterfaceperfoutfragmentedpkts.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInterfaceIndex")
    {
        mplsinterfaceindex.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMinIn")
    {
        mplsinterfacelabelminin.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMaxIn")
    {
        mplsinterfacelabelmaxin.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMinOut")
    {
        mplsinterfacelabelminout.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelMaxOut")
    {
        mplsinterfacelabelmaxout.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceTotalBandwidth")
    {
        mplsinterfacetotalbandwidth.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceAvailableBandwidth")
    {
        mplsinterfaceavailablebandwidth.yfilter = yfilter;
    }
    if(value_path == "mplsInterfaceLabelParticipationType")
    {
        mplsinterfacelabelparticipationtype.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfInLabelsInUse")
    {
        mplsinterfaceperfinlabelsinuse.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfInLabelLookupFailures")
    {
        mplsinterfaceperfinlabellookupfailures.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfOutLabelsInUse")
    {
        mplsinterfaceperfoutlabelsinuse.yfilter = yfilter;
    }
    if(value_path == "mplsInterfacePerfOutFragmentedPkts")
    {
        mplsinterfaceperfoutfragmentedpkts.yfilter = yfilter;
    }
}

bool MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInterfaceIndex" || name == "mplsInterfaceLabelMinIn" || name == "mplsInterfaceLabelMaxIn" || name == "mplsInterfaceLabelMinOut" || name == "mplsInterfaceLabelMaxOut" || name == "mplsInterfaceTotalBandwidth" || name == "mplsInterfaceAvailableBandwidth" || name == "mplsInterfaceLabelParticipationType" || name == "mplsInterfacePerfInLabelsInUse" || name == "mplsInterfacePerfInLabelLookupFailures" || name == "mplsInterfacePerfOutLabelsInUse" || name == "mplsInterfacePerfOutFragmentedPkts")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentTable()
    :
    mplsinsegmententry(this, {"mplsinsegmentindex"})
{

    yang_name = "mplsInSegmentTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInSegmentTable::~MplsInSegmentTable()
{
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsinsegmententry.len(); index++)
    {
        if(mplsinsegmententry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmententry.len(); index++)
    {
        if(mplsinsegmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsInSegmentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInSegmentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInSegmentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInSegmentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry>();
        c->parent = this;
        mplsinsegmententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInSegmentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsinsegmententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsInSegmentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsInSegmentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::MplsInSegmentEntry()
    :
    mplsinsegmentindex{YType::str, "mplsInSegmentIndex"},
    mplsinsegmentinterface{YType::int32, "mplsInSegmentInterface"},
    mplsinsegmentlabel{YType::uint32, "mplsInSegmentLabel"},
    mplsinsegmentlabelptr{YType::str, "mplsInSegmentLabelPtr"},
    mplsinsegmentnpop{YType::int32, "mplsInSegmentNPop"},
    mplsinsegmentaddrfamily{YType::enumeration, "mplsInSegmentAddrFamily"},
    mplsinsegmentxcindex{YType::str, "mplsInSegmentXCIndex"},
    mplsinsegmentowner{YType::enumeration, "mplsInSegmentOwner"},
    mplsinsegmenttrafficparamptr{YType::str, "mplsInSegmentTrafficParamPtr"},
    mplsinsegmentrowstatus{YType::enumeration, "mplsInSegmentRowStatus"},
    mplsinsegmentstoragetype{YType::enumeration, "mplsInSegmentStorageType"},
    mplsinsegmentperfoctets{YType::uint32, "mplsInSegmentPerfOctets"},
    mplsinsegmentperfpackets{YType::uint32, "mplsInSegmentPerfPackets"},
    mplsinsegmentperferrors{YType::uint32, "mplsInSegmentPerfErrors"},
    mplsinsegmentperfdiscards{YType::uint32, "mplsInSegmentPerfDiscards"},
    mplsinsegmentperfhcoctets{YType::uint64, "mplsInSegmentPerfHCOctets"},
    mplsinsegmentperfdiscontinuitytime{YType::uint32, "mplsInSegmentPerfDiscontinuityTime"}
{

    yang_name = "mplsInSegmentEntry"; yang_parent_name = "mplsInSegmentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::~MplsInSegmentEntry()
{
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsinsegmentindex.is_set
	|| mplsinsegmentinterface.is_set
	|| mplsinsegmentlabel.is_set
	|| mplsinsegmentlabelptr.is_set
	|| mplsinsegmentnpop.is_set
	|| mplsinsegmentaddrfamily.is_set
	|| mplsinsegmentxcindex.is_set
	|| mplsinsegmentowner.is_set
	|| mplsinsegmenttrafficparamptr.is_set
	|| mplsinsegmentrowstatus.is_set
	|| mplsinsegmentstoragetype.is_set
	|| mplsinsegmentperfoctets.is_set
	|| mplsinsegmentperfpackets.is_set
	|| mplsinsegmentperferrors.is_set
	|| mplsinsegmentperfdiscards.is_set
	|| mplsinsegmentperfhcoctets.is_set
	|| mplsinsegmentperfdiscontinuitytime.is_set;
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentindex.yfilter)
	|| ydk::is_set(mplsinsegmentinterface.yfilter)
	|| ydk::is_set(mplsinsegmentlabel.yfilter)
	|| ydk::is_set(mplsinsegmentlabelptr.yfilter)
	|| ydk::is_set(mplsinsegmentnpop.yfilter)
	|| ydk::is_set(mplsinsegmentaddrfamily.yfilter)
	|| ydk::is_set(mplsinsegmentxcindex.yfilter)
	|| ydk::is_set(mplsinsegmentowner.yfilter)
	|| ydk::is_set(mplsinsegmenttrafficparamptr.yfilter)
	|| ydk::is_set(mplsinsegmentrowstatus.yfilter)
	|| ydk::is_set(mplsinsegmentstoragetype.yfilter)
	|| ydk::is_set(mplsinsegmentperfoctets.yfilter)
	|| ydk::is_set(mplsinsegmentperfpackets.yfilter)
	|| ydk::is_set(mplsinsegmentperferrors.yfilter)
	|| ydk::is_set(mplsinsegmentperfdiscards.yfilter)
	|| ydk::is_set(mplsinsegmentperfhcoctets.yfilter)
	|| ydk::is_set(mplsinsegmentperfdiscontinuitytime.yfilter);
}

std::string MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInSegmentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentEntry";
    ADD_KEY_TOKEN(mplsinsegmentindex, "mplsInSegmentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentindex.is_set || is_set(mplsinsegmentindex.yfilter)) leaf_name_data.push_back(mplsinsegmentindex.get_name_leafdata());
    if (mplsinsegmentinterface.is_set || is_set(mplsinsegmentinterface.yfilter)) leaf_name_data.push_back(mplsinsegmentinterface.get_name_leafdata());
    if (mplsinsegmentlabel.is_set || is_set(mplsinsegmentlabel.yfilter)) leaf_name_data.push_back(mplsinsegmentlabel.get_name_leafdata());
    if (mplsinsegmentlabelptr.is_set || is_set(mplsinsegmentlabelptr.yfilter)) leaf_name_data.push_back(mplsinsegmentlabelptr.get_name_leafdata());
    if (mplsinsegmentnpop.is_set || is_set(mplsinsegmentnpop.yfilter)) leaf_name_data.push_back(mplsinsegmentnpop.get_name_leafdata());
    if (mplsinsegmentaddrfamily.is_set || is_set(mplsinsegmentaddrfamily.yfilter)) leaf_name_data.push_back(mplsinsegmentaddrfamily.get_name_leafdata());
    if (mplsinsegmentxcindex.is_set || is_set(mplsinsegmentxcindex.yfilter)) leaf_name_data.push_back(mplsinsegmentxcindex.get_name_leafdata());
    if (mplsinsegmentowner.is_set || is_set(mplsinsegmentowner.yfilter)) leaf_name_data.push_back(mplsinsegmentowner.get_name_leafdata());
    if (mplsinsegmenttrafficparamptr.is_set || is_set(mplsinsegmenttrafficparamptr.yfilter)) leaf_name_data.push_back(mplsinsegmenttrafficparamptr.get_name_leafdata());
    if (mplsinsegmentrowstatus.is_set || is_set(mplsinsegmentrowstatus.yfilter)) leaf_name_data.push_back(mplsinsegmentrowstatus.get_name_leafdata());
    if (mplsinsegmentstoragetype.is_set || is_set(mplsinsegmentstoragetype.yfilter)) leaf_name_data.push_back(mplsinsegmentstoragetype.get_name_leafdata());
    if (mplsinsegmentperfoctets.is_set || is_set(mplsinsegmentperfoctets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfoctets.get_name_leafdata());
    if (mplsinsegmentperfpackets.is_set || is_set(mplsinsegmentperfpackets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfpackets.get_name_leafdata());
    if (mplsinsegmentperferrors.is_set || is_set(mplsinsegmentperferrors.yfilter)) leaf_name_data.push_back(mplsinsegmentperferrors.get_name_leafdata());
    if (mplsinsegmentperfdiscards.is_set || is_set(mplsinsegmentperfdiscards.yfilter)) leaf_name_data.push_back(mplsinsegmentperfdiscards.get_name_leafdata());
    if (mplsinsegmentperfhcoctets.is_set || is_set(mplsinsegmentperfhcoctets.yfilter)) leaf_name_data.push_back(mplsinsegmentperfhcoctets.get_name_leafdata());
    if (mplsinsegmentperfdiscontinuitytime.is_set || is_set(mplsinsegmentperfdiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsinsegmentperfdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsInSegmentIndex")
    {
        mplsinsegmentindex = value;
        mplsinsegmentindex.value_namespace = name_space;
        mplsinsegmentindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsInSegmentAddrFamily")
    {
        mplsinsegmentaddrfamily = value;
        mplsinsegmentaddrfamily.value_namespace = name_space;
        mplsinsegmentaddrfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentXCIndex")
    {
        mplsinsegmentxcindex = value;
        mplsinsegmentxcindex.value_namespace = name_space;
        mplsinsegmentxcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentOwner")
    {
        mplsinsegmentowner = value;
        mplsinsegmentowner.value_namespace = name_space;
        mplsinsegmentowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentTrafficParamPtr")
    {
        mplsinsegmenttrafficparamptr = value;
        mplsinsegmenttrafficparamptr.value_namespace = name_space;
        mplsinsegmenttrafficparamptr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsInSegmentPerfErrors")
    {
        mplsinsegmentperferrors = value;
        mplsinsegmentperferrors.value_namespace = name_space;
        mplsinsegmentperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfDiscards")
    {
        mplsinsegmentperfdiscards = value;
        mplsinsegmentperfdiscards.value_namespace = name_space;
        mplsinsegmentperfdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfHCOctets")
    {
        mplsinsegmentperfhcoctets = value;
        mplsinsegmentperfhcoctets.value_namespace = name_space;
        mplsinsegmentperfhcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsInSegmentPerfDiscontinuityTime")
    {
        mplsinsegmentperfdiscontinuitytime = value;
        mplsinsegmentperfdiscontinuitytime.value_namespace = name_space;
        mplsinsegmentperfdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsInSegmentIndex")
    {
        mplsinsegmentindex.yfilter = yfilter;
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
    if(value_path == "mplsInSegmentAddrFamily")
    {
        mplsinsegmentaddrfamily.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentXCIndex")
    {
        mplsinsegmentxcindex.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentOwner")
    {
        mplsinsegmentowner.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentTrafficParamPtr")
    {
        mplsinsegmenttrafficparamptr.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentRowStatus")
    {
        mplsinsegmentrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentStorageType")
    {
        mplsinsegmentstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfOctets")
    {
        mplsinsegmentperfoctets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfPackets")
    {
        mplsinsegmentperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfErrors")
    {
        mplsinsegmentperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfDiscards")
    {
        mplsinsegmentperfdiscards.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfHCOctets")
    {
        mplsinsegmentperfhcoctets.yfilter = yfilter;
    }
    if(value_path == "mplsInSegmentPerfDiscontinuityTime")
    {
        mplsinsegmentperfdiscontinuitytime.yfilter = yfilter;
    }
}

bool MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentIndex" || name == "mplsInSegmentInterface" || name == "mplsInSegmentLabel" || name == "mplsInSegmentLabelPtr" || name == "mplsInSegmentNPop" || name == "mplsInSegmentAddrFamily" || name == "mplsInSegmentXCIndex" || name == "mplsInSegmentOwner" || name == "mplsInSegmentTrafficParamPtr" || name == "mplsInSegmentRowStatus" || name == "mplsInSegmentStorageType" || name == "mplsInSegmentPerfOctets" || name == "mplsInSegmentPerfPackets" || name == "mplsInSegmentPerfErrors" || name == "mplsInSegmentPerfDiscards" || name == "mplsInSegmentPerfHCOctets" || name == "mplsInSegmentPerfDiscontinuityTime")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentTable()
    :
    mplsoutsegmententry(this, {"mplsoutsegmentindex"})
{

    yang_name = "mplsOutSegmentTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsOutSegmentTable::~MplsOutSegmentTable()
{
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsoutsegmententry.len(); index++)
    {
        if(mplsoutsegmententry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::has_operation() const
{
    for (std::size_t index=0; index<mplsoutsegmententry.len(); index++)
    {
        if(mplsoutsegmententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsOutSegmentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsOutSegmentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsOutSegmentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsOutSegmentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsOutSegmentEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry>();
        c->parent = this;
        mplsoutsegmententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsOutSegmentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsoutsegmententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsOutSegmentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsOutSegmentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::MplsOutSegmentEntry()
    :
    mplsoutsegmentindex{YType::str, "mplsOutSegmentIndex"},
    mplsoutsegmentinterface{YType::int32, "mplsOutSegmentInterface"},
    mplsoutsegmentpushtoplabel{YType::boolean, "mplsOutSegmentPushTopLabel"},
    mplsoutsegmenttoplabel{YType::uint32, "mplsOutSegmentTopLabel"},
    mplsoutsegmenttoplabelptr{YType::str, "mplsOutSegmentTopLabelPtr"},
    mplsoutsegmentnexthopaddrtype{YType::enumeration, "mplsOutSegmentNextHopAddrType"},
    mplsoutsegmentnexthopaddr{YType::str, "mplsOutSegmentNextHopAddr"},
    mplsoutsegmentxcindex{YType::str, "mplsOutSegmentXCIndex"},
    mplsoutsegmentowner{YType::enumeration, "mplsOutSegmentOwner"},
    mplsoutsegmenttrafficparamptr{YType::str, "mplsOutSegmentTrafficParamPtr"},
    mplsoutsegmentrowstatus{YType::enumeration, "mplsOutSegmentRowStatus"},
    mplsoutsegmentstoragetype{YType::enumeration, "mplsOutSegmentStorageType"},
    mplsoutsegmentperfoctets{YType::uint32, "mplsOutSegmentPerfOctets"},
    mplsoutsegmentperfpackets{YType::uint32, "mplsOutSegmentPerfPackets"},
    mplsoutsegmentperferrors{YType::uint32, "mplsOutSegmentPerfErrors"},
    mplsoutsegmentperfdiscards{YType::uint32, "mplsOutSegmentPerfDiscards"},
    mplsoutsegmentperfhcoctets{YType::uint64, "mplsOutSegmentPerfHCOctets"},
    mplsoutsegmentperfdiscontinuitytime{YType::uint32, "mplsOutSegmentPerfDiscontinuityTime"}
{

    yang_name = "mplsOutSegmentEntry"; yang_parent_name = "mplsOutSegmentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::~MplsOutSegmentEntry()
{
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsoutsegmentindex.is_set
	|| mplsoutsegmentinterface.is_set
	|| mplsoutsegmentpushtoplabel.is_set
	|| mplsoutsegmenttoplabel.is_set
	|| mplsoutsegmenttoplabelptr.is_set
	|| mplsoutsegmentnexthopaddrtype.is_set
	|| mplsoutsegmentnexthopaddr.is_set
	|| mplsoutsegmentxcindex.is_set
	|| mplsoutsegmentowner.is_set
	|| mplsoutsegmenttrafficparamptr.is_set
	|| mplsoutsegmentrowstatus.is_set
	|| mplsoutsegmentstoragetype.is_set
	|| mplsoutsegmentperfoctets.is_set
	|| mplsoutsegmentperfpackets.is_set
	|| mplsoutsegmentperferrors.is_set
	|| mplsoutsegmentperfdiscards.is_set
	|| mplsoutsegmentperfhcoctets.is_set
	|| mplsoutsegmentperfdiscontinuitytime.is_set;
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsoutsegmentindex.yfilter)
	|| ydk::is_set(mplsoutsegmentinterface.yfilter)
	|| ydk::is_set(mplsoutsegmentpushtoplabel.yfilter)
	|| ydk::is_set(mplsoutsegmenttoplabel.yfilter)
	|| ydk::is_set(mplsoutsegmenttoplabelptr.yfilter)
	|| ydk::is_set(mplsoutsegmentnexthopaddrtype.yfilter)
	|| ydk::is_set(mplsoutsegmentnexthopaddr.yfilter)
	|| ydk::is_set(mplsoutsegmentxcindex.yfilter)
	|| ydk::is_set(mplsoutsegmentowner.yfilter)
	|| ydk::is_set(mplsoutsegmenttrafficparamptr.yfilter)
	|| ydk::is_set(mplsoutsegmentrowstatus.yfilter)
	|| ydk::is_set(mplsoutsegmentstoragetype.yfilter)
	|| ydk::is_set(mplsoutsegmentperfoctets.yfilter)
	|| ydk::is_set(mplsoutsegmentperfpackets.yfilter)
	|| ydk::is_set(mplsoutsegmentperferrors.yfilter)
	|| ydk::is_set(mplsoutsegmentperfdiscards.yfilter)
	|| ydk::is_set(mplsoutsegmentperfhcoctets.yfilter)
	|| ydk::is_set(mplsoutsegmentperfdiscontinuitytime.yfilter);
}

std::string MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsOutSegmentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsOutSegmentEntry";
    ADD_KEY_TOKEN(mplsoutsegmentindex, "mplsOutSegmentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsoutsegmentindex.is_set || is_set(mplsoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentindex.get_name_leafdata());
    if (mplsoutsegmentinterface.is_set || is_set(mplsoutsegmentinterface.yfilter)) leaf_name_data.push_back(mplsoutsegmentinterface.get_name_leafdata());
    if (mplsoutsegmentpushtoplabel.is_set || is_set(mplsoutsegmentpushtoplabel.yfilter)) leaf_name_data.push_back(mplsoutsegmentpushtoplabel.get_name_leafdata());
    if (mplsoutsegmenttoplabel.is_set || is_set(mplsoutsegmenttoplabel.yfilter)) leaf_name_data.push_back(mplsoutsegmenttoplabel.get_name_leafdata());
    if (mplsoutsegmenttoplabelptr.is_set || is_set(mplsoutsegmenttoplabelptr.yfilter)) leaf_name_data.push_back(mplsoutsegmenttoplabelptr.get_name_leafdata());
    if (mplsoutsegmentnexthopaddrtype.is_set || is_set(mplsoutsegmentnexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsoutsegmentnexthopaddrtype.get_name_leafdata());
    if (mplsoutsegmentnexthopaddr.is_set || is_set(mplsoutsegmentnexthopaddr.yfilter)) leaf_name_data.push_back(mplsoutsegmentnexthopaddr.get_name_leafdata());
    if (mplsoutsegmentxcindex.is_set || is_set(mplsoutsegmentxcindex.yfilter)) leaf_name_data.push_back(mplsoutsegmentxcindex.get_name_leafdata());
    if (mplsoutsegmentowner.is_set || is_set(mplsoutsegmentowner.yfilter)) leaf_name_data.push_back(mplsoutsegmentowner.get_name_leafdata());
    if (mplsoutsegmenttrafficparamptr.is_set || is_set(mplsoutsegmenttrafficparamptr.yfilter)) leaf_name_data.push_back(mplsoutsegmenttrafficparamptr.get_name_leafdata());
    if (mplsoutsegmentrowstatus.is_set || is_set(mplsoutsegmentrowstatus.yfilter)) leaf_name_data.push_back(mplsoutsegmentrowstatus.get_name_leafdata());
    if (mplsoutsegmentstoragetype.is_set || is_set(mplsoutsegmentstoragetype.yfilter)) leaf_name_data.push_back(mplsoutsegmentstoragetype.get_name_leafdata());
    if (mplsoutsegmentperfoctets.is_set || is_set(mplsoutsegmentperfoctets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfoctets.get_name_leafdata());
    if (mplsoutsegmentperfpackets.is_set || is_set(mplsoutsegmentperfpackets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfpackets.get_name_leafdata());
    if (mplsoutsegmentperferrors.is_set || is_set(mplsoutsegmentperferrors.yfilter)) leaf_name_data.push_back(mplsoutsegmentperferrors.get_name_leafdata());
    if (mplsoutsegmentperfdiscards.is_set || is_set(mplsoutsegmentperfdiscards.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfdiscards.get_name_leafdata());
    if (mplsoutsegmentperfhcoctets.is_set || is_set(mplsoutsegmentperfhcoctets.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfhcoctets.get_name_leafdata());
    if (mplsoutsegmentperfdiscontinuitytime.is_set || is_set(mplsoutsegmentperfdiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsoutsegmentperfdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsOutSegmentPushTopLabel")
    {
        mplsoutsegmentpushtoplabel = value;
        mplsoutsegmentpushtoplabel.value_namespace = name_space;
        mplsoutsegmentpushtoplabel.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsOutSegmentNextHopAddrType")
    {
        mplsoutsegmentnexthopaddrtype = value;
        mplsoutsegmentnexthopaddrtype.value_namespace = name_space;
        mplsoutsegmentnexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentNextHopAddr")
    {
        mplsoutsegmentnexthopaddr = value;
        mplsoutsegmentnexthopaddr.value_namespace = name_space;
        mplsoutsegmentnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentXCIndex")
    {
        mplsoutsegmentxcindex = value;
        mplsoutsegmentxcindex.value_namespace = name_space;
        mplsoutsegmentxcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentOwner")
    {
        mplsoutsegmentowner = value;
        mplsoutsegmentowner.value_namespace = name_space;
        mplsoutsegmentowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentTrafficParamPtr")
    {
        mplsoutsegmenttrafficparamptr = value;
        mplsoutsegmenttrafficparamptr.value_namespace = name_space;
        mplsoutsegmenttrafficparamptr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsOutSegmentPerfErrors")
    {
        mplsoutsegmentperferrors = value;
        mplsoutsegmentperferrors.value_namespace = name_space;
        mplsoutsegmentperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfDiscards")
    {
        mplsoutsegmentperfdiscards = value;
        mplsoutsegmentperfdiscards.value_namespace = name_space;
        mplsoutsegmentperfdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfHCOctets")
    {
        mplsoutsegmentperfhcoctets = value;
        mplsoutsegmentperfhcoctets.value_namespace = name_space;
        mplsoutsegmentperfhcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsOutSegmentPerfDiscontinuityTime")
    {
        mplsoutsegmentperfdiscontinuitytime = value;
        mplsoutsegmentperfdiscontinuitytime.value_namespace = name_space;
        mplsoutsegmentperfdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsOutSegmentIndex")
    {
        mplsoutsegmentindex.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentInterface")
    {
        mplsoutsegmentinterface.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPushTopLabel")
    {
        mplsoutsegmentpushtoplabel.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTopLabel")
    {
        mplsoutsegmenttoplabel.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTopLabelPtr")
    {
        mplsoutsegmenttoplabelptr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentNextHopAddrType")
    {
        mplsoutsegmentnexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentNextHopAddr")
    {
        mplsoutsegmentnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentXCIndex")
    {
        mplsoutsegmentxcindex.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentOwner")
    {
        mplsoutsegmentowner.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentTrafficParamPtr")
    {
        mplsoutsegmenttrafficparamptr.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentRowStatus")
    {
        mplsoutsegmentrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentStorageType")
    {
        mplsoutsegmentstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfOctets")
    {
        mplsoutsegmentperfoctets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfPackets")
    {
        mplsoutsegmentperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfErrors")
    {
        mplsoutsegmentperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfDiscards")
    {
        mplsoutsegmentperfdiscards.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfHCOctets")
    {
        mplsoutsegmentperfhcoctets.yfilter = yfilter;
    }
    if(value_path == "mplsOutSegmentPerfDiscontinuityTime")
    {
        mplsoutsegmentperfdiscontinuitytime.yfilter = yfilter;
    }
}

bool MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsOutSegmentIndex" || name == "mplsOutSegmentInterface" || name == "mplsOutSegmentPushTopLabel" || name == "mplsOutSegmentTopLabel" || name == "mplsOutSegmentTopLabelPtr" || name == "mplsOutSegmentNextHopAddrType" || name == "mplsOutSegmentNextHopAddr" || name == "mplsOutSegmentXCIndex" || name == "mplsOutSegmentOwner" || name == "mplsOutSegmentTrafficParamPtr" || name == "mplsOutSegmentRowStatus" || name == "mplsOutSegmentStorageType" || name == "mplsOutSegmentPerfOctets" || name == "mplsOutSegmentPerfPackets" || name == "mplsOutSegmentPerfErrors" || name == "mplsOutSegmentPerfDiscards" || name == "mplsOutSegmentPerfHCOctets" || name == "mplsOutSegmentPerfDiscontinuityTime")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsXCTable::MplsXCTable()
    :
    mplsxcentry(this, {"mplsxcindex", "mplsxcinsegmentindex", "mplsxcoutsegmentindex"})
{

    yang_name = "mplsXCTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsXCTable::~MplsXCTable()
{
}

bool MPLSLSRSTDMIB::MplsXCTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsxcentry.len(); index++)
    {
        if(mplsxcentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsXCTable::has_operation() const
{
    for (std::size_t index=0; index<mplsxcentry.len(); index++)
    {
        if(mplsxcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsXCTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsXCTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsXCTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsXCTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsXCTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsXCEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry>();
        c->parent = this;
        mplsxcentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsXCTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsxcentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsXCTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsXCTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsXCTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCEntry()
    :
    mplsxcindex{YType::str, "mplsXCIndex"},
    mplsxcinsegmentindex{YType::str, "mplsXCInSegmentIndex"},
    mplsxcoutsegmentindex{YType::str, "mplsXCOutSegmentIndex"},
    mplsxclspid{YType::str, "mplsXCLspId"},
    mplsxclabelstackindex{YType::str, "mplsXCLabelStackIndex"},
    mplsxcowner{YType::enumeration, "mplsXCOwner"},
    mplsxcrowstatus{YType::enumeration, "mplsXCRowStatus"},
    mplsxcstoragetype{YType::enumeration, "mplsXCStorageType"},
    mplsxcadminstatus{YType::enumeration, "mplsXCAdminStatus"},
    mplsxcoperstatus{YType::enumeration, "mplsXCOperStatus"}
{

    yang_name = "mplsXCEntry"; yang_parent_name = "mplsXCTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::~MplsXCEntry()
{
}

bool MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsxcindex.is_set
	|| mplsxcinsegmentindex.is_set
	|| mplsxcoutsegmentindex.is_set
	|| mplsxclspid.is_set
	|| mplsxclabelstackindex.is_set
	|| mplsxcowner.is_set
	|| mplsxcrowstatus.is_set
	|| mplsxcstoragetype.is_set
	|| mplsxcadminstatus.is_set
	|| mplsxcoperstatus.is_set;
}

bool MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsxcindex.yfilter)
	|| ydk::is_set(mplsxcinsegmentindex.yfilter)
	|| ydk::is_set(mplsxcoutsegmentindex.yfilter)
	|| ydk::is_set(mplsxclspid.yfilter)
	|| ydk::is_set(mplsxclabelstackindex.yfilter)
	|| ydk::is_set(mplsxcowner.yfilter)
	|| ydk::is_set(mplsxcrowstatus.yfilter)
	|| ydk::is_set(mplsxcstoragetype.yfilter)
	|| ydk::is_set(mplsxcadminstatus.yfilter)
	|| ydk::is_set(mplsxcoperstatus.yfilter);
}

std::string MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsXCTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsXCEntry";
    ADD_KEY_TOKEN(mplsxcindex, "mplsXCIndex");
    ADD_KEY_TOKEN(mplsxcinsegmentindex, "mplsXCInSegmentIndex");
    ADD_KEY_TOKEN(mplsxcoutsegmentindex, "mplsXCOutSegmentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsxcindex.is_set || is_set(mplsxcindex.yfilter)) leaf_name_data.push_back(mplsxcindex.get_name_leafdata());
    if (mplsxcinsegmentindex.is_set || is_set(mplsxcinsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcinsegmentindex.get_name_leafdata());
    if (mplsxcoutsegmentindex.is_set || is_set(mplsxcoutsegmentindex.yfilter)) leaf_name_data.push_back(mplsxcoutsegmentindex.get_name_leafdata());
    if (mplsxclspid.is_set || is_set(mplsxclspid.yfilter)) leaf_name_data.push_back(mplsxclspid.get_name_leafdata());
    if (mplsxclabelstackindex.is_set || is_set(mplsxclabelstackindex.yfilter)) leaf_name_data.push_back(mplsxclabelstackindex.get_name_leafdata());
    if (mplsxcowner.is_set || is_set(mplsxcowner.yfilter)) leaf_name_data.push_back(mplsxcowner.get_name_leafdata());
    if (mplsxcrowstatus.is_set || is_set(mplsxcrowstatus.yfilter)) leaf_name_data.push_back(mplsxcrowstatus.get_name_leafdata());
    if (mplsxcstoragetype.is_set || is_set(mplsxcstoragetype.yfilter)) leaf_name_data.push_back(mplsxcstoragetype.get_name_leafdata());
    if (mplsxcadminstatus.is_set || is_set(mplsxcadminstatus.yfilter)) leaf_name_data.push_back(mplsxcadminstatus.get_name_leafdata());
    if (mplsxcoperstatus.is_set || is_set(mplsxcoperstatus.yfilter)) leaf_name_data.push_back(mplsxcoperstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsXCLspId")
    {
        mplsxclspid = value;
        mplsxclspid.value_namespace = name_space;
        mplsxclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCLabelStackIndex")
    {
        mplsxclabelstackindex = value;
        mplsxclabelstackindex.value_namespace = name_space;
        mplsxclabelstackindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsXCAdminStatus")
    {
        mplsxcadminstatus = value;
        mplsxcadminstatus.value_namespace = name_space;
        mplsxcadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsXCOperStatus")
    {
        mplsxcoperstatus = value;
        mplsxcoperstatus.value_namespace = name_space;
        mplsxcoperstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsXCLspId")
    {
        mplsxclspid.yfilter = yfilter;
    }
    if(value_path == "mplsXCLabelStackIndex")
    {
        mplsxclabelstackindex.yfilter = yfilter;
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
    if(value_path == "mplsXCAdminStatus")
    {
        mplsxcadminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsXCOperStatus")
    {
        mplsxcoperstatus.yfilter = yfilter;
    }
}

bool MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsXCIndex" || name == "mplsXCInSegmentIndex" || name == "mplsXCOutSegmentIndex" || name == "mplsXCLspId" || name == "mplsXCLabelStackIndex" || name == "mplsXCOwner" || name == "mplsXCRowStatus" || name == "mplsXCStorageType" || name == "mplsXCAdminStatus" || name == "mplsXCOperStatus")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackTable()
    :
    mplslabelstackentry(this, {"mplslabelstackindex", "mplslabelstacklabelindex"})
{

    yang_name = "mplsLabelStackTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsLabelStackTable::~MplsLabelStackTable()
{
}

bool MPLSLSRSTDMIB::MplsLabelStackTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplslabelstackentry.len(); index++)
    {
        if(mplslabelstackentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsLabelStackTable::has_operation() const
{
    for (std::size_t index=0; index<mplslabelstackentry.len(); index++)
    {
        if(mplslabelstackentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsLabelStackTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsLabelStackTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLabelStackTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsLabelStackTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsLabelStackTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsLabelStackEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry>();
        c->parent = this;
        mplslabelstackentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsLabelStackTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplslabelstackentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsLabelStackTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsLabelStackTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsLabelStackTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLabelStackEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::MplsLabelStackEntry()
    :
    mplslabelstackindex{YType::str, "mplsLabelStackIndex"},
    mplslabelstacklabelindex{YType::uint32, "mplsLabelStackLabelIndex"},
    mplslabelstacklabel{YType::uint32, "mplsLabelStackLabel"},
    mplslabelstacklabelptr{YType::str, "mplsLabelStackLabelPtr"},
    mplslabelstackrowstatus{YType::enumeration, "mplsLabelStackRowStatus"},
    mplslabelstackstoragetype{YType::enumeration, "mplsLabelStackStorageType"}
{

    yang_name = "mplsLabelStackEntry"; yang_parent_name = "mplsLabelStackTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::~MplsLabelStackEntry()
{
}

bool MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplslabelstackindex.is_set
	|| mplslabelstacklabelindex.is_set
	|| mplslabelstacklabel.is_set
	|| mplslabelstacklabelptr.is_set
	|| mplslabelstackrowstatus.is_set
	|| mplslabelstackstoragetype.is_set;
}

bool MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplslabelstackindex.yfilter)
	|| ydk::is_set(mplslabelstacklabelindex.yfilter)
	|| ydk::is_set(mplslabelstacklabel.yfilter)
	|| ydk::is_set(mplslabelstacklabelptr.yfilter)
	|| ydk::is_set(mplslabelstackrowstatus.yfilter)
	|| ydk::is_set(mplslabelstackstoragetype.yfilter);
}

std::string MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsLabelStackTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsLabelStackEntry";
    ADD_KEY_TOKEN(mplslabelstackindex, "mplsLabelStackIndex");
    ADD_KEY_TOKEN(mplslabelstacklabelindex, "mplsLabelStackLabelIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplslabelstackindex.is_set || is_set(mplslabelstackindex.yfilter)) leaf_name_data.push_back(mplslabelstackindex.get_name_leafdata());
    if (mplslabelstacklabelindex.is_set || is_set(mplslabelstacklabelindex.yfilter)) leaf_name_data.push_back(mplslabelstacklabelindex.get_name_leafdata());
    if (mplslabelstacklabel.is_set || is_set(mplslabelstacklabel.yfilter)) leaf_name_data.push_back(mplslabelstacklabel.get_name_leafdata());
    if (mplslabelstacklabelptr.is_set || is_set(mplslabelstacklabelptr.yfilter)) leaf_name_data.push_back(mplslabelstacklabelptr.get_name_leafdata());
    if (mplslabelstackrowstatus.is_set || is_set(mplslabelstackrowstatus.yfilter)) leaf_name_data.push_back(mplslabelstackrowstatus.get_name_leafdata());
    if (mplslabelstackstoragetype.is_set || is_set(mplslabelstackstoragetype.yfilter)) leaf_name_data.push_back(mplslabelstackstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsLabelStackIndex" || name == "mplsLabelStackLabelIndex" || name == "mplsLabelStackLabel" || name == "mplsLabelStackLabelPtr" || name == "mplsLabelStackRowStatus" || name == "mplsLabelStackStorageType")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapTable()
    :
    mplsinsegmentmapentry(this, {"mplsinsegmentmapinterface", "mplsinsegmentmaplabel", "mplsinsegmentmaplabelptrindex"})
{

    yang_name = "mplsInSegmentMapTable"; yang_parent_name = "MPLS-LSR-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInSegmentMapTable::~MplsInSegmentMapTable()
{
}

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsinsegmentmapentry.len(); index++)
    {
        if(mplsinsegmentmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmentmapentry.len(); index++)
    {
        if(mplsinsegmentmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSLSRSTDMIB::MplsInSegmentMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInSegmentMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInSegmentMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInSegmentMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsInSegmentMapEntry")
    {
        auto c = std::make_shared<MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry>();
        c->parent = this;
        mplsinsegmentmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInSegmentMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsinsegmentmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSLSRSTDMIB::MplsInSegmentMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSLSRSTDMIB::MplsInSegmentMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentMapEntry")
        return true;
    return false;
}

MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::MplsInSegmentMapEntry()
    :
    mplsinsegmentmapinterface{YType::int32, "mplsInSegmentMapInterface"},
    mplsinsegmentmaplabel{YType::uint32, "mplsInSegmentMapLabel"},
    mplsinsegmentmaplabelptrindex{YType::str, "mplsInSegmentMapLabelPtrIndex"},
    mplsinsegmentmapindex{YType::str, "mplsInSegmentMapIndex"}
{

    yang_name = "mplsInSegmentMapEntry"; yang_parent_name = "mplsInSegmentMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::~MplsInSegmentMapEntry()
{
}

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsinsegmentmapinterface.is_set
	|| mplsinsegmentmaplabel.is_set
	|| mplsinsegmentmaplabelptrindex.is_set
	|| mplsinsegmentmapindex.is_set;
}

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsinsegmentmapinterface.yfilter)
	|| ydk::is_set(mplsinsegmentmaplabel.yfilter)
	|| ydk::is_set(mplsinsegmentmaplabelptrindex.yfilter)
	|| ydk::is_set(mplsinsegmentmapindex.yfilter);
}

std::string MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-LSR-STD-MIB:MPLS-LSR-STD-MIB/mplsInSegmentMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsInSegmentMapEntry";
    ADD_KEY_TOKEN(mplsinsegmentmapinterface, "mplsInSegmentMapInterface");
    ADD_KEY_TOKEN(mplsinsegmentmaplabel, "mplsInSegmentMapLabel");
    ADD_KEY_TOKEN(mplsinsegmentmaplabelptrindex, "mplsInSegmentMapLabelPtrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsinsegmentmapinterface.is_set || is_set(mplsinsegmentmapinterface.yfilter)) leaf_name_data.push_back(mplsinsegmentmapinterface.get_name_leafdata());
    if (mplsinsegmentmaplabel.is_set || is_set(mplsinsegmentmaplabel.yfilter)) leaf_name_data.push_back(mplsinsegmentmaplabel.get_name_leafdata());
    if (mplsinsegmentmaplabelptrindex.is_set || is_set(mplsinsegmentmaplabelptrindex.yfilter)) leaf_name_data.push_back(mplsinsegmentmaplabelptrindex.get_name_leafdata());
    if (mplsinsegmentmapindex.is_set || is_set(mplsinsegmentmapindex.yfilter)) leaf_name_data.push_back(mplsinsegmentmapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsInSegmentMapInterface" || name == "mplsInSegmentMapLabel" || name == "mplsInSegmentMapLabelPtrIndex" || name == "mplsInSegmentMapIndex")
        return true;
    return false;
}

const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCAdminStatus::up {1, "up"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCAdminStatus::down {2, "down"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCAdminStatus::testing {3, "testing"};

const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::up {1, "up"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::down {2, "down"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::testing {3, "testing"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::unknown {4, "unknown"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::dormant {5, "dormant"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::notPresent {6, "notPresent"};
const Enum::YLeaf MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus::lowerLayerDown {7, "lowerLayerDown"};


}
}

