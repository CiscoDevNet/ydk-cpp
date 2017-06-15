
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_LSR_STD_MIB.hpp"

namespace ydk {
namespace MPLS_LSR_STD_MIB {

MplsLsrStdMib::MplsLsrStdMib()
    :
    mplsinsegmentmaptable_(std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable>())
	,mplsinsegmenttable_(std::make_shared<MplsLsrStdMib::Mplsinsegmenttable>())
	,mplsinterfacetable_(std::make_shared<MplsLsrStdMib::Mplsinterfacetable>())
	,mplslabelstacktable_(std::make_shared<MplsLsrStdMib::Mplslabelstacktable>())
	,mplslsrobjects_(std::make_shared<MplsLsrStdMib::Mplslsrobjects>())
	,mplsoutsegmenttable_(std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable>())
	,mplsxctable_(std::make_shared<MplsLsrStdMib::Mplsxctable>())
{
    mplsinsegmentmaptable_->parent = this;

    mplsinsegmenttable_->parent = this;

    mplsinterfacetable_->parent = this;

    mplslabelstacktable_->parent = this;

    mplslsrobjects_->parent = this;

    mplsoutsegmenttable_->parent = this;

    mplsxctable_->parent = this;

    yang_name = "MPLS-LSR-STD-MIB"; yang_parent_name = "MPLS-LSR-STD-MIB";
}

MplsLsrStdMib::~MplsLsrStdMib()
{
}

bool MplsLsrStdMib::has_data() const
{
    return (mplsinsegmentmaptable_ !=  nullptr && mplsinsegmentmaptable_->has_data())
	|| (mplsinsegmenttable_ !=  nullptr && mplsinsegmenttable_->has_data())
	|| (mplsinterfacetable_ !=  nullptr && mplsinterfacetable_->has_data())
	|| (mplslabelstacktable_ !=  nullptr && mplslabelstacktable_->has_data())
	|| (mplslsrobjects_ !=  nullptr && mplslsrobjects_->has_data())
	|| (mplsoutsegmenttable_ !=  nullptr && mplsoutsegmenttable_->has_data())
	|| (mplsxctable_ !=  nullptr && mplsxctable_->has_data());
}

bool MplsLsrStdMib::has_operation() const
{
    return is_set(operation)
	|| (mplsinsegmentmaptable_ !=  nullptr && mplsinsegmentmaptable_->has_operation())
	|| (mplsinsegmenttable_ !=  nullptr && mplsinsegmenttable_->has_operation())
	|| (mplsinterfacetable_ !=  nullptr && mplsinterfacetable_->has_operation())
	|| (mplslabelstacktable_ !=  nullptr && mplslabelstacktable_->has_operation())
	|| (mplslsrobjects_ !=  nullptr && mplslsrobjects_->has_operation())
	|| (mplsoutsegmenttable_ !=  nullptr && mplsoutsegmenttable_->has_operation())
	|| (mplsxctable_ !=  nullptr && mplsxctable_->has_operation());
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
        if(mplsinsegmentmaptable_ == nullptr)
        {
            mplsinsegmentmaptable_ = std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable>();
        }
        return mplsinsegmentmaptable_;
    }

    if(child_yang_name == "mplsInSegmentTable")
    {
        if(mplsinsegmenttable_ == nullptr)
        {
            mplsinsegmenttable_ = std::make_shared<MplsLsrStdMib::Mplsinsegmenttable>();
        }
        return mplsinsegmenttable_;
    }

    if(child_yang_name == "mplsInterfaceTable")
    {
        if(mplsinterfacetable_ == nullptr)
        {
            mplsinterfacetable_ = std::make_shared<MplsLsrStdMib::Mplsinterfacetable>();
        }
        return mplsinterfacetable_;
    }

    if(child_yang_name == "mplsLabelStackTable")
    {
        if(mplslabelstacktable_ == nullptr)
        {
            mplslabelstacktable_ = std::make_shared<MplsLsrStdMib::Mplslabelstacktable>();
        }
        return mplslabelstacktable_;
    }

    if(child_yang_name == "mplsLsrObjects")
    {
        if(mplslsrobjects_ == nullptr)
        {
            mplslsrobjects_ = std::make_shared<MplsLsrStdMib::Mplslsrobjects>();
        }
        return mplslsrobjects_;
    }

    if(child_yang_name == "mplsOutSegmentTable")
    {
        if(mplsoutsegmenttable_ == nullptr)
        {
            mplsoutsegmenttable_ = std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable>();
        }
        return mplsoutsegmenttable_;
    }

    if(child_yang_name == "mplsXCTable")
    {
        if(mplsxctable_ == nullptr)
        {
            mplsxctable_ = std::make_shared<MplsLsrStdMib::Mplsxctable>();
        }
        return mplsxctable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsinsegmentmaptable_ != nullptr)
    {
        children["mplsInSegmentMapTable"] = mplsinsegmentmaptable_;
    }

    if(mplsinsegmenttable_ != nullptr)
    {
        children["mplsInSegmentTable"] = mplsinsegmenttable_;
    }

    if(mplsinterfacetable_ != nullptr)
    {
        children["mplsInterfaceTable"] = mplsinterfacetable_;
    }

    if(mplslabelstacktable_ != nullptr)
    {
        children["mplsLabelStackTable"] = mplslabelstacktable_;
    }

    if(mplslsrobjects_ != nullptr)
    {
        children["mplsLsrObjects"] = mplslsrobjects_;
    }

    if(mplsoutsegmenttable_ != nullptr)
    {
        children["mplsOutSegmentTable"] = mplsoutsegmenttable_;
    }

    if(mplsxctable_ != nullptr)
    {
        children["mplsXCTable"] = mplsxctable_;
    }

    return children;
}

void MplsLsrStdMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(mplsinsegmentindexnext.operation)
	|| is_set(mplslabelstackindexnext.operation)
	|| is_set(mplsmaxlabelstackdepth.operation)
	|| is_set(mplsoutsegmentindexnext.operation)
	|| is_set(mplsxcindexnext.operation)
	|| is_set(mplsxcnotificationsenable.operation);
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

    if (mplsinsegmentindexnext.is_set || is_set(mplsinsegmentindexnext.operation)) leaf_name_data.push_back(mplsinsegmentindexnext.get_name_leafdata());
    if (mplslabelstackindexnext.is_set || is_set(mplslabelstackindexnext.operation)) leaf_name_data.push_back(mplslabelstackindexnext.get_name_leafdata());
    if (mplsmaxlabelstackdepth.is_set || is_set(mplsmaxlabelstackdepth.operation)) leaf_name_data.push_back(mplsmaxlabelstackdepth.get_name_leafdata());
    if (mplsoutsegmentindexnext.is_set || is_set(mplsoutsegmentindexnext.operation)) leaf_name_data.push_back(mplsoutsegmentindexnext.get_name_leafdata());
    if (mplsxcindexnext.is_set || is_set(mplsxcindexnext.operation)) leaf_name_data.push_back(mplsxcindexnext.get_name_leafdata());
    if (mplsxcnotificationsenable.is_set || is_set(mplsxcnotificationsenable.operation)) leaf_name_data.push_back(mplsxcnotificationsenable.get_name_leafdata());


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

void MplsLsrStdMib::Mplslsrobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsInSegmentIndexNext")
    {
        mplsinsegmentindexnext = value;
    }
    if(value_path == "mplsLabelStackIndexNext")
    {
        mplslabelstackindexnext = value;
    }
    if(value_path == "mplsMaxLabelStackDepth")
    {
        mplsmaxlabelstackdepth = value;
    }
    if(value_path == "mplsOutSegmentIndexNext")
    {
        mplsoutsegmentindexnext = value;
    }
    if(value_path == "mplsXCIndexNext")
    {
        mplsxcindexnext = value;
    }
    if(value_path == "mplsXCNotificationsEnable")
    {
        mplsxcnotificationsenable = value;
    }
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
    for (std::size_t index=0; index<mplsinterfaceentry_.size(); index++)
    {
        if(mplsinterfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<mplsinterfaceentry_.size(); index++)
    {
        if(mplsinterfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplsinterfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry>();
        c->parent = this;
        mplsinterfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinterfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinterfacetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsinterfaceindex.operation)
	|| is_set(mplsinterfaceavailablebandwidth.operation)
	|| is_set(mplsinterfacelabelmaxin.operation)
	|| is_set(mplsinterfacelabelmaxout.operation)
	|| is_set(mplsinterfacelabelminin.operation)
	|| is_set(mplsinterfacelabelminout.operation)
	|| is_set(mplsinterfacelabelparticipationtype.operation)
	|| is_set(mplsinterfaceperfinlabellookupfailures.operation)
	|| is_set(mplsinterfaceperfinlabelsinuse.operation)
	|| is_set(mplsinterfaceperfoutfragmentedpkts.operation)
	|| is_set(mplsinterfaceperfoutlabelsinuse.operation)
	|| is_set(mplsinterfacetotalbandwidth.operation);
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

    if (mplsinterfaceindex.is_set || is_set(mplsinterfaceindex.operation)) leaf_name_data.push_back(mplsinterfaceindex.get_name_leafdata());
    if (mplsinterfaceavailablebandwidth.is_set || is_set(mplsinterfaceavailablebandwidth.operation)) leaf_name_data.push_back(mplsinterfaceavailablebandwidth.get_name_leafdata());
    if (mplsinterfacelabelmaxin.is_set || is_set(mplsinterfacelabelmaxin.operation)) leaf_name_data.push_back(mplsinterfacelabelmaxin.get_name_leafdata());
    if (mplsinterfacelabelmaxout.is_set || is_set(mplsinterfacelabelmaxout.operation)) leaf_name_data.push_back(mplsinterfacelabelmaxout.get_name_leafdata());
    if (mplsinterfacelabelminin.is_set || is_set(mplsinterfacelabelminin.operation)) leaf_name_data.push_back(mplsinterfacelabelminin.get_name_leafdata());
    if (mplsinterfacelabelminout.is_set || is_set(mplsinterfacelabelminout.operation)) leaf_name_data.push_back(mplsinterfacelabelminout.get_name_leafdata());
    if (mplsinterfacelabelparticipationtype.is_set || is_set(mplsinterfacelabelparticipationtype.operation)) leaf_name_data.push_back(mplsinterfacelabelparticipationtype.get_name_leafdata());
    if (mplsinterfaceperfinlabellookupfailures.is_set || is_set(mplsinterfaceperfinlabellookupfailures.operation)) leaf_name_data.push_back(mplsinterfaceperfinlabellookupfailures.get_name_leafdata());
    if (mplsinterfaceperfinlabelsinuse.is_set || is_set(mplsinterfaceperfinlabelsinuse.operation)) leaf_name_data.push_back(mplsinterfaceperfinlabelsinuse.get_name_leafdata());
    if (mplsinterfaceperfoutfragmentedpkts.is_set || is_set(mplsinterfaceperfoutfragmentedpkts.operation)) leaf_name_data.push_back(mplsinterfaceperfoutfragmentedpkts.get_name_leafdata());
    if (mplsinterfaceperfoutlabelsinuse.is_set || is_set(mplsinterfaceperfoutlabelsinuse.operation)) leaf_name_data.push_back(mplsinterfaceperfoutlabelsinuse.get_name_leafdata());
    if (mplsinterfacetotalbandwidth.is_set || is_set(mplsinterfacetotalbandwidth.operation)) leaf_name_data.push_back(mplsinterfacetotalbandwidth.get_name_leafdata());


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

void MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsInterfaceIndex")
    {
        mplsinterfaceindex = value;
    }
    if(value_path == "mplsInterfaceAvailableBandwidth")
    {
        mplsinterfaceavailablebandwidth = value;
    }
    if(value_path == "mplsInterfaceLabelMaxIn")
    {
        mplsinterfacelabelmaxin = value;
    }
    if(value_path == "mplsInterfaceLabelMaxOut")
    {
        mplsinterfacelabelmaxout = value;
    }
    if(value_path == "mplsInterfaceLabelMinIn")
    {
        mplsinterfacelabelminin = value;
    }
    if(value_path == "mplsInterfaceLabelMinOut")
    {
        mplsinterfacelabelminout = value;
    }
    if(value_path == "mplsInterfaceLabelParticipationType")
    {
        mplsinterfacelabelparticipationtype[value] = true;
    }
    if(value_path == "mplsInterfacePerfInLabelLookupFailures")
    {
        mplsinterfaceperfinlabellookupfailures = value;
    }
    if(value_path == "mplsInterfacePerfInLabelsInUse")
    {
        mplsinterfaceperfinlabelsinuse = value;
    }
    if(value_path == "mplsInterfacePerfOutFragmentedPkts")
    {
        mplsinterfaceperfoutfragmentedpkts = value;
    }
    if(value_path == "mplsInterfacePerfOutLabelsInUse")
    {
        mplsinterfaceperfoutlabelsinuse = value;
    }
    if(value_path == "mplsInterfaceTotalBandwidth")
    {
        mplsinterfacetotalbandwidth = value;
    }
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
    for (std::size_t index=0; index<mplsinsegmententry_.size(); index++)
    {
        if(mplsinsegmententry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinsegmenttable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmententry_.size(); index++)
    {
        if(mplsinsegmententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplsinsegmententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry>();
        c->parent = this;
        mplsinsegmententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinsegmententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinsegmenttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsinsegmentindex.operation)
	|| is_set(mplsinsegmentaddrfamily.operation)
	|| is_set(mplsinsegmentinterface.operation)
	|| is_set(mplsinsegmentlabel.operation)
	|| is_set(mplsinsegmentlabelptr.operation)
	|| is_set(mplsinsegmentnpop.operation)
	|| is_set(mplsinsegmentowner.operation)
	|| is_set(mplsinsegmentperfdiscards.operation)
	|| is_set(mplsinsegmentperfdiscontinuitytime.operation)
	|| is_set(mplsinsegmentperferrors.operation)
	|| is_set(mplsinsegmentperfhcoctets.operation)
	|| is_set(mplsinsegmentperfoctets.operation)
	|| is_set(mplsinsegmentperfpackets.operation)
	|| is_set(mplsinsegmentrowstatus.operation)
	|| is_set(mplsinsegmentstoragetype.operation)
	|| is_set(mplsinsegmenttrafficparamptr.operation)
	|| is_set(mplsinsegmentxcindex.operation);
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

    if (mplsinsegmentindex.is_set || is_set(mplsinsegmentindex.operation)) leaf_name_data.push_back(mplsinsegmentindex.get_name_leafdata());
    if (mplsinsegmentaddrfamily.is_set || is_set(mplsinsegmentaddrfamily.operation)) leaf_name_data.push_back(mplsinsegmentaddrfamily.get_name_leafdata());
    if (mplsinsegmentinterface.is_set || is_set(mplsinsegmentinterface.operation)) leaf_name_data.push_back(mplsinsegmentinterface.get_name_leafdata());
    if (mplsinsegmentlabel.is_set || is_set(mplsinsegmentlabel.operation)) leaf_name_data.push_back(mplsinsegmentlabel.get_name_leafdata());
    if (mplsinsegmentlabelptr.is_set || is_set(mplsinsegmentlabelptr.operation)) leaf_name_data.push_back(mplsinsegmentlabelptr.get_name_leafdata());
    if (mplsinsegmentnpop.is_set || is_set(mplsinsegmentnpop.operation)) leaf_name_data.push_back(mplsinsegmentnpop.get_name_leafdata());
    if (mplsinsegmentowner.is_set || is_set(mplsinsegmentowner.operation)) leaf_name_data.push_back(mplsinsegmentowner.get_name_leafdata());
    if (mplsinsegmentperfdiscards.is_set || is_set(mplsinsegmentperfdiscards.operation)) leaf_name_data.push_back(mplsinsegmentperfdiscards.get_name_leafdata());
    if (mplsinsegmentperfdiscontinuitytime.is_set || is_set(mplsinsegmentperfdiscontinuitytime.operation)) leaf_name_data.push_back(mplsinsegmentperfdiscontinuitytime.get_name_leafdata());
    if (mplsinsegmentperferrors.is_set || is_set(mplsinsegmentperferrors.operation)) leaf_name_data.push_back(mplsinsegmentperferrors.get_name_leafdata());
    if (mplsinsegmentperfhcoctets.is_set || is_set(mplsinsegmentperfhcoctets.operation)) leaf_name_data.push_back(mplsinsegmentperfhcoctets.get_name_leafdata());
    if (mplsinsegmentperfoctets.is_set || is_set(mplsinsegmentperfoctets.operation)) leaf_name_data.push_back(mplsinsegmentperfoctets.get_name_leafdata());
    if (mplsinsegmentperfpackets.is_set || is_set(mplsinsegmentperfpackets.operation)) leaf_name_data.push_back(mplsinsegmentperfpackets.get_name_leafdata());
    if (mplsinsegmentrowstatus.is_set || is_set(mplsinsegmentrowstatus.operation)) leaf_name_data.push_back(mplsinsegmentrowstatus.get_name_leafdata());
    if (mplsinsegmentstoragetype.is_set || is_set(mplsinsegmentstoragetype.operation)) leaf_name_data.push_back(mplsinsegmentstoragetype.get_name_leafdata());
    if (mplsinsegmenttrafficparamptr.is_set || is_set(mplsinsegmenttrafficparamptr.operation)) leaf_name_data.push_back(mplsinsegmenttrafficparamptr.get_name_leafdata());
    if (mplsinsegmentxcindex.is_set || is_set(mplsinsegmentxcindex.operation)) leaf_name_data.push_back(mplsinsegmentxcindex.get_name_leafdata());


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

void MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsInSegmentIndex")
    {
        mplsinsegmentindex = value;
    }
    if(value_path == "mplsInSegmentAddrFamily")
    {
        mplsinsegmentaddrfamily = value;
    }
    if(value_path == "mplsInSegmentInterface")
    {
        mplsinsegmentinterface = value;
    }
    if(value_path == "mplsInSegmentLabel")
    {
        mplsinsegmentlabel = value;
    }
    if(value_path == "mplsInSegmentLabelPtr")
    {
        mplsinsegmentlabelptr = value;
    }
    if(value_path == "mplsInSegmentNPop")
    {
        mplsinsegmentnpop = value;
    }
    if(value_path == "mplsInSegmentOwner")
    {
        mplsinsegmentowner = value;
    }
    if(value_path == "mplsInSegmentPerfDiscards")
    {
        mplsinsegmentperfdiscards = value;
    }
    if(value_path == "mplsInSegmentPerfDiscontinuityTime")
    {
        mplsinsegmentperfdiscontinuitytime = value;
    }
    if(value_path == "mplsInSegmentPerfErrors")
    {
        mplsinsegmentperferrors = value;
    }
    if(value_path == "mplsInSegmentPerfHCOctets")
    {
        mplsinsegmentperfhcoctets = value;
    }
    if(value_path == "mplsInSegmentPerfOctets")
    {
        mplsinsegmentperfoctets = value;
    }
    if(value_path == "mplsInSegmentPerfPackets")
    {
        mplsinsegmentperfpackets = value;
    }
    if(value_path == "mplsInSegmentRowStatus")
    {
        mplsinsegmentrowstatus = value;
    }
    if(value_path == "mplsInSegmentStorageType")
    {
        mplsinsegmentstoragetype = value;
    }
    if(value_path == "mplsInSegmentTrafficParamPtr")
    {
        mplsinsegmenttrafficparamptr = value;
    }
    if(value_path == "mplsInSegmentXCIndex")
    {
        mplsinsegmentxcindex = value;
    }
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
    for (std::size_t index=0; index<mplsoutsegmententry_.size(); index++)
    {
        if(mplsoutsegmententry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsoutsegmenttable::has_operation() const
{
    for (std::size_t index=0; index<mplsoutsegmententry_.size(); index++)
    {
        if(mplsoutsegmententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplsoutsegmententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry>();
        c->parent = this;
        mplsoutsegmententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsoutsegmenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsoutsegmententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsoutsegmenttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsoutsegmentindex.operation)
	|| is_set(mplsoutsegmentinterface.operation)
	|| is_set(mplsoutsegmentnexthopaddr.operation)
	|| is_set(mplsoutsegmentnexthopaddrtype.operation)
	|| is_set(mplsoutsegmentowner.operation)
	|| is_set(mplsoutsegmentperfdiscards.operation)
	|| is_set(mplsoutsegmentperfdiscontinuitytime.operation)
	|| is_set(mplsoutsegmentperferrors.operation)
	|| is_set(mplsoutsegmentperfhcoctets.operation)
	|| is_set(mplsoutsegmentperfoctets.operation)
	|| is_set(mplsoutsegmentperfpackets.operation)
	|| is_set(mplsoutsegmentpushtoplabel.operation)
	|| is_set(mplsoutsegmentrowstatus.operation)
	|| is_set(mplsoutsegmentstoragetype.operation)
	|| is_set(mplsoutsegmenttoplabel.operation)
	|| is_set(mplsoutsegmenttoplabelptr.operation)
	|| is_set(mplsoutsegmenttrafficparamptr.operation)
	|| is_set(mplsoutsegmentxcindex.operation);
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

    if (mplsoutsegmentindex.is_set || is_set(mplsoutsegmentindex.operation)) leaf_name_data.push_back(mplsoutsegmentindex.get_name_leafdata());
    if (mplsoutsegmentinterface.is_set || is_set(mplsoutsegmentinterface.operation)) leaf_name_data.push_back(mplsoutsegmentinterface.get_name_leafdata());
    if (mplsoutsegmentnexthopaddr.is_set || is_set(mplsoutsegmentnexthopaddr.operation)) leaf_name_data.push_back(mplsoutsegmentnexthopaddr.get_name_leafdata());
    if (mplsoutsegmentnexthopaddrtype.is_set || is_set(mplsoutsegmentnexthopaddrtype.operation)) leaf_name_data.push_back(mplsoutsegmentnexthopaddrtype.get_name_leafdata());
    if (mplsoutsegmentowner.is_set || is_set(mplsoutsegmentowner.operation)) leaf_name_data.push_back(mplsoutsegmentowner.get_name_leafdata());
    if (mplsoutsegmentperfdiscards.is_set || is_set(mplsoutsegmentperfdiscards.operation)) leaf_name_data.push_back(mplsoutsegmentperfdiscards.get_name_leafdata());
    if (mplsoutsegmentperfdiscontinuitytime.is_set || is_set(mplsoutsegmentperfdiscontinuitytime.operation)) leaf_name_data.push_back(mplsoutsegmentperfdiscontinuitytime.get_name_leafdata());
    if (mplsoutsegmentperferrors.is_set || is_set(mplsoutsegmentperferrors.operation)) leaf_name_data.push_back(mplsoutsegmentperferrors.get_name_leafdata());
    if (mplsoutsegmentperfhcoctets.is_set || is_set(mplsoutsegmentperfhcoctets.operation)) leaf_name_data.push_back(mplsoutsegmentperfhcoctets.get_name_leafdata());
    if (mplsoutsegmentperfoctets.is_set || is_set(mplsoutsegmentperfoctets.operation)) leaf_name_data.push_back(mplsoutsegmentperfoctets.get_name_leafdata());
    if (mplsoutsegmentperfpackets.is_set || is_set(mplsoutsegmentperfpackets.operation)) leaf_name_data.push_back(mplsoutsegmentperfpackets.get_name_leafdata());
    if (mplsoutsegmentpushtoplabel.is_set || is_set(mplsoutsegmentpushtoplabel.operation)) leaf_name_data.push_back(mplsoutsegmentpushtoplabel.get_name_leafdata());
    if (mplsoutsegmentrowstatus.is_set || is_set(mplsoutsegmentrowstatus.operation)) leaf_name_data.push_back(mplsoutsegmentrowstatus.get_name_leafdata());
    if (mplsoutsegmentstoragetype.is_set || is_set(mplsoutsegmentstoragetype.operation)) leaf_name_data.push_back(mplsoutsegmentstoragetype.get_name_leafdata());
    if (mplsoutsegmenttoplabel.is_set || is_set(mplsoutsegmenttoplabel.operation)) leaf_name_data.push_back(mplsoutsegmenttoplabel.get_name_leafdata());
    if (mplsoutsegmenttoplabelptr.is_set || is_set(mplsoutsegmenttoplabelptr.operation)) leaf_name_data.push_back(mplsoutsegmenttoplabelptr.get_name_leafdata());
    if (mplsoutsegmenttrafficparamptr.is_set || is_set(mplsoutsegmenttrafficparamptr.operation)) leaf_name_data.push_back(mplsoutsegmenttrafficparamptr.get_name_leafdata());
    if (mplsoutsegmentxcindex.is_set || is_set(mplsoutsegmentxcindex.operation)) leaf_name_data.push_back(mplsoutsegmentxcindex.get_name_leafdata());


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

void MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsOutSegmentIndex")
    {
        mplsoutsegmentindex = value;
    }
    if(value_path == "mplsOutSegmentInterface")
    {
        mplsoutsegmentinterface = value;
    }
    if(value_path == "mplsOutSegmentNextHopAddr")
    {
        mplsoutsegmentnexthopaddr = value;
    }
    if(value_path == "mplsOutSegmentNextHopAddrType")
    {
        mplsoutsegmentnexthopaddrtype = value;
    }
    if(value_path == "mplsOutSegmentOwner")
    {
        mplsoutsegmentowner = value;
    }
    if(value_path == "mplsOutSegmentPerfDiscards")
    {
        mplsoutsegmentperfdiscards = value;
    }
    if(value_path == "mplsOutSegmentPerfDiscontinuityTime")
    {
        mplsoutsegmentperfdiscontinuitytime = value;
    }
    if(value_path == "mplsOutSegmentPerfErrors")
    {
        mplsoutsegmentperferrors = value;
    }
    if(value_path == "mplsOutSegmentPerfHCOctets")
    {
        mplsoutsegmentperfhcoctets = value;
    }
    if(value_path == "mplsOutSegmentPerfOctets")
    {
        mplsoutsegmentperfoctets = value;
    }
    if(value_path == "mplsOutSegmentPerfPackets")
    {
        mplsoutsegmentperfpackets = value;
    }
    if(value_path == "mplsOutSegmentPushTopLabel")
    {
        mplsoutsegmentpushtoplabel = value;
    }
    if(value_path == "mplsOutSegmentRowStatus")
    {
        mplsoutsegmentrowstatus = value;
    }
    if(value_path == "mplsOutSegmentStorageType")
    {
        mplsoutsegmentstoragetype = value;
    }
    if(value_path == "mplsOutSegmentTopLabel")
    {
        mplsoutsegmenttoplabel = value;
    }
    if(value_path == "mplsOutSegmentTopLabelPtr")
    {
        mplsoutsegmenttoplabelptr = value;
    }
    if(value_path == "mplsOutSegmentTrafficParamPtr")
    {
        mplsoutsegmenttrafficparamptr = value;
    }
    if(value_path == "mplsOutSegmentXCIndex")
    {
        mplsoutsegmentxcindex = value;
    }
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
    for (std::size_t index=0; index<mplsxcentry_.size(); index++)
    {
        if(mplsxcentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsxctable::has_operation() const
{
    for (std::size_t index=0; index<mplsxcentry_.size(); index++)
    {
        if(mplsxcentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplsxcentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsxctable::Mplsxcentry>();
        c->parent = this;
        mplsxcentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsxctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsxcentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsxctable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsxcindex.operation)
	|| is_set(mplsxcinsegmentindex.operation)
	|| is_set(mplsxcoutsegmentindex.operation)
	|| is_set(mplsxcadminstatus.operation)
	|| is_set(mplsxclabelstackindex.operation)
	|| is_set(mplsxclspid.operation)
	|| is_set(mplsxcoperstatus.operation)
	|| is_set(mplsxcowner.operation)
	|| is_set(mplsxcrowstatus.operation)
	|| is_set(mplsxcstoragetype.operation);
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

    if (mplsxcindex.is_set || is_set(mplsxcindex.operation)) leaf_name_data.push_back(mplsxcindex.get_name_leafdata());
    if (mplsxcinsegmentindex.is_set || is_set(mplsxcinsegmentindex.operation)) leaf_name_data.push_back(mplsxcinsegmentindex.get_name_leafdata());
    if (mplsxcoutsegmentindex.is_set || is_set(mplsxcoutsegmentindex.operation)) leaf_name_data.push_back(mplsxcoutsegmentindex.get_name_leafdata());
    if (mplsxcadminstatus.is_set || is_set(mplsxcadminstatus.operation)) leaf_name_data.push_back(mplsxcadminstatus.get_name_leafdata());
    if (mplsxclabelstackindex.is_set || is_set(mplsxclabelstackindex.operation)) leaf_name_data.push_back(mplsxclabelstackindex.get_name_leafdata());
    if (mplsxclspid.is_set || is_set(mplsxclspid.operation)) leaf_name_data.push_back(mplsxclspid.get_name_leafdata());
    if (mplsxcoperstatus.is_set || is_set(mplsxcoperstatus.operation)) leaf_name_data.push_back(mplsxcoperstatus.get_name_leafdata());
    if (mplsxcowner.is_set || is_set(mplsxcowner.operation)) leaf_name_data.push_back(mplsxcowner.get_name_leafdata());
    if (mplsxcrowstatus.is_set || is_set(mplsxcrowstatus.operation)) leaf_name_data.push_back(mplsxcrowstatus.get_name_leafdata());
    if (mplsxcstoragetype.is_set || is_set(mplsxcstoragetype.operation)) leaf_name_data.push_back(mplsxcstoragetype.get_name_leafdata());


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

void MplsLsrStdMib::Mplsxctable::Mplsxcentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsXCIndex")
    {
        mplsxcindex = value;
    }
    if(value_path == "mplsXCInSegmentIndex")
    {
        mplsxcinsegmentindex = value;
    }
    if(value_path == "mplsXCOutSegmentIndex")
    {
        mplsxcoutsegmentindex = value;
    }
    if(value_path == "mplsXCAdminStatus")
    {
        mplsxcadminstatus = value;
    }
    if(value_path == "mplsXCLabelStackIndex")
    {
        mplsxclabelstackindex = value;
    }
    if(value_path == "mplsXCLspId")
    {
        mplsxclspid = value;
    }
    if(value_path == "mplsXCOperStatus")
    {
        mplsxcoperstatus = value;
    }
    if(value_path == "mplsXCOwner")
    {
        mplsxcowner = value;
    }
    if(value_path == "mplsXCRowStatus")
    {
        mplsxcrowstatus = value;
    }
    if(value_path == "mplsXCStorageType")
    {
        mplsxcstoragetype = value;
    }
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
    for (std::size_t index=0; index<mplslabelstackentry_.size(); index++)
    {
        if(mplslabelstackentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplslabelstacktable::has_operation() const
{
    for (std::size_t index=0; index<mplslabelstackentry_.size(); index++)
    {
        if(mplslabelstackentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplslabelstackentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry>();
        c->parent = this;
        mplslabelstackentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplslabelstacktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplslabelstackentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplslabelstacktable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplslabelstackindex.operation)
	|| is_set(mplslabelstacklabelindex.operation)
	|| is_set(mplslabelstacklabel.operation)
	|| is_set(mplslabelstacklabelptr.operation)
	|| is_set(mplslabelstackrowstatus.operation)
	|| is_set(mplslabelstackstoragetype.operation);
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

    if (mplslabelstackindex.is_set || is_set(mplslabelstackindex.operation)) leaf_name_data.push_back(mplslabelstackindex.get_name_leafdata());
    if (mplslabelstacklabelindex.is_set || is_set(mplslabelstacklabelindex.operation)) leaf_name_data.push_back(mplslabelstacklabelindex.get_name_leafdata());
    if (mplslabelstacklabel.is_set || is_set(mplslabelstacklabel.operation)) leaf_name_data.push_back(mplslabelstacklabel.get_name_leafdata());
    if (mplslabelstacklabelptr.is_set || is_set(mplslabelstacklabelptr.operation)) leaf_name_data.push_back(mplslabelstacklabelptr.get_name_leafdata());
    if (mplslabelstackrowstatus.is_set || is_set(mplslabelstackrowstatus.operation)) leaf_name_data.push_back(mplslabelstackrowstatus.get_name_leafdata());
    if (mplslabelstackstoragetype.is_set || is_set(mplslabelstackstoragetype.operation)) leaf_name_data.push_back(mplslabelstackstoragetype.get_name_leafdata());


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

void MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsLabelStackIndex")
    {
        mplslabelstackindex = value;
    }
    if(value_path == "mplsLabelStackLabelIndex")
    {
        mplslabelstacklabelindex = value;
    }
    if(value_path == "mplsLabelStackLabel")
    {
        mplslabelstacklabel = value;
    }
    if(value_path == "mplsLabelStackLabelPtr")
    {
        mplslabelstacklabelptr = value;
    }
    if(value_path == "mplsLabelStackRowStatus")
    {
        mplslabelstackrowstatus = value;
    }
    if(value_path == "mplsLabelStackStorageType")
    {
        mplslabelstackstoragetype = value;
    }
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
    for (std::size_t index=0; index<mplsinsegmentmapentry_.size(); index++)
    {
        if(mplsinsegmentmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsrStdMib::Mplsinsegmentmaptable::has_operation() const
{
    for (std::size_t index=0; index<mplsinsegmentmapentry_.size(); index++)
    {
        if(mplsinsegmentmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : mplsinsegmentmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry>();
        c->parent = this;
        mplsinsegmentmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsrStdMib::Mplsinsegmentmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsinsegmentmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsrStdMib::Mplsinsegmentmaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mplsinsegmentmapinterface.operation)
	|| is_set(mplsinsegmentmaplabel.operation)
	|| is_set(mplsinsegmentmaplabelptrindex.operation)
	|| is_set(mplsinsegmentmapindex.operation);
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

    if (mplsinsegmentmapinterface.is_set || is_set(mplsinsegmentmapinterface.operation)) leaf_name_data.push_back(mplsinsegmentmapinterface.get_name_leafdata());
    if (mplsinsegmentmaplabel.is_set || is_set(mplsinsegmentmaplabel.operation)) leaf_name_data.push_back(mplsinsegmentmaplabel.get_name_leafdata());
    if (mplsinsegmentmaplabelptrindex.is_set || is_set(mplsinsegmentmaplabelptrindex.operation)) leaf_name_data.push_back(mplsinsegmentmaplabelptrindex.get_name_leafdata());
    if (mplsinsegmentmapindex.is_set || is_set(mplsinsegmentmapindex.operation)) leaf_name_data.push_back(mplsinsegmentmapindex.get_name_leafdata());


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

void MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsInSegmentMapInterface")
    {
        mplsinsegmentmapinterface = value;
    }
    if(value_path == "mplsInSegmentMapLabel")
    {
        mplsinsegmentmaplabel = value;
    }
    if(value_path == "mplsInSegmentMapLabelPtrIndex")
    {
        mplsinsegmentmaplabelptrindex = value;
    }
    if(value_path == "mplsInSegmentMapIndex")
    {
        mplsinsegmentmapindex = value;
    }
}

const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcadminstatusEnum::up {1, "up"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcadminstatusEnum::down {2, "down"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcadminstatusEnum::testing {3, "testing"};

const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::up {1, "up"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::down {2, "down"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::testing {3, "testing"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::unknown {4, "unknown"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::dormant {5, "dormant"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::notPresent {6, "notPresent"};
const Enum::YLeaf MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum::lowerLayerDown {7, "lowerLayerDown"};


}
}

