
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Q_BRIDGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Q_BRIDGE_MIB {

QBRIDGEMIB::QBRIDGEMIB()
    :
    dot1qbase(std::make_shared<QBRIDGEMIB::Dot1Qbase>())
	,dot1qfdbtable(std::make_shared<QBRIDGEMIB::Dot1Qfdbtable>())
	,dot1qforwardalltable(std::make_shared<QBRIDGEMIB::Dot1Qforwardalltable>())
	,dot1qforwardunregisteredtable(std::make_shared<QBRIDGEMIB::Dot1Qforwardunregisteredtable>())
	,dot1qlearningconstraintstable(std::make_shared<QBRIDGEMIB::Dot1Qlearningconstraintstable>())
	,dot1qportvlanhcstatisticstable(std::make_shared<QBRIDGEMIB::Dot1Qportvlanhcstatisticstable>())
	,dot1qportvlanstatisticstable(std::make_shared<QBRIDGEMIB::Dot1Qportvlanstatisticstable>())
	,dot1qstaticmulticasttable(std::make_shared<QBRIDGEMIB::Dot1Qstaticmulticasttable>())
	,dot1qstaticunicasttable(std::make_shared<QBRIDGEMIB::Dot1Qstaticunicasttable>())
	,dot1qtpfdbtable(std::make_shared<QBRIDGEMIB::Dot1Qtpfdbtable>())
	,dot1qtpgrouptable(std::make_shared<QBRIDGEMIB::Dot1Qtpgrouptable>())
	,dot1qvlan(std::make_shared<QBRIDGEMIB::Dot1Qvlan>())
	,dot1qvlancurrenttable(std::make_shared<QBRIDGEMIB::Dot1Qvlancurrenttable>())
	,dot1qvlanstatictable(std::make_shared<QBRIDGEMIB::Dot1Qvlanstatictable>())
	,dot1vprotocolgrouptable(std::make_shared<QBRIDGEMIB::Dot1Vprotocolgrouptable>())
	,dot1vprotocolporttable(std::make_shared<QBRIDGEMIB::Dot1Vprotocolporttable>())
{
    dot1qbase->parent = this;
    dot1qfdbtable->parent = this;
    dot1qforwardalltable->parent = this;
    dot1qforwardunregisteredtable->parent = this;
    dot1qlearningconstraintstable->parent = this;
    dot1qportvlanhcstatisticstable->parent = this;
    dot1qportvlanstatisticstable->parent = this;
    dot1qstaticmulticasttable->parent = this;
    dot1qstaticunicasttable->parent = this;
    dot1qtpfdbtable->parent = this;
    dot1qtpgrouptable->parent = this;
    dot1qvlan->parent = this;
    dot1qvlancurrenttable->parent = this;
    dot1qvlanstatictable->parent = this;
    dot1vprotocolgrouptable->parent = this;
    dot1vprotocolporttable->parent = this;

    yang_name = "Q-BRIDGE-MIB"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

QBRIDGEMIB::~QBRIDGEMIB()
{
}

bool QBRIDGEMIB::has_data() const
{
    return (dot1qbase !=  nullptr && dot1qbase->has_data())
	|| (dot1qfdbtable !=  nullptr && dot1qfdbtable->has_data())
	|| (dot1qforwardalltable !=  nullptr && dot1qforwardalltable->has_data())
	|| (dot1qforwardunregisteredtable !=  nullptr && dot1qforwardunregisteredtable->has_data())
	|| (dot1qlearningconstraintstable !=  nullptr && dot1qlearningconstraintstable->has_data())
	|| (dot1qportvlanhcstatisticstable !=  nullptr && dot1qportvlanhcstatisticstable->has_data())
	|| (dot1qportvlanstatisticstable !=  nullptr && dot1qportvlanstatisticstable->has_data())
	|| (dot1qstaticmulticasttable !=  nullptr && dot1qstaticmulticasttable->has_data())
	|| (dot1qstaticunicasttable !=  nullptr && dot1qstaticunicasttable->has_data())
	|| (dot1qtpfdbtable !=  nullptr && dot1qtpfdbtable->has_data())
	|| (dot1qtpgrouptable !=  nullptr && dot1qtpgrouptable->has_data())
	|| (dot1qvlan !=  nullptr && dot1qvlan->has_data())
	|| (dot1qvlancurrenttable !=  nullptr && dot1qvlancurrenttable->has_data())
	|| (dot1qvlanstatictable !=  nullptr && dot1qvlanstatictable->has_data())
	|| (dot1vprotocolgrouptable !=  nullptr && dot1vprotocolgrouptable->has_data())
	|| (dot1vprotocolporttable !=  nullptr && dot1vprotocolporttable->has_data());
}

bool QBRIDGEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot1qbase !=  nullptr && dot1qbase->has_operation())
	|| (dot1qfdbtable !=  nullptr && dot1qfdbtable->has_operation())
	|| (dot1qforwardalltable !=  nullptr && dot1qforwardalltable->has_operation())
	|| (dot1qforwardunregisteredtable !=  nullptr && dot1qforwardunregisteredtable->has_operation())
	|| (dot1qlearningconstraintstable !=  nullptr && dot1qlearningconstraintstable->has_operation())
	|| (dot1qportvlanhcstatisticstable !=  nullptr && dot1qportvlanhcstatisticstable->has_operation())
	|| (dot1qportvlanstatisticstable !=  nullptr && dot1qportvlanstatisticstable->has_operation())
	|| (dot1qstaticmulticasttable !=  nullptr && dot1qstaticmulticasttable->has_operation())
	|| (dot1qstaticunicasttable !=  nullptr && dot1qstaticunicasttable->has_operation())
	|| (dot1qtpfdbtable !=  nullptr && dot1qtpfdbtable->has_operation())
	|| (dot1qtpgrouptable !=  nullptr && dot1qtpgrouptable->has_operation())
	|| (dot1qvlan !=  nullptr && dot1qvlan->has_operation())
	|| (dot1qvlancurrenttable !=  nullptr && dot1qvlancurrenttable->has_operation())
	|| (dot1qvlanstatictable !=  nullptr && dot1qvlanstatictable->has_operation())
	|| (dot1vprotocolgrouptable !=  nullptr && dot1vprotocolgrouptable->has_operation())
	|| (dot1vprotocolporttable !=  nullptr && dot1vprotocolporttable->has_operation());
}

std::string QBRIDGEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qBase")
    {
        if(dot1qbase == nullptr)
        {
            dot1qbase = std::make_shared<QBRIDGEMIB::Dot1Qbase>();
        }
        return dot1qbase;
    }

    if(child_yang_name == "dot1qFdbTable")
    {
        if(dot1qfdbtable == nullptr)
        {
            dot1qfdbtable = std::make_shared<QBRIDGEMIB::Dot1Qfdbtable>();
        }
        return dot1qfdbtable;
    }

    if(child_yang_name == "dot1qForwardAllTable")
    {
        if(dot1qforwardalltable == nullptr)
        {
            dot1qforwardalltable = std::make_shared<QBRIDGEMIB::Dot1Qforwardalltable>();
        }
        return dot1qforwardalltable;
    }

    if(child_yang_name == "dot1qForwardUnregisteredTable")
    {
        if(dot1qforwardunregisteredtable == nullptr)
        {
            dot1qforwardunregisteredtable = std::make_shared<QBRIDGEMIB::Dot1Qforwardunregisteredtable>();
        }
        return dot1qforwardunregisteredtable;
    }

    if(child_yang_name == "dot1qLearningConstraintsTable")
    {
        if(dot1qlearningconstraintstable == nullptr)
        {
            dot1qlearningconstraintstable = std::make_shared<QBRIDGEMIB::Dot1Qlearningconstraintstable>();
        }
        return dot1qlearningconstraintstable;
    }

    if(child_yang_name == "dot1qPortVlanHCStatisticsTable")
    {
        if(dot1qportvlanhcstatisticstable == nullptr)
        {
            dot1qportvlanhcstatisticstable = std::make_shared<QBRIDGEMIB::Dot1Qportvlanhcstatisticstable>();
        }
        return dot1qportvlanhcstatisticstable;
    }

    if(child_yang_name == "dot1qPortVlanStatisticsTable")
    {
        if(dot1qportvlanstatisticstable == nullptr)
        {
            dot1qportvlanstatisticstable = std::make_shared<QBRIDGEMIB::Dot1Qportvlanstatisticstable>();
        }
        return dot1qportvlanstatisticstable;
    }

    if(child_yang_name == "dot1qStaticMulticastTable")
    {
        if(dot1qstaticmulticasttable == nullptr)
        {
            dot1qstaticmulticasttable = std::make_shared<QBRIDGEMIB::Dot1Qstaticmulticasttable>();
        }
        return dot1qstaticmulticasttable;
    }

    if(child_yang_name == "dot1qStaticUnicastTable")
    {
        if(dot1qstaticunicasttable == nullptr)
        {
            dot1qstaticunicasttable = std::make_shared<QBRIDGEMIB::Dot1Qstaticunicasttable>();
        }
        return dot1qstaticunicasttable;
    }

    if(child_yang_name == "dot1qTpFdbTable")
    {
        if(dot1qtpfdbtable == nullptr)
        {
            dot1qtpfdbtable = std::make_shared<QBRIDGEMIB::Dot1Qtpfdbtable>();
        }
        return dot1qtpfdbtable;
    }

    if(child_yang_name == "dot1qTpGroupTable")
    {
        if(dot1qtpgrouptable == nullptr)
        {
            dot1qtpgrouptable = std::make_shared<QBRIDGEMIB::Dot1Qtpgrouptable>();
        }
        return dot1qtpgrouptable;
    }

    if(child_yang_name == "dot1qVlan")
    {
        if(dot1qvlan == nullptr)
        {
            dot1qvlan = std::make_shared<QBRIDGEMIB::Dot1Qvlan>();
        }
        return dot1qvlan;
    }

    if(child_yang_name == "dot1qVlanCurrentTable")
    {
        if(dot1qvlancurrenttable == nullptr)
        {
            dot1qvlancurrenttable = std::make_shared<QBRIDGEMIB::Dot1Qvlancurrenttable>();
        }
        return dot1qvlancurrenttable;
    }

    if(child_yang_name == "dot1qVlanStaticTable")
    {
        if(dot1qvlanstatictable == nullptr)
        {
            dot1qvlanstatictable = std::make_shared<QBRIDGEMIB::Dot1Qvlanstatictable>();
        }
        return dot1qvlanstatictable;
    }

    if(child_yang_name == "dot1vProtocolGroupTable")
    {
        if(dot1vprotocolgrouptable == nullptr)
        {
            dot1vprotocolgrouptable = std::make_shared<QBRIDGEMIB::Dot1Vprotocolgrouptable>();
        }
        return dot1vprotocolgrouptable;
    }

    if(child_yang_name == "dot1vProtocolPortTable")
    {
        if(dot1vprotocolporttable == nullptr)
        {
            dot1vprotocolporttable = std::make_shared<QBRIDGEMIB::Dot1Vprotocolporttable>();
        }
        return dot1vprotocolporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1qbase != nullptr)
    {
        children["dot1qBase"] = dot1qbase;
    }

    if(dot1qfdbtable != nullptr)
    {
        children["dot1qFdbTable"] = dot1qfdbtable;
    }

    if(dot1qforwardalltable != nullptr)
    {
        children["dot1qForwardAllTable"] = dot1qforwardalltable;
    }

    if(dot1qforwardunregisteredtable != nullptr)
    {
        children["dot1qForwardUnregisteredTable"] = dot1qforwardunregisteredtable;
    }

    if(dot1qlearningconstraintstable != nullptr)
    {
        children["dot1qLearningConstraintsTable"] = dot1qlearningconstraintstable;
    }

    if(dot1qportvlanhcstatisticstable != nullptr)
    {
        children["dot1qPortVlanHCStatisticsTable"] = dot1qportvlanhcstatisticstable;
    }

    if(dot1qportvlanstatisticstable != nullptr)
    {
        children["dot1qPortVlanStatisticsTable"] = dot1qportvlanstatisticstable;
    }

    if(dot1qstaticmulticasttable != nullptr)
    {
        children["dot1qStaticMulticastTable"] = dot1qstaticmulticasttable;
    }

    if(dot1qstaticunicasttable != nullptr)
    {
        children["dot1qStaticUnicastTable"] = dot1qstaticunicasttable;
    }

    if(dot1qtpfdbtable != nullptr)
    {
        children["dot1qTpFdbTable"] = dot1qtpfdbtable;
    }

    if(dot1qtpgrouptable != nullptr)
    {
        children["dot1qTpGroupTable"] = dot1qtpgrouptable;
    }

    if(dot1qvlan != nullptr)
    {
        children["dot1qVlan"] = dot1qvlan;
    }

    if(dot1qvlancurrenttable != nullptr)
    {
        children["dot1qVlanCurrentTable"] = dot1qvlancurrenttable;
    }

    if(dot1qvlanstatictable != nullptr)
    {
        children["dot1qVlanStaticTable"] = dot1qvlanstatictable;
    }

    if(dot1vprotocolgrouptable != nullptr)
    {
        children["dot1vProtocolGroupTable"] = dot1vprotocolgrouptable;
    }

    if(dot1vprotocolporttable != nullptr)
    {
        children["dot1vProtocolPortTable"] = dot1vprotocolporttable;
    }

    return children;
}

void QBRIDGEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> QBRIDGEMIB::clone_ptr() const
{
    return std::make_shared<QBRIDGEMIB>();
}

std::string QBRIDGEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string QBRIDGEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function QBRIDGEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> QBRIDGEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool QBRIDGEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qBase" || name == "dot1qFdbTable" || name == "dot1qForwardAllTable" || name == "dot1qForwardUnregisteredTable" || name == "dot1qLearningConstraintsTable" || name == "dot1qPortVlanHCStatisticsTable" || name == "dot1qPortVlanStatisticsTable" || name == "dot1qStaticMulticastTable" || name == "dot1qStaticUnicastTable" || name == "dot1qTpFdbTable" || name == "dot1qTpGroupTable" || name == "dot1qVlan" || name == "dot1qVlanCurrentTable" || name == "dot1qVlanStaticTable" || name == "dot1vProtocolGroupTable" || name == "dot1vProtocolPortTable")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qbase::Dot1Qbase()
    :
    dot1qgvrpstatus{YType::enumeration, "dot1qGvrpStatus"},
    dot1qmaxsupportedvlans{YType::uint32, "dot1qMaxSupportedVlans"},
    dot1qmaxvlanid{YType::int32, "dot1qMaxVlanId"},
    dot1qnumvlans{YType::uint32, "dot1qNumVlans"},
    dot1qvlanversionnumber{YType::enumeration, "dot1qVlanVersionNumber"}
{

    yang_name = "dot1qBase"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qbase::~Dot1Qbase()
{
}

bool QBRIDGEMIB::Dot1Qbase::has_data() const
{
    return dot1qgvrpstatus.is_set
	|| dot1qmaxsupportedvlans.is_set
	|| dot1qmaxvlanid.is_set
	|| dot1qnumvlans.is_set
	|| dot1qvlanversionnumber.is_set;
}

bool QBRIDGEMIB::Dot1Qbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qgvrpstatus.yfilter)
	|| ydk::is_set(dot1qmaxsupportedvlans.yfilter)
	|| ydk::is_set(dot1qmaxvlanid.yfilter)
	|| ydk::is_set(dot1qnumvlans.yfilter)
	|| ydk::is_set(dot1qvlanversionnumber.yfilter);
}

std::string QBRIDGEMIB::Dot1Qbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qgvrpstatus.is_set || is_set(dot1qgvrpstatus.yfilter)) leaf_name_data.push_back(dot1qgvrpstatus.get_name_leafdata());
    if (dot1qmaxsupportedvlans.is_set || is_set(dot1qmaxsupportedvlans.yfilter)) leaf_name_data.push_back(dot1qmaxsupportedvlans.get_name_leafdata());
    if (dot1qmaxvlanid.is_set || is_set(dot1qmaxvlanid.yfilter)) leaf_name_data.push_back(dot1qmaxvlanid.get_name_leafdata());
    if (dot1qnumvlans.is_set || is_set(dot1qnumvlans.yfilter)) leaf_name_data.push_back(dot1qnumvlans.get_name_leafdata());
    if (dot1qvlanversionnumber.is_set || is_set(dot1qvlanversionnumber.yfilter)) leaf_name_data.push_back(dot1qvlanversionnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qGvrpStatus")
    {
        dot1qgvrpstatus = value;
        dot1qgvrpstatus.value_namespace = name_space;
        dot1qgvrpstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qMaxSupportedVlans")
    {
        dot1qmaxsupportedvlans = value;
        dot1qmaxsupportedvlans.value_namespace = name_space;
        dot1qmaxsupportedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qMaxVlanId")
    {
        dot1qmaxvlanid = value;
        dot1qmaxvlanid.value_namespace = name_space;
        dot1qmaxvlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qNumVlans")
    {
        dot1qnumvlans = value;
        dot1qnumvlans.value_namespace = name_space;
        dot1qnumvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanVersionNumber")
    {
        dot1qvlanversionnumber = value;
        dot1qvlanversionnumber.value_namespace = name_space;
        dot1qvlanversionnumber.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qGvrpStatus")
    {
        dot1qgvrpstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qMaxSupportedVlans")
    {
        dot1qmaxsupportedvlans.yfilter = yfilter;
    }
    if(value_path == "dot1qMaxVlanId")
    {
        dot1qmaxvlanid.yfilter = yfilter;
    }
    if(value_path == "dot1qNumVlans")
    {
        dot1qnumvlans.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanVersionNumber")
    {
        dot1qvlanversionnumber.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qGvrpStatus" || name == "dot1qMaxSupportedVlans" || name == "dot1qMaxVlanId" || name == "dot1qNumVlans" || name == "dot1qVlanVersionNumber")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbtable()
{

    yang_name = "dot1qFdbTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qfdbtable::~Dot1Qfdbtable()
{
}

bool QBRIDGEMIB::Dot1Qfdbtable::has_data() const
{
    for (std::size_t index=0; index<dot1qfdbentry.size(); index++)
    {
        if(dot1qfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qfdbtable::has_operation() const
{
    for (std::size_t index=0; index<dot1qfdbentry.size(); index++)
    {
        if(dot1qfdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qfdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qfdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qFdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qfdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qfdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qFdbEntry")
    {
        for(auto const & c : dot1qfdbentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry>();
        c->parent = this;
        dot1qfdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qfdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qfdbentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qfdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qfdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qfdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::Dot1Qfdbentry()
    :
    dot1qfdbid{YType::uint32, "dot1qFdbId"},
    dot1qfdbdynamiccount{YType::uint32, "dot1qFdbDynamicCount"}
{

    yang_name = "dot1qFdbEntry"; yang_parent_name = "dot1qFdbTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::~Dot1Qfdbentry()
{
}

bool QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::has_data() const
{
    return dot1qfdbid.is_set
	|| dot1qfdbdynamiccount.is_set;
}

bool QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qfdbdynamiccount.yfilter);
}

std::string QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qFdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qFdbEntry" <<"[dot1qFdbId='" <<dot1qfdbid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qfdbdynamiccount.is_set || is_set(dot1qfdbdynamiccount.yfilter)) leaf_name_data.push_back(dot1qfdbdynamiccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid = value;
        dot1qfdbid.value_namespace = name_space;
        dot1qfdbid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qFdbDynamicCount")
    {
        dot1qfdbdynamiccount = value;
        dot1qfdbdynamiccount.value_namespace = name_space;
        dot1qfdbdynamiccount.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qFdbDynamicCount")
    {
        dot1qfdbdynamiccount.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qFdbDynamicCount")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardalltable()
{

    yang_name = "dot1qForwardAllTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qforwardalltable::~Dot1Qforwardalltable()
{
}

bool QBRIDGEMIB::Dot1Qforwardalltable::has_data() const
{
    for (std::size_t index=0; index<dot1qforwardallentry.size(); index++)
    {
        if(dot1qforwardallentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qforwardalltable::has_operation() const
{
    for (std::size_t index=0; index<dot1qforwardallentry.size(); index++)
    {
        if(dot1qforwardallentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qforwardalltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qforwardalltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardAllTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qforwardalltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qforwardalltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qForwardAllEntry")
    {
        for(auto const & c : dot1qforwardallentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry>();
        c->parent = this;
        dot1qforwardallentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qforwardalltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qforwardallentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qforwardalltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qforwardalltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qforwardalltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qForwardAllEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::Dot1Qforwardallentry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qforwardallforbiddenports{YType::str, "dot1qForwardAllForbiddenPorts"},
    dot1qforwardallports{YType::str, "dot1qForwardAllPorts"},
    dot1qforwardallstaticports{YType::str, "dot1qForwardAllStaticPorts"}
{

    yang_name = "dot1qForwardAllEntry"; yang_parent_name = "dot1qForwardAllTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::~Dot1Qforwardallentry()
{
}

bool QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::has_data() const
{
    return dot1qvlanindex.is_set
	|| dot1qforwardallforbiddenports.is_set
	|| dot1qforwardallports.is_set
	|| dot1qforwardallstaticports.is_set;
}

bool QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qforwardallforbiddenports.yfilter)
	|| ydk::is_set(dot1qforwardallports.yfilter)
	|| ydk::is_set(dot1qforwardallstaticports.yfilter);
}

std::string QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qForwardAllTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardAllEntry" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qforwardallforbiddenports.is_set || is_set(dot1qforwardallforbiddenports.yfilter)) leaf_name_data.push_back(dot1qforwardallforbiddenports.get_name_leafdata());
    if (dot1qforwardallports.is_set || is_set(dot1qforwardallports.yfilter)) leaf_name_data.push_back(dot1qforwardallports.get_name_leafdata());
    if (dot1qforwardallstaticports.is_set || is_set(dot1qforwardallstaticports.yfilter)) leaf_name_data.push_back(dot1qforwardallstaticports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardAllForbiddenPorts")
    {
        dot1qforwardallforbiddenports = value;
        dot1qforwardallforbiddenports.value_namespace = name_space;
        dot1qforwardallforbiddenports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardAllPorts")
    {
        dot1qforwardallports = value;
        dot1qforwardallports.value_namespace = name_space;
        dot1qforwardallports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardAllStaticPorts")
    {
        dot1qforwardallstaticports = value;
        dot1qforwardallstaticports.value_namespace = name_space;
        dot1qforwardallstaticports.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllForbiddenPorts")
    {
        dot1qforwardallforbiddenports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllPorts")
    {
        dot1qforwardallports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllStaticPorts")
    {
        dot1qforwardallstaticports.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qForwardAllForbiddenPorts" || name == "dot1qForwardAllPorts" || name == "dot1qForwardAllStaticPorts")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredtable()
{

    yang_name = "dot1qForwardUnregisteredTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qforwardunregisteredtable::~Dot1Qforwardunregisteredtable()
{
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::has_data() const
{
    for (std::size_t index=0; index<dot1qforwardunregisteredentry.size(); index++)
    {
        if(dot1qforwardunregisteredentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::has_operation() const
{
    for (std::size_t index=0; index<dot1qforwardunregisteredentry.size(); index++)
    {
        if(dot1qforwardunregisteredentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qforwardunregisteredtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qforwardunregisteredtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardUnregisteredTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qforwardunregisteredtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qforwardunregisteredtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qForwardUnregisteredEntry")
    {
        for(auto const & c : dot1qforwardunregisteredentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry>();
        c->parent = this;
        dot1qforwardunregisteredentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qforwardunregisteredtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qforwardunregisteredentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qforwardunregisteredtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qforwardunregisteredtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qForwardUnregisteredEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::Dot1Qforwardunregisteredentry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qforwardunregisteredforbiddenports{YType::str, "dot1qForwardUnregisteredForbiddenPorts"},
    dot1qforwardunregisteredports{YType::str, "dot1qForwardUnregisteredPorts"},
    dot1qforwardunregisteredstaticports{YType::str, "dot1qForwardUnregisteredStaticPorts"}
{

    yang_name = "dot1qForwardUnregisteredEntry"; yang_parent_name = "dot1qForwardUnregisteredTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::~Dot1Qforwardunregisteredentry()
{
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::has_data() const
{
    return dot1qvlanindex.is_set
	|| dot1qforwardunregisteredforbiddenports.is_set
	|| dot1qforwardunregisteredports.is_set
	|| dot1qforwardunregisteredstaticports.is_set;
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredforbiddenports.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredports.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredstaticports.yfilter);
}

std::string QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qForwardUnregisteredTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardUnregisteredEntry" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qforwardunregisteredforbiddenports.is_set || is_set(dot1qforwardunregisteredforbiddenports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredforbiddenports.get_name_leafdata());
    if (dot1qforwardunregisteredports.is_set || is_set(dot1qforwardunregisteredports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredports.get_name_leafdata());
    if (dot1qforwardunregisteredstaticports.is_set || is_set(dot1qforwardunregisteredstaticports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredstaticports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardUnregisteredForbiddenPorts")
    {
        dot1qforwardunregisteredforbiddenports = value;
        dot1qforwardunregisteredforbiddenports.value_namespace = name_space;
        dot1qforwardunregisteredforbiddenports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardUnregisteredPorts")
    {
        dot1qforwardunregisteredports = value;
        dot1qforwardunregisteredports.value_namespace = name_space;
        dot1qforwardunregisteredports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qForwardUnregisteredStaticPorts")
    {
        dot1qforwardunregisteredstaticports = value;
        dot1qforwardunregisteredstaticports.value_namespace = name_space;
        dot1qforwardunregisteredstaticports.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredForbiddenPorts")
    {
        dot1qforwardunregisteredforbiddenports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredPorts")
    {
        dot1qforwardunregisteredports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredStaticPorts")
    {
        dot1qforwardunregisteredstaticports.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qForwardUnregisteredForbiddenPorts" || name == "dot1qForwardUnregisteredPorts" || name == "dot1qForwardUnregisteredStaticPorts")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintstable()
{

    yang_name = "dot1qLearningConstraintsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qlearningconstraintstable::~Dot1Qlearningconstraintstable()
{
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::has_data() const
{
    for (std::size_t index=0; index<dot1qlearningconstraintsentry.size(); index++)
    {
        if(dot1qlearningconstraintsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::has_operation() const
{
    for (std::size_t index=0; index<dot1qlearningconstraintsentry.size(); index++)
    {
        if(dot1qlearningconstraintsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qlearningconstraintstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qlearningconstraintstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qLearningConstraintsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qlearningconstraintstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qlearningconstraintstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qLearningConstraintsEntry")
    {
        for(auto const & c : dot1qlearningconstraintsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry>();
        c->parent = this;
        dot1qlearningconstraintsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qlearningconstraintstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qlearningconstraintsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qlearningconstraintstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qlearningconstraintstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qLearningConstraintsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::Dot1Qlearningconstraintsentry()
    :
    dot1qconstraintvlan{YType::uint32, "dot1qConstraintVlan"},
    dot1qconstraintset{YType::int32, "dot1qConstraintSet"},
    dot1qconstraintstatus{YType::enumeration, "dot1qConstraintStatus"},
    dot1qconstrainttype{YType::enumeration, "dot1qConstraintType"}
{

    yang_name = "dot1qLearningConstraintsEntry"; yang_parent_name = "dot1qLearningConstraintsTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::~Dot1Qlearningconstraintsentry()
{
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::has_data() const
{
    return dot1qconstraintvlan.is_set
	|| dot1qconstraintset.is_set
	|| dot1qconstraintstatus.is_set
	|| dot1qconstrainttype.is_set;
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qconstraintvlan.yfilter)
	|| ydk::is_set(dot1qconstraintset.yfilter)
	|| ydk::is_set(dot1qconstraintstatus.yfilter)
	|| ydk::is_set(dot1qconstrainttype.yfilter);
}

std::string QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qLearningConstraintsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qLearningConstraintsEntry" <<"[dot1qConstraintVlan='" <<dot1qconstraintvlan <<"']" <<"[dot1qConstraintSet='" <<dot1qconstraintset <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qconstraintvlan.is_set || is_set(dot1qconstraintvlan.yfilter)) leaf_name_data.push_back(dot1qconstraintvlan.get_name_leafdata());
    if (dot1qconstraintset.is_set || is_set(dot1qconstraintset.yfilter)) leaf_name_data.push_back(dot1qconstraintset.get_name_leafdata());
    if (dot1qconstraintstatus.is_set || is_set(dot1qconstraintstatus.yfilter)) leaf_name_data.push_back(dot1qconstraintstatus.get_name_leafdata());
    if (dot1qconstrainttype.is_set || is_set(dot1qconstrainttype.yfilter)) leaf_name_data.push_back(dot1qconstrainttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qConstraintVlan")
    {
        dot1qconstraintvlan = value;
        dot1qconstraintvlan.value_namespace = name_space;
        dot1qconstraintvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qConstraintSet")
    {
        dot1qconstraintset = value;
        dot1qconstraintset.value_namespace = name_space;
        dot1qconstraintset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qConstraintStatus")
    {
        dot1qconstraintstatus = value;
        dot1qconstraintstatus.value_namespace = name_space;
        dot1qconstraintstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qConstraintType")
    {
        dot1qconstrainttype = value;
        dot1qconstrainttype.value_namespace = name_space;
        dot1qconstrainttype.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qConstraintVlan")
    {
        dot1qconstraintvlan.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintSet")
    {
        dot1qconstraintset.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintStatus")
    {
        dot1qconstraintstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintType")
    {
        dot1qconstrainttype.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qConstraintVlan" || name == "dot1qConstraintSet" || name == "dot1qConstraintStatus" || name == "dot1qConstraintType")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticstable()
{

    yang_name = "dot1qPortVlanHCStatisticsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::~Dot1Qportvlanhcstatisticstable()
{
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::has_data() const
{
    for (std::size_t index=0; index<dot1qportvlanhcstatisticsentry.size(); index++)
    {
        if(dot1qportvlanhcstatisticsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::has_operation() const
{
    for (std::size_t index=0; index<dot1qportvlanhcstatisticsentry.size(); index++)
    {
        if(dot1qportvlanhcstatisticsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanHCStatisticsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qPortVlanHCStatisticsEntry")
    {
        for(auto const & c : dot1qportvlanhcstatisticsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry>();
        c->parent = this;
        dot1qportvlanhcstatisticsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qportvlanhcstatisticsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qPortVlanHCStatisticsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::Dot1Qportvlanhcstatisticsentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpvlanporthcindiscards{YType::uint64, "dot1qTpVlanPortHCInDiscards"},
    dot1qtpvlanporthcinframes{YType::uint64, "dot1qTpVlanPortHCInFrames"},
    dot1qtpvlanporthcoutframes{YType::uint64, "dot1qTpVlanPortHCOutFrames"}
{

    yang_name = "dot1qPortVlanHCStatisticsEntry"; yang_parent_name = "dot1qPortVlanHCStatisticsTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::~Dot1Qportvlanhcstatisticsentry()
{
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1qvlanindex.is_set
	|| dot1qtpvlanporthcindiscards.is_set
	|| dot1qtpvlanporthcinframes.is_set
	|| dot1qtpvlanporthcoutframes.is_set;
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcindiscards.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcinframes.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcoutframes.yfilter);
}

std::string QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qPortVlanHCStatisticsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanHCStatisticsEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpvlanporthcindiscards.is_set || is_set(dot1qtpvlanporthcindiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcindiscards.get_name_leafdata());
    if (dot1qtpvlanporthcinframes.is_set || is_set(dot1qtpvlanporthcinframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcinframes.get_name_leafdata());
    if (dot1qtpvlanporthcoutframes.is_set || is_set(dot1qtpvlanporthcoutframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcoutframes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortHCInDiscards")
    {
        dot1qtpvlanporthcindiscards = value;
        dot1qtpvlanporthcindiscards.value_namespace = name_space;
        dot1qtpvlanporthcindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortHCInFrames")
    {
        dot1qtpvlanporthcinframes = value;
        dot1qtpvlanporthcinframes.value_namespace = name_space;
        dot1qtpvlanporthcinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortHCOutFrames")
    {
        dot1qtpvlanporthcoutframes = value;
        dot1qtpvlanporthcoutframes.value_namespace = name_space;
        dot1qtpvlanporthcoutframes.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCInDiscards")
    {
        dot1qtpvlanporthcindiscards.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCInFrames")
    {
        dot1qtpvlanporthcinframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCOutFrames")
    {
        dot1qtpvlanporthcoutframes.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1qVlanIndex" || name == "dot1qTpVlanPortHCInDiscards" || name == "dot1qTpVlanPortHCInFrames" || name == "dot1qTpVlanPortHCOutFrames")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticstable()
{

    yang_name = "dot1qPortVlanStatisticsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qportvlanstatisticstable::~Dot1Qportvlanstatisticstable()
{
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::has_data() const
{
    for (std::size_t index=0; index<dot1qportvlanstatisticsentry.size(); index++)
    {
        if(dot1qportvlanstatisticsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::has_operation() const
{
    for (std::size_t index=0; index<dot1qportvlanstatisticsentry.size(); index++)
    {
        if(dot1qportvlanstatisticsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qportvlanstatisticstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qportvlanstatisticstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanStatisticsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qportvlanstatisticstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qportvlanstatisticstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qPortVlanStatisticsEntry")
    {
        for(auto const & c : dot1qportvlanstatisticsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry>();
        c->parent = this;
        dot1qportvlanstatisticsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qportvlanstatisticstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qportvlanstatisticsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qportvlanstatisticstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qportvlanstatisticstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qPortVlanStatisticsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::Dot1Qportvlanstatisticsentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpvlanportindiscards{YType::uint32, "dot1qTpVlanPortInDiscards"},
    dot1qtpvlanportinframes{YType::uint32, "dot1qTpVlanPortInFrames"},
    dot1qtpvlanportinoverflowdiscards{YType::uint32, "dot1qTpVlanPortInOverflowDiscards"},
    dot1qtpvlanportinoverflowframes{YType::uint32, "dot1qTpVlanPortInOverflowFrames"},
    dot1qtpvlanportoutframes{YType::uint32, "dot1qTpVlanPortOutFrames"},
    dot1qtpvlanportoutoverflowframes{YType::uint32, "dot1qTpVlanPortOutOverflowFrames"}
{

    yang_name = "dot1qPortVlanStatisticsEntry"; yang_parent_name = "dot1qPortVlanStatisticsTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::~Dot1Qportvlanstatisticsentry()
{
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1qvlanindex.is_set
	|| dot1qtpvlanportindiscards.is_set
	|| dot1qtpvlanportinframes.is_set
	|| dot1qtpvlanportinoverflowdiscards.is_set
	|| dot1qtpvlanportinoverflowframes.is_set
	|| dot1qtpvlanportoutframes.is_set
	|| dot1qtpvlanportoutoverflowframes.is_set;
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpvlanportindiscards.yfilter)
	|| ydk::is_set(dot1qtpvlanportinframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportinoverflowdiscards.yfilter)
	|| ydk::is_set(dot1qtpvlanportinoverflowframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportoutframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportoutoverflowframes.yfilter);
}

std::string QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qPortVlanStatisticsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanStatisticsEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpvlanportindiscards.is_set || is_set(dot1qtpvlanportindiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanportindiscards.get_name_leafdata());
    if (dot1qtpvlanportinframes.is_set || is_set(dot1qtpvlanportinframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinframes.get_name_leafdata());
    if (dot1qtpvlanportinoverflowdiscards.is_set || is_set(dot1qtpvlanportinoverflowdiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinoverflowdiscards.get_name_leafdata());
    if (dot1qtpvlanportinoverflowframes.is_set || is_set(dot1qtpvlanportinoverflowframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinoverflowframes.get_name_leafdata());
    if (dot1qtpvlanportoutframes.is_set || is_set(dot1qtpvlanportoutframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportoutframes.get_name_leafdata());
    if (dot1qtpvlanportoutoverflowframes.is_set || is_set(dot1qtpvlanportoutoverflowframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportoutoverflowframes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInDiscards")
    {
        dot1qtpvlanportindiscards = value;
        dot1qtpvlanportindiscards.value_namespace = name_space;
        dot1qtpvlanportindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInFrames")
    {
        dot1qtpvlanportinframes = value;
        dot1qtpvlanportinframes.value_namespace = name_space;
        dot1qtpvlanportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInOverflowDiscards")
    {
        dot1qtpvlanportinoverflowdiscards = value;
        dot1qtpvlanportinoverflowdiscards.value_namespace = name_space;
        dot1qtpvlanportinoverflowdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInOverflowFrames")
    {
        dot1qtpvlanportinoverflowframes = value;
        dot1qtpvlanportinoverflowframes.value_namespace = name_space;
        dot1qtpvlanportinoverflowframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortOutFrames")
    {
        dot1qtpvlanportoutframes = value;
        dot1qtpvlanportoutframes.value_namespace = name_space;
        dot1qtpvlanportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortOutOverflowFrames")
    {
        dot1qtpvlanportoutoverflowframes = value;
        dot1qtpvlanportoutoverflowframes.value_namespace = name_space;
        dot1qtpvlanportoutoverflowframes.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInDiscards")
    {
        dot1qtpvlanportindiscards.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInFrames")
    {
        dot1qtpvlanportinframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInOverflowDiscards")
    {
        dot1qtpvlanportinoverflowdiscards.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInOverflowFrames")
    {
        dot1qtpvlanportinoverflowframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortOutFrames")
    {
        dot1qtpvlanportoutframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortOutOverflowFrames")
    {
        dot1qtpvlanportoutoverflowframes.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1qVlanIndex" || name == "dot1qTpVlanPortInDiscards" || name == "dot1qTpVlanPortInFrames" || name == "dot1qTpVlanPortInOverflowDiscards" || name == "dot1qTpVlanPortInOverflowFrames" || name == "dot1qTpVlanPortOutFrames" || name == "dot1qTpVlanPortOutOverflowFrames")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticasttable()
{

    yang_name = "dot1qStaticMulticastTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qstaticmulticasttable::~Dot1Qstaticmulticasttable()
{
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::has_data() const
{
    for (std::size_t index=0; index<dot1qstaticmulticastentry.size(); index++)
    {
        if(dot1qstaticmulticastentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::has_operation() const
{
    for (std::size_t index=0; index<dot1qstaticmulticastentry.size(); index++)
    {
        if(dot1qstaticmulticastentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qstaticmulticasttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qstaticmulticasttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticMulticastTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qstaticmulticasttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qstaticmulticasttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qStaticMulticastEntry")
    {
        for(auto const & c : dot1qstaticmulticastentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry>();
        c->parent = this;
        dot1qstaticmulticastentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qstaticmulticasttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qstaticmulticastentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qstaticmulticasttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qstaticmulticasttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qStaticMulticastEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticastentry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qstaticmulticastaddress{YType::str, "dot1qStaticMulticastAddress"},
    dot1qstaticmulticastreceiveport{YType::int32, "dot1qStaticMulticastReceivePort"},
    dot1qstaticmulticastforbiddenegressports{YType::str, "dot1qStaticMulticastForbiddenEgressPorts"},
    dot1qstaticmulticaststaticegressports{YType::str, "dot1qStaticMulticastStaticEgressPorts"},
    dot1qstaticmulticaststatus{YType::enumeration, "dot1qStaticMulticastStatus"}
{

    yang_name = "dot1qStaticMulticastEntry"; yang_parent_name = "dot1qStaticMulticastTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::~Dot1Qstaticmulticastentry()
{
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::has_data() const
{
    return dot1qvlanindex.is_set
	|| dot1qstaticmulticastaddress.is_set
	|| dot1qstaticmulticastreceiveport.is_set
	|| dot1qstaticmulticastforbiddenegressports.is_set
	|| dot1qstaticmulticaststaticegressports.is_set
	|| dot1qstaticmulticaststatus.is_set;
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qstaticmulticastaddress.yfilter)
	|| ydk::is_set(dot1qstaticmulticastreceiveport.yfilter)
	|| ydk::is_set(dot1qstaticmulticastforbiddenegressports.yfilter)
	|| ydk::is_set(dot1qstaticmulticaststaticegressports.yfilter)
	|| ydk::is_set(dot1qstaticmulticaststatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qStaticMulticastTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticMulticastEntry" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']" <<"[dot1qStaticMulticastAddress='" <<dot1qstaticmulticastaddress <<"']" <<"[dot1qStaticMulticastReceivePort='" <<dot1qstaticmulticastreceiveport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qstaticmulticastaddress.is_set || is_set(dot1qstaticmulticastaddress.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastaddress.get_name_leafdata());
    if (dot1qstaticmulticastreceiveport.is_set || is_set(dot1qstaticmulticastreceiveport.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastreceiveport.get_name_leafdata());
    if (dot1qstaticmulticastforbiddenegressports.is_set || is_set(dot1qstaticmulticastforbiddenegressports.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastforbiddenegressports.get_name_leafdata());
    if (dot1qstaticmulticaststaticegressports.is_set || is_set(dot1qstaticmulticaststaticegressports.yfilter)) leaf_name_data.push_back(dot1qstaticmulticaststaticegressports.get_name_leafdata());
    if (dot1qstaticmulticaststatus.is_set || is_set(dot1qstaticmulticaststatus.yfilter)) leaf_name_data.push_back(dot1qstaticmulticaststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastAddress")
    {
        dot1qstaticmulticastaddress = value;
        dot1qstaticmulticastaddress.value_namespace = name_space;
        dot1qstaticmulticastaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastReceivePort")
    {
        dot1qstaticmulticastreceiveport = value;
        dot1qstaticmulticastreceiveport.value_namespace = name_space;
        dot1qstaticmulticastreceiveport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastForbiddenEgressPorts")
    {
        dot1qstaticmulticastforbiddenegressports = value;
        dot1qstaticmulticastforbiddenegressports.value_namespace = name_space;
        dot1qstaticmulticastforbiddenegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastStaticEgressPorts")
    {
        dot1qstaticmulticaststaticegressports = value;
        dot1qstaticmulticaststaticegressports.value_namespace = name_space;
        dot1qstaticmulticaststaticegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastStatus")
    {
        dot1qstaticmulticaststatus = value;
        dot1qstaticmulticaststatus.value_namespace = name_space;
        dot1qstaticmulticaststatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastAddress")
    {
        dot1qstaticmulticastaddress.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastReceivePort")
    {
        dot1qstaticmulticastreceiveport.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastForbiddenEgressPorts")
    {
        dot1qstaticmulticastforbiddenegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastStaticEgressPorts")
    {
        dot1qstaticmulticaststaticegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastStatus")
    {
        dot1qstaticmulticaststatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qStaticMulticastAddress" || name == "dot1qStaticMulticastReceivePort" || name == "dot1qStaticMulticastForbiddenEgressPorts" || name == "dot1qStaticMulticastStaticEgressPorts" || name == "dot1qStaticMulticastStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicasttable()
{

    yang_name = "dot1qStaticUnicastTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qstaticunicasttable::~Dot1Qstaticunicasttable()
{
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::has_data() const
{
    for (std::size_t index=0; index<dot1qstaticunicastentry.size(); index++)
    {
        if(dot1qstaticunicastentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::has_operation() const
{
    for (std::size_t index=0; index<dot1qstaticunicastentry.size(); index++)
    {
        if(dot1qstaticunicastentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qstaticunicasttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qstaticunicasttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticUnicastTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qstaticunicasttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qstaticunicasttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qStaticUnicastEntry")
    {
        for(auto const & c : dot1qstaticunicastentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry>();
        c->parent = this;
        dot1qstaticunicastentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qstaticunicasttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qstaticunicastentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qstaticunicasttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qstaticunicasttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qStaticUnicastEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicastentry()
    :
    dot1qfdbid{YType::str, "dot1qFdbId"},
    dot1qstaticunicastaddress{YType::str, "dot1qStaticUnicastAddress"},
    dot1qstaticunicastreceiveport{YType::int32, "dot1qStaticUnicastReceivePort"},
    dot1qstaticunicastallowedtogoto{YType::str, "dot1qStaticUnicastAllowedToGoTo"},
    dot1qstaticunicaststatus{YType::enumeration, "dot1qStaticUnicastStatus"}
{

    yang_name = "dot1qStaticUnicastEntry"; yang_parent_name = "dot1qStaticUnicastTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::~Dot1Qstaticunicastentry()
{
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::has_data() const
{
    return dot1qfdbid.is_set
	|| dot1qstaticunicastaddress.is_set
	|| dot1qstaticunicastreceiveport.is_set
	|| dot1qstaticunicastallowedtogoto.is_set
	|| dot1qstaticunicaststatus.is_set;
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qstaticunicastaddress.yfilter)
	|| ydk::is_set(dot1qstaticunicastreceiveport.yfilter)
	|| ydk::is_set(dot1qstaticunicastallowedtogoto.yfilter)
	|| ydk::is_set(dot1qstaticunicaststatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qStaticUnicastTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticUnicastEntry" <<"[dot1qFdbId='" <<dot1qfdbid <<"']" <<"[dot1qStaticUnicastAddress='" <<dot1qstaticunicastaddress <<"']" <<"[dot1qStaticUnicastReceivePort='" <<dot1qstaticunicastreceiveport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qstaticunicastaddress.is_set || is_set(dot1qstaticunicastaddress.yfilter)) leaf_name_data.push_back(dot1qstaticunicastaddress.get_name_leafdata());
    if (dot1qstaticunicastreceiveport.is_set || is_set(dot1qstaticunicastreceiveport.yfilter)) leaf_name_data.push_back(dot1qstaticunicastreceiveport.get_name_leafdata());
    if (dot1qstaticunicastallowedtogoto.is_set || is_set(dot1qstaticunicastallowedtogoto.yfilter)) leaf_name_data.push_back(dot1qstaticunicastallowedtogoto.get_name_leafdata());
    if (dot1qstaticunicaststatus.is_set || is_set(dot1qstaticunicaststatus.yfilter)) leaf_name_data.push_back(dot1qstaticunicaststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid = value;
        dot1qfdbid.value_namespace = name_space;
        dot1qfdbid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticUnicastAddress")
    {
        dot1qstaticunicastaddress = value;
        dot1qstaticunicastaddress.value_namespace = name_space;
        dot1qstaticunicastaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticUnicastReceivePort")
    {
        dot1qstaticunicastreceiveport = value;
        dot1qstaticunicastreceiveport.value_namespace = name_space;
        dot1qstaticunicastreceiveport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticUnicastAllowedToGoTo")
    {
        dot1qstaticunicastallowedtogoto = value;
        dot1qstaticunicastallowedtogoto.value_namespace = name_space;
        dot1qstaticunicastallowedtogoto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticUnicastStatus")
    {
        dot1qstaticunicaststatus = value;
        dot1qstaticunicaststatus.value_namespace = name_space;
        dot1qstaticunicaststatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticUnicastAddress")
    {
        dot1qstaticunicastaddress.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticUnicastReceivePort")
    {
        dot1qstaticunicastreceiveport.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticUnicastAllowedToGoTo")
    {
        dot1qstaticunicastallowedtogoto.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticUnicastStatus")
    {
        dot1qstaticunicaststatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qStaticUnicastAddress" || name == "dot1qStaticUnicastReceivePort" || name == "dot1qStaticUnicastAllowedToGoTo" || name == "dot1qStaticUnicastStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbtable()
{

    yang_name = "dot1qTpFdbTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qtpfdbtable::~Dot1Qtpfdbtable()
{
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::has_data() const
{
    for (std::size_t index=0; index<dot1qtpfdbentry.size(); index++)
    {
        if(dot1qtpfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::has_operation() const
{
    for (std::size_t index=0; index<dot1qtpfdbentry.size(); index++)
    {
        if(dot1qtpfdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qtpfdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qtpfdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpFdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qtpfdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qtpfdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qTpFdbEntry")
    {
        for(auto const & c : dot1qtpfdbentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry>();
        c->parent = this;
        dot1qtpfdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qtpfdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qtpfdbentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qtpfdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qtpfdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qTpFdbEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbentry()
    :
    dot1qfdbid{YType::str, "dot1qFdbId"},
    dot1qtpfdbaddress{YType::str, "dot1qTpFdbAddress"},
    dot1qtpfdbport{YType::int32, "dot1qTpFdbPort"},
    dot1qtpfdbstatus{YType::enumeration, "dot1qTpFdbStatus"}
{

    yang_name = "dot1qTpFdbEntry"; yang_parent_name = "dot1qTpFdbTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::~Dot1Qtpfdbentry()
{
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::has_data() const
{
    return dot1qfdbid.is_set
	|| dot1qtpfdbaddress.is_set
	|| dot1qtpfdbport.is_set
	|| dot1qtpfdbstatus.is_set;
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qtpfdbaddress.yfilter)
	|| ydk::is_set(dot1qtpfdbport.yfilter)
	|| ydk::is_set(dot1qtpfdbstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qTpFdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpFdbEntry" <<"[dot1qFdbId='" <<dot1qfdbid <<"']" <<"[dot1qTpFdbAddress='" <<dot1qtpfdbaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qtpfdbaddress.is_set || is_set(dot1qtpfdbaddress.yfilter)) leaf_name_data.push_back(dot1qtpfdbaddress.get_name_leafdata());
    if (dot1qtpfdbport.is_set || is_set(dot1qtpfdbport.yfilter)) leaf_name_data.push_back(dot1qtpfdbport.get_name_leafdata());
    if (dot1qtpfdbstatus.is_set || is_set(dot1qtpfdbstatus.yfilter)) leaf_name_data.push_back(dot1qtpfdbstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid = value;
        dot1qfdbid.value_namespace = name_space;
        dot1qfdbid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpFdbAddress")
    {
        dot1qtpfdbaddress = value;
        dot1qtpfdbaddress.value_namespace = name_space;
        dot1qtpfdbaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpFdbPort")
    {
        dot1qtpfdbport = value;
        dot1qtpfdbport.value_namespace = name_space;
        dot1qtpfdbport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpFdbStatus")
    {
        dot1qtpfdbstatus = value;
        dot1qtpfdbstatus.value_namespace = name_space;
        dot1qtpfdbstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qFdbId")
    {
        dot1qfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qTpFdbAddress")
    {
        dot1qtpfdbaddress.yfilter = yfilter;
    }
    if(value_path == "dot1qTpFdbPort")
    {
        dot1qtpfdbport.yfilter = yfilter;
    }
    if(value_path == "dot1qTpFdbStatus")
    {
        dot1qtpfdbstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qTpFdbAddress" || name == "dot1qTpFdbPort" || name == "dot1qTpFdbStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgrouptable()
{

    yang_name = "dot1qTpGroupTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qtpgrouptable::~Dot1Qtpgrouptable()
{
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::has_data() const
{
    for (std::size_t index=0; index<dot1qtpgroupentry.size(); index++)
    {
        if(dot1qtpgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::has_operation() const
{
    for (std::size_t index=0; index<dot1qtpgroupentry.size(); index++)
    {
        if(dot1qtpgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qtpgrouptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qtpgrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qtpgrouptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qtpgrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qTpGroupEntry")
    {
        for(auto const & c : dot1qtpgroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry>();
        c->parent = this;
        dot1qtpgroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qtpgrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qtpgroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qtpgrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qtpgrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qTpGroupEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::Dot1Qtpgroupentry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpgroupaddress{YType::str, "dot1qTpGroupAddress"},
    dot1qtpgroupegressports{YType::str, "dot1qTpGroupEgressPorts"},
    dot1qtpgrouplearnt{YType::str, "dot1qTpGroupLearnt"}
{

    yang_name = "dot1qTpGroupEntry"; yang_parent_name = "dot1qTpGroupTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::~Dot1Qtpgroupentry()
{
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::has_data() const
{
    return dot1qvlanindex.is_set
	|| dot1qtpgroupaddress.is_set
	|| dot1qtpgroupegressports.is_set
	|| dot1qtpgrouplearnt.is_set;
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpgroupaddress.yfilter)
	|| ydk::is_set(dot1qtpgroupegressports.yfilter)
	|| ydk::is_set(dot1qtpgrouplearnt.yfilter);
}

std::string QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qTpGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpGroupEntry" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']" <<"[dot1qTpGroupAddress='" <<dot1qtpgroupaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpgroupaddress.is_set || is_set(dot1qtpgroupaddress.yfilter)) leaf_name_data.push_back(dot1qtpgroupaddress.get_name_leafdata());
    if (dot1qtpgroupegressports.is_set || is_set(dot1qtpgroupegressports.yfilter)) leaf_name_data.push_back(dot1qtpgroupegressports.get_name_leafdata());
    if (dot1qtpgrouplearnt.is_set || is_set(dot1qtpgrouplearnt.yfilter)) leaf_name_data.push_back(dot1qtpgrouplearnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpGroupAddress")
    {
        dot1qtpgroupaddress = value;
        dot1qtpgroupaddress.value_namespace = name_space;
        dot1qtpgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpGroupEgressPorts")
    {
        dot1qtpgroupegressports = value;
        dot1qtpgroupegressports.value_namespace = name_space;
        dot1qtpgroupegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpGroupLearnt")
    {
        dot1qtpgrouplearnt = value;
        dot1qtpgrouplearnt.value_namespace = name_space;
        dot1qtpgrouplearnt.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpGroupAddress")
    {
        dot1qtpgroupaddress.yfilter = yfilter;
    }
    if(value_path == "dot1qTpGroupEgressPorts")
    {
        dot1qtpgroupegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qTpGroupLearnt")
    {
        dot1qtpgrouplearnt.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qTpGroupAddress" || name == "dot1qTpGroupEgressPorts" || name == "dot1qTpGroupLearnt")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qvlan::Dot1Qvlan()
    :
    dot1qconstraintsetdefault{YType::int32, "dot1qConstraintSetDefault"},
    dot1qconstrainttypedefault{YType::enumeration, "dot1qConstraintTypeDefault"},
    dot1qnextfreelocalvlanindex{YType::int32, "dot1qNextFreeLocalVlanIndex"},
    dot1qvlannumdeletes{YType::uint32, "dot1qVlanNumDeletes"}
{

    yang_name = "dot1qVlan"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qvlan::~Dot1Qvlan()
{
}

bool QBRIDGEMIB::Dot1Qvlan::has_data() const
{
    return dot1qconstraintsetdefault.is_set
	|| dot1qconstrainttypedefault.is_set
	|| dot1qnextfreelocalvlanindex.is_set
	|| dot1qvlannumdeletes.is_set;
}

bool QBRIDGEMIB::Dot1Qvlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qconstraintsetdefault.yfilter)
	|| ydk::is_set(dot1qconstrainttypedefault.yfilter)
	|| ydk::is_set(dot1qnextfreelocalvlanindex.yfilter)
	|| ydk::is_set(dot1qvlannumdeletes.yfilter);
}

std::string QBRIDGEMIB::Dot1Qvlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qvlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qvlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qconstraintsetdefault.is_set || is_set(dot1qconstraintsetdefault.yfilter)) leaf_name_data.push_back(dot1qconstraintsetdefault.get_name_leafdata());
    if (dot1qconstrainttypedefault.is_set || is_set(dot1qconstrainttypedefault.yfilter)) leaf_name_data.push_back(dot1qconstrainttypedefault.get_name_leafdata());
    if (dot1qnextfreelocalvlanindex.is_set || is_set(dot1qnextfreelocalvlanindex.yfilter)) leaf_name_data.push_back(dot1qnextfreelocalvlanindex.get_name_leafdata());
    if (dot1qvlannumdeletes.is_set || is_set(dot1qvlannumdeletes.yfilter)) leaf_name_data.push_back(dot1qvlannumdeletes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qvlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qvlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qvlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qConstraintSetDefault")
    {
        dot1qconstraintsetdefault = value;
        dot1qconstraintsetdefault.value_namespace = name_space;
        dot1qconstraintsetdefault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qConstraintTypeDefault")
    {
        dot1qconstrainttypedefault = value;
        dot1qconstrainttypedefault.value_namespace = name_space;
        dot1qconstrainttypedefault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qNextFreeLocalVlanIndex")
    {
        dot1qnextfreelocalvlanindex = value;
        dot1qnextfreelocalvlanindex.value_namespace = name_space;
        dot1qnextfreelocalvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanNumDeletes")
    {
        dot1qvlannumdeletes = value;
        dot1qvlannumdeletes.value_namespace = name_space;
        dot1qvlannumdeletes.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qvlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qConstraintSetDefault")
    {
        dot1qconstraintsetdefault.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintTypeDefault")
    {
        dot1qconstrainttypedefault.yfilter = yfilter;
    }
    if(value_path == "dot1qNextFreeLocalVlanIndex")
    {
        dot1qnextfreelocalvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanNumDeletes")
    {
        dot1qvlannumdeletes.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qvlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qConstraintSetDefault" || name == "dot1qConstraintTypeDefault" || name == "dot1qNextFreeLocalVlanIndex" || name == "dot1qVlanNumDeletes")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrenttable()
{

    yang_name = "dot1qVlanCurrentTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qvlancurrenttable::~Dot1Qvlancurrenttable()
{
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::has_data() const
{
    for (std::size_t index=0; index<dot1qvlancurrententry.size(); index++)
    {
        if(dot1qvlancurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::has_operation() const
{
    for (std::size_t index=0; index<dot1qvlancurrententry.size(); index++)
    {
        if(dot1qvlancurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qvlancurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qvlancurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qvlancurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qvlancurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qVlanCurrentEntry")
    {
        for(auto const & c : dot1qvlancurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry>();
        c->parent = this;
        dot1qvlancurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qvlancurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qvlancurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qvlancurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qvlancurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanCurrentEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlancurrententry()
    :
    dot1qvlantimemark{YType::uint32, "dot1qVlanTimeMark"},
    dot1qvlanindex{YType::uint32, "dot1qVlanIndex"},
    dot1qvlancreationtime{YType::uint32, "dot1qVlanCreationTime"},
    dot1qvlancurrentegressports{YType::str, "dot1qVlanCurrentEgressPorts"},
    dot1qvlancurrentuntaggedports{YType::str, "dot1qVlanCurrentUntaggedPorts"},
    dot1qvlanfdbid{YType::uint32, "dot1qVlanFdbId"},
    dot1qvlanstatus{YType::enumeration, "dot1qVlanStatus"}
{

    yang_name = "dot1qVlanCurrentEntry"; yang_parent_name = "dot1qVlanCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::~Dot1Qvlancurrententry()
{
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::has_data() const
{
    return dot1qvlantimemark.is_set
	|| dot1qvlanindex.is_set
	|| dot1qvlancreationtime.is_set
	|| dot1qvlancurrentegressports.is_set
	|| dot1qvlancurrentuntaggedports.is_set
	|| dot1qvlanfdbid.is_set
	|| dot1qvlanstatus.is_set;
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlantimemark.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qvlancreationtime.yfilter)
	|| ydk::is_set(dot1qvlancurrentegressports.yfilter)
	|| ydk::is_set(dot1qvlancurrentuntaggedports.yfilter)
	|| ydk::is_set(dot1qvlanfdbid.yfilter)
	|| ydk::is_set(dot1qvlanstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qVlanCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanCurrentEntry" <<"[dot1qVlanTimeMark='" <<dot1qvlantimemark <<"']" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlantimemark.is_set || is_set(dot1qvlantimemark.yfilter)) leaf_name_data.push_back(dot1qvlantimemark.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qvlancreationtime.is_set || is_set(dot1qvlancreationtime.yfilter)) leaf_name_data.push_back(dot1qvlancreationtime.get_name_leafdata());
    if (dot1qvlancurrentegressports.is_set || is_set(dot1qvlancurrentegressports.yfilter)) leaf_name_data.push_back(dot1qvlancurrentegressports.get_name_leafdata());
    if (dot1qvlancurrentuntaggedports.is_set || is_set(dot1qvlancurrentuntaggedports.yfilter)) leaf_name_data.push_back(dot1qvlancurrentuntaggedports.get_name_leafdata());
    if (dot1qvlanfdbid.is_set || is_set(dot1qvlanfdbid.yfilter)) leaf_name_data.push_back(dot1qvlanfdbid.get_name_leafdata());
    if (dot1qvlanstatus.is_set || is_set(dot1qvlanstatus.yfilter)) leaf_name_data.push_back(dot1qvlanstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanTimeMark")
    {
        dot1qvlantimemark = value;
        dot1qvlantimemark.value_namespace = name_space;
        dot1qvlantimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanCreationTime")
    {
        dot1qvlancreationtime = value;
        dot1qvlancreationtime.value_namespace = name_space;
        dot1qvlancreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanCurrentEgressPorts")
    {
        dot1qvlancurrentegressports = value;
        dot1qvlancurrentegressports.value_namespace = name_space;
        dot1qvlancurrentegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanCurrentUntaggedPorts")
    {
        dot1qvlancurrentuntaggedports = value;
        dot1qvlancurrentuntaggedports.value_namespace = name_space;
        dot1qvlancurrentuntaggedports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanFdbId")
    {
        dot1qvlanfdbid = value;
        dot1qvlanfdbid.value_namespace = name_space;
        dot1qvlanfdbid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStatus")
    {
        dot1qvlanstatus = value;
        dot1qvlanstatus.value_namespace = name_space;
        dot1qvlanstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanTimeMark")
    {
        dot1qvlantimemark.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCreationTime")
    {
        dot1qvlancreationtime.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCurrentEgressPorts")
    {
        dot1qvlancurrentegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCurrentUntaggedPorts")
    {
        dot1qvlancurrentuntaggedports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanFdbId")
    {
        dot1qvlanfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStatus")
    {
        dot1qvlanstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanTimeMark" || name == "dot1qVlanIndex" || name == "dot1qVlanCreationTime" || name == "dot1qVlanCurrentEgressPorts" || name == "dot1qVlanCurrentUntaggedPorts" || name == "dot1qVlanFdbId" || name == "dot1qVlanStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstatictable()
{

    yang_name = "dot1qVlanStaticTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qvlanstatictable::~Dot1Qvlanstatictable()
{
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::has_data() const
{
    for (std::size_t index=0; index<dot1qvlanstaticentry.size(); index++)
    {
        if(dot1qvlanstaticentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::has_operation() const
{
    for (std::size_t index=0; index<dot1qvlanstaticentry.size(); index++)
    {
        if(dot1qvlanstaticentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Qvlanstatictable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qvlanstatictable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanStaticTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qvlanstatictable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qvlanstatictable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qVlanStaticEntry")
    {
        for(auto const & c : dot1qvlanstaticentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry>();
        c->parent = this;
        dot1qvlanstaticentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qvlanstatictable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1qvlanstaticentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Qvlanstatictable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Qvlanstatictable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanStaticEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::Dot1Qvlanstaticentry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qvlanforbiddenegressports{YType::str, "dot1qVlanForbiddenEgressPorts"},
    dot1qvlanstaticegressports{YType::str, "dot1qVlanStaticEgressPorts"},
    dot1qvlanstaticname{YType::str, "dot1qVlanStaticName"},
    dot1qvlanstaticrowstatus{YType::enumeration, "dot1qVlanStaticRowStatus"},
    dot1qvlanstaticuntaggedports{YType::str, "dot1qVlanStaticUntaggedPorts"}
{

    yang_name = "dot1qVlanStaticEntry"; yang_parent_name = "dot1qVlanStaticTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::~Dot1Qvlanstaticentry()
{
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::has_data() const
{
    return dot1qvlanindex.is_set
	|| dot1qvlanforbiddenegressports.is_set
	|| dot1qvlanstaticegressports.is_set
	|| dot1qvlanstaticname.is_set
	|| dot1qvlanstaticrowstatus.is_set
	|| dot1qvlanstaticuntaggedports.is_set;
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qvlanforbiddenegressports.yfilter)
	|| ydk::is_set(dot1qvlanstaticegressports.yfilter)
	|| ydk::is_set(dot1qvlanstaticname.yfilter)
	|| ydk::is_set(dot1qvlanstaticrowstatus.yfilter)
	|| ydk::is_set(dot1qvlanstaticuntaggedports.yfilter);
}

std::string QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qVlanStaticTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanStaticEntry" <<"[dot1qVlanIndex='" <<dot1qvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qvlanforbiddenegressports.is_set || is_set(dot1qvlanforbiddenegressports.yfilter)) leaf_name_data.push_back(dot1qvlanforbiddenegressports.get_name_leafdata());
    if (dot1qvlanstaticegressports.is_set || is_set(dot1qvlanstaticegressports.yfilter)) leaf_name_data.push_back(dot1qvlanstaticegressports.get_name_leafdata());
    if (dot1qvlanstaticname.is_set || is_set(dot1qvlanstaticname.yfilter)) leaf_name_data.push_back(dot1qvlanstaticname.get_name_leafdata());
    if (dot1qvlanstaticrowstatus.is_set || is_set(dot1qvlanstaticrowstatus.yfilter)) leaf_name_data.push_back(dot1qvlanstaticrowstatus.get_name_leafdata());
    if (dot1qvlanstaticuntaggedports.is_set || is_set(dot1qvlanstaticuntaggedports.yfilter)) leaf_name_data.push_back(dot1qvlanstaticuntaggedports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanForbiddenEgressPorts")
    {
        dot1qvlanforbiddenegressports = value;
        dot1qvlanforbiddenegressports.value_namespace = name_space;
        dot1qvlanforbiddenegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticEgressPorts")
    {
        dot1qvlanstaticegressports = value;
        dot1qvlanstaticegressports.value_namespace = name_space;
        dot1qvlanstaticegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticName")
    {
        dot1qvlanstaticname = value;
        dot1qvlanstaticname.value_namespace = name_space;
        dot1qvlanstaticname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticRowStatus")
    {
        dot1qvlanstaticrowstatus = value;
        dot1qvlanstaticrowstatus.value_namespace = name_space;
        dot1qvlanstaticrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticUntaggedPorts")
    {
        dot1qvlanstaticuntaggedports = value;
        dot1qvlanstaticuntaggedports.value_namespace = name_space;
        dot1qvlanstaticuntaggedports.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanForbiddenEgressPorts")
    {
        dot1qvlanforbiddenegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticEgressPorts")
    {
        dot1qvlanstaticegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticName")
    {
        dot1qvlanstaticname.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticRowStatus")
    {
        dot1qvlanstaticrowstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticUntaggedPorts")
    {
        dot1qvlanstaticuntaggedports.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qVlanForbiddenEgressPorts" || name == "dot1qVlanStaticEgressPorts" || name == "dot1qVlanStaticName" || name == "dot1qVlanStaticRowStatus" || name == "dot1qVlanStaticUntaggedPorts")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgrouptable()
{

    yang_name = "dot1vProtocolGroupTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Vprotocolgrouptable::~Dot1Vprotocolgrouptable()
{
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::has_data() const
{
    for (std::size_t index=0; index<dot1vprotocolgroupentry.size(); index++)
    {
        if(dot1vprotocolgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::has_operation() const
{
    for (std::size_t index=0; index<dot1vprotocolgroupentry.size(); index++)
    {
        if(dot1vprotocolgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Vprotocolgrouptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Vprotocolgrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Vprotocolgrouptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Vprotocolgrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1vProtocolGroupEntry")
    {
        for(auto const & c : dot1vprotocolgroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry>();
        c->parent = this;
        dot1vprotocolgroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Vprotocolgrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1vprotocolgroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Vprotocolgrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Vprotocolgrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolGroupEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocolgroupentry()
    :
    dot1vprotocoltemplateframetype{YType::enumeration, "dot1vProtocolTemplateFrameType"},
    dot1vprotocoltemplateprotocolvalue{YType::str, "dot1vProtocolTemplateProtocolValue"},
    dot1vprotocolgroupid{YType::int32, "dot1vProtocolGroupId"},
    dot1vprotocolgrouprowstatus{YType::enumeration, "dot1vProtocolGroupRowStatus"}
{

    yang_name = "dot1vProtocolGroupEntry"; yang_parent_name = "dot1vProtocolGroupTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::~Dot1Vprotocolgroupentry()
{
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::has_data() const
{
    return dot1vprotocoltemplateframetype.is_set
	|| dot1vprotocoltemplateprotocolvalue.is_set
	|| dot1vprotocolgroupid.is_set
	|| dot1vprotocolgrouprowstatus.is_set;
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1vprotocoltemplateframetype.yfilter)
	|| ydk::is_set(dot1vprotocoltemplateprotocolvalue.yfilter)
	|| ydk::is_set(dot1vprotocolgroupid.yfilter)
	|| ydk::is_set(dot1vprotocolgrouprowstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1vProtocolGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolGroupEntry" <<"[dot1vProtocolTemplateFrameType='" <<dot1vprotocoltemplateframetype <<"']" <<"[dot1vProtocolTemplateProtocolValue='" <<dot1vprotocoltemplateprotocolvalue <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1vprotocoltemplateframetype.is_set || is_set(dot1vprotocoltemplateframetype.yfilter)) leaf_name_data.push_back(dot1vprotocoltemplateframetype.get_name_leafdata());
    if (dot1vprotocoltemplateprotocolvalue.is_set || is_set(dot1vprotocoltemplateprotocolvalue.yfilter)) leaf_name_data.push_back(dot1vprotocoltemplateprotocolvalue.get_name_leafdata());
    if (dot1vprotocolgroupid.is_set || is_set(dot1vprotocolgroupid.yfilter)) leaf_name_data.push_back(dot1vprotocolgroupid.get_name_leafdata());
    if (dot1vprotocolgrouprowstatus.is_set || is_set(dot1vprotocolgrouprowstatus.yfilter)) leaf_name_data.push_back(dot1vprotocolgrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1vProtocolTemplateFrameType")
    {
        dot1vprotocoltemplateframetype = value;
        dot1vprotocoltemplateframetype.value_namespace = name_space;
        dot1vprotocoltemplateframetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolTemplateProtocolValue")
    {
        dot1vprotocoltemplateprotocolvalue = value;
        dot1vprotocoltemplateprotocolvalue.value_namespace = name_space;
        dot1vprotocoltemplateprotocolvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolGroupId")
    {
        dot1vprotocolgroupid = value;
        dot1vprotocolgroupid.value_namespace = name_space;
        dot1vprotocolgroupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolGroupRowStatus")
    {
        dot1vprotocolgrouprowstatus = value;
        dot1vprotocolgrouprowstatus.value_namespace = name_space;
        dot1vprotocolgrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1vProtocolTemplateFrameType")
    {
        dot1vprotocoltemplateframetype.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolTemplateProtocolValue")
    {
        dot1vprotocoltemplateprotocolvalue.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolGroupId")
    {
        dot1vprotocolgroupid.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolGroupRowStatus")
    {
        dot1vprotocolgrouprowstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolTemplateFrameType" || name == "dot1vProtocolTemplateProtocolValue" || name == "dot1vProtocolGroupId" || name == "dot1vProtocolGroupRowStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolporttable()
{

    yang_name = "dot1vProtocolPortTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Vprotocolporttable::~Dot1Vprotocolporttable()
{
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::has_data() const
{
    for (std::size_t index=0; index<dot1vprotocolportentry.size(); index++)
    {
        if(dot1vprotocolportentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::has_operation() const
{
    for (std::size_t index=0; index<dot1vprotocolportentry.size(); index++)
    {
        if(dot1vprotocolportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1Vprotocolporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Vprotocolporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Vprotocolporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Vprotocolporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1vProtocolPortEntry")
    {
        for(auto const & c : dot1vprotocolportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry>();
        c->parent = this;
        dot1vprotocolportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Vprotocolporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1vprotocolportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void QBRIDGEMIB::Dot1Vprotocolporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1Vprotocolporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolPortEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::Dot1Vprotocolportentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1vprotocolportgroupid{YType::int32, "dot1vProtocolPortGroupId"},
    dot1vprotocolportgroupvid{YType::int32, "dot1vProtocolPortGroupVid"},
    dot1vprotocolportrowstatus{YType::enumeration, "dot1vProtocolPortRowStatus"}
{

    yang_name = "dot1vProtocolPortEntry"; yang_parent_name = "dot1vProtocolPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::~Dot1Vprotocolportentry()
{
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1vprotocolportgroupid.is_set
	|| dot1vprotocolportgroupvid.is_set
	|| dot1vprotocolportrowstatus.is_set;
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1vprotocolportgroupid.yfilter)
	|| ydk::is_set(dot1vprotocolportgroupvid.yfilter)
	|| ydk::is_set(dot1vprotocolportrowstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1vProtocolPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolPortEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1vProtocolPortGroupId='" <<dot1vprotocolportgroupid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1vprotocolportgroupid.is_set || is_set(dot1vprotocolportgroupid.yfilter)) leaf_name_data.push_back(dot1vprotocolportgroupid.get_name_leafdata());
    if (dot1vprotocolportgroupvid.is_set || is_set(dot1vprotocolportgroupvid.yfilter)) leaf_name_data.push_back(dot1vprotocolportgroupvid.get_name_leafdata());
    if (dot1vprotocolportrowstatus.is_set || is_set(dot1vprotocolportrowstatus.yfilter)) leaf_name_data.push_back(dot1vprotocolportrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolPortGroupId")
    {
        dot1vprotocolportgroupid = value;
        dot1vprotocolportgroupid.value_namespace = name_space;
        dot1vprotocolportgroupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolPortGroupVid")
    {
        dot1vprotocolportgroupvid = value;
        dot1vprotocolportgroupvid.value_namespace = name_space;
        dot1vprotocolportgroupvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1vProtocolPortRowStatus")
    {
        dot1vprotocolportrowstatus = value;
        dot1vprotocolportrowstatus.value_namespace = name_space;
        dot1vprotocolportrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolPortGroupId")
    {
        dot1vprotocolportgroupid.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolPortGroupVid")
    {
        dot1vprotocolportgroupvid.yfilter = yfilter;
    }
    if(value_path == "dot1vProtocolPortRowStatus")
    {
        dot1vprotocolportrowstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1vProtocolPortGroupId" || name == "dot1vProtocolPortGroupVid" || name == "dot1vProtocolPortRowStatus")
        return true;
    return false;
}

const Enum::YLeaf QBRIDGEMIB::Dot1Qbase::Dot1Qvlanversionnumber::version1 {1, "version1"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::Dot1Qconstrainttype::independent {1, "independent"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::Dot1Qconstrainttype::shared {2, "shared"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus::permanent {3, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus::deleteOnTimeout {5, "deleteOnTimeout"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus::permanent {3, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus::deleteOnTimeout {5, "deleteOnTimeout"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus::learned {3, "learned"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus::self {4, "self"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus::mgmt {5, "mgmt"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qvlan::Dot1Qconstrainttypedefault::independent {1, "independent"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qvlan::Dot1Qconstrainttypedefault::shared {2, "shared"};

const Enum::YLeaf QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlanstatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlanstatus::permanent {2, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlanstatus::dynamicGvrp {3, "dynamicGvrp"};

const Enum::YLeaf QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype::ethernet {1, "ethernet"};
const Enum::YLeaf QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype::rfc1042 {2, "rfc1042"};
const Enum::YLeaf QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype::snap8021H {3, "snap8021H"};
const Enum::YLeaf QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype::snapOther {4, "snapOther"};
const Enum::YLeaf QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype::llcOther {5, "llcOther"};


}
}

