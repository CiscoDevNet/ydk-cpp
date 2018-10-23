
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
    dot1qbase(std::make_shared<QBRIDGEMIB::Dot1qBase>())
    , dot1qvlan(std::make_shared<QBRIDGEMIB::Dot1qVlan>())
    , dot1qfdbtable(std::make_shared<QBRIDGEMIB::Dot1qFdbTable>())
    , dot1qtpfdbtable(std::make_shared<QBRIDGEMIB::Dot1qTpFdbTable>())
    , dot1qtpgrouptable(std::make_shared<QBRIDGEMIB::Dot1qTpGroupTable>())
    , dot1qforwardalltable(std::make_shared<QBRIDGEMIB::Dot1qForwardAllTable>())
    , dot1qforwardunregisteredtable(std::make_shared<QBRIDGEMIB::Dot1qForwardUnregisteredTable>())
    , dot1qstaticunicasttable(std::make_shared<QBRIDGEMIB::Dot1qStaticUnicastTable>())
    , dot1qstaticmulticasttable(std::make_shared<QBRIDGEMIB::Dot1qStaticMulticastTable>())
    , dot1qvlancurrenttable(std::make_shared<QBRIDGEMIB::Dot1qVlanCurrentTable>())
    , dot1qvlanstatictable(std::make_shared<QBRIDGEMIB::Dot1qVlanStaticTable>())
    , dot1qportvlanstatisticstable(std::make_shared<QBRIDGEMIB::Dot1qPortVlanStatisticsTable>())
    , dot1qportvlanhcstatisticstable(std::make_shared<QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable>())
    , dot1qlearningconstraintstable(std::make_shared<QBRIDGEMIB::Dot1qLearningConstraintsTable>())
    , dot1vprotocolgrouptable(std::make_shared<QBRIDGEMIB::Dot1vProtocolGroupTable>())
    , dot1vprotocolporttable(std::make_shared<QBRIDGEMIB::Dot1vProtocolPortTable>())
{
    dot1qbase->parent = this;
    dot1qvlan->parent = this;
    dot1qfdbtable->parent = this;
    dot1qtpfdbtable->parent = this;
    dot1qtpgrouptable->parent = this;
    dot1qforwardalltable->parent = this;
    dot1qforwardunregisteredtable->parent = this;
    dot1qstaticunicasttable->parent = this;
    dot1qstaticmulticasttable->parent = this;
    dot1qvlancurrenttable->parent = this;
    dot1qvlanstatictable->parent = this;
    dot1qportvlanstatisticstable->parent = this;
    dot1qportvlanhcstatisticstable->parent = this;
    dot1qlearningconstraintstable->parent = this;
    dot1vprotocolgrouptable->parent = this;
    dot1vprotocolporttable->parent = this;

    yang_name = "Q-BRIDGE-MIB"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

QBRIDGEMIB::~QBRIDGEMIB()
{
}

bool QBRIDGEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (dot1qbase !=  nullptr && dot1qbase->has_data())
	|| (dot1qvlan !=  nullptr && dot1qvlan->has_data())
	|| (dot1qfdbtable !=  nullptr && dot1qfdbtable->has_data())
	|| (dot1qtpfdbtable !=  nullptr && dot1qtpfdbtable->has_data())
	|| (dot1qtpgrouptable !=  nullptr && dot1qtpgrouptable->has_data())
	|| (dot1qforwardalltable !=  nullptr && dot1qforwardalltable->has_data())
	|| (dot1qforwardunregisteredtable !=  nullptr && dot1qforwardunregisteredtable->has_data())
	|| (dot1qstaticunicasttable !=  nullptr && dot1qstaticunicasttable->has_data())
	|| (dot1qstaticmulticasttable !=  nullptr && dot1qstaticmulticasttable->has_data())
	|| (dot1qvlancurrenttable !=  nullptr && dot1qvlancurrenttable->has_data())
	|| (dot1qvlanstatictable !=  nullptr && dot1qvlanstatictable->has_data())
	|| (dot1qportvlanstatisticstable !=  nullptr && dot1qportvlanstatisticstable->has_data())
	|| (dot1qportvlanhcstatisticstable !=  nullptr && dot1qportvlanhcstatisticstable->has_data())
	|| (dot1qlearningconstraintstable !=  nullptr && dot1qlearningconstraintstable->has_data())
	|| (dot1vprotocolgrouptable !=  nullptr && dot1vprotocolgrouptable->has_data())
	|| (dot1vprotocolporttable !=  nullptr && dot1vprotocolporttable->has_data());
}

bool QBRIDGEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot1qbase !=  nullptr && dot1qbase->has_operation())
	|| (dot1qvlan !=  nullptr && dot1qvlan->has_operation())
	|| (dot1qfdbtable !=  nullptr && dot1qfdbtable->has_operation())
	|| (dot1qtpfdbtable !=  nullptr && dot1qtpfdbtable->has_operation())
	|| (dot1qtpgrouptable !=  nullptr && dot1qtpgrouptable->has_operation())
	|| (dot1qforwardalltable !=  nullptr && dot1qforwardalltable->has_operation())
	|| (dot1qforwardunregisteredtable !=  nullptr && dot1qforwardunregisteredtable->has_operation())
	|| (dot1qstaticunicasttable !=  nullptr && dot1qstaticunicasttable->has_operation())
	|| (dot1qstaticmulticasttable !=  nullptr && dot1qstaticmulticasttable->has_operation())
	|| (dot1qvlancurrenttable !=  nullptr && dot1qvlancurrenttable->has_operation())
	|| (dot1qvlanstatictable !=  nullptr && dot1qvlanstatictable->has_operation())
	|| (dot1qportvlanstatisticstable !=  nullptr && dot1qportvlanstatisticstable->has_operation())
	|| (dot1qportvlanhcstatisticstable !=  nullptr && dot1qportvlanhcstatisticstable->has_operation())
	|| (dot1qlearningconstraintstable !=  nullptr && dot1qlearningconstraintstable->has_operation())
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

std::shared_ptr<ydk::Entity> QBRIDGEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qBase")
    {
        if(dot1qbase == nullptr)
        {
            dot1qbase = std::make_shared<QBRIDGEMIB::Dot1qBase>();
        }
        return dot1qbase;
    }

    if(child_yang_name == "dot1qVlan")
    {
        if(dot1qvlan == nullptr)
        {
            dot1qvlan = std::make_shared<QBRIDGEMIB::Dot1qVlan>();
        }
        return dot1qvlan;
    }

    if(child_yang_name == "dot1qFdbTable")
    {
        if(dot1qfdbtable == nullptr)
        {
            dot1qfdbtable = std::make_shared<QBRIDGEMIB::Dot1qFdbTable>();
        }
        return dot1qfdbtable;
    }

    if(child_yang_name == "dot1qTpFdbTable")
    {
        if(dot1qtpfdbtable == nullptr)
        {
            dot1qtpfdbtable = std::make_shared<QBRIDGEMIB::Dot1qTpFdbTable>();
        }
        return dot1qtpfdbtable;
    }

    if(child_yang_name == "dot1qTpGroupTable")
    {
        if(dot1qtpgrouptable == nullptr)
        {
            dot1qtpgrouptable = std::make_shared<QBRIDGEMIB::Dot1qTpGroupTable>();
        }
        return dot1qtpgrouptable;
    }

    if(child_yang_name == "dot1qForwardAllTable")
    {
        if(dot1qforwardalltable == nullptr)
        {
            dot1qforwardalltable = std::make_shared<QBRIDGEMIB::Dot1qForwardAllTable>();
        }
        return dot1qforwardalltable;
    }

    if(child_yang_name == "dot1qForwardUnregisteredTable")
    {
        if(dot1qforwardunregisteredtable == nullptr)
        {
            dot1qforwardunregisteredtable = std::make_shared<QBRIDGEMIB::Dot1qForwardUnregisteredTable>();
        }
        return dot1qforwardunregisteredtable;
    }

    if(child_yang_name == "dot1qStaticUnicastTable")
    {
        if(dot1qstaticunicasttable == nullptr)
        {
            dot1qstaticunicasttable = std::make_shared<QBRIDGEMIB::Dot1qStaticUnicastTable>();
        }
        return dot1qstaticunicasttable;
    }

    if(child_yang_name == "dot1qStaticMulticastTable")
    {
        if(dot1qstaticmulticasttable == nullptr)
        {
            dot1qstaticmulticasttable = std::make_shared<QBRIDGEMIB::Dot1qStaticMulticastTable>();
        }
        return dot1qstaticmulticasttable;
    }

    if(child_yang_name == "dot1qVlanCurrentTable")
    {
        if(dot1qvlancurrenttable == nullptr)
        {
            dot1qvlancurrenttable = std::make_shared<QBRIDGEMIB::Dot1qVlanCurrentTable>();
        }
        return dot1qvlancurrenttable;
    }

    if(child_yang_name == "dot1qVlanStaticTable")
    {
        if(dot1qvlanstatictable == nullptr)
        {
            dot1qvlanstatictable = std::make_shared<QBRIDGEMIB::Dot1qVlanStaticTable>();
        }
        return dot1qvlanstatictable;
    }

    if(child_yang_name == "dot1qPortVlanStatisticsTable")
    {
        if(dot1qportvlanstatisticstable == nullptr)
        {
            dot1qportvlanstatisticstable = std::make_shared<QBRIDGEMIB::Dot1qPortVlanStatisticsTable>();
        }
        return dot1qportvlanstatisticstable;
    }

    if(child_yang_name == "dot1qPortVlanHCStatisticsTable")
    {
        if(dot1qportvlanhcstatisticstable == nullptr)
        {
            dot1qportvlanhcstatisticstable = std::make_shared<QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable>();
        }
        return dot1qportvlanhcstatisticstable;
    }

    if(child_yang_name == "dot1qLearningConstraintsTable")
    {
        if(dot1qlearningconstraintstable == nullptr)
        {
            dot1qlearningconstraintstable = std::make_shared<QBRIDGEMIB::Dot1qLearningConstraintsTable>();
        }
        return dot1qlearningconstraintstable;
    }

    if(child_yang_name == "dot1vProtocolGroupTable")
    {
        if(dot1vprotocolgrouptable == nullptr)
        {
            dot1vprotocolgrouptable = std::make_shared<QBRIDGEMIB::Dot1vProtocolGroupTable>();
        }
        return dot1vprotocolgrouptable;
    }

    if(child_yang_name == "dot1vProtocolPortTable")
    {
        if(dot1vprotocolporttable == nullptr)
        {
            dot1vprotocolporttable = std::make_shared<QBRIDGEMIB::Dot1vProtocolPortTable>();
        }
        return dot1vprotocolporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1qbase != nullptr)
    {
        _children["dot1qBase"] = dot1qbase;
    }

    if(dot1qvlan != nullptr)
    {
        _children["dot1qVlan"] = dot1qvlan;
    }

    if(dot1qfdbtable != nullptr)
    {
        _children["dot1qFdbTable"] = dot1qfdbtable;
    }

    if(dot1qtpfdbtable != nullptr)
    {
        _children["dot1qTpFdbTable"] = dot1qtpfdbtable;
    }

    if(dot1qtpgrouptable != nullptr)
    {
        _children["dot1qTpGroupTable"] = dot1qtpgrouptable;
    }

    if(dot1qforwardalltable != nullptr)
    {
        _children["dot1qForwardAllTable"] = dot1qforwardalltable;
    }

    if(dot1qforwardunregisteredtable != nullptr)
    {
        _children["dot1qForwardUnregisteredTable"] = dot1qforwardunregisteredtable;
    }

    if(dot1qstaticunicasttable != nullptr)
    {
        _children["dot1qStaticUnicastTable"] = dot1qstaticunicasttable;
    }

    if(dot1qstaticmulticasttable != nullptr)
    {
        _children["dot1qStaticMulticastTable"] = dot1qstaticmulticasttable;
    }

    if(dot1qvlancurrenttable != nullptr)
    {
        _children["dot1qVlanCurrentTable"] = dot1qvlancurrenttable;
    }

    if(dot1qvlanstatictable != nullptr)
    {
        _children["dot1qVlanStaticTable"] = dot1qvlanstatictable;
    }

    if(dot1qportvlanstatisticstable != nullptr)
    {
        _children["dot1qPortVlanStatisticsTable"] = dot1qportvlanstatisticstable;
    }

    if(dot1qportvlanhcstatisticstable != nullptr)
    {
        _children["dot1qPortVlanHCStatisticsTable"] = dot1qportvlanhcstatisticstable;
    }

    if(dot1qlearningconstraintstable != nullptr)
    {
        _children["dot1qLearningConstraintsTable"] = dot1qlearningconstraintstable;
    }

    if(dot1vprotocolgrouptable != nullptr)
    {
        _children["dot1vProtocolGroupTable"] = dot1vprotocolgrouptable;
    }

    if(dot1vprotocolporttable != nullptr)
    {
        _children["dot1vProtocolPortTable"] = dot1vprotocolporttable;
    }

    return _children;
}

void QBRIDGEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::clone_ptr() const
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
    if(name == "dot1qBase" || name == "dot1qVlan" || name == "dot1qFdbTable" || name == "dot1qTpFdbTable" || name == "dot1qTpGroupTable" || name == "dot1qForwardAllTable" || name == "dot1qForwardUnregisteredTable" || name == "dot1qStaticUnicastTable" || name == "dot1qStaticMulticastTable" || name == "dot1qVlanCurrentTable" || name == "dot1qVlanStaticTable" || name == "dot1qPortVlanStatisticsTable" || name == "dot1qPortVlanHCStatisticsTable" || name == "dot1qLearningConstraintsTable" || name == "dot1vProtocolGroupTable" || name == "dot1vProtocolPortTable")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qBase::Dot1qBase()
    :
    dot1qvlanversionnumber{YType::enumeration, "dot1qVlanVersionNumber"},
    dot1qmaxvlanid{YType::int32, "dot1qMaxVlanId"},
    dot1qmaxsupportedvlans{YType::uint32, "dot1qMaxSupportedVlans"},
    dot1qnumvlans{YType::uint32, "dot1qNumVlans"},
    dot1qgvrpstatus{YType::enumeration, "dot1qGvrpStatus"}
{

    yang_name = "dot1qBase"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qBase::~Dot1qBase()
{
}

bool QBRIDGEMIB::Dot1qBase::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanversionnumber.is_set
	|| dot1qmaxvlanid.is_set
	|| dot1qmaxsupportedvlans.is_set
	|| dot1qnumvlans.is_set
	|| dot1qgvrpstatus.is_set;
}

bool QBRIDGEMIB::Dot1qBase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanversionnumber.yfilter)
	|| ydk::is_set(dot1qmaxvlanid.yfilter)
	|| ydk::is_set(dot1qmaxsupportedvlans.yfilter)
	|| ydk::is_set(dot1qnumvlans.yfilter)
	|| ydk::is_set(dot1qgvrpstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qBase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanversionnumber.is_set || is_set(dot1qvlanversionnumber.yfilter)) leaf_name_data.push_back(dot1qvlanversionnumber.get_name_leafdata());
    if (dot1qmaxvlanid.is_set || is_set(dot1qmaxvlanid.yfilter)) leaf_name_data.push_back(dot1qmaxvlanid.get_name_leafdata());
    if (dot1qmaxsupportedvlans.is_set || is_set(dot1qmaxsupportedvlans.yfilter)) leaf_name_data.push_back(dot1qmaxsupportedvlans.get_name_leafdata());
    if (dot1qnumvlans.is_set || is_set(dot1qnumvlans.yfilter)) leaf_name_data.push_back(dot1qnumvlans.get_name_leafdata());
    if (dot1qgvrpstatus.is_set || is_set(dot1qgvrpstatus.yfilter)) leaf_name_data.push_back(dot1qgvrpstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qBase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanVersionNumber")
    {
        dot1qvlanversionnumber = value;
        dot1qvlanversionnumber.value_namespace = name_space;
        dot1qvlanversionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qMaxVlanId")
    {
        dot1qmaxvlanid = value;
        dot1qmaxvlanid.value_namespace = name_space;
        dot1qmaxvlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qMaxSupportedVlans")
    {
        dot1qmaxsupportedvlans = value;
        dot1qmaxsupportedvlans.value_namespace = name_space;
        dot1qmaxsupportedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qNumVlans")
    {
        dot1qnumvlans = value;
        dot1qnumvlans.value_namespace = name_space;
        dot1qnumvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qGvrpStatus")
    {
        dot1qgvrpstatus = value;
        dot1qgvrpstatus.value_namespace = name_space;
        dot1qgvrpstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qBase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanVersionNumber")
    {
        dot1qvlanversionnumber.yfilter = yfilter;
    }
    if(value_path == "dot1qMaxVlanId")
    {
        dot1qmaxvlanid.yfilter = yfilter;
    }
    if(value_path == "dot1qMaxSupportedVlans")
    {
        dot1qmaxsupportedvlans.yfilter = yfilter;
    }
    if(value_path == "dot1qNumVlans")
    {
        dot1qnumvlans.yfilter = yfilter;
    }
    if(value_path == "dot1qGvrpStatus")
    {
        dot1qgvrpstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanVersionNumber" || name == "dot1qMaxVlanId" || name == "dot1qMaxSupportedVlans" || name == "dot1qNumVlans" || name == "dot1qGvrpStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qVlan::Dot1qVlan()
    :
    dot1qvlannumdeletes{YType::uint32, "dot1qVlanNumDeletes"},
    dot1qnextfreelocalvlanindex{YType::int32, "dot1qNextFreeLocalVlanIndex"},
    dot1qconstraintsetdefault{YType::int32, "dot1qConstraintSetDefault"},
    dot1qconstrainttypedefault{YType::enumeration, "dot1qConstraintTypeDefault"}
{

    yang_name = "dot1qVlan"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qVlan::~Dot1qVlan()
{
}

bool QBRIDGEMIB::Dot1qVlan::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlannumdeletes.is_set
	|| dot1qnextfreelocalvlanindex.is_set
	|| dot1qconstraintsetdefault.is_set
	|| dot1qconstrainttypedefault.is_set;
}

bool QBRIDGEMIB::Dot1qVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlannumdeletes.yfilter)
	|| ydk::is_set(dot1qnextfreelocalvlanindex.yfilter)
	|| ydk::is_set(dot1qconstraintsetdefault.yfilter)
	|| ydk::is_set(dot1qconstrainttypedefault.yfilter);
}

std::string QBRIDGEMIB::Dot1qVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlannumdeletes.is_set || is_set(dot1qvlannumdeletes.yfilter)) leaf_name_data.push_back(dot1qvlannumdeletes.get_name_leafdata());
    if (dot1qnextfreelocalvlanindex.is_set || is_set(dot1qnextfreelocalvlanindex.yfilter)) leaf_name_data.push_back(dot1qnextfreelocalvlanindex.get_name_leafdata());
    if (dot1qconstraintsetdefault.is_set || is_set(dot1qconstraintsetdefault.yfilter)) leaf_name_data.push_back(dot1qconstraintsetdefault.get_name_leafdata());
    if (dot1qconstrainttypedefault.is_set || is_set(dot1qconstrainttypedefault.yfilter)) leaf_name_data.push_back(dot1qconstrainttypedefault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanNumDeletes")
    {
        dot1qvlannumdeletes = value;
        dot1qvlannumdeletes.value_namespace = name_space;
        dot1qvlannumdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qNextFreeLocalVlanIndex")
    {
        dot1qnextfreelocalvlanindex = value;
        dot1qnextfreelocalvlanindex.value_namespace = name_space;
        dot1qnextfreelocalvlanindex.value_namespace_prefix = name_space_prefix;
    }
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
}

void QBRIDGEMIB::Dot1qVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanNumDeletes")
    {
        dot1qvlannumdeletes.yfilter = yfilter;
    }
    if(value_path == "dot1qNextFreeLocalVlanIndex")
    {
        dot1qnextfreelocalvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintSetDefault")
    {
        dot1qconstraintsetdefault.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintTypeDefault")
    {
        dot1qconstrainttypedefault.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanNumDeletes" || name == "dot1qNextFreeLocalVlanIndex" || name == "dot1qConstraintSetDefault" || name == "dot1qConstraintTypeDefault")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbTable()
    :
    dot1qfdbentry(this, {"dot1qfdbid"})
{

    yang_name = "dot1qFdbTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qFdbTable::~Dot1qFdbTable()
{
}

bool QBRIDGEMIB::Dot1qFdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qfdbentry.len(); index++)
    {
        if(dot1qfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qFdbTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qfdbentry.len(); index++)
    {
        if(dot1qfdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qFdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qFdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qFdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qFdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qFdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qFdbEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry>();
        ent_->parent = this;
        dot1qfdbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qFdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qfdbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qFdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qFdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qFdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::Dot1qFdbEntry()
    :
    dot1qfdbid{YType::uint32, "dot1qFdbId"},
    dot1qfdbdynamiccount{YType::uint32, "dot1qFdbDynamicCount"}
{

    yang_name = "dot1qFdbEntry"; yang_parent_name = "dot1qFdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::~Dot1qFdbEntry()
{
}

bool QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qfdbid.is_set
	|| dot1qfdbdynamiccount.is_set;
}

bool QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qfdbdynamiccount.yfilter);
}

std::string QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qFdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qFdbEntry";
    ADD_KEY_TOKEN(dot1qfdbid, "dot1qFdbId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qfdbdynamiccount.is_set || is_set(dot1qfdbdynamiccount.yfilter)) leaf_name_data.push_back(dot1qfdbdynamiccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qFdbDynamicCount")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbTable()
    :
    dot1qtpfdbentry(this, {"dot1qfdbid", "dot1qtpfdbaddress"})
{

    yang_name = "dot1qTpFdbTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qTpFdbTable::~Dot1qTpFdbTable()
{
}

bool QBRIDGEMIB::Dot1qTpFdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qtpfdbentry.len(); index++)
    {
        if(dot1qtpfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qTpFdbTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qtpfdbentry.len(); index++)
    {
        if(dot1qtpfdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qTpFdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qTpFdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpFdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qTpFdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qTpFdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qTpFdbEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry>();
        ent_->parent = this;
        dot1qtpfdbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qTpFdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qtpfdbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qTpFdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qTpFdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qTpFdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qTpFdbEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbEntry()
    :
    dot1qfdbid{YType::str, "dot1qFdbId"},
    dot1qtpfdbaddress{YType::str, "dot1qTpFdbAddress"},
    dot1qtpfdbport{YType::int32, "dot1qTpFdbPort"},
    dot1qtpfdbstatus{YType::enumeration, "dot1qTpFdbStatus"}
{

    yang_name = "dot1qTpFdbEntry"; yang_parent_name = "dot1qTpFdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::~Dot1qTpFdbEntry()
{
}

bool QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qfdbid.is_set
	|| dot1qtpfdbaddress.is_set
	|| dot1qtpfdbport.is_set
	|| dot1qtpfdbstatus.is_set;
}

bool QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qtpfdbaddress.yfilter)
	|| ydk::is_set(dot1qtpfdbport.yfilter)
	|| ydk::is_set(dot1qtpfdbstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qTpFdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpFdbEntry";
    ADD_KEY_TOKEN(dot1qfdbid, "dot1qFdbId");
    ADD_KEY_TOKEN(dot1qtpfdbaddress, "dot1qTpFdbAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qtpfdbaddress.is_set || is_set(dot1qtpfdbaddress.yfilter)) leaf_name_data.push_back(dot1qtpfdbaddress.get_name_leafdata());
    if (dot1qtpfdbport.is_set || is_set(dot1qtpfdbport.yfilter)) leaf_name_data.push_back(dot1qtpfdbport.get_name_leafdata());
    if (dot1qtpfdbstatus.is_set || is_set(dot1qtpfdbstatus.yfilter)) leaf_name_data.push_back(dot1qtpfdbstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qTpFdbAddress" || name == "dot1qTpFdbPort" || name == "dot1qTpFdbStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupTable()
    :
    dot1qtpgroupentry(this, {"dot1qvlanindex", "dot1qtpgroupaddress"})
{

    yang_name = "dot1qTpGroupTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qTpGroupTable::~Dot1qTpGroupTable()
{
}

bool QBRIDGEMIB::Dot1qTpGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qtpgroupentry.len(); index++)
    {
        if(dot1qtpgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qTpGroupTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qtpgroupentry.len(); index++)
    {
        if(dot1qtpgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qTpGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qTpGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qTpGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qTpGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qTpGroupEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry>();
        ent_->parent = this;
        dot1qtpgroupentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qTpGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qtpgroupentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qTpGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qTpGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qTpGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qTpGroupEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::Dot1qTpGroupEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpgroupaddress{YType::str, "dot1qTpGroupAddress"},
    dot1qtpgroupegressports{YType::str, "dot1qTpGroupEgressPorts"},
    dot1qtpgrouplearnt{YType::str, "dot1qTpGroupLearnt"}
{

    yang_name = "dot1qTpGroupEntry"; yang_parent_name = "dot1qTpGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::~Dot1qTpGroupEntry()
{
}

bool QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qtpgroupaddress.is_set
	|| dot1qtpgroupegressports.is_set
	|| dot1qtpgrouplearnt.is_set;
}

bool QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpgroupaddress.yfilter)
	|| ydk::is_set(dot1qtpgroupegressports.yfilter)
	|| ydk::is_set(dot1qtpgrouplearnt.yfilter);
}

std::string QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qTpGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qTpGroupEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    ADD_KEY_TOKEN(dot1qtpgroupaddress, "dot1qTpGroupAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpgroupaddress.is_set || is_set(dot1qtpgroupaddress.yfilter)) leaf_name_data.push_back(dot1qtpgroupaddress.get_name_leafdata());
    if (dot1qtpgroupegressports.is_set || is_set(dot1qtpgroupegressports.yfilter)) leaf_name_data.push_back(dot1qtpgroupegressports.get_name_leafdata());
    if (dot1qtpgrouplearnt.is_set || is_set(dot1qtpgrouplearnt.yfilter)) leaf_name_data.push_back(dot1qtpgrouplearnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qTpGroupAddress" || name == "dot1qTpGroupEgressPorts" || name == "dot1qTpGroupLearnt")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllTable()
    :
    dot1qforwardallentry(this, {"dot1qvlanindex"})
{

    yang_name = "dot1qForwardAllTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qForwardAllTable::~Dot1qForwardAllTable()
{
}

bool QBRIDGEMIB::Dot1qForwardAllTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qforwardallentry.len(); index++)
    {
        if(dot1qforwardallentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qForwardAllTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qforwardallentry.len(); index++)
    {
        if(dot1qforwardallentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qForwardAllTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qForwardAllTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardAllTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qForwardAllTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qForwardAllTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qForwardAllEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry>();
        ent_->parent = this;
        dot1qforwardallentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qForwardAllTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qforwardallentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qForwardAllTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qForwardAllTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qForwardAllTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qForwardAllEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::Dot1qForwardAllEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qforwardallports{YType::str, "dot1qForwardAllPorts"},
    dot1qforwardallstaticports{YType::str, "dot1qForwardAllStaticPorts"},
    dot1qforwardallforbiddenports{YType::str, "dot1qForwardAllForbiddenPorts"}
{

    yang_name = "dot1qForwardAllEntry"; yang_parent_name = "dot1qForwardAllTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::~Dot1qForwardAllEntry()
{
}

bool QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qforwardallports.is_set
	|| dot1qforwardallstaticports.is_set
	|| dot1qforwardallforbiddenports.is_set;
}

bool QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qforwardallports.yfilter)
	|| ydk::is_set(dot1qforwardallstaticports.yfilter)
	|| ydk::is_set(dot1qforwardallforbiddenports.yfilter);
}

std::string QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qForwardAllTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardAllEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qforwardallports.is_set || is_set(dot1qforwardallports.yfilter)) leaf_name_data.push_back(dot1qforwardallports.get_name_leafdata());
    if (dot1qforwardallstaticports.is_set || is_set(dot1qforwardallstaticports.yfilter)) leaf_name_data.push_back(dot1qforwardallstaticports.get_name_leafdata());
    if (dot1qforwardallforbiddenports.is_set || is_set(dot1qforwardallforbiddenports.yfilter)) leaf_name_data.push_back(dot1qforwardallforbiddenports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1qForwardAllForbiddenPorts")
    {
        dot1qforwardallforbiddenports = value;
        dot1qforwardallforbiddenports.value_namespace = name_space;
        dot1qforwardallforbiddenports.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllPorts")
    {
        dot1qforwardallports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllStaticPorts")
    {
        dot1qforwardallstaticports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardAllForbiddenPorts")
    {
        dot1qforwardallforbiddenports.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qForwardAllPorts" || name == "dot1qForwardAllStaticPorts" || name == "dot1qForwardAllForbiddenPorts")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredTable()
    :
    dot1qforwardunregisteredentry(this, {"dot1qvlanindex"})
{

    yang_name = "dot1qForwardUnregisteredTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qForwardUnregisteredTable::~Dot1qForwardUnregisteredTable()
{
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qforwardunregisteredentry.len(); index++)
    {
        if(dot1qforwardunregisteredentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qforwardunregisteredentry.len(); index++)
    {
        if(dot1qforwardunregisteredentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qForwardUnregisteredTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qForwardUnregisteredTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardUnregisteredTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qForwardUnregisteredTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qForwardUnregisteredTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qForwardUnregisteredEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry>();
        ent_->parent = this;
        dot1qforwardunregisteredentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qForwardUnregisteredTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qforwardunregisteredentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qForwardUnregisteredTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qForwardUnregisteredTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qForwardUnregisteredEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::Dot1qForwardUnregisteredEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qforwardunregisteredports{YType::str, "dot1qForwardUnregisteredPorts"},
    dot1qforwardunregisteredstaticports{YType::str, "dot1qForwardUnregisteredStaticPorts"},
    dot1qforwardunregisteredforbiddenports{YType::str, "dot1qForwardUnregisteredForbiddenPorts"}
{

    yang_name = "dot1qForwardUnregisteredEntry"; yang_parent_name = "dot1qForwardUnregisteredTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::~Dot1qForwardUnregisteredEntry()
{
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qforwardunregisteredports.is_set
	|| dot1qforwardunregisteredstaticports.is_set
	|| dot1qforwardunregisteredforbiddenports.is_set;
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredports.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredstaticports.yfilter)
	|| ydk::is_set(dot1qforwardunregisteredforbiddenports.yfilter);
}

std::string QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qForwardUnregisteredTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qForwardUnregisteredEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qforwardunregisteredports.is_set || is_set(dot1qforwardunregisteredports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredports.get_name_leafdata());
    if (dot1qforwardunregisteredstaticports.is_set || is_set(dot1qforwardunregisteredstaticports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredstaticports.get_name_leafdata());
    if (dot1qforwardunregisteredforbiddenports.is_set || is_set(dot1qforwardunregisteredforbiddenports.yfilter)) leaf_name_data.push_back(dot1qforwardunregisteredforbiddenports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1qForwardUnregisteredForbiddenPorts")
    {
        dot1qforwardunregisteredforbiddenports = value;
        dot1qforwardunregisteredforbiddenports.value_namespace = name_space;
        dot1qforwardunregisteredforbiddenports.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredPorts")
    {
        dot1qforwardunregisteredports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredStaticPorts")
    {
        dot1qforwardunregisteredstaticports.yfilter = yfilter;
    }
    if(value_path == "dot1qForwardUnregisteredForbiddenPorts")
    {
        dot1qforwardunregisteredforbiddenports.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qForwardUnregisteredPorts" || name == "dot1qForwardUnregisteredStaticPorts" || name == "dot1qForwardUnregisteredForbiddenPorts")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastTable()
    :
    dot1qstaticunicastentry(this, {"dot1qfdbid", "dot1qstaticunicastaddress", "dot1qstaticunicastreceiveport"})
{

    yang_name = "dot1qStaticUnicastTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qStaticUnicastTable::~Dot1qStaticUnicastTable()
{
}

bool QBRIDGEMIB::Dot1qStaticUnicastTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qstaticunicastentry.len(); index++)
    {
        if(dot1qstaticunicastentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qStaticUnicastTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qstaticunicastentry.len(); index++)
    {
        if(dot1qstaticunicastentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qStaticUnicastTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qStaticUnicastTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticUnicastTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qStaticUnicastTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qStaticUnicastTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qStaticUnicastEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry>();
        ent_->parent = this;
        dot1qstaticunicastentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qStaticUnicastTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qstaticunicastentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qStaticUnicastTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qStaticUnicastTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qStaticUnicastTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qStaticUnicastEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastEntry()
    :
    dot1qfdbid{YType::str, "dot1qFdbId"},
    dot1qstaticunicastaddress{YType::str, "dot1qStaticUnicastAddress"},
    dot1qstaticunicastreceiveport{YType::int32, "dot1qStaticUnicastReceivePort"},
    dot1qstaticunicastallowedtogoto{YType::str, "dot1qStaticUnicastAllowedToGoTo"},
    dot1qstaticunicaststatus{YType::enumeration, "dot1qStaticUnicastStatus"}
{

    yang_name = "dot1qStaticUnicastEntry"; yang_parent_name = "dot1qStaticUnicastTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::~Dot1qStaticUnicastEntry()
{
}

bool QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qfdbid.is_set
	|| dot1qstaticunicastaddress.is_set
	|| dot1qstaticunicastreceiveport.is_set
	|| dot1qstaticunicastallowedtogoto.is_set
	|| dot1qstaticunicaststatus.is_set;
}

bool QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qfdbid.yfilter)
	|| ydk::is_set(dot1qstaticunicastaddress.yfilter)
	|| ydk::is_set(dot1qstaticunicastreceiveport.yfilter)
	|| ydk::is_set(dot1qstaticunicastallowedtogoto.yfilter)
	|| ydk::is_set(dot1qstaticunicaststatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qStaticUnicastTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticUnicastEntry";
    ADD_KEY_TOKEN(dot1qfdbid, "dot1qFdbId");
    ADD_KEY_TOKEN(dot1qstaticunicastaddress, "dot1qStaticUnicastAddress");
    ADD_KEY_TOKEN(dot1qstaticunicastreceiveport, "dot1qStaticUnicastReceivePort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qfdbid.is_set || is_set(dot1qfdbid.yfilter)) leaf_name_data.push_back(dot1qfdbid.get_name_leafdata());
    if (dot1qstaticunicastaddress.is_set || is_set(dot1qstaticunicastaddress.yfilter)) leaf_name_data.push_back(dot1qstaticunicastaddress.get_name_leafdata());
    if (dot1qstaticunicastreceiveport.is_set || is_set(dot1qstaticunicastreceiveport.yfilter)) leaf_name_data.push_back(dot1qstaticunicastreceiveport.get_name_leafdata());
    if (dot1qstaticunicastallowedtogoto.is_set || is_set(dot1qstaticunicastallowedtogoto.yfilter)) leaf_name_data.push_back(dot1qstaticunicastallowedtogoto.get_name_leafdata());
    if (dot1qstaticunicaststatus.is_set || is_set(dot1qstaticunicaststatus.yfilter)) leaf_name_data.push_back(dot1qstaticunicaststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qFdbId" || name == "dot1qStaticUnicastAddress" || name == "dot1qStaticUnicastReceivePort" || name == "dot1qStaticUnicastAllowedToGoTo" || name == "dot1qStaticUnicastStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastTable()
    :
    dot1qstaticmulticastentry(this, {"dot1qvlanindex", "dot1qstaticmulticastaddress", "dot1qstaticmulticastreceiveport"})
{

    yang_name = "dot1qStaticMulticastTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qStaticMulticastTable::~Dot1qStaticMulticastTable()
{
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qstaticmulticastentry.len(); index++)
    {
        if(dot1qstaticmulticastentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qstaticmulticastentry.len(); index++)
    {
        if(dot1qstaticmulticastentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qStaticMulticastTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qStaticMulticastTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticMulticastTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qStaticMulticastTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qStaticMulticastTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qStaticMulticastEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry>();
        ent_->parent = this;
        dot1qstaticmulticastentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qStaticMulticastTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qstaticmulticastentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qStaticMulticastTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qStaticMulticastTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qStaticMulticastEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qstaticmulticastaddress{YType::str, "dot1qStaticMulticastAddress"},
    dot1qstaticmulticastreceiveport{YType::int32, "dot1qStaticMulticastReceivePort"},
    dot1qstaticmulticaststaticegressports{YType::str, "dot1qStaticMulticastStaticEgressPorts"},
    dot1qstaticmulticastforbiddenegressports{YType::str, "dot1qStaticMulticastForbiddenEgressPorts"},
    dot1qstaticmulticaststatus{YType::enumeration, "dot1qStaticMulticastStatus"}
{

    yang_name = "dot1qStaticMulticastEntry"; yang_parent_name = "dot1qStaticMulticastTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::~Dot1qStaticMulticastEntry()
{
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qstaticmulticastaddress.is_set
	|| dot1qstaticmulticastreceiveport.is_set
	|| dot1qstaticmulticaststaticegressports.is_set
	|| dot1qstaticmulticastforbiddenegressports.is_set
	|| dot1qstaticmulticaststatus.is_set;
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qstaticmulticastaddress.yfilter)
	|| ydk::is_set(dot1qstaticmulticastreceiveport.yfilter)
	|| ydk::is_set(dot1qstaticmulticaststaticegressports.yfilter)
	|| ydk::is_set(dot1qstaticmulticastforbiddenegressports.yfilter)
	|| ydk::is_set(dot1qstaticmulticaststatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qStaticMulticastTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qStaticMulticastEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    ADD_KEY_TOKEN(dot1qstaticmulticastaddress, "dot1qStaticMulticastAddress");
    ADD_KEY_TOKEN(dot1qstaticmulticastreceiveport, "dot1qStaticMulticastReceivePort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qstaticmulticastaddress.is_set || is_set(dot1qstaticmulticastaddress.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastaddress.get_name_leafdata());
    if (dot1qstaticmulticastreceiveport.is_set || is_set(dot1qstaticmulticastreceiveport.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastreceiveport.get_name_leafdata());
    if (dot1qstaticmulticaststaticegressports.is_set || is_set(dot1qstaticmulticaststaticegressports.yfilter)) leaf_name_data.push_back(dot1qstaticmulticaststaticegressports.get_name_leafdata());
    if (dot1qstaticmulticastforbiddenegressports.is_set || is_set(dot1qstaticmulticastforbiddenegressports.yfilter)) leaf_name_data.push_back(dot1qstaticmulticastforbiddenegressports.get_name_leafdata());
    if (dot1qstaticmulticaststatus.is_set || is_set(dot1qstaticmulticaststatus.yfilter)) leaf_name_data.push_back(dot1qstaticmulticaststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot1qStaticMulticastStaticEgressPorts")
    {
        dot1qstaticmulticaststaticegressports = value;
        dot1qstaticmulticaststaticegressports.value_namespace = name_space;
        dot1qstaticmulticaststaticegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastForbiddenEgressPorts")
    {
        dot1qstaticmulticastforbiddenegressports = value;
        dot1qstaticmulticastforbiddenegressports.value_namespace = name_space;
        dot1qstaticmulticastforbiddenegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qStaticMulticastStatus")
    {
        dot1qstaticmulticaststatus = value;
        dot1qstaticmulticaststatus.value_namespace = name_space;
        dot1qstaticmulticaststatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "dot1qStaticMulticastStaticEgressPorts")
    {
        dot1qstaticmulticaststaticegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastForbiddenEgressPorts")
    {
        dot1qstaticmulticastforbiddenegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qStaticMulticastStatus")
    {
        dot1qstaticmulticaststatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qStaticMulticastAddress" || name == "dot1qStaticMulticastReceivePort" || name == "dot1qStaticMulticastStaticEgressPorts" || name == "dot1qStaticMulticastForbiddenEgressPorts" || name == "dot1qStaticMulticastStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentTable()
    :
    dot1qvlancurrententry(this, {"dot1qvlantimemark", "dot1qvlanindex"})
{

    yang_name = "dot1qVlanCurrentTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qVlanCurrentTable::~Dot1qVlanCurrentTable()
{
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qvlancurrententry.len(); index++)
    {
        if(dot1qvlancurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qvlancurrententry.len(); index++)
    {
        if(dot1qvlancurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qVlanCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qVlanCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qVlanCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qVlanCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qVlanCurrentEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry>();
        ent_->parent = this;
        dot1qvlancurrententry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qVlanCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qvlancurrententry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qVlanCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qVlanCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanCurrentEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::Dot1qVlanCurrentEntry()
    :
    dot1qvlantimemark{YType::uint32, "dot1qVlanTimeMark"},
    dot1qvlanindex{YType::uint32, "dot1qVlanIndex"},
    dot1qvlanfdbid{YType::uint32, "dot1qVlanFdbId"},
    dot1qvlancurrentegressports{YType::str, "dot1qVlanCurrentEgressPorts"},
    dot1qvlancurrentuntaggedports{YType::str, "dot1qVlanCurrentUntaggedPorts"},
    dot1qvlanstatus{YType::enumeration, "dot1qVlanStatus"},
    dot1qvlancreationtime{YType::uint32, "dot1qVlanCreationTime"}
{

    yang_name = "dot1qVlanCurrentEntry"; yang_parent_name = "dot1qVlanCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::~Dot1qVlanCurrentEntry()
{
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlantimemark.is_set
	|| dot1qvlanindex.is_set
	|| dot1qvlanfdbid.is_set
	|| dot1qvlancurrentegressports.is_set
	|| dot1qvlancurrentuntaggedports.is_set
	|| dot1qvlanstatus.is_set
	|| dot1qvlancreationtime.is_set;
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlantimemark.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qvlanfdbid.yfilter)
	|| ydk::is_set(dot1qvlancurrentegressports.yfilter)
	|| ydk::is_set(dot1qvlancurrentuntaggedports.yfilter)
	|| ydk::is_set(dot1qvlanstatus.yfilter)
	|| ydk::is_set(dot1qvlancreationtime.yfilter);
}

std::string QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qVlanCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanCurrentEntry";
    ADD_KEY_TOKEN(dot1qvlantimemark, "dot1qVlanTimeMark");
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlantimemark.is_set || is_set(dot1qvlantimemark.yfilter)) leaf_name_data.push_back(dot1qvlantimemark.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qvlanfdbid.is_set || is_set(dot1qvlanfdbid.yfilter)) leaf_name_data.push_back(dot1qvlanfdbid.get_name_leafdata());
    if (dot1qvlancurrentegressports.is_set || is_set(dot1qvlancurrentegressports.yfilter)) leaf_name_data.push_back(dot1qvlancurrentegressports.get_name_leafdata());
    if (dot1qvlancurrentuntaggedports.is_set || is_set(dot1qvlancurrentuntaggedports.yfilter)) leaf_name_data.push_back(dot1qvlancurrentuntaggedports.get_name_leafdata());
    if (dot1qvlanstatus.is_set || is_set(dot1qvlanstatus.yfilter)) leaf_name_data.push_back(dot1qvlanstatus.get_name_leafdata());
    if (dot1qvlancreationtime.is_set || is_set(dot1qvlancreationtime.yfilter)) leaf_name_data.push_back(dot1qvlancreationtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot1qVlanFdbId")
    {
        dot1qvlanfdbid = value;
        dot1qvlanfdbid.value_namespace = name_space;
        dot1qvlanfdbid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1qVlanStatus")
    {
        dot1qvlanstatus = value;
        dot1qvlanstatus.value_namespace = name_space;
        dot1qvlanstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanCreationTime")
    {
        dot1qvlancreationtime = value;
        dot1qvlancreationtime.value_namespace = name_space;
        dot1qvlancreationtime.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanTimeMark")
    {
        dot1qvlantimemark.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanFdbId")
    {
        dot1qvlanfdbid.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCurrentEgressPorts")
    {
        dot1qvlancurrentegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCurrentUntaggedPorts")
    {
        dot1qvlancurrentuntaggedports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStatus")
    {
        dot1qvlanstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanCreationTime")
    {
        dot1qvlancreationtime.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanTimeMark" || name == "dot1qVlanIndex" || name == "dot1qVlanFdbId" || name == "dot1qVlanCurrentEgressPorts" || name == "dot1qVlanCurrentUntaggedPorts" || name == "dot1qVlanStatus" || name == "dot1qVlanCreationTime")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticTable()
    :
    dot1qvlanstaticentry(this, {"dot1qvlanindex"})
{

    yang_name = "dot1qVlanStaticTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qVlanStaticTable::~Dot1qVlanStaticTable()
{
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qvlanstaticentry.len(); index++)
    {
        if(dot1qvlanstaticentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qvlanstaticentry.len(); index++)
    {
        if(dot1qvlanstaticentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qVlanStaticTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qVlanStaticTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanStaticTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qVlanStaticTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qVlanStaticTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qVlanStaticEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry>();
        ent_->parent = this;
        dot1qvlanstaticentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qVlanStaticTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qvlanstaticentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qVlanStaticTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qVlanStaticTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanStaticEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::Dot1qVlanStaticEntry()
    :
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qvlanstaticname{YType::str, "dot1qVlanStaticName"},
    dot1qvlanstaticegressports{YType::str, "dot1qVlanStaticEgressPorts"},
    dot1qvlanforbiddenegressports{YType::str, "dot1qVlanForbiddenEgressPorts"},
    dot1qvlanstaticuntaggedports{YType::str, "dot1qVlanStaticUntaggedPorts"},
    dot1qvlanstaticrowstatus{YType::enumeration, "dot1qVlanStaticRowStatus"}
{

    yang_name = "dot1qVlanStaticEntry"; yang_parent_name = "dot1qVlanStaticTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::~Dot1qVlanStaticEntry()
{
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qvlanindex.is_set
	|| dot1qvlanstaticname.is_set
	|| dot1qvlanstaticegressports.is_set
	|| dot1qvlanforbiddenegressports.is_set
	|| dot1qvlanstaticuntaggedports.is_set
	|| dot1qvlanstaticrowstatus.is_set;
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qvlanstaticname.yfilter)
	|| ydk::is_set(dot1qvlanstaticegressports.yfilter)
	|| ydk::is_set(dot1qvlanforbiddenegressports.yfilter)
	|| ydk::is_set(dot1qvlanstaticuntaggedports.yfilter)
	|| ydk::is_set(dot1qvlanstaticrowstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qVlanStaticTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qVlanStaticEntry";
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qvlanstaticname.is_set || is_set(dot1qvlanstaticname.yfilter)) leaf_name_data.push_back(dot1qvlanstaticname.get_name_leafdata());
    if (dot1qvlanstaticegressports.is_set || is_set(dot1qvlanstaticegressports.yfilter)) leaf_name_data.push_back(dot1qvlanstaticegressports.get_name_leafdata());
    if (dot1qvlanforbiddenegressports.is_set || is_set(dot1qvlanforbiddenegressports.yfilter)) leaf_name_data.push_back(dot1qvlanforbiddenegressports.get_name_leafdata());
    if (dot1qvlanstaticuntaggedports.is_set || is_set(dot1qvlanstaticuntaggedports.yfilter)) leaf_name_data.push_back(dot1qvlanstaticuntaggedports.get_name_leafdata());
    if (dot1qvlanstaticrowstatus.is_set || is_set(dot1qvlanstaticrowstatus.yfilter)) leaf_name_data.push_back(dot1qvlanstaticrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex = value;
        dot1qvlanindex.value_namespace = name_space;
        dot1qvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticName")
    {
        dot1qvlanstaticname = value;
        dot1qvlanstaticname.value_namespace = name_space;
        dot1qvlanstaticname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticEgressPorts")
    {
        dot1qvlanstaticegressports = value;
        dot1qvlanstaticegressports.value_namespace = name_space;
        dot1qvlanstaticegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanForbiddenEgressPorts")
    {
        dot1qvlanforbiddenegressports = value;
        dot1qvlanforbiddenegressports.value_namespace = name_space;
        dot1qvlanforbiddenegressports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticUntaggedPorts")
    {
        dot1qvlanstaticuntaggedports = value;
        dot1qvlanstaticuntaggedports.value_namespace = name_space;
        dot1qvlanstaticuntaggedports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qVlanStaticRowStatus")
    {
        dot1qvlanstaticrowstatus = value;
        dot1qvlanstaticrowstatus.value_namespace = name_space;
        dot1qvlanstaticrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticName")
    {
        dot1qvlanstaticname.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticEgressPorts")
    {
        dot1qvlanstaticegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanForbiddenEgressPorts")
    {
        dot1qvlanforbiddenegressports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticUntaggedPorts")
    {
        dot1qvlanstaticuntaggedports.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanStaticRowStatus")
    {
        dot1qvlanstaticrowstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qVlanIndex" || name == "dot1qVlanStaticName" || name == "dot1qVlanStaticEgressPorts" || name == "dot1qVlanForbiddenEgressPorts" || name == "dot1qVlanStaticUntaggedPorts" || name == "dot1qVlanStaticRowStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsTable()
    :
    dot1qportvlanstatisticsentry(this, {"dot1dbaseport", "dot1qvlanindex"})
{

    yang_name = "dot1qPortVlanStatisticsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qPortVlanStatisticsTable::~Dot1qPortVlanStatisticsTable()
{
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qportvlanstatisticsentry.len(); index++)
    {
        if(dot1qportvlanstatisticsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qportvlanstatisticsentry.len(); index++)
    {
        if(dot1qportvlanstatisticsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qPortVlanStatisticsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qPortVlanStatisticsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanStatisticsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qPortVlanStatisticsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qPortVlanStatisticsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qPortVlanStatisticsEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry>();
        ent_->parent = this;
        dot1qportvlanstatisticsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qPortVlanStatisticsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qportvlanstatisticsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qPortVlanStatisticsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qPortVlanStatisticsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qPortVlanStatisticsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::Dot1qPortVlanStatisticsEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpvlanportinframes{YType::uint32, "dot1qTpVlanPortInFrames"},
    dot1qtpvlanportoutframes{YType::uint32, "dot1qTpVlanPortOutFrames"},
    dot1qtpvlanportindiscards{YType::uint32, "dot1qTpVlanPortInDiscards"},
    dot1qtpvlanportinoverflowframes{YType::uint32, "dot1qTpVlanPortInOverflowFrames"},
    dot1qtpvlanportoutoverflowframes{YType::uint32, "dot1qTpVlanPortOutOverflowFrames"},
    dot1qtpvlanportinoverflowdiscards{YType::uint32, "dot1qTpVlanPortInOverflowDiscards"}
{

    yang_name = "dot1qPortVlanStatisticsEntry"; yang_parent_name = "dot1qPortVlanStatisticsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::~Dot1qPortVlanStatisticsEntry()
{
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1qvlanindex.is_set
	|| dot1qtpvlanportinframes.is_set
	|| dot1qtpvlanportoutframes.is_set
	|| dot1qtpvlanportindiscards.is_set
	|| dot1qtpvlanportinoverflowframes.is_set
	|| dot1qtpvlanportoutoverflowframes.is_set
	|| dot1qtpvlanportinoverflowdiscards.is_set;
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpvlanportinframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportoutframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportindiscards.yfilter)
	|| ydk::is_set(dot1qtpvlanportinoverflowframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportoutoverflowframes.yfilter)
	|| ydk::is_set(dot1qtpvlanportinoverflowdiscards.yfilter);
}

std::string QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qPortVlanStatisticsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanStatisticsEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpvlanportinframes.is_set || is_set(dot1qtpvlanportinframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinframes.get_name_leafdata());
    if (dot1qtpvlanportoutframes.is_set || is_set(dot1qtpvlanportoutframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportoutframes.get_name_leafdata());
    if (dot1qtpvlanportindiscards.is_set || is_set(dot1qtpvlanportindiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanportindiscards.get_name_leafdata());
    if (dot1qtpvlanportinoverflowframes.is_set || is_set(dot1qtpvlanportinoverflowframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinoverflowframes.get_name_leafdata());
    if (dot1qtpvlanportoutoverflowframes.is_set || is_set(dot1qtpvlanportoutoverflowframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanportoutoverflowframes.get_name_leafdata());
    if (dot1qtpvlanportinoverflowdiscards.is_set || is_set(dot1qtpvlanportinoverflowdiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanportinoverflowdiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot1qTpVlanPortInFrames")
    {
        dot1qtpvlanportinframes = value;
        dot1qtpvlanportinframes.value_namespace = name_space;
        dot1qtpvlanportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortOutFrames")
    {
        dot1qtpvlanportoutframes = value;
        dot1qtpvlanportoutframes.value_namespace = name_space;
        dot1qtpvlanportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInDiscards")
    {
        dot1qtpvlanportindiscards = value;
        dot1qtpvlanportindiscards.value_namespace = name_space;
        dot1qtpvlanportindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInOverflowFrames")
    {
        dot1qtpvlanportinoverflowframes = value;
        dot1qtpvlanportinoverflowframes.value_namespace = name_space;
        dot1qtpvlanportinoverflowframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortOutOverflowFrames")
    {
        dot1qtpvlanportoutoverflowframes = value;
        dot1qtpvlanportoutoverflowframes.value_namespace = name_space;
        dot1qtpvlanportoutoverflowframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTpVlanPortInOverflowDiscards")
    {
        dot1qtpvlanportinoverflowdiscards = value;
        dot1qtpvlanportinoverflowdiscards.value_namespace = name_space;
        dot1qtpvlanportinoverflowdiscards.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInFrames")
    {
        dot1qtpvlanportinframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortOutFrames")
    {
        dot1qtpvlanportoutframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInDiscards")
    {
        dot1qtpvlanportindiscards.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInOverflowFrames")
    {
        dot1qtpvlanportinoverflowframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortOutOverflowFrames")
    {
        dot1qtpvlanportoutoverflowframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortInOverflowDiscards")
    {
        dot1qtpvlanportinoverflowdiscards.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1qVlanIndex" || name == "dot1qTpVlanPortInFrames" || name == "dot1qTpVlanPortOutFrames" || name == "dot1qTpVlanPortInDiscards" || name == "dot1qTpVlanPortInOverflowFrames" || name == "dot1qTpVlanPortOutOverflowFrames" || name == "dot1qTpVlanPortInOverflowDiscards")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsTable()
    :
    dot1qportvlanhcstatisticsentry(this, {"dot1dbaseport", "dot1qvlanindex"})
{

    yang_name = "dot1qPortVlanHCStatisticsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::~Dot1qPortVlanHCStatisticsTable()
{
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qportvlanhcstatisticsentry.len(); index++)
    {
        if(dot1qportvlanhcstatisticsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qportvlanhcstatisticsentry.len(); index++)
    {
        if(dot1qportvlanhcstatisticsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanHCStatisticsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qPortVlanHCStatisticsEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry>();
        ent_->parent = this;
        dot1qportvlanhcstatisticsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qportvlanhcstatisticsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qPortVlanHCStatisticsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::Dot1qPortVlanHCStatisticsEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1qvlanindex{YType::str, "dot1qVlanIndex"},
    dot1qtpvlanporthcinframes{YType::uint64, "dot1qTpVlanPortHCInFrames"},
    dot1qtpvlanporthcoutframes{YType::uint64, "dot1qTpVlanPortHCOutFrames"},
    dot1qtpvlanporthcindiscards{YType::uint64, "dot1qTpVlanPortHCInDiscards"}
{

    yang_name = "dot1qPortVlanHCStatisticsEntry"; yang_parent_name = "dot1qPortVlanHCStatisticsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::~Dot1qPortVlanHCStatisticsEntry()
{
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1qvlanindex.is_set
	|| dot1qtpvlanporthcinframes.is_set
	|| dot1qtpvlanporthcoutframes.is_set
	|| dot1qtpvlanporthcindiscards.is_set;
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1qvlanindex.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcinframes.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcoutframes.yfilter)
	|| ydk::is_set(dot1qtpvlanporthcindiscards.yfilter);
}

std::string QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qPortVlanHCStatisticsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qPortVlanHCStatisticsEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1qvlanindex, "dot1qVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1qvlanindex.is_set || is_set(dot1qvlanindex.yfilter)) leaf_name_data.push_back(dot1qvlanindex.get_name_leafdata());
    if (dot1qtpvlanporthcinframes.is_set || is_set(dot1qtpvlanporthcinframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcinframes.get_name_leafdata());
    if (dot1qtpvlanporthcoutframes.is_set || is_set(dot1qtpvlanporthcoutframes.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcoutframes.get_name_leafdata());
    if (dot1qtpvlanporthcindiscards.is_set || is_set(dot1qtpvlanporthcindiscards.yfilter)) leaf_name_data.push_back(dot1qtpvlanporthcindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot1qTpVlanPortHCInDiscards")
    {
        dot1qtpvlanporthcindiscards = value;
        dot1qtpvlanporthcindiscards.value_namespace = name_space;
        dot1qtpvlanporthcindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1qVlanIndex")
    {
        dot1qvlanindex.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCInFrames")
    {
        dot1qtpvlanporthcinframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCOutFrames")
    {
        dot1qtpvlanporthcoutframes.yfilter = yfilter;
    }
    if(value_path == "dot1qTpVlanPortHCInDiscards")
    {
        dot1qtpvlanporthcindiscards.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1qVlanIndex" || name == "dot1qTpVlanPortHCInFrames" || name == "dot1qTpVlanPortHCOutFrames" || name == "dot1qTpVlanPortHCInDiscards")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsTable()
    :
    dot1qlearningconstraintsentry(this, {"dot1qconstraintvlan", "dot1qconstraintset"})
{

    yang_name = "dot1qLearningConstraintsTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qLearningConstraintsTable::~Dot1qLearningConstraintsTable()
{
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1qlearningconstraintsentry.len(); index++)
    {
        if(dot1qlearningconstraintsentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::has_operation() const
{
    for (std::size_t index=0; index<dot1qlearningconstraintsentry.len(); index++)
    {
        if(dot1qlearningconstraintsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1qLearningConstraintsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qLearningConstraintsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qLearningConstraintsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qLearningConstraintsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qLearningConstraintsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1qLearningConstraintsEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry>();
        ent_->parent = this;
        dot1qlearningconstraintsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qLearningConstraintsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1qlearningconstraintsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1qLearningConstraintsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1qLearningConstraintsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qLearningConstraintsEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::Dot1qLearningConstraintsEntry()
    :
    dot1qconstraintvlan{YType::uint32, "dot1qConstraintVlan"},
    dot1qconstraintset{YType::int32, "dot1qConstraintSet"},
    dot1qconstrainttype{YType::enumeration, "dot1qConstraintType"},
    dot1qconstraintstatus{YType::enumeration, "dot1qConstraintStatus"}
{

    yang_name = "dot1qLearningConstraintsEntry"; yang_parent_name = "dot1qLearningConstraintsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::~Dot1qLearningConstraintsEntry()
{
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1qconstraintvlan.is_set
	|| dot1qconstraintset.is_set
	|| dot1qconstrainttype.is_set
	|| dot1qconstraintstatus.is_set;
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1qconstraintvlan.yfilter)
	|| ydk::is_set(dot1qconstraintset.yfilter)
	|| ydk::is_set(dot1qconstrainttype.yfilter)
	|| ydk::is_set(dot1qconstraintstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1qLearningConstraintsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1qLearningConstraintsEntry";
    ADD_KEY_TOKEN(dot1qconstraintvlan, "dot1qConstraintVlan");
    ADD_KEY_TOKEN(dot1qconstraintset, "dot1qConstraintSet");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1qconstraintvlan.is_set || is_set(dot1qconstraintvlan.yfilter)) leaf_name_data.push_back(dot1qconstraintvlan.get_name_leafdata());
    if (dot1qconstraintset.is_set || is_set(dot1qconstraintset.yfilter)) leaf_name_data.push_back(dot1qconstraintset.get_name_leafdata());
    if (dot1qconstrainttype.is_set || is_set(dot1qconstrainttype.yfilter)) leaf_name_data.push_back(dot1qconstrainttype.get_name_leafdata());
    if (dot1qconstraintstatus.is_set || is_set(dot1qconstraintstatus.yfilter)) leaf_name_data.push_back(dot1qconstraintstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot1qConstraintType")
    {
        dot1qconstrainttype = value;
        dot1qconstrainttype.value_namespace = name_space;
        dot1qconstrainttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qConstraintStatus")
    {
        dot1qconstraintstatus = value;
        dot1qconstraintstatus.value_namespace = name_space;
        dot1qconstraintstatus.value_namespace_prefix = name_space_prefix;
    }
}

void QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1qConstraintVlan")
    {
        dot1qconstraintvlan.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintSet")
    {
        dot1qconstraintset.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintType")
    {
        dot1qconstrainttype.yfilter = yfilter;
    }
    if(value_path == "dot1qConstraintStatus")
    {
        dot1qconstraintstatus.yfilter = yfilter;
    }
}

bool QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1qConstraintVlan" || name == "dot1qConstraintSet" || name == "dot1qConstraintType" || name == "dot1qConstraintStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupTable()
    :
    dot1vprotocolgroupentry(this, {"dot1vprotocoltemplateframetype", "dot1vprotocoltemplateprotocolvalue"})
{

    yang_name = "dot1vProtocolGroupTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1vProtocolGroupTable::~Dot1vProtocolGroupTable()
{
}

bool QBRIDGEMIB::Dot1vProtocolGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1vprotocolgroupentry.len(); index++)
    {
        if(dot1vprotocolgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1vProtocolGroupTable::has_operation() const
{
    for (std::size_t index=0; index<dot1vprotocolgroupentry.len(); index++)
    {
        if(dot1vprotocolgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1vProtocolGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1vProtocolGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1vProtocolGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1vProtocolGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1vProtocolGroupEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry>();
        ent_->parent = this;
        dot1vprotocolgroupentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1vProtocolGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1vprotocolgroupentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1vProtocolGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1vProtocolGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1vProtocolGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolGroupEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolGroupEntry()
    :
    dot1vprotocoltemplateframetype{YType::enumeration, "dot1vProtocolTemplateFrameType"},
    dot1vprotocoltemplateprotocolvalue{YType::str, "dot1vProtocolTemplateProtocolValue"},
    dot1vprotocolgroupid{YType::int32, "dot1vProtocolGroupId"},
    dot1vprotocolgrouprowstatus{YType::enumeration, "dot1vProtocolGroupRowStatus"}
{

    yang_name = "dot1vProtocolGroupEntry"; yang_parent_name = "dot1vProtocolGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::~Dot1vProtocolGroupEntry()
{
}

bool QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1vprotocoltemplateframetype.is_set
	|| dot1vprotocoltemplateprotocolvalue.is_set
	|| dot1vprotocolgroupid.is_set
	|| dot1vprotocolgrouprowstatus.is_set;
}

bool QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1vprotocoltemplateframetype.yfilter)
	|| ydk::is_set(dot1vprotocoltemplateprotocolvalue.yfilter)
	|| ydk::is_set(dot1vprotocolgroupid.yfilter)
	|| ydk::is_set(dot1vprotocolgrouprowstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1vProtocolGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolGroupEntry";
    ADD_KEY_TOKEN(dot1vprotocoltemplateframetype, "dot1vProtocolTemplateFrameType");
    ADD_KEY_TOKEN(dot1vprotocoltemplateprotocolvalue, "dot1vProtocolTemplateProtocolValue");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1vprotocoltemplateframetype.is_set || is_set(dot1vprotocoltemplateframetype.yfilter)) leaf_name_data.push_back(dot1vprotocoltemplateframetype.get_name_leafdata());
    if (dot1vprotocoltemplateprotocolvalue.is_set || is_set(dot1vprotocoltemplateprotocolvalue.yfilter)) leaf_name_data.push_back(dot1vprotocoltemplateprotocolvalue.get_name_leafdata());
    if (dot1vprotocolgroupid.is_set || is_set(dot1vprotocolgroupid.yfilter)) leaf_name_data.push_back(dot1vprotocolgroupid.get_name_leafdata());
    if (dot1vprotocolgrouprowstatus.is_set || is_set(dot1vprotocolgrouprowstatus.yfilter)) leaf_name_data.push_back(dot1vprotocolgrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolTemplateFrameType" || name == "dot1vProtocolTemplateProtocolValue" || name == "dot1vProtocolGroupId" || name == "dot1vProtocolGroupRowStatus")
        return true;
    return false;
}

QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortTable()
    :
    dot1vprotocolportentry(this, {"dot1dbaseport", "dot1vprotocolportgroupid"})
{

    yang_name = "dot1vProtocolPortTable"; yang_parent_name = "Q-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1vProtocolPortTable::~Dot1vProtocolPortTable()
{
}

bool QBRIDGEMIB::Dot1vProtocolPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1vprotocolportentry.len(); index++)
    {
        if(dot1vprotocolportentry[index]->has_data())
            return true;
    }
    return false;
}

bool QBRIDGEMIB::Dot1vProtocolPortTable::has_operation() const
{
    for (std::size_t index=0; index<dot1vprotocolportentry.len(); index++)
    {
        if(dot1vprotocolportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string QBRIDGEMIB::Dot1vProtocolPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1vProtocolPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1vProtocolPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1vProtocolPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1vProtocolPortEntry")
    {
        auto ent_ = std::make_shared<QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry>();
        ent_->parent = this;
        dot1vprotocolportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1vProtocolPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1vprotocolportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void QBRIDGEMIB::Dot1vProtocolPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void QBRIDGEMIB::Dot1vProtocolPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool QBRIDGEMIB::Dot1vProtocolPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1vProtocolPortEntry")
        return true;
    return false;
}

QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::Dot1vProtocolPortEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1vprotocolportgroupid{YType::int32, "dot1vProtocolPortGroupId"},
    dot1vprotocolportgroupvid{YType::int32, "dot1vProtocolPortGroupVid"},
    dot1vprotocolportrowstatus{YType::enumeration, "dot1vProtocolPortRowStatus"}
{

    yang_name = "dot1vProtocolPortEntry"; yang_parent_name = "dot1vProtocolPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::~Dot1vProtocolPortEntry()
{
}

bool QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1vprotocolportgroupid.is_set
	|| dot1vprotocolportgroupvid.is_set
	|| dot1vprotocolportrowstatus.is_set;
}

bool QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1vprotocolportgroupid.yfilter)
	|| ydk::is_set(dot1vprotocolportgroupvid.yfilter)
	|| ydk::is_set(dot1vprotocolportrowstatus.yfilter);
}

std::string QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Q-BRIDGE-MIB:Q-BRIDGE-MIB/dot1vProtocolPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1vProtocolPortEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1vprotocolportgroupid, "dot1vProtocolPortGroupId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1vprotocolportgroupid.is_set || is_set(dot1vprotocolportgroupid.yfilter)) leaf_name_data.push_back(dot1vprotocolportgroupid.get_name_leafdata());
    if (dot1vprotocolportgroupvid.is_set || is_set(dot1vprotocolportgroupvid.yfilter)) leaf_name_data.push_back(dot1vprotocolportgroupvid.get_name_leafdata());
    if (dot1vprotocolportrowstatus.is_set || is_set(dot1vprotocolportrowstatus.yfilter)) leaf_name_data.push_back(dot1vprotocolportrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1vProtocolPortGroupId" || name == "dot1vProtocolPortGroupVid" || name == "dot1vProtocolPortRowStatus")
        return true;
    return false;
}

const Enum::YLeaf QBRIDGEMIB::Dot1qBase::Dot1qVlanVersionNumber::version1 {1, "version1"};

const Enum::YLeaf QBRIDGEMIB::Dot1qVlan::Dot1qConstraintTypeDefault::independent {1, "independent"};
const Enum::YLeaf QBRIDGEMIB::Dot1qVlan::Dot1qConstraintTypeDefault::shared {2, "shared"};

const Enum::YLeaf QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus::learned {3, "learned"};
const Enum::YLeaf QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus::self {4, "self"};
const Enum::YLeaf QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus::mgmt {5, "mgmt"};

const Enum::YLeaf QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus::permanent {3, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus::deleteOnTimeout {5, "deleteOnTimeout"};

const Enum::YLeaf QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus::invalid {2, "invalid"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus::permanent {3, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus::deleteOnTimeout {5, "deleteOnTimeout"};

const Enum::YLeaf QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::Dot1qVlanStatus::other {1, "other"};
const Enum::YLeaf QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::Dot1qVlanStatus::permanent {2, "permanent"};
const Enum::YLeaf QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::Dot1qVlanStatus::dynamicGvrp {3, "dynamicGvrp"};

const Enum::YLeaf QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::Dot1qConstraintType::independent {1, "independent"};
const Enum::YLeaf QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::Dot1qConstraintType::shared {2, "shared"};

const Enum::YLeaf QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType::ethernet {1, "ethernet"};
const Enum::YLeaf QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType::rfc1042 {2, "rfc1042"};
const Enum::YLeaf QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType::snap8021H {3, "snap8021H"};
const Enum::YLeaf QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType::snapOther {4, "snapOther"};
const Enum::YLeaf QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType::llcOther {5, "llcOther"};


}
}

