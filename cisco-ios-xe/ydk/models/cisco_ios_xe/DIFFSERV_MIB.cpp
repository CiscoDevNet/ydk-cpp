
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIFFSERV_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DIFFSERV_MIB {

DIFFSERVMIB::DIFFSERVMIB()
    :
    diffservaction(std::make_shared<DIFFSERVMIB::Diffservaction>())
	,diffservactiontable(std::make_shared<DIFFSERVMIB::Diffservactiontable>())
	,diffservalgdrop(std::make_shared<DIFFSERVMIB::Diffservalgdrop>())
	,diffservalgdroptable(std::make_shared<DIFFSERVMIB::Diffservalgdroptable>())
	,diffservclassifier(std::make_shared<DIFFSERVMIB::Diffservclassifier>())
	,diffservclfrelementtable(std::make_shared<DIFFSERVMIB::Diffservclfrelementtable>())
	,diffservclfrtable(std::make_shared<DIFFSERVMIB::Diffservclfrtable>())
	,diffservcountacttable(std::make_shared<DIFFSERVMIB::Diffservcountacttable>())
	,diffservdatapathtable(std::make_shared<DIFFSERVMIB::Diffservdatapathtable>())
	,diffservdscpmarkacttable(std::make_shared<DIFFSERVMIB::Diffservdscpmarkacttable>())
	,diffservmaxratetable(std::make_shared<DIFFSERVMIB::Diffservmaxratetable>())
	,diffservmeter(std::make_shared<DIFFSERVMIB::Diffservmeter>())
	,diffservmetertable(std::make_shared<DIFFSERVMIB::Diffservmetertable>())
	,diffservminratetable(std::make_shared<DIFFSERVMIB::Diffservminratetable>())
	,diffservmultifieldclfrtable(std::make_shared<DIFFSERVMIB::Diffservmultifieldclfrtable>())
	,diffservqtable(std::make_shared<DIFFSERVMIB::Diffservqtable>())
	,diffservqueue(std::make_shared<DIFFSERVMIB::Diffservqueue>())
	,diffservrandomdroptable(std::make_shared<DIFFSERVMIB::Diffservrandomdroptable>())
	,diffservscheduler(std::make_shared<DIFFSERVMIB::Diffservscheduler>())
	,diffservschedulertable(std::make_shared<DIFFSERVMIB::Diffservschedulertable>())
	,diffservtbparam(std::make_shared<DIFFSERVMIB::Diffservtbparam>())
	,diffservtbparamtable(std::make_shared<DIFFSERVMIB::Diffservtbparamtable>())
{
    diffservaction->parent = this;
    diffservactiontable->parent = this;
    diffservalgdrop->parent = this;
    diffservalgdroptable->parent = this;
    diffservclassifier->parent = this;
    diffservclfrelementtable->parent = this;
    diffservclfrtable->parent = this;
    diffservcountacttable->parent = this;
    diffservdatapathtable->parent = this;
    diffservdscpmarkacttable->parent = this;
    diffservmaxratetable->parent = this;
    diffservmeter->parent = this;
    diffservmetertable->parent = this;
    diffservminratetable->parent = this;
    diffservmultifieldclfrtable->parent = this;
    diffservqtable->parent = this;
    diffservqueue->parent = this;
    diffservrandomdroptable->parent = this;
    diffservscheduler->parent = this;
    diffservschedulertable->parent = this;
    diffservtbparam->parent = this;
    diffservtbparamtable->parent = this;

    yang_name = "DIFFSERV-MIB"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

DIFFSERVMIB::~DIFFSERVMIB()
{
}

bool DIFFSERVMIB::has_data() const
{
    return (diffservaction !=  nullptr && diffservaction->has_data())
	|| (diffservactiontable !=  nullptr && diffservactiontable->has_data())
	|| (diffservalgdrop !=  nullptr && diffservalgdrop->has_data())
	|| (diffservalgdroptable !=  nullptr && diffservalgdroptable->has_data())
	|| (diffservclassifier !=  nullptr && diffservclassifier->has_data())
	|| (diffservclfrelementtable !=  nullptr && diffservclfrelementtable->has_data())
	|| (diffservclfrtable !=  nullptr && diffservclfrtable->has_data())
	|| (diffservcountacttable !=  nullptr && diffservcountacttable->has_data())
	|| (diffservdatapathtable !=  nullptr && diffservdatapathtable->has_data())
	|| (diffservdscpmarkacttable !=  nullptr && diffservdscpmarkacttable->has_data())
	|| (diffservmaxratetable !=  nullptr && diffservmaxratetable->has_data())
	|| (diffservmeter !=  nullptr && diffservmeter->has_data())
	|| (diffservmetertable !=  nullptr && diffservmetertable->has_data())
	|| (diffservminratetable !=  nullptr && diffservminratetable->has_data())
	|| (diffservmultifieldclfrtable !=  nullptr && diffservmultifieldclfrtable->has_data())
	|| (diffservqtable !=  nullptr && diffservqtable->has_data())
	|| (diffservqueue !=  nullptr && diffservqueue->has_data())
	|| (diffservrandomdroptable !=  nullptr && diffservrandomdroptable->has_data())
	|| (diffservscheduler !=  nullptr && diffservscheduler->has_data())
	|| (diffservschedulertable !=  nullptr && diffservschedulertable->has_data())
	|| (diffservtbparam !=  nullptr && diffservtbparam->has_data())
	|| (diffservtbparamtable !=  nullptr && diffservtbparamtable->has_data());
}

bool DIFFSERVMIB::has_operation() const
{
    return is_set(yfilter)
	|| (diffservaction !=  nullptr && diffservaction->has_operation())
	|| (diffservactiontable !=  nullptr && diffservactiontable->has_operation())
	|| (diffservalgdrop !=  nullptr && diffservalgdrop->has_operation())
	|| (diffservalgdroptable !=  nullptr && diffservalgdroptable->has_operation())
	|| (diffservclassifier !=  nullptr && diffservclassifier->has_operation())
	|| (diffservclfrelementtable !=  nullptr && diffservclfrelementtable->has_operation())
	|| (diffservclfrtable !=  nullptr && diffservclfrtable->has_operation())
	|| (diffservcountacttable !=  nullptr && diffservcountacttable->has_operation())
	|| (diffservdatapathtable !=  nullptr && diffservdatapathtable->has_operation())
	|| (diffservdscpmarkacttable !=  nullptr && diffservdscpmarkacttable->has_operation())
	|| (diffservmaxratetable !=  nullptr && diffservmaxratetable->has_operation())
	|| (diffservmeter !=  nullptr && diffservmeter->has_operation())
	|| (diffservmetertable !=  nullptr && diffservmetertable->has_operation())
	|| (diffservminratetable !=  nullptr && diffservminratetable->has_operation())
	|| (diffservmultifieldclfrtable !=  nullptr && diffservmultifieldclfrtable->has_operation())
	|| (diffservqtable !=  nullptr && diffservqtable->has_operation())
	|| (diffservqueue !=  nullptr && diffservqueue->has_operation())
	|| (diffservrandomdroptable !=  nullptr && diffservrandomdroptable->has_operation())
	|| (diffservscheduler !=  nullptr && diffservscheduler->has_operation())
	|| (diffservschedulertable !=  nullptr && diffservschedulertable->has_operation())
	|| (diffservtbparam !=  nullptr && diffservtbparam->has_operation())
	|| (diffservtbparamtable !=  nullptr && diffservtbparamtable->has_operation());
}

std::string DIFFSERVMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServAction")
    {
        if(diffservaction == nullptr)
        {
            diffservaction = std::make_shared<DIFFSERVMIB::Diffservaction>();
        }
        return diffservaction;
    }

    if(child_yang_name == "diffServActionTable")
    {
        if(diffservactiontable == nullptr)
        {
            diffservactiontable = std::make_shared<DIFFSERVMIB::Diffservactiontable>();
        }
        return diffservactiontable;
    }

    if(child_yang_name == "diffServAlgDrop")
    {
        if(diffservalgdrop == nullptr)
        {
            diffservalgdrop = std::make_shared<DIFFSERVMIB::Diffservalgdrop>();
        }
        return diffservalgdrop;
    }

    if(child_yang_name == "diffServAlgDropTable")
    {
        if(diffservalgdroptable == nullptr)
        {
            diffservalgdroptable = std::make_shared<DIFFSERVMIB::Diffservalgdroptable>();
        }
        return diffservalgdroptable;
    }

    if(child_yang_name == "diffServClassifier")
    {
        if(diffservclassifier == nullptr)
        {
            diffservclassifier = std::make_shared<DIFFSERVMIB::Diffservclassifier>();
        }
        return diffservclassifier;
    }

    if(child_yang_name == "diffServClfrElementTable")
    {
        if(diffservclfrelementtable == nullptr)
        {
            diffservclfrelementtable = std::make_shared<DIFFSERVMIB::Diffservclfrelementtable>();
        }
        return diffservclfrelementtable;
    }

    if(child_yang_name == "diffServClfrTable")
    {
        if(diffservclfrtable == nullptr)
        {
            diffservclfrtable = std::make_shared<DIFFSERVMIB::Diffservclfrtable>();
        }
        return diffservclfrtable;
    }

    if(child_yang_name == "diffServCountActTable")
    {
        if(diffservcountacttable == nullptr)
        {
            diffservcountacttable = std::make_shared<DIFFSERVMIB::Diffservcountacttable>();
        }
        return diffservcountacttable;
    }

    if(child_yang_name == "diffServDataPathTable")
    {
        if(diffservdatapathtable == nullptr)
        {
            diffservdatapathtable = std::make_shared<DIFFSERVMIB::Diffservdatapathtable>();
        }
        return diffservdatapathtable;
    }

    if(child_yang_name == "diffServDscpMarkActTable")
    {
        if(diffservdscpmarkacttable == nullptr)
        {
            diffservdscpmarkacttable = std::make_shared<DIFFSERVMIB::Diffservdscpmarkacttable>();
        }
        return diffservdscpmarkacttable;
    }

    if(child_yang_name == "diffServMaxRateTable")
    {
        if(diffservmaxratetable == nullptr)
        {
            diffservmaxratetable = std::make_shared<DIFFSERVMIB::Diffservmaxratetable>();
        }
        return diffservmaxratetable;
    }

    if(child_yang_name == "diffServMeter")
    {
        if(diffservmeter == nullptr)
        {
            diffservmeter = std::make_shared<DIFFSERVMIB::Diffservmeter>();
        }
        return diffservmeter;
    }

    if(child_yang_name == "diffServMeterTable")
    {
        if(diffservmetertable == nullptr)
        {
            diffservmetertable = std::make_shared<DIFFSERVMIB::Diffservmetertable>();
        }
        return diffservmetertable;
    }

    if(child_yang_name == "diffServMinRateTable")
    {
        if(diffservminratetable == nullptr)
        {
            diffservminratetable = std::make_shared<DIFFSERVMIB::Diffservminratetable>();
        }
        return diffservminratetable;
    }

    if(child_yang_name == "diffServMultiFieldClfrTable")
    {
        if(diffservmultifieldclfrtable == nullptr)
        {
            diffservmultifieldclfrtable = std::make_shared<DIFFSERVMIB::Diffservmultifieldclfrtable>();
        }
        return diffservmultifieldclfrtable;
    }

    if(child_yang_name == "diffServQTable")
    {
        if(diffservqtable == nullptr)
        {
            diffservqtable = std::make_shared<DIFFSERVMIB::Diffservqtable>();
        }
        return diffservqtable;
    }

    if(child_yang_name == "diffServQueue")
    {
        if(diffservqueue == nullptr)
        {
            diffservqueue = std::make_shared<DIFFSERVMIB::Diffservqueue>();
        }
        return diffservqueue;
    }

    if(child_yang_name == "diffServRandomDropTable")
    {
        if(diffservrandomdroptable == nullptr)
        {
            diffservrandomdroptable = std::make_shared<DIFFSERVMIB::Diffservrandomdroptable>();
        }
        return diffservrandomdroptable;
    }

    if(child_yang_name == "diffServScheduler")
    {
        if(diffservscheduler == nullptr)
        {
            diffservscheduler = std::make_shared<DIFFSERVMIB::Diffservscheduler>();
        }
        return diffservscheduler;
    }

    if(child_yang_name == "diffServSchedulerTable")
    {
        if(diffservschedulertable == nullptr)
        {
            diffservschedulertable = std::make_shared<DIFFSERVMIB::Diffservschedulertable>();
        }
        return diffservschedulertable;
    }

    if(child_yang_name == "diffServTBParam")
    {
        if(diffservtbparam == nullptr)
        {
            diffservtbparam = std::make_shared<DIFFSERVMIB::Diffservtbparam>();
        }
        return diffservtbparam;
    }

    if(child_yang_name == "diffServTBParamTable")
    {
        if(diffservtbparamtable == nullptr)
        {
            diffservtbparamtable = std::make_shared<DIFFSERVMIB::Diffservtbparamtable>();
        }
        return diffservtbparamtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(diffservaction != nullptr)
    {
        children["diffServAction"] = diffservaction;
    }

    if(diffservactiontable != nullptr)
    {
        children["diffServActionTable"] = diffservactiontable;
    }

    if(diffservalgdrop != nullptr)
    {
        children["diffServAlgDrop"] = diffservalgdrop;
    }

    if(diffservalgdroptable != nullptr)
    {
        children["diffServAlgDropTable"] = diffservalgdroptable;
    }

    if(diffservclassifier != nullptr)
    {
        children["diffServClassifier"] = diffservclassifier;
    }

    if(diffservclfrelementtable != nullptr)
    {
        children["diffServClfrElementTable"] = diffservclfrelementtable;
    }

    if(diffservclfrtable != nullptr)
    {
        children["diffServClfrTable"] = diffservclfrtable;
    }

    if(diffservcountacttable != nullptr)
    {
        children["diffServCountActTable"] = diffservcountacttable;
    }

    if(diffservdatapathtable != nullptr)
    {
        children["diffServDataPathTable"] = diffservdatapathtable;
    }

    if(diffservdscpmarkacttable != nullptr)
    {
        children["diffServDscpMarkActTable"] = diffservdscpmarkacttable;
    }

    if(diffservmaxratetable != nullptr)
    {
        children["diffServMaxRateTable"] = diffservmaxratetable;
    }

    if(diffservmeter != nullptr)
    {
        children["diffServMeter"] = diffservmeter;
    }

    if(diffservmetertable != nullptr)
    {
        children["diffServMeterTable"] = diffservmetertable;
    }

    if(diffservminratetable != nullptr)
    {
        children["diffServMinRateTable"] = diffservminratetable;
    }

    if(diffservmultifieldclfrtable != nullptr)
    {
        children["diffServMultiFieldClfrTable"] = diffservmultifieldclfrtable;
    }

    if(diffservqtable != nullptr)
    {
        children["diffServQTable"] = diffservqtable;
    }

    if(diffservqueue != nullptr)
    {
        children["diffServQueue"] = diffservqueue;
    }

    if(diffservrandomdroptable != nullptr)
    {
        children["diffServRandomDropTable"] = diffservrandomdroptable;
    }

    if(diffservscheduler != nullptr)
    {
        children["diffServScheduler"] = diffservscheduler;
    }

    if(diffservschedulertable != nullptr)
    {
        children["diffServSchedulerTable"] = diffservschedulertable;
    }

    if(diffservtbparam != nullptr)
    {
        children["diffServTBParam"] = diffservtbparam;
    }

    if(diffservtbparamtable != nullptr)
    {
        children["diffServTBParamTable"] = diffservtbparamtable;
    }

    return children;
}

void DIFFSERVMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DIFFSERVMIB::clone_ptr() const
{
    return std::make_shared<DIFFSERVMIB>();
}

std::string DIFFSERVMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DIFFSERVMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DIFFSERVMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DIFFSERVMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DIFFSERVMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAction" || name == "diffServActionTable" || name == "diffServAlgDrop" || name == "diffServAlgDropTable" || name == "diffServClassifier" || name == "diffServClfrElementTable" || name == "diffServClfrTable" || name == "diffServCountActTable" || name == "diffServDataPathTable" || name == "diffServDscpMarkActTable" || name == "diffServMaxRateTable" || name == "diffServMeter" || name == "diffServMeterTable" || name == "diffServMinRateTable" || name == "diffServMultiFieldClfrTable" || name == "diffServQTable" || name == "diffServQueue" || name == "diffServRandomDropTable" || name == "diffServScheduler" || name == "diffServSchedulerTable" || name == "diffServTBParam" || name == "diffServTBParamTable")
        return true;
    return false;
}

DIFFSERVMIB::Diffservaction::Diffservaction()
    :
    diffservactionnextfree{YType::uint32, "diffServActionNextFree"},
    diffservcountactnextfree{YType::uint32, "diffServCountActNextFree"}
{

    yang_name = "diffServAction"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservaction::~Diffservaction()
{
}

bool DIFFSERVMIB::Diffservaction::has_data() const
{
    return diffservactionnextfree.is_set
	|| diffservcountactnextfree.is_set;
}

bool DIFFSERVMIB::Diffservaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservactionnextfree.yfilter)
	|| ydk::is_set(diffservcountactnextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservaction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionnextfree.is_set || is_set(diffservactionnextfree.yfilter)) leaf_name_data.push_back(diffservactionnextfree.get_name_leafdata());
    if (diffservcountactnextfree.is_set || is_set(diffservcountactnextfree.yfilter)) leaf_name_data.push_back(diffservcountactnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServActionNextFree")
    {
        diffservactionnextfree = value;
        diffservactionnextfree.value_namespace = name_space;
        diffservactionnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActNextFree")
    {
        diffservcountactnextfree = value;
        diffservcountactnextfree.value_namespace = name_space;
        diffservcountactnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServActionNextFree")
    {
        diffservactionnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServCountActNextFree")
    {
        diffservcountactnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionNextFree" || name == "diffServCountActNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservactiontable::Diffservactiontable()
{

    yang_name = "diffServActionTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservactiontable::~Diffservactiontable()
{
}

bool DIFFSERVMIB::Diffservactiontable::has_data() const
{
    for (std::size_t index=0; index<diffservactionentry.size(); index++)
    {
        if(diffservactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservactiontable::has_operation() const
{
    for (std::size_t index=0; index<diffservactionentry.size(); index++)
    {
        if(diffservactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservactiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservactiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServActionEntry")
    {
        for(auto const & c : diffservactionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservactiontable::Diffservactionentry>();
        c->parent = this;
        diffservactionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservactionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservactiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservactiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservactiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservactiontable::Diffservactionentry::Diffservactionentry()
    :
    diffservactionid{YType::uint32, "diffServActionId"},
    diffservactioninterface{YType::int32, "diffServActionInterface"},
    diffservactionnext{YType::str, "diffServActionNext"},
    diffservactionspecific{YType::str, "diffServActionSpecific"},
    diffservactionstatus{YType::enumeration, "diffServActionStatus"},
    diffservactionstorage{YType::enumeration, "diffServActionStorage"}
{

    yang_name = "diffServActionEntry"; yang_parent_name = "diffServActionTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservactiontable::Diffservactionentry::~Diffservactionentry()
{
}

bool DIFFSERVMIB::Diffservactiontable::Diffservactionentry::has_data() const
{
    return diffservactionid.is_set
	|| diffservactioninterface.is_set
	|| diffservactionnext.is_set
	|| diffservactionspecific.is_set
	|| diffservactionstatus.is_set
	|| diffservactionstorage.is_set;
}

bool DIFFSERVMIB::Diffservactiontable::Diffservactionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservactionid.yfilter)
	|| ydk::is_set(diffservactioninterface.yfilter)
	|| ydk::is_set(diffservactionnext.yfilter)
	|| ydk::is_set(diffservactionspecific.yfilter)
	|| ydk::is_set(diffservactionstatus.yfilter)
	|| ydk::is_set(diffservactionstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservactiontable::Diffservactionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservactiontable::Diffservactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionEntry" <<"[diffServActionId='" <<diffservactionid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservactiontable::Diffservactionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionid.is_set || is_set(diffservactionid.yfilter)) leaf_name_data.push_back(diffservactionid.get_name_leafdata());
    if (diffservactioninterface.is_set || is_set(diffservactioninterface.yfilter)) leaf_name_data.push_back(diffservactioninterface.get_name_leafdata());
    if (diffservactionnext.is_set || is_set(diffservactionnext.yfilter)) leaf_name_data.push_back(diffservactionnext.get_name_leafdata());
    if (diffservactionspecific.is_set || is_set(diffservactionspecific.yfilter)) leaf_name_data.push_back(diffservactionspecific.get_name_leafdata());
    if (diffservactionstatus.is_set || is_set(diffservactionstatus.yfilter)) leaf_name_data.push_back(diffservactionstatus.get_name_leafdata());
    if (diffservactionstorage.is_set || is_set(diffservactionstorage.yfilter)) leaf_name_data.push_back(diffservactionstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservactiontable::Diffservactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservactiontable::Diffservactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservactiontable::Diffservactionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServActionId")
    {
        diffservactionid = value;
        diffservactionid.value_namespace = name_space;
        diffservactionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionInterface")
    {
        diffservactioninterface = value;
        diffservactioninterface.value_namespace = name_space;
        diffservactioninterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionNext")
    {
        diffservactionnext = value;
        diffservactionnext.value_namespace = name_space;
        diffservactionnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionSpecific")
    {
        diffservactionspecific = value;
        diffservactionspecific.value_namespace = name_space;
        diffservactionspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionStatus")
    {
        diffservactionstatus = value;
        diffservactionstatus.value_namespace = name_space;
        diffservactionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionStorage")
    {
        diffservactionstorage = value;
        diffservactionstorage.value_namespace = name_space;
        diffservactionstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservactiontable::Diffservactionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServActionId")
    {
        diffservactionid.yfilter = yfilter;
    }
    if(value_path == "diffServActionInterface")
    {
        diffservactioninterface.yfilter = yfilter;
    }
    if(value_path == "diffServActionNext")
    {
        diffservactionnext.yfilter = yfilter;
    }
    if(value_path == "diffServActionSpecific")
    {
        diffservactionspecific.yfilter = yfilter;
    }
    if(value_path == "diffServActionStatus")
    {
        diffservactionstatus.yfilter = yfilter;
    }
    if(value_path == "diffServActionStorage")
    {
        diffservactionstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservactiontable::Diffservactionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionId" || name == "diffServActionInterface" || name == "diffServActionNext" || name == "diffServActionSpecific" || name == "diffServActionStatus" || name == "diffServActionStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservalgdrop::Diffservalgdrop()
    :
    diffservalgdropnextfree{YType::uint32, "diffServAlgDropNextFree"},
    diffservrandomdropnextfree{YType::uint32, "diffServRandomDropNextFree"}
{

    yang_name = "diffServAlgDrop"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservalgdrop::~Diffservalgdrop()
{
}

bool DIFFSERVMIB::Diffservalgdrop::has_data() const
{
    return diffservalgdropnextfree.is_set
	|| diffservrandomdropnextfree.is_set;
}

bool DIFFSERVMIB::Diffservalgdrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservalgdropnextfree.yfilter)
	|| ydk::is_set(diffservrandomdropnextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservalgdrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservalgdrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDrop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservalgdrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropnextfree.is_set || is_set(diffservalgdropnextfree.yfilter)) leaf_name_data.push_back(diffservalgdropnextfree.get_name_leafdata());
    if (diffservrandomdropnextfree.is_set || is_set(diffservrandomdropnextfree.yfilter)) leaf_name_data.push_back(diffservrandomdropnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservalgdrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservalgdrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservalgdrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServAlgDropNextFree")
    {
        diffservalgdropnextfree = value;
        diffservalgdropnextfree.value_namespace = name_space;
        diffservalgdropnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropNextFree")
    {
        diffservrandomdropnextfree = value;
        diffservrandomdropnextfree.value_namespace = name_space;
        diffservrandomdropnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservalgdrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServAlgDropNextFree")
    {
        diffservalgdropnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropNextFree")
    {
        diffservrandomdropnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservalgdrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropNextFree" || name == "diffServRandomDropNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservalgdroptable::Diffservalgdroptable()
{

    yang_name = "diffServAlgDropTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservalgdroptable::~Diffservalgdroptable()
{
}

bool DIFFSERVMIB::Diffservalgdroptable::has_data() const
{
    for (std::size_t index=0; index<diffservalgdropentry.size(); index++)
    {
        if(diffservalgdropentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservalgdroptable::has_operation() const
{
    for (std::size_t index=0; index<diffservalgdropentry.size(); index++)
    {
        if(diffservalgdropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservalgdroptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservalgdroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservalgdroptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservalgdroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServAlgDropEntry")
    {
        for(auto const & c : diffservalgdropentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry>();
        c->parent = this;
        diffservalgdropentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservalgdroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservalgdropentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservalgdroptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservalgdroptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservalgdroptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdropentry()
    :
    diffservalgdropid{YType::uint32, "diffServAlgDropId"},
    diffservalgdropnext{YType::str, "diffServAlgDropNext"},
    diffservalgdropoctets{YType::uint64, "diffServAlgDropOctets"},
    diffservalgdroppkts{YType::uint64, "diffServAlgDropPkts"},
    diffservalgdropqmeasure{YType::str, "diffServAlgDropQMeasure"},
    diffservalgdropqthreshold{YType::uint32, "diffServAlgDropQThreshold"},
    diffservalgdropspecific{YType::str, "diffServAlgDropSpecific"},
    diffservalgdropstatus{YType::enumeration, "diffServAlgDropStatus"},
    diffservalgdropstorage{YType::enumeration, "diffServAlgDropStorage"},
    diffservalgdroptype{YType::enumeration, "diffServAlgDropType"},
    diffservalgrandomdropoctets{YType::uint64, "diffServAlgRandomDropOctets"},
    diffservalgrandomdroppkts{YType::uint64, "diffServAlgRandomDropPkts"}
{

    yang_name = "diffServAlgDropEntry"; yang_parent_name = "diffServAlgDropTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::~Diffservalgdropentry()
{
}

bool DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::has_data() const
{
    return diffservalgdropid.is_set
	|| diffservalgdropnext.is_set
	|| diffservalgdropoctets.is_set
	|| diffservalgdroppkts.is_set
	|| diffservalgdropqmeasure.is_set
	|| diffservalgdropqthreshold.is_set
	|| diffservalgdropspecific.is_set
	|| diffservalgdropstatus.is_set
	|| diffservalgdropstorage.is_set
	|| diffservalgdroptype.is_set
	|| diffservalgrandomdropoctets.is_set
	|| diffservalgrandomdroppkts.is_set;
}

bool DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservalgdropid.yfilter)
	|| ydk::is_set(diffservalgdropnext.yfilter)
	|| ydk::is_set(diffservalgdropoctets.yfilter)
	|| ydk::is_set(diffservalgdroppkts.yfilter)
	|| ydk::is_set(diffservalgdropqmeasure.yfilter)
	|| ydk::is_set(diffservalgdropqthreshold.yfilter)
	|| ydk::is_set(diffservalgdropspecific.yfilter)
	|| ydk::is_set(diffservalgdropstatus.yfilter)
	|| ydk::is_set(diffservalgdropstorage.yfilter)
	|| ydk::is_set(diffservalgdroptype.yfilter)
	|| ydk::is_set(diffservalgrandomdropoctets.yfilter)
	|| ydk::is_set(diffservalgrandomdroppkts.yfilter);
}

std::string DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServAlgDropTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropEntry" <<"[diffServAlgDropId='" <<diffservalgdropid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropid.is_set || is_set(diffservalgdropid.yfilter)) leaf_name_data.push_back(diffservalgdropid.get_name_leafdata());
    if (diffservalgdropnext.is_set || is_set(diffservalgdropnext.yfilter)) leaf_name_data.push_back(diffservalgdropnext.get_name_leafdata());
    if (diffservalgdropoctets.is_set || is_set(diffservalgdropoctets.yfilter)) leaf_name_data.push_back(diffservalgdropoctets.get_name_leafdata());
    if (diffservalgdroppkts.is_set || is_set(diffservalgdroppkts.yfilter)) leaf_name_data.push_back(diffservalgdroppkts.get_name_leafdata());
    if (diffservalgdropqmeasure.is_set || is_set(diffservalgdropqmeasure.yfilter)) leaf_name_data.push_back(diffservalgdropqmeasure.get_name_leafdata());
    if (diffservalgdropqthreshold.is_set || is_set(diffservalgdropqthreshold.yfilter)) leaf_name_data.push_back(diffservalgdropqthreshold.get_name_leafdata());
    if (diffservalgdropspecific.is_set || is_set(diffservalgdropspecific.yfilter)) leaf_name_data.push_back(diffservalgdropspecific.get_name_leafdata());
    if (diffservalgdropstatus.is_set || is_set(diffservalgdropstatus.yfilter)) leaf_name_data.push_back(diffservalgdropstatus.get_name_leafdata());
    if (diffservalgdropstorage.is_set || is_set(diffservalgdropstorage.yfilter)) leaf_name_data.push_back(diffservalgdropstorage.get_name_leafdata());
    if (diffservalgdroptype.is_set || is_set(diffservalgdroptype.yfilter)) leaf_name_data.push_back(diffservalgdroptype.get_name_leafdata());
    if (diffservalgrandomdropoctets.is_set || is_set(diffservalgrandomdropoctets.yfilter)) leaf_name_data.push_back(diffservalgrandomdropoctets.get_name_leafdata());
    if (diffservalgrandomdroppkts.is_set || is_set(diffservalgrandomdroppkts.yfilter)) leaf_name_data.push_back(diffservalgrandomdroppkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServAlgDropId")
    {
        diffservalgdropid = value;
        diffservalgdropid.value_namespace = name_space;
        diffservalgdropid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropNext")
    {
        diffservalgdropnext = value;
        diffservalgdropnext.value_namespace = name_space;
        diffservalgdropnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropOctets")
    {
        diffservalgdropoctets = value;
        diffservalgdropoctets.value_namespace = name_space;
        diffservalgdropoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropPkts")
    {
        diffservalgdroppkts = value;
        diffservalgdroppkts.value_namespace = name_space;
        diffservalgdroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropQMeasure")
    {
        diffservalgdropqmeasure = value;
        diffservalgdropqmeasure.value_namespace = name_space;
        diffservalgdropqmeasure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropQThreshold")
    {
        diffservalgdropqthreshold = value;
        diffservalgdropqthreshold.value_namespace = name_space;
        diffservalgdropqthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropSpecific")
    {
        diffservalgdropspecific = value;
        diffservalgdropspecific.value_namespace = name_space;
        diffservalgdropspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropStatus")
    {
        diffservalgdropstatus = value;
        diffservalgdropstatus.value_namespace = name_space;
        diffservalgdropstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropStorage")
    {
        diffservalgdropstorage = value;
        diffservalgdropstorage.value_namespace = name_space;
        diffservalgdropstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropType")
    {
        diffservalgdroptype = value;
        diffservalgdroptype.value_namespace = name_space;
        diffservalgdroptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgRandomDropOctets")
    {
        diffservalgrandomdropoctets = value;
        diffservalgrandomdropoctets.value_namespace = name_space;
        diffservalgrandomdropoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgRandomDropPkts")
    {
        diffservalgrandomdroppkts = value;
        diffservalgrandomdroppkts.value_namespace = name_space;
        diffservalgrandomdroppkts.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServAlgDropId")
    {
        diffservalgdropid.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropNext")
    {
        diffservalgdropnext.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropOctets")
    {
        diffservalgdropoctets.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropPkts")
    {
        diffservalgdroppkts.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropQMeasure")
    {
        diffservalgdropqmeasure.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropQThreshold")
    {
        diffservalgdropqthreshold.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropSpecific")
    {
        diffservalgdropspecific.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropStatus")
    {
        diffservalgdropstatus.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropStorage")
    {
        diffservalgdropstorage.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropType")
    {
        diffservalgdroptype.yfilter = yfilter;
    }
    if(value_path == "diffServAlgRandomDropOctets")
    {
        diffservalgrandomdropoctets.yfilter = yfilter;
    }
    if(value_path == "diffServAlgRandomDropPkts")
    {
        diffservalgrandomdroppkts.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropId" || name == "diffServAlgDropNext" || name == "diffServAlgDropOctets" || name == "diffServAlgDropPkts" || name == "diffServAlgDropQMeasure" || name == "diffServAlgDropQThreshold" || name == "diffServAlgDropSpecific" || name == "diffServAlgDropStatus" || name == "diffServAlgDropStorage" || name == "diffServAlgDropType" || name == "diffServAlgRandomDropOctets" || name == "diffServAlgRandomDropPkts")
        return true;
    return false;
}

DIFFSERVMIB::Diffservclassifier::Diffservclassifier()
    :
    diffservclfrelementnextfree{YType::uint32, "diffServClfrElementNextFree"},
    diffservclfrnextfree{YType::uint32, "diffServClfrNextFree"},
    diffservmultifieldclfrnextfree{YType::uint32, "diffServMultiFieldClfrNextFree"}
{

    yang_name = "diffServClassifier"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservclassifier::~Diffservclassifier()
{
}

bool DIFFSERVMIB::Diffservclassifier::has_data() const
{
    return diffservclfrelementnextfree.is_set
	|| diffservclfrnextfree.is_set
	|| diffservmultifieldclfrnextfree.is_set;
}

bool DIFFSERVMIB::Diffservclassifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrelementnextfree.yfilter)
	|| ydk::is_set(diffservclfrnextfree.yfilter)
	|| ydk::is_set(diffservmultifieldclfrnextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservclassifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservclassifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClassifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservclassifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrelementnextfree.is_set || is_set(diffservclfrelementnextfree.yfilter)) leaf_name_data.push_back(diffservclfrelementnextfree.get_name_leafdata());
    if (diffservclfrnextfree.is_set || is_set(diffservclfrnextfree.yfilter)) leaf_name_data.push_back(diffservclfrnextfree.get_name_leafdata());
    if (diffservmultifieldclfrnextfree.is_set || is_set(diffservmultifieldclfrnextfree.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservclassifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservclassifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservclassifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServClfrElementNextFree")
    {
        diffservclfrelementnextfree = value;
        diffservclfrelementnextfree.value_namespace = name_space;
        diffservclfrelementnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrNextFree")
    {
        diffservclfrnextfree = value;
        diffservclfrnextfree.value_namespace = name_space;
        diffservclfrnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrNextFree")
    {
        diffservmultifieldclfrnextfree = value;
        diffservmultifieldclfrnextfree.value_namespace = name_space;
        diffservmultifieldclfrnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservclassifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrElementNextFree")
    {
        diffservclfrelementnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServClfrNextFree")
    {
        diffservclfrnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrNextFree")
    {
        diffservmultifieldclfrnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservclassifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrElementNextFree" || name == "diffServClfrNextFree" || name == "diffServMultiFieldClfrNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelementtable()
{

    yang_name = "diffServClfrElementTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservclfrelementtable::~Diffservclfrelementtable()
{
}

bool DIFFSERVMIB::Diffservclfrelementtable::has_data() const
{
    for (std::size_t index=0; index<diffservclfrelemententry.size(); index++)
    {
        if(diffservclfrelemententry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservclfrelementtable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrelemententry.size(); index++)
    {
        if(diffservclfrelemententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservclfrelementtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservclfrelementtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservclfrelementtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservclfrelementtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrElementEntry")
    {
        for(auto const & c : diffservclfrelemententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry>();
        c->parent = this;
        diffservclfrelemententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservclfrelementtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservclfrelemententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservclfrelementtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservclfrelementtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservclfrelementtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrElementEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::Diffservclfrelemententry()
    :
    diffservclfrid{YType::str, "diffServClfrId"},
    diffservclfrelementid{YType::uint32, "diffServClfrElementId"},
    diffservclfrelementnext{YType::str, "diffServClfrElementNext"},
    diffservclfrelementprecedence{YType::uint32, "diffServClfrElementPrecedence"},
    diffservclfrelementspecific{YType::str, "diffServClfrElementSpecific"},
    diffservclfrelementstatus{YType::enumeration, "diffServClfrElementStatus"},
    diffservclfrelementstorage{YType::enumeration, "diffServClfrElementStorage"}
{

    yang_name = "diffServClfrElementEntry"; yang_parent_name = "diffServClfrElementTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::~Diffservclfrelemententry()
{
}

bool DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::has_data() const
{
    return diffservclfrid.is_set
	|| diffservclfrelementid.is_set
	|| diffservclfrelementnext.is_set
	|| diffservclfrelementprecedence.is_set
	|| diffservclfrelementspecific.is_set
	|| diffservclfrelementstatus.is_set
	|| diffservclfrelementstorage.is_set;
}

bool DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrid.yfilter)
	|| ydk::is_set(diffservclfrelementid.yfilter)
	|| ydk::is_set(diffservclfrelementnext.yfilter)
	|| ydk::is_set(diffservclfrelementprecedence.yfilter)
	|| ydk::is_set(diffservclfrelementspecific.yfilter)
	|| ydk::is_set(diffservclfrelementstatus.yfilter)
	|| ydk::is_set(diffservclfrelementstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrElementTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementEntry" <<"[diffServClfrId='" <<diffservclfrid <<"']" <<"[diffServClfrElementId='" <<diffservclfrelementid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.yfilter)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrelementid.is_set || is_set(diffservclfrelementid.yfilter)) leaf_name_data.push_back(diffservclfrelementid.get_name_leafdata());
    if (diffservclfrelementnext.is_set || is_set(diffservclfrelementnext.yfilter)) leaf_name_data.push_back(diffservclfrelementnext.get_name_leafdata());
    if (diffservclfrelementprecedence.is_set || is_set(diffservclfrelementprecedence.yfilter)) leaf_name_data.push_back(diffservclfrelementprecedence.get_name_leafdata());
    if (diffservclfrelementspecific.is_set || is_set(diffservclfrelementspecific.yfilter)) leaf_name_data.push_back(diffservclfrelementspecific.get_name_leafdata());
    if (diffservclfrelementstatus.is_set || is_set(diffservclfrelementstatus.yfilter)) leaf_name_data.push_back(diffservclfrelementstatus.get_name_leafdata());
    if (diffservclfrelementstorage.is_set || is_set(diffservclfrelementstorage.yfilter)) leaf_name_data.push_back(diffservclfrelementstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid = value;
        diffservclfrid.value_namespace = name_space;
        diffservclfrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementId")
    {
        diffservclfrelementid = value;
        diffservclfrelementid.value_namespace = name_space;
        diffservclfrelementid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementNext")
    {
        diffservclfrelementnext = value;
        diffservclfrelementnext.value_namespace = name_space;
        diffservclfrelementnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementPrecedence")
    {
        diffservclfrelementprecedence = value;
        diffservclfrelementprecedence.value_namespace = name_space;
        diffservclfrelementprecedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementSpecific")
    {
        diffservclfrelementspecific = value;
        diffservclfrelementspecific.value_namespace = name_space;
        diffservclfrelementspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementStatus")
    {
        diffservclfrelementstatus = value;
        diffservclfrelementstatus.value_namespace = name_space;
        diffservclfrelementstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementStorage")
    {
        diffservclfrelementstorage = value;
        diffservclfrelementstorage.value_namespace = name_space;
        diffservclfrelementstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementId")
    {
        diffservclfrelementid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementNext")
    {
        diffservclfrelementnext.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementPrecedence")
    {
        diffservclfrelementprecedence.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementSpecific")
    {
        diffservclfrelementspecific.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementStatus")
    {
        diffservclfrelementstatus.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementStorage")
    {
        diffservclfrelementstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrId" || name == "diffServClfrElementId" || name == "diffServClfrElementNext" || name == "diffServClfrElementPrecedence" || name == "diffServClfrElementSpecific" || name == "diffServClfrElementStatus" || name == "diffServClfrElementStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservclfrtable::Diffservclfrtable()
{

    yang_name = "diffServClfrTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservclfrtable::~Diffservclfrtable()
{
}

bool DIFFSERVMIB::Diffservclfrtable::has_data() const
{
    for (std::size_t index=0; index<diffservclfrentry.size(); index++)
    {
        if(diffservclfrentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservclfrtable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrentry.size(); index++)
    {
        if(diffservclfrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservclfrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservclfrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservclfrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservclfrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrEntry")
    {
        for(auto const & c : diffservclfrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry>();
        c->parent = this;
        diffservclfrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservclfrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservclfrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservclfrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservclfrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservclfrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::Diffservclfrentry()
    :
    diffservclfrid{YType::uint32, "diffServClfrId"},
    diffservclfrstatus{YType::enumeration, "diffServClfrStatus"},
    diffservclfrstorage{YType::enumeration, "diffServClfrStorage"}
{

    yang_name = "diffServClfrEntry"; yang_parent_name = "diffServClfrTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::~Diffservclfrentry()
{
}

bool DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::has_data() const
{
    return diffservclfrid.is_set
	|| diffservclfrstatus.is_set
	|| diffservclfrstorage.is_set;
}

bool DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrid.yfilter)
	|| ydk::is_set(diffservclfrstatus.yfilter)
	|| ydk::is_set(diffservclfrstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrEntry" <<"[diffServClfrId='" <<diffservclfrid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.yfilter)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrstatus.is_set || is_set(diffservclfrstatus.yfilter)) leaf_name_data.push_back(diffservclfrstatus.get_name_leafdata());
    if (diffservclfrstorage.is_set || is_set(diffservclfrstorage.yfilter)) leaf_name_data.push_back(diffservclfrstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid = value;
        diffservclfrid.value_namespace = name_space;
        diffservclfrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrStatus")
    {
        diffservclfrstatus = value;
        diffservclfrstatus.value_namespace = name_space;
        diffservclfrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrStorage")
    {
        diffservclfrstorage = value;
        diffservclfrstorage.value_namespace = name_space;
        diffservclfrstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrStatus")
    {
        diffservclfrstatus.yfilter = yfilter;
    }
    if(value_path == "diffServClfrStorage")
    {
        diffservclfrstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrId" || name == "diffServClfrStatus" || name == "diffServClfrStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservcountacttable::Diffservcountacttable()
{

    yang_name = "diffServCountActTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservcountacttable::~Diffservcountacttable()
{
}

bool DIFFSERVMIB::Diffservcountacttable::has_data() const
{
    for (std::size_t index=0; index<diffservcountactentry.size(); index++)
    {
        if(diffservcountactentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservcountacttable::has_operation() const
{
    for (std::size_t index=0; index<diffservcountactentry.size(); index++)
    {
        if(diffservcountactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservcountacttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservcountacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservcountacttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservcountacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServCountActEntry")
    {
        for(auto const & c : diffservcountactentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry>();
        c->parent = this;
        diffservcountactentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservcountacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservcountactentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservcountacttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservcountacttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservcountacttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServCountActEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::Diffservcountactentry()
    :
    diffservcountactid{YType::uint32, "diffServCountActId"},
    diffservcountactoctets{YType::uint64, "diffServCountActOctets"},
    diffservcountactpkts{YType::uint64, "diffServCountActPkts"},
    diffservcountactstatus{YType::enumeration, "diffServCountActStatus"},
    diffservcountactstorage{YType::enumeration, "diffServCountActStorage"}
{

    yang_name = "diffServCountActEntry"; yang_parent_name = "diffServCountActTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::~Diffservcountactentry()
{
}

bool DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::has_data() const
{
    return diffservcountactid.is_set
	|| diffservcountactoctets.is_set
	|| diffservcountactpkts.is_set
	|| diffservcountactstatus.is_set
	|| diffservcountactstorage.is_set;
}

bool DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservcountactid.yfilter)
	|| ydk::is_set(diffservcountactoctets.yfilter)
	|| ydk::is_set(diffservcountactpkts.yfilter)
	|| ydk::is_set(diffservcountactstatus.yfilter)
	|| ydk::is_set(diffservcountactstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServCountActTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActEntry" <<"[diffServCountActId='" <<diffservcountactid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservcountactid.is_set || is_set(diffservcountactid.yfilter)) leaf_name_data.push_back(diffservcountactid.get_name_leafdata());
    if (diffservcountactoctets.is_set || is_set(diffservcountactoctets.yfilter)) leaf_name_data.push_back(diffservcountactoctets.get_name_leafdata());
    if (diffservcountactpkts.is_set || is_set(diffservcountactpkts.yfilter)) leaf_name_data.push_back(diffservcountactpkts.get_name_leafdata());
    if (diffservcountactstatus.is_set || is_set(diffservcountactstatus.yfilter)) leaf_name_data.push_back(diffservcountactstatus.get_name_leafdata());
    if (diffservcountactstorage.is_set || is_set(diffservcountactstorage.yfilter)) leaf_name_data.push_back(diffservcountactstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServCountActId")
    {
        diffservcountactid = value;
        diffservcountactid.value_namespace = name_space;
        diffservcountactid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActOctets")
    {
        diffservcountactoctets = value;
        diffservcountactoctets.value_namespace = name_space;
        diffservcountactoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActPkts")
    {
        diffservcountactpkts = value;
        diffservcountactpkts.value_namespace = name_space;
        diffservcountactpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActStatus")
    {
        diffservcountactstatus = value;
        diffservcountactstatus.value_namespace = name_space;
        diffservcountactstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActStorage")
    {
        diffservcountactstorage = value;
        diffservcountactstorage.value_namespace = name_space;
        diffservcountactstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServCountActId")
    {
        diffservcountactid.yfilter = yfilter;
    }
    if(value_path == "diffServCountActOctets")
    {
        diffservcountactoctets.yfilter = yfilter;
    }
    if(value_path == "diffServCountActPkts")
    {
        diffservcountactpkts.yfilter = yfilter;
    }
    if(value_path == "diffServCountActStatus")
    {
        diffservcountactstatus.yfilter = yfilter;
    }
    if(value_path == "diffServCountActStorage")
    {
        diffservcountactstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServCountActId" || name == "diffServCountActOctets" || name == "diffServCountActPkts" || name == "diffServCountActStatus" || name == "diffServCountActStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathtable()
{

    yang_name = "diffServDataPathTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservdatapathtable::~Diffservdatapathtable()
{
}

bool DIFFSERVMIB::Diffservdatapathtable::has_data() const
{
    for (std::size_t index=0; index<diffservdatapathentry.size(); index++)
    {
        if(diffservdatapathentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservdatapathtable::has_operation() const
{
    for (std::size_t index=0; index<diffservdatapathentry.size(); index++)
    {
        if(diffservdatapathentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservdatapathtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservdatapathtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservdatapathtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservdatapathtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDataPathEntry")
    {
        for(auto const & c : diffservdatapathentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry>();
        c->parent = this;
        diffservdatapathentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservdatapathtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservdatapathentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservdatapathtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservdatapathtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservdatapathtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDataPathEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::Diffservdatapathentry()
    :
    ifindex{YType::str, "ifIndex"},
    diffservdatapathifdirection{YType::enumeration, "diffServDataPathIfDirection"},
    diffservdatapathstart{YType::str, "diffServDataPathStart"},
    diffservdatapathstatus{YType::enumeration, "diffServDataPathStatus"},
    diffservdatapathstorage{YType::enumeration, "diffServDataPathStorage"}
{

    yang_name = "diffServDataPathEntry"; yang_parent_name = "diffServDataPathTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::~Diffservdatapathentry()
{
}

bool DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::has_data() const
{
    return ifindex.is_set
	|| diffservdatapathifdirection.is_set
	|| diffservdatapathstart.is_set
	|| diffservdatapathstatus.is_set
	|| diffservdatapathstorage.is_set;
}

bool DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(diffservdatapathifdirection.yfilter)
	|| ydk::is_set(diffservdatapathstart.yfilter)
	|| ydk::is_set(diffservdatapathstatus.yfilter)
	|| ydk::is_set(diffservdatapathstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDataPathTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[diffServDataPathIfDirection='" <<diffservdatapathifdirection <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (diffservdatapathifdirection.is_set || is_set(diffservdatapathifdirection.yfilter)) leaf_name_data.push_back(diffservdatapathifdirection.get_name_leafdata());
    if (diffservdatapathstart.is_set || is_set(diffservdatapathstart.yfilter)) leaf_name_data.push_back(diffservdatapathstart.get_name_leafdata());
    if (diffservdatapathstatus.is_set || is_set(diffservdatapathstatus.yfilter)) leaf_name_data.push_back(diffservdatapathstatus.get_name_leafdata());
    if (diffservdatapathstorage.is_set || is_set(diffservdatapathstorage.yfilter)) leaf_name_data.push_back(diffservdatapathstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServDataPathIfDirection")
    {
        diffservdatapathifdirection = value;
        diffservdatapathifdirection.value_namespace = name_space;
        diffservdatapathifdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServDataPathStart")
    {
        diffservdatapathstart = value;
        diffservdatapathstart.value_namespace = name_space;
        diffservdatapathstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServDataPathStatus")
    {
        diffservdatapathstatus = value;
        diffservdatapathstatus.value_namespace = name_space;
        diffservdatapathstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServDataPathStorage")
    {
        diffservdatapathstorage = value;
        diffservdatapathstorage.value_namespace = name_space;
        diffservdatapathstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "diffServDataPathIfDirection")
    {
        diffservdatapathifdirection.yfilter = yfilter;
    }
    if(value_path == "diffServDataPathStart")
    {
        diffservdatapathstart.yfilter = yfilter;
    }
    if(value_path == "diffServDataPathStatus")
    {
        diffservdatapathstatus.yfilter = yfilter;
    }
    if(value_path == "diffServDataPathStorage")
    {
        diffservdatapathstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "diffServDataPathIfDirection" || name == "diffServDataPathStart" || name == "diffServDataPathStatus" || name == "diffServDataPathStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkacttable()
{

    yang_name = "diffServDscpMarkActTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservdscpmarkacttable::~Diffservdscpmarkacttable()
{
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::has_data() const
{
    for (std::size_t index=0; index<diffservdscpmarkactentry.size(); index++)
    {
        if(diffservdscpmarkactentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::has_operation() const
{
    for (std::size_t index=0; index<diffservdscpmarkactentry.size(); index++)
    {
        if(diffservdscpmarkactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservdscpmarkacttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservdscpmarkacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservdscpmarkacttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservdscpmarkacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDscpMarkActEntry")
    {
        for(auto const & c : diffservdscpmarkactentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry>();
        c->parent = this;
        diffservdscpmarkactentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservdscpmarkacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservdscpmarkactentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservdscpmarkacttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservdscpmarkacttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDscpMarkActEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::Diffservdscpmarkactentry()
    :
    diffservdscpmarkactdscp{YType::uint8, "diffServDscpMarkActDscp"}
{

    yang_name = "diffServDscpMarkActEntry"; yang_parent_name = "diffServDscpMarkActTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::~Diffservdscpmarkactentry()
{
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::has_data() const
{
    return diffservdscpmarkactdscp.is_set;
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservdscpmarkactdscp.yfilter);
}

std::string DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDscpMarkActTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActEntry" <<"[diffServDscpMarkActDscp='" <<diffservdscpmarkactdscp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservdscpmarkactdscp.is_set || is_set(diffservdscpmarkactdscp.yfilter)) leaf_name_data.push_back(diffservdscpmarkactdscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServDscpMarkActDscp")
    {
        diffservdscpmarkactdscp = value;
        diffservdscpmarkactdscp.value_namespace = name_space;
        diffservdscpmarkactdscp.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServDscpMarkActDscp")
    {
        diffservdscpmarkactdscp.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDscpMarkActDscp")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmaxratetable::Diffservmaxratetable()
{

    yang_name = "diffServMaxRateTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmaxratetable::~Diffservmaxratetable()
{
}

bool DIFFSERVMIB::Diffservmaxratetable::has_data() const
{
    for (std::size_t index=0; index<diffservmaxrateentry.size(); index++)
    {
        if(diffservmaxrateentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservmaxratetable::has_operation() const
{
    for (std::size_t index=0; index<diffservmaxrateentry.size(); index++)
    {
        if(diffservmaxrateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservmaxratetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmaxratetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmaxratetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmaxratetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMaxRateEntry")
    {
        for(auto const & c : diffservmaxrateentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry>();
        c->parent = this;
        diffservmaxrateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmaxratetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmaxrateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservmaxratetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservmaxratetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservmaxratetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMaxRateEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::Diffservmaxrateentry()
    :
    diffservmaxrateid{YType::uint32, "diffServMaxRateId"},
    diffservmaxratelevel{YType::uint32, "diffServMaxRateLevel"},
    diffservmaxrateabsolute{YType::uint32, "diffServMaxRateAbsolute"},
    diffservmaxraterelative{YType::uint32, "diffServMaxRateRelative"},
    diffservmaxratestatus{YType::enumeration, "diffServMaxRateStatus"},
    diffservmaxratestorage{YType::enumeration, "diffServMaxRateStorage"},
    diffservmaxratethreshold{YType::int32, "diffServMaxRateThreshold"}
{

    yang_name = "diffServMaxRateEntry"; yang_parent_name = "diffServMaxRateTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::~Diffservmaxrateentry()
{
}

bool DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::has_data() const
{
    return diffservmaxrateid.is_set
	|| diffservmaxratelevel.is_set
	|| diffservmaxrateabsolute.is_set
	|| diffservmaxraterelative.is_set
	|| diffservmaxratestatus.is_set
	|| diffservmaxratestorage.is_set
	|| diffservmaxratethreshold.is_set;
}

bool DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmaxrateid.yfilter)
	|| ydk::is_set(diffservmaxratelevel.yfilter)
	|| ydk::is_set(diffservmaxrateabsolute.yfilter)
	|| ydk::is_set(diffservmaxraterelative.yfilter)
	|| ydk::is_set(diffservmaxratestatus.yfilter)
	|| ydk::is_set(diffservmaxratestorage.yfilter)
	|| ydk::is_set(diffservmaxratethreshold.yfilter);
}

std::string DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMaxRateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateEntry" <<"[diffServMaxRateId='" <<diffservmaxrateid <<"']" <<"[diffServMaxRateLevel='" <<diffservmaxratelevel <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmaxrateid.is_set || is_set(diffservmaxrateid.yfilter)) leaf_name_data.push_back(diffservmaxrateid.get_name_leafdata());
    if (diffservmaxratelevel.is_set || is_set(diffservmaxratelevel.yfilter)) leaf_name_data.push_back(diffservmaxratelevel.get_name_leafdata());
    if (diffservmaxrateabsolute.is_set || is_set(diffservmaxrateabsolute.yfilter)) leaf_name_data.push_back(diffservmaxrateabsolute.get_name_leafdata());
    if (diffservmaxraterelative.is_set || is_set(diffservmaxraterelative.yfilter)) leaf_name_data.push_back(diffservmaxraterelative.get_name_leafdata());
    if (diffservmaxratestatus.is_set || is_set(diffservmaxratestatus.yfilter)) leaf_name_data.push_back(diffservmaxratestatus.get_name_leafdata());
    if (diffservmaxratestorage.is_set || is_set(diffservmaxratestorage.yfilter)) leaf_name_data.push_back(diffservmaxratestorage.get_name_leafdata());
    if (diffservmaxratethreshold.is_set || is_set(diffservmaxratethreshold.yfilter)) leaf_name_data.push_back(diffservmaxratethreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMaxRateId")
    {
        diffservmaxrateid = value;
        diffservmaxrateid.value_namespace = name_space;
        diffservmaxrateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateLevel")
    {
        diffservmaxratelevel = value;
        diffservmaxratelevel.value_namespace = name_space;
        diffservmaxratelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateAbsolute")
    {
        diffservmaxrateabsolute = value;
        diffservmaxrateabsolute.value_namespace = name_space;
        diffservmaxrateabsolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateRelative")
    {
        diffservmaxraterelative = value;
        diffservmaxraterelative.value_namespace = name_space;
        diffservmaxraterelative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateStatus")
    {
        diffservmaxratestatus = value;
        diffservmaxratestatus.value_namespace = name_space;
        diffservmaxratestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateStorage")
    {
        diffservmaxratestorage = value;
        diffservmaxratestorage.value_namespace = name_space;
        diffservmaxratestorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateThreshold")
    {
        diffservmaxratethreshold = value;
        diffservmaxratethreshold.value_namespace = name_space;
        diffservmaxratethreshold.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMaxRateId")
    {
        diffservmaxrateid.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateLevel")
    {
        diffservmaxratelevel.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateAbsolute")
    {
        diffservmaxrateabsolute.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateRelative")
    {
        diffservmaxraterelative.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateStatus")
    {
        diffservmaxratestatus.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateStorage")
    {
        diffservmaxratestorage.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateThreshold")
    {
        diffservmaxratethreshold.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMaxRateId" || name == "diffServMaxRateLevel" || name == "diffServMaxRateAbsolute" || name == "diffServMaxRateRelative" || name == "diffServMaxRateStatus" || name == "diffServMaxRateStorage" || name == "diffServMaxRateThreshold")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmeter::Diffservmeter()
    :
    diffservmeternextfree{YType::uint32, "diffServMeterNextFree"}
{

    yang_name = "diffServMeter"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmeter::~Diffservmeter()
{
}

bool DIFFSERVMIB::Diffservmeter::has_data() const
{
    return diffservmeternextfree.is_set;
}

bool DIFFSERVMIB::Diffservmeter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmeternextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservmeter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmeter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmeter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeternextfree.is_set || is_set(diffservmeternextfree.yfilter)) leaf_name_data.push_back(diffservmeternextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmeter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmeter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservmeter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMeterNextFree")
    {
        diffservmeternextfree = value;
        diffservmeternextfree.value_namespace = name_space;
        diffservmeternextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservmeter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMeterNextFree")
    {
        diffservmeternextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservmeter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmetertable::Diffservmetertable()
{

    yang_name = "diffServMeterTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmetertable::~Diffservmetertable()
{
}

bool DIFFSERVMIB::Diffservmetertable::has_data() const
{
    for (std::size_t index=0; index<diffservmeterentry.size(); index++)
    {
        if(diffservmeterentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservmetertable::has_operation() const
{
    for (std::size_t index=0; index<diffservmeterentry.size(); index++)
    {
        if(diffservmeterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservmetertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmetertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmetertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmetertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMeterEntry")
    {
        for(auto const & c : diffservmeterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservmetertable::Diffservmeterentry>();
        c->parent = this;
        diffservmeterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmetertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmeterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservmetertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservmetertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservmetertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::Diffservmeterentry()
    :
    diffservmeterid{YType::uint32, "diffServMeterId"},
    diffservmeterfailnext{YType::str, "diffServMeterFailNext"},
    diffservmeterspecific{YType::str, "diffServMeterSpecific"},
    diffservmeterstatus{YType::enumeration, "diffServMeterStatus"},
    diffservmeterstorage{YType::enumeration, "diffServMeterStorage"},
    diffservmetersucceednext{YType::str, "diffServMeterSucceedNext"}
{

    yang_name = "diffServMeterEntry"; yang_parent_name = "diffServMeterTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::~Diffservmeterentry()
{
}

bool DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::has_data() const
{
    return diffservmeterid.is_set
	|| diffservmeterfailnext.is_set
	|| diffservmeterspecific.is_set
	|| diffservmeterstatus.is_set
	|| diffservmeterstorage.is_set
	|| diffservmetersucceednext.is_set;
}

bool DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmeterid.yfilter)
	|| ydk::is_set(diffservmeterfailnext.yfilter)
	|| ydk::is_set(diffservmeterspecific.yfilter)
	|| ydk::is_set(diffservmeterstatus.yfilter)
	|| ydk::is_set(diffservmeterstorage.yfilter)
	|| ydk::is_set(diffservmetersucceednext.yfilter);
}

std::string DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMeterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterEntry" <<"[diffServMeterId='" <<diffservmeterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeterid.is_set || is_set(diffservmeterid.yfilter)) leaf_name_data.push_back(diffservmeterid.get_name_leafdata());
    if (diffservmeterfailnext.is_set || is_set(diffservmeterfailnext.yfilter)) leaf_name_data.push_back(diffservmeterfailnext.get_name_leafdata());
    if (diffservmeterspecific.is_set || is_set(diffservmeterspecific.yfilter)) leaf_name_data.push_back(diffservmeterspecific.get_name_leafdata());
    if (diffservmeterstatus.is_set || is_set(diffservmeterstatus.yfilter)) leaf_name_data.push_back(diffservmeterstatus.get_name_leafdata());
    if (diffservmeterstorage.is_set || is_set(diffservmeterstorage.yfilter)) leaf_name_data.push_back(diffservmeterstorage.get_name_leafdata());
    if (diffservmetersucceednext.is_set || is_set(diffservmetersucceednext.yfilter)) leaf_name_data.push_back(diffservmetersucceednext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMeterId")
    {
        diffservmeterid = value;
        diffservmeterid.value_namespace = name_space;
        diffservmeterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterFailNext")
    {
        diffservmeterfailnext = value;
        diffservmeterfailnext.value_namespace = name_space;
        diffservmeterfailnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterSpecific")
    {
        diffservmeterspecific = value;
        diffservmeterspecific.value_namespace = name_space;
        diffservmeterspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterStatus")
    {
        diffservmeterstatus = value;
        diffservmeterstatus.value_namespace = name_space;
        diffservmeterstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterStorage")
    {
        diffservmeterstorage = value;
        diffservmeterstorage.value_namespace = name_space;
        diffservmeterstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterSucceedNext")
    {
        diffservmetersucceednext = value;
        diffservmetersucceednext.value_namespace = name_space;
        diffservmetersucceednext.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMeterId")
    {
        diffservmeterid.yfilter = yfilter;
    }
    if(value_path == "diffServMeterFailNext")
    {
        diffservmeterfailnext.yfilter = yfilter;
    }
    if(value_path == "diffServMeterSpecific")
    {
        diffservmeterspecific.yfilter = yfilter;
    }
    if(value_path == "diffServMeterStatus")
    {
        diffservmeterstatus.yfilter = yfilter;
    }
    if(value_path == "diffServMeterStorage")
    {
        diffservmeterstorage.yfilter = yfilter;
    }
    if(value_path == "diffServMeterSucceedNext")
    {
        diffservmetersucceednext.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservmetertable::Diffservmeterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterId" || name == "diffServMeterFailNext" || name == "diffServMeterSpecific" || name == "diffServMeterStatus" || name == "diffServMeterStorage" || name == "diffServMeterSucceedNext")
        return true;
    return false;
}

DIFFSERVMIB::Diffservminratetable::Diffservminratetable()
{

    yang_name = "diffServMinRateTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservminratetable::~Diffservminratetable()
{
}

bool DIFFSERVMIB::Diffservminratetable::has_data() const
{
    for (std::size_t index=0; index<diffservminrateentry.size(); index++)
    {
        if(diffservminrateentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservminratetable::has_operation() const
{
    for (std::size_t index=0; index<diffservminrateentry.size(); index++)
    {
        if(diffservminrateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservminratetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservminratetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservminratetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservminratetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMinRateEntry")
    {
        for(auto const & c : diffservminrateentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservminratetable::Diffservminrateentry>();
        c->parent = this;
        diffservminrateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservminratetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservminrateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservminratetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservminratetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservminratetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMinRateEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::Diffservminrateentry()
    :
    diffservminrateid{YType::uint32, "diffServMinRateId"},
    diffservminrateabsolute{YType::uint32, "diffServMinRateAbsolute"},
    diffservminratepriority{YType::uint32, "diffServMinRatePriority"},
    diffservminraterelative{YType::uint32, "diffServMinRateRelative"},
    diffservminratestatus{YType::enumeration, "diffServMinRateStatus"},
    diffservminratestorage{YType::enumeration, "diffServMinRateStorage"}
{

    yang_name = "diffServMinRateEntry"; yang_parent_name = "diffServMinRateTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::~Diffservminrateentry()
{
}

bool DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::has_data() const
{
    return diffservminrateid.is_set
	|| diffservminrateabsolute.is_set
	|| diffservminratepriority.is_set
	|| diffservminraterelative.is_set
	|| diffservminratestatus.is_set
	|| diffservminratestorage.is_set;
}

bool DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservminrateid.yfilter)
	|| ydk::is_set(diffservminrateabsolute.yfilter)
	|| ydk::is_set(diffservminratepriority.yfilter)
	|| ydk::is_set(diffservminraterelative.yfilter)
	|| ydk::is_set(diffservminratestatus.yfilter)
	|| ydk::is_set(diffservminratestorage.yfilter);
}

std::string DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMinRateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateEntry" <<"[diffServMinRateId='" <<diffservminrateid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservminrateid.is_set || is_set(diffservminrateid.yfilter)) leaf_name_data.push_back(diffservminrateid.get_name_leafdata());
    if (diffservminrateabsolute.is_set || is_set(diffservminrateabsolute.yfilter)) leaf_name_data.push_back(diffservminrateabsolute.get_name_leafdata());
    if (diffservminratepriority.is_set || is_set(diffservminratepriority.yfilter)) leaf_name_data.push_back(diffservminratepriority.get_name_leafdata());
    if (diffservminraterelative.is_set || is_set(diffservminraterelative.yfilter)) leaf_name_data.push_back(diffservminraterelative.get_name_leafdata());
    if (diffservminratestatus.is_set || is_set(diffservminratestatus.yfilter)) leaf_name_data.push_back(diffservminratestatus.get_name_leafdata());
    if (diffservminratestorage.is_set || is_set(diffservminratestorage.yfilter)) leaf_name_data.push_back(diffservminratestorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMinRateId")
    {
        diffservminrateid = value;
        diffservminrateid.value_namespace = name_space;
        diffservminrateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateAbsolute")
    {
        diffservminrateabsolute = value;
        diffservminrateabsolute.value_namespace = name_space;
        diffservminrateabsolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRatePriority")
    {
        diffservminratepriority = value;
        diffservminratepriority.value_namespace = name_space;
        diffservminratepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateRelative")
    {
        diffservminraterelative = value;
        diffservminraterelative.value_namespace = name_space;
        diffservminraterelative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateStatus")
    {
        diffservminratestatus = value;
        diffservminratestatus.value_namespace = name_space;
        diffservminratestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateStorage")
    {
        diffservminratestorage = value;
        diffservminratestorage.value_namespace = name_space;
        diffservminratestorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMinRateId")
    {
        diffservminrateid.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateAbsolute")
    {
        diffservminrateabsolute.yfilter = yfilter;
    }
    if(value_path == "diffServMinRatePriority")
    {
        diffservminratepriority.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateRelative")
    {
        diffservminraterelative.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateStatus")
    {
        diffservminratestatus.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateStorage")
    {
        diffservminratestorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservminratetable::Diffservminrateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMinRateId" || name == "diffServMinRateAbsolute" || name == "diffServMinRatePriority" || name == "diffServMinRateRelative" || name == "diffServMinRateStatus" || name == "diffServMinRateStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrtable()
{

    yang_name = "diffServMultiFieldClfrTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmultifieldclfrtable::~Diffservmultifieldclfrtable()
{
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::has_data() const
{
    for (std::size_t index=0; index<diffservmultifieldclfrentry.size(); index++)
    {
        if(diffservmultifieldclfrentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::has_operation() const
{
    for (std::size_t index=0; index<diffservmultifieldclfrentry.size(); index++)
    {
        if(diffservmultifieldclfrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservmultifieldclfrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmultifieldclfrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmultifieldclfrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmultifieldclfrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMultiFieldClfrEntry")
    {
        for(auto const & c : diffservmultifieldclfrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry>();
        c->parent = this;
        diffservmultifieldclfrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmultifieldclfrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmultifieldclfrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservmultifieldclfrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservmultifieldclfrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMultiFieldClfrEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::Diffservmultifieldclfrentry()
    :
    diffservmultifieldclfrid{YType::uint32, "diffServMultiFieldClfrId"},
    diffservmultifieldclfraddrtype{YType::enumeration, "diffServMultiFieldClfrAddrType"},
    diffservmultifieldclfrdscp{YType::int32, "diffServMultiFieldClfrDscp"},
    diffservmultifieldclfrdstaddr{YType::str, "diffServMultiFieldClfrDstAddr"},
    diffservmultifieldclfrdstl4portmax{YType::uint16, "diffServMultiFieldClfrDstL4PortMax"},
    diffservmultifieldclfrdstl4portmin{YType::uint16, "diffServMultiFieldClfrDstL4PortMin"},
    diffservmultifieldclfrdstprefixlength{YType::uint32, "diffServMultiFieldClfrDstPrefixLength"},
    diffservmultifieldclfrflowid{YType::uint32, "diffServMultiFieldClfrFlowId"},
    diffservmultifieldclfrprotocol{YType::uint32, "diffServMultiFieldClfrProtocol"},
    diffservmultifieldclfrsrcaddr{YType::str, "diffServMultiFieldClfrSrcAddr"},
    diffservmultifieldclfrsrcl4portmax{YType::uint16, "diffServMultiFieldClfrSrcL4PortMax"},
    diffservmultifieldclfrsrcl4portmin{YType::uint16, "diffServMultiFieldClfrSrcL4PortMin"},
    diffservmultifieldclfrsrcprefixlength{YType::uint32, "diffServMultiFieldClfrSrcPrefixLength"},
    diffservmultifieldclfrstatus{YType::enumeration, "diffServMultiFieldClfrStatus"},
    diffservmultifieldclfrstorage{YType::enumeration, "diffServMultiFieldClfrStorage"}
{

    yang_name = "diffServMultiFieldClfrEntry"; yang_parent_name = "diffServMultiFieldClfrTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::~Diffservmultifieldclfrentry()
{
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::has_data() const
{
    return diffservmultifieldclfrid.is_set
	|| diffservmultifieldclfraddrtype.is_set
	|| diffservmultifieldclfrdscp.is_set
	|| diffservmultifieldclfrdstaddr.is_set
	|| diffservmultifieldclfrdstl4portmax.is_set
	|| diffservmultifieldclfrdstl4portmin.is_set
	|| diffservmultifieldclfrdstprefixlength.is_set
	|| diffservmultifieldclfrflowid.is_set
	|| diffservmultifieldclfrprotocol.is_set
	|| diffservmultifieldclfrsrcaddr.is_set
	|| diffservmultifieldclfrsrcl4portmax.is_set
	|| diffservmultifieldclfrsrcl4portmin.is_set
	|| diffservmultifieldclfrsrcprefixlength.is_set
	|| diffservmultifieldclfrstatus.is_set
	|| diffservmultifieldclfrstorage.is_set;
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmultifieldclfrid.yfilter)
	|| ydk::is_set(diffservmultifieldclfraddrtype.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdscp.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstaddr.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstl4portmax.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstl4portmin.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstprefixlength.yfilter)
	|| ydk::is_set(diffservmultifieldclfrflowid.yfilter)
	|| ydk::is_set(diffservmultifieldclfrprotocol.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcaddr.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcl4portmax.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcl4portmin.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcprefixlength.yfilter)
	|| ydk::is_set(diffservmultifieldclfrstatus.yfilter)
	|| ydk::is_set(diffservmultifieldclfrstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMultiFieldClfrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrEntry" <<"[diffServMultiFieldClfrId='" <<diffservmultifieldclfrid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmultifieldclfrid.is_set || is_set(diffservmultifieldclfrid.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrid.get_name_leafdata());
    if (diffservmultifieldclfraddrtype.is_set || is_set(diffservmultifieldclfraddrtype.yfilter)) leaf_name_data.push_back(diffservmultifieldclfraddrtype.get_name_leafdata());
    if (diffservmultifieldclfrdscp.is_set || is_set(diffservmultifieldclfrdscp.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdscp.get_name_leafdata());
    if (diffservmultifieldclfrdstaddr.is_set || is_set(diffservmultifieldclfrdstaddr.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstaddr.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmax.is_set || is_set(diffservmultifieldclfrdstl4portmax.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmin.is_set || is_set(diffservmultifieldclfrdstl4portmin.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrdstprefixlength.is_set || is_set(diffservmultifieldclfrdstprefixlength.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrflowid.is_set || is_set(diffservmultifieldclfrflowid.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrflowid.get_name_leafdata());
    if (diffservmultifieldclfrprotocol.is_set || is_set(diffservmultifieldclfrprotocol.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrprotocol.get_name_leafdata());
    if (diffservmultifieldclfrsrcaddr.is_set || is_set(diffservmultifieldclfrsrcaddr.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcaddr.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmax.is_set || is_set(diffservmultifieldclfrsrcl4portmax.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmin.is_set || is_set(diffservmultifieldclfrsrcl4portmin.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrsrcprefixlength.is_set || is_set(diffservmultifieldclfrsrcprefixlength.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrstatus.is_set || is_set(diffservmultifieldclfrstatus.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrstatus.get_name_leafdata());
    if (diffservmultifieldclfrstorage.is_set || is_set(diffservmultifieldclfrstorage.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMultiFieldClfrId")
    {
        diffservmultifieldclfrid = value;
        diffservmultifieldclfrid.value_namespace = name_space;
        diffservmultifieldclfrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrAddrType")
    {
        diffservmultifieldclfraddrtype = value;
        diffservmultifieldclfraddrtype.value_namespace = name_space;
        diffservmultifieldclfraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDscp")
    {
        diffservmultifieldclfrdscp = value;
        diffservmultifieldclfrdscp.value_namespace = name_space;
        diffservmultifieldclfrdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstAddr")
    {
        diffservmultifieldclfrdstaddr = value;
        diffservmultifieldclfrdstaddr.value_namespace = name_space;
        diffservmultifieldclfrdstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMax")
    {
        diffservmultifieldclfrdstl4portmax = value;
        diffservmultifieldclfrdstl4portmax.value_namespace = name_space;
        diffservmultifieldclfrdstl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMin")
    {
        diffservmultifieldclfrdstl4portmin = value;
        diffservmultifieldclfrdstl4portmin.value_namespace = name_space;
        diffservmultifieldclfrdstl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstPrefixLength")
    {
        diffservmultifieldclfrdstprefixlength = value;
        diffservmultifieldclfrdstprefixlength.value_namespace = name_space;
        diffservmultifieldclfrdstprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrFlowId")
    {
        diffservmultifieldclfrflowid = value;
        diffservmultifieldclfrflowid.value_namespace = name_space;
        diffservmultifieldclfrflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrProtocol")
    {
        diffservmultifieldclfrprotocol = value;
        diffservmultifieldclfrprotocol.value_namespace = name_space;
        diffservmultifieldclfrprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcAddr")
    {
        diffservmultifieldclfrsrcaddr = value;
        diffservmultifieldclfrsrcaddr.value_namespace = name_space;
        diffservmultifieldclfrsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMax")
    {
        diffservmultifieldclfrsrcl4portmax = value;
        diffservmultifieldclfrsrcl4portmax.value_namespace = name_space;
        diffservmultifieldclfrsrcl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMin")
    {
        diffservmultifieldclfrsrcl4portmin = value;
        diffservmultifieldclfrsrcl4portmin.value_namespace = name_space;
        diffservmultifieldclfrsrcl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcPrefixLength")
    {
        diffservmultifieldclfrsrcprefixlength = value;
        diffservmultifieldclfrsrcprefixlength.value_namespace = name_space;
        diffservmultifieldclfrsrcprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrStatus")
    {
        diffservmultifieldclfrstatus = value;
        diffservmultifieldclfrstatus.value_namespace = name_space;
        diffservmultifieldclfrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrStorage")
    {
        diffservmultifieldclfrstorage = value;
        diffservmultifieldclfrstorage.value_namespace = name_space;
        diffservmultifieldclfrstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMultiFieldClfrId")
    {
        diffservmultifieldclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrAddrType")
    {
        diffservmultifieldclfraddrtype.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDscp")
    {
        diffservmultifieldclfrdscp.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstAddr")
    {
        diffservmultifieldclfrdstaddr.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMax")
    {
        diffservmultifieldclfrdstl4portmax.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMin")
    {
        diffservmultifieldclfrdstl4portmin.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstPrefixLength")
    {
        diffservmultifieldclfrdstprefixlength.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrFlowId")
    {
        diffservmultifieldclfrflowid.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrProtocol")
    {
        diffservmultifieldclfrprotocol.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcAddr")
    {
        diffservmultifieldclfrsrcaddr.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMax")
    {
        diffservmultifieldclfrsrcl4portmax.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMin")
    {
        diffservmultifieldclfrsrcl4portmin.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcPrefixLength")
    {
        diffservmultifieldclfrsrcprefixlength.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrStatus")
    {
        diffservmultifieldclfrstatus.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrStorage")
    {
        diffservmultifieldclfrstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMultiFieldClfrId" || name == "diffServMultiFieldClfrAddrType" || name == "diffServMultiFieldClfrDscp" || name == "diffServMultiFieldClfrDstAddr" || name == "diffServMultiFieldClfrDstL4PortMax" || name == "diffServMultiFieldClfrDstL4PortMin" || name == "diffServMultiFieldClfrDstPrefixLength" || name == "diffServMultiFieldClfrFlowId" || name == "diffServMultiFieldClfrProtocol" || name == "diffServMultiFieldClfrSrcAddr" || name == "diffServMultiFieldClfrSrcL4PortMax" || name == "diffServMultiFieldClfrSrcL4PortMin" || name == "diffServMultiFieldClfrSrcPrefixLength" || name == "diffServMultiFieldClfrStatus" || name == "diffServMultiFieldClfrStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservqtable::Diffservqtable()
{

    yang_name = "diffServQTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservqtable::~Diffservqtable()
{
}

bool DIFFSERVMIB::Diffservqtable::has_data() const
{
    for (std::size_t index=0; index<diffservqentry.size(); index++)
    {
        if(diffservqentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservqtable::has_operation() const
{
    for (std::size_t index=0; index<diffservqentry.size(); index++)
    {
        if(diffservqentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservqtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservqtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservqtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservqtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServQEntry")
    {
        for(auto const & c : diffservqentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservqtable::Diffservqentry>();
        c->parent = this;
        diffservqentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservqtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservqentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservqtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservqtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservqtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservqtable::Diffservqentry::Diffservqentry()
    :
    diffservqid{YType::uint32, "diffServQId"},
    diffservqmaxrate{YType::str, "diffServQMaxRate"},
    diffservqminrate{YType::str, "diffServQMinRate"},
    diffservqnext{YType::str, "diffServQNext"},
    diffservqstatus{YType::enumeration, "diffServQStatus"},
    diffservqstorage{YType::enumeration, "diffServQStorage"}
{

    yang_name = "diffServQEntry"; yang_parent_name = "diffServQTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservqtable::Diffservqentry::~Diffservqentry()
{
}

bool DIFFSERVMIB::Diffservqtable::Diffservqentry::has_data() const
{
    return diffservqid.is_set
	|| diffservqmaxrate.is_set
	|| diffservqminrate.is_set
	|| diffservqnext.is_set
	|| diffservqstatus.is_set
	|| diffservqstorage.is_set;
}

bool DIFFSERVMIB::Diffservqtable::Diffservqentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservqid.yfilter)
	|| ydk::is_set(diffservqmaxrate.yfilter)
	|| ydk::is_set(diffservqminrate.yfilter)
	|| ydk::is_set(diffservqnext.yfilter)
	|| ydk::is_set(diffservqstatus.yfilter)
	|| ydk::is_set(diffservqstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservqtable::Diffservqentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServQTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservqtable::Diffservqentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQEntry" <<"[diffServQId='" <<diffservqid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservqtable::Diffservqentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqid.is_set || is_set(diffservqid.yfilter)) leaf_name_data.push_back(diffservqid.get_name_leafdata());
    if (diffservqmaxrate.is_set || is_set(diffservqmaxrate.yfilter)) leaf_name_data.push_back(diffservqmaxrate.get_name_leafdata());
    if (diffservqminrate.is_set || is_set(diffservqminrate.yfilter)) leaf_name_data.push_back(diffservqminrate.get_name_leafdata());
    if (diffservqnext.is_set || is_set(diffservqnext.yfilter)) leaf_name_data.push_back(diffservqnext.get_name_leafdata());
    if (diffservqstatus.is_set || is_set(diffservqstatus.yfilter)) leaf_name_data.push_back(diffservqstatus.get_name_leafdata());
    if (diffservqstorage.is_set || is_set(diffservqstorage.yfilter)) leaf_name_data.push_back(diffservqstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservqtable::Diffservqentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservqtable::Diffservqentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservqtable::Diffservqentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServQId")
    {
        diffservqid = value;
        diffservqid.value_namespace = name_space;
        diffservqid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQMaxRate")
    {
        diffservqmaxrate = value;
        diffservqmaxrate.value_namespace = name_space;
        diffservqmaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQMinRate")
    {
        diffservqminrate = value;
        diffservqminrate.value_namespace = name_space;
        diffservqminrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQNext")
    {
        diffservqnext = value;
        diffservqnext.value_namespace = name_space;
        diffservqnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQStatus")
    {
        diffservqstatus = value;
        diffservqstatus.value_namespace = name_space;
        diffservqstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQStorage")
    {
        diffservqstorage = value;
        diffservqstorage.value_namespace = name_space;
        diffservqstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservqtable::Diffservqentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServQId")
    {
        diffservqid.yfilter = yfilter;
    }
    if(value_path == "diffServQMaxRate")
    {
        diffservqmaxrate.yfilter = yfilter;
    }
    if(value_path == "diffServQMinRate")
    {
        diffservqminrate.yfilter = yfilter;
    }
    if(value_path == "diffServQNext")
    {
        diffservqnext.yfilter = yfilter;
    }
    if(value_path == "diffServQStatus")
    {
        diffservqstatus.yfilter = yfilter;
    }
    if(value_path == "diffServQStorage")
    {
        diffservqstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservqtable::Diffservqentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQId" || name == "diffServQMaxRate" || name == "diffServQMinRate" || name == "diffServQNext" || name == "diffServQStatus" || name == "diffServQStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservqueue::Diffservqueue()
    :
    diffservqnextfree{YType::uint32, "diffServQNextFree"}
{

    yang_name = "diffServQueue"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservqueue::~Diffservqueue()
{
}

bool DIFFSERVMIB::Diffservqueue::has_data() const
{
    return diffservqnextfree.is_set;
}

bool DIFFSERVMIB::Diffservqueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservqnextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservqueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservqueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqnextfree.is_set || is_set(diffservqnextfree.yfilter)) leaf_name_data.push_back(diffservqnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservqueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServQNextFree")
    {
        diffservqnextfree = value;
        diffservqnextfree.value_namespace = name_space;
        diffservqnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservqueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServQNextFree")
    {
        diffservqnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservqueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdroptable()
{

    yang_name = "diffServRandomDropTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservrandomdroptable::~Diffservrandomdroptable()
{
}

bool DIFFSERVMIB::Diffservrandomdroptable::has_data() const
{
    for (std::size_t index=0; index<diffservrandomdropentry.size(); index++)
    {
        if(diffservrandomdropentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservrandomdroptable::has_operation() const
{
    for (std::size_t index=0; index<diffservrandomdropentry.size(); index++)
    {
        if(diffservrandomdropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservrandomdroptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservrandomdroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservrandomdroptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservrandomdroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServRandomDropEntry")
    {
        for(auto const & c : diffservrandomdropentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry>();
        c->parent = this;
        diffservrandomdropentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservrandomdroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservrandomdropentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservrandomdroptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservrandomdroptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservrandomdroptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServRandomDropEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::Diffservrandomdropentry()
    :
    diffservrandomdropid{YType::uint32, "diffServRandomDropId"},
    diffservrandomdropmaxthreshbytes{YType::uint32, "diffServRandomDropMaxThreshBytes"},
    diffservrandomdropmaxthreshpkts{YType::uint32, "diffServRandomDropMaxThreshPkts"},
    diffservrandomdropminthreshbytes{YType::uint32, "diffServRandomDropMinThreshBytes"},
    diffservrandomdropminthreshpkts{YType::uint32, "diffServRandomDropMinThreshPkts"},
    diffservrandomdropprobmax{YType::uint32, "diffServRandomDropProbMax"},
    diffservrandomdropsamplingrate{YType::uint32, "diffServRandomDropSamplingRate"},
    diffservrandomdropstatus{YType::enumeration, "diffServRandomDropStatus"},
    diffservrandomdropstorage{YType::enumeration, "diffServRandomDropStorage"},
    diffservrandomdropweight{YType::uint32, "diffServRandomDropWeight"}
{

    yang_name = "diffServRandomDropEntry"; yang_parent_name = "diffServRandomDropTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::~Diffservrandomdropentry()
{
}

bool DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::has_data() const
{
    return diffservrandomdropid.is_set
	|| diffservrandomdropmaxthreshbytes.is_set
	|| diffservrandomdropmaxthreshpkts.is_set
	|| diffservrandomdropminthreshbytes.is_set
	|| diffservrandomdropminthreshpkts.is_set
	|| diffservrandomdropprobmax.is_set
	|| diffservrandomdropsamplingrate.is_set
	|| diffservrandomdropstatus.is_set
	|| diffservrandomdropstorage.is_set
	|| diffservrandomdropweight.is_set;
}

bool DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservrandomdropid.yfilter)
	|| ydk::is_set(diffservrandomdropmaxthreshbytes.yfilter)
	|| ydk::is_set(diffservrandomdropmaxthreshpkts.yfilter)
	|| ydk::is_set(diffservrandomdropminthreshbytes.yfilter)
	|| ydk::is_set(diffservrandomdropminthreshpkts.yfilter)
	|| ydk::is_set(diffservrandomdropprobmax.yfilter)
	|| ydk::is_set(diffservrandomdropsamplingrate.yfilter)
	|| ydk::is_set(diffservrandomdropstatus.yfilter)
	|| ydk::is_set(diffservrandomdropstorage.yfilter)
	|| ydk::is_set(diffservrandomdropweight.yfilter);
}

std::string DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServRandomDropTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropEntry" <<"[diffServRandomDropId='" <<diffservrandomdropid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservrandomdropid.is_set || is_set(diffservrandomdropid.yfilter)) leaf_name_data.push_back(diffservrandomdropid.get_name_leafdata());
    if (diffservrandomdropmaxthreshbytes.is_set || is_set(diffservrandomdropmaxthreshbytes.yfilter)) leaf_name_data.push_back(diffservrandomdropmaxthreshbytes.get_name_leafdata());
    if (diffservrandomdropmaxthreshpkts.is_set || is_set(diffservrandomdropmaxthreshpkts.yfilter)) leaf_name_data.push_back(diffservrandomdropmaxthreshpkts.get_name_leafdata());
    if (diffservrandomdropminthreshbytes.is_set || is_set(diffservrandomdropminthreshbytes.yfilter)) leaf_name_data.push_back(diffservrandomdropminthreshbytes.get_name_leafdata());
    if (diffservrandomdropminthreshpkts.is_set || is_set(diffservrandomdropminthreshpkts.yfilter)) leaf_name_data.push_back(diffservrandomdropminthreshpkts.get_name_leafdata());
    if (diffservrandomdropprobmax.is_set || is_set(diffservrandomdropprobmax.yfilter)) leaf_name_data.push_back(diffservrandomdropprobmax.get_name_leafdata());
    if (diffservrandomdropsamplingrate.is_set || is_set(diffservrandomdropsamplingrate.yfilter)) leaf_name_data.push_back(diffservrandomdropsamplingrate.get_name_leafdata());
    if (diffservrandomdropstatus.is_set || is_set(diffservrandomdropstatus.yfilter)) leaf_name_data.push_back(diffservrandomdropstatus.get_name_leafdata());
    if (diffservrandomdropstorage.is_set || is_set(diffservrandomdropstorage.yfilter)) leaf_name_data.push_back(diffservrandomdropstorage.get_name_leafdata());
    if (diffservrandomdropweight.is_set || is_set(diffservrandomdropweight.yfilter)) leaf_name_data.push_back(diffservrandomdropweight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServRandomDropId")
    {
        diffservrandomdropid = value;
        diffservrandomdropid.value_namespace = name_space;
        diffservrandomdropid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropMaxThreshBytes")
    {
        diffservrandomdropmaxthreshbytes = value;
        diffservrandomdropmaxthreshbytes.value_namespace = name_space;
        diffservrandomdropmaxthreshbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropMaxThreshPkts")
    {
        diffservrandomdropmaxthreshpkts = value;
        diffservrandomdropmaxthreshpkts.value_namespace = name_space;
        diffservrandomdropmaxthreshpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropMinThreshBytes")
    {
        diffservrandomdropminthreshbytes = value;
        diffservrandomdropminthreshbytes.value_namespace = name_space;
        diffservrandomdropminthreshbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropMinThreshPkts")
    {
        diffservrandomdropminthreshpkts = value;
        diffservrandomdropminthreshpkts.value_namespace = name_space;
        diffservrandomdropminthreshpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropProbMax")
    {
        diffservrandomdropprobmax = value;
        diffservrandomdropprobmax.value_namespace = name_space;
        diffservrandomdropprobmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropSamplingRate")
    {
        diffservrandomdropsamplingrate = value;
        diffservrandomdropsamplingrate.value_namespace = name_space;
        diffservrandomdropsamplingrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropStatus")
    {
        diffservrandomdropstatus = value;
        diffservrandomdropstatus.value_namespace = name_space;
        diffservrandomdropstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropStorage")
    {
        diffservrandomdropstorage = value;
        diffservrandomdropstorage.value_namespace = name_space;
        diffservrandomdropstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropWeight")
    {
        diffservrandomdropweight = value;
        diffservrandomdropweight.value_namespace = name_space;
        diffservrandomdropweight.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServRandomDropId")
    {
        diffservrandomdropid.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMaxThreshBytes")
    {
        diffservrandomdropmaxthreshbytes.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMaxThreshPkts")
    {
        diffservrandomdropmaxthreshpkts.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMinThreshBytes")
    {
        diffservrandomdropminthreshbytes.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMinThreshPkts")
    {
        diffservrandomdropminthreshpkts.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropProbMax")
    {
        diffservrandomdropprobmax.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropSamplingRate")
    {
        diffservrandomdropsamplingrate.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropStatus")
    {
        diffservrandomdropstatus.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropStorage")
    {
        diffservrandomdropstorage.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropWeight")
    {
        diffservrandomdropweight.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServRandomDropId" || name == "diffServRandomDropMaxThreshBytes" || name == "diffServRandomDropMaxThreshPkts" || name == "diffServRandomDropMinThreshBytes" || name == "diffServRandomDropMinThreshPkts" || name == "diffServRandomDropProbMax" || name == "diffServRandomDropSamplingRate" || name == "diffServRandomDropStatus" || name == "diffServRandomDropStorage" || name == "diffServRandomDropWeight")
        return true;
    return false;
}

DIFFSERVMIB::Diffservscheduler::Diffservscheduler()
    :
    diffservmaxratenextfree{YType::uint32, "diffServMaxRateNextFree"},
    diffservminratenextfree{YType::uint32, "diffServMinRateNextFree"},
    diffservschedulernextfree{YType::uint32, "diffServSchedulerNextFree"}
{

    yang_name = "diffServScheduler"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservscheduler::~Diffservscheduler()
{
}

bool DIFFSERVMIB::Diffservscheduler::has_data() const
{
    return diffservmaxratenextfree.is_set
	|| diffservminratenextfree.is_set
	|| diffservschedulernextfree.is_set;
}

bool DIFFSERVMIB::Diffservscheduler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmaxratenextfree.yfilter)
	|| ydk::is_set(diffservminratenextfree.yfilter)
	|| ydk::is_set(diffservschedulernextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservscheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservscheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServScheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservscheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmaxratenextfree.is_set || is_set(diffservmaxratenextfree.yfilter)) leaf_name_data.push_back(diffservmaxratenextfree.get_name_leafdata());
    if (diffservminratenextfree.is_set || is_set(diffservminratenextfree.yfilter)) leaf_name_data.push_back(diffservminratenextfree.get_name_leafdata());
    if (diffservschedulernextfree.is_set || is_set(diffservschedulernextfree.yfilter)) leaf_name_data.push_back(diffservschedulernextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservscheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservscheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservscheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMaxRateNextFree")
    {
        diffservmaxratenextfree = value;
        diffservmaxratenextfree.value_namespace = name_space;
        diffservmaxratenextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateNextFree")
    {
        diffservminratenextfree = value;
        diffservminratenextfree.value_namespace = name_space;
        diffservminratenextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerNextFree")
    {
        diffservschedulernextfree = value;
        diffservschedulernextfree.value_namespace = name_space;
        diffservschedulernextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservscheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMaxRateNextFree")
    {
        diffservmaxratenextfree.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateNextFree")
    {
        diffservminratenextfree.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerNextFree")
    {
        diffservschedulernextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservscheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMaxRateNextFree" || name == "diffServMinRateNextFree" || name == "diffServSchedulerNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservschedulertable::Diffservschedulertable()
{

    yang_name = "diffServSchedulerTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservschedulertable::~Diffservschedulertable()
{
}

bool DIFFSERVMIB::Diffservschedulertable::has_data() const
{
    for (std::size_t index=0; index<diffservschedulerentry.size(); index++)
    {
        if(diffservschedulerentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservschedulertable::has_operation() const
{
    for (std::size_t index=0; index<diffservschedulerentry.size(); index++)
    {
        if(diffservschedulerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservschedulertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservschedulertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservschedulertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservschedulertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServSchedulerEntry")
    {
        for(auto const & c : diffservschedulerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry>();
        c->parent = this;
        diffservschedulerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservschedulertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservschedulerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservschedulertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservschedulertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservschedulertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServSchedulerEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::Diffservschedulerentry()
    :
    diffservschedulerid{YType::uint32, "diffServSchedulerId"},
    diffservschedulermaxrate{YType::str, "diffServSchedulerMaxRate"},
    diffservschedulermethod{YType::str, "diffServSchedulerMethod"},
    diffservschedulerminrate{YType::str, "diffServSchedulerMinRate"},
    diffservschedulernext{YType::str, "diffServSchedulerNext"},
    diffservschedulerstatus{YType::enumeration, "diffServSchedulerStatus"},
    diffservschedulerstorage{YType::enumeration, "diffServSchedulerStorage"}
{

    yang_name = "diffServSchedulerEntry"; yang_parent_name = "diffServSchedulerTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::~Diffservschedulerentry()
{
}

bool DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::has_data() const
{
    return diffservschedulerid.is_set
	|| diffservschedulermaxrate.is_set
	|| diffservschedulermethod.is_set
	|| diffservschedulerminrate.is_set
	|| diffservschedulernext.is_set
	|| diffservschedulerstatus.is_set
	|| diffservschedulerstorage.is_set;
}

bool DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservschedulerid.yfilter)
	|| ydk::is_set(diffservschedulermaxrate.yfilter)
	|| ydk::is_set(diffservschedulermethod.yfilter)
	|| ydk::is_set(diffservschedulerminrate.yfilter)
	|| ydk::is_set(diffservschedulernext.yfilter)
	|| ydk::is_set(diffservschedulerstatus.yfilter)
	|| ydk::is_set(diffservschedulerstorage.yfilter);
}

std::string DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServSchedulerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerEntry" <<"[diffServSchedulerId='" <<diffservschedulerid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservschedulerid.is_set || is_set(diffservschedulerid.yfilter)) leaf_name_data.push_back(diffservschedulerid.get_name_leafdata());
    if (diffservschedulermaxrate.is_set || is_set(diffservschedulermaxrate.yfilter)) leaf_name_data.push_back(diffservschedulermaxrate.get_name_leafdata());
    if (diffservschedulermethod.is_set || is_set(diffservschedulermethod.yfilter)) leaf_name_data.push_back(diffservschedulermethod.get_name_leafdata());
    if (diffservschedulerminrate.is_set || is_set(diffservschedulerminrate.yfilter)) leaf_name_data.push_back(diffservschedulerminrate.get_name_leafdata());
    if (diffservschedulernext.is_set || is_set(diffservschedulernext.yfilter)) leaf_name_data.push_back(diffservschedulernext.get_name_leafdata());
    if (diffservschedulerstatus.is_set || is_set(diffservschedulerstatus.yfilter)) leaf_name_data.push_back(diffservschedulerstatus.get_name_leafdata());
    if (diffservschedulerstorage.is_set || is_set(diffservschedulerstorage.yfilter)) leaf_name_data.push_back(diffservschedulerstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServSchedulerId")
    {
        diffservschedulerid = value;
        diffservschedulerid.value_namespace = name_space;
        diffservschedulerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerMaxRate")
    {
        diffservschedulermaxrate = value;
        diffservschedulermaxrate.value_namespace = name_space;
        diffservschedulermaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerMethod")
    {
        diffservschedulermethod = value;
        diffservschedulermethod.value_namespace = name_space;
        diffservschedulermethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerMinRate")
    {
        diffservschedulerminrate = value;
        diffservschedulerminrate.value_namespace = name_space;
        diffservschedulerminrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerNext")
    {
        diffservschedulernext = value;
        diffservschedulernext.value_namespace = name_space;
        diffservschedulernext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerStatus")
    {
        diffservschedulerstatus = value;
        diffservschedulerstatus.value_namespace = name_space;
        diffservschedulerstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerStorage")
    {
        diffservschedulerstorage = value;
        diffservschedulerstorage.value_namespace = name_space;
        diffservschedulerstorage.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServSchedulerId")
    {
        diffservschedulerid.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMaxRate")
    {
        diffservschedulermaxrate.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMethod")
    {
        diffservschedulermethod.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMinRate")
    {
        diffservschedulerminrate.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerNext")
    {
        diffservschedulernext.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerStatus")
    {
        diffservschedulerstatus.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerStorage")
    {
        diffservschedulerstorage.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServSchedulerId" || name == "diffServSchedulerMaxRate" || name == "diffServSchedulerMethod" || name == "diffServSchedulerMinRate" || name == "diffServSchedulerNext" || name == "diffServSchedulerStatus" || name == "diffServSchedulerStorage")
        return true;
    return false;
}

DIFFSERVMIB::Diffservtbparam::Diffservtbparam()
    :
    diffservtbparamnextfree{YType::uint32, "diffServTBParamNextFree"}
{

    yang_name = "diffServTBParam"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservtbparam::~Diffservtbparam()
{
}

bool DIFFSERVMIB::Diffservtbparam::has_data() const
{
    return diffservtbparamnextfree.is_set;
}

bool DIFFSERVMIB::Diffservtbparam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservtbparamnextfree.yfilter);
}

std::string DIFFSERVMIB::Diffservtbparam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservtbparam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservtbparam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamnextfree.is_set || is_set(diffservtbparamnextfree.yfilter)) leaf_name_data.push_back(diffservtbparamnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservtbparam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservtbparam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservtbparam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServTBParamNextFree")
    {
        diffservtbparamnextfree = value;
        diffservtbparamnextfree.value_namespace = name_space;
        diffservtbparamnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservtbparam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServTBParamNextFree")
    {
        diffservtbparamnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservtbparam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamNextFree")
        return true;
    return false;
}

DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamtable()
{

    yang_name = "diffServTBParamTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservtbparamtable::~Diffservtbparamtable()
{
}

bool DIFFSERVMIB::Diffservtbparamtable::has_data() const
{
    for (std::size_t index=0; index<diffservtbparamentry.size(); index++)
    {
        if(diffservtbparamentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::Diffservtbparamtable::has_operation() const
{
    for (std::size_t index=0; index<diffservtbparamentry.size(); index++)
    {
        if(diffservtbparamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::Diffservtbparamtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservtbparamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservtbparamtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservtbparamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServTBParamEntry")
    {
        for(auto const & c : diffservtbparamentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry>();
        c->parent = this;
        diffservtbparamentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservtbparamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservtbparamentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DIFFSERVMIB::Diffservtbparamtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::Diffservtbparamtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::Diffservtbparamtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamEntry")
        return true;
    return false;
}

DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::Diffservtbparamentry()
    :
    diffservtbparamid{YType::uint32, "diffServTBParamId"},
    diffservtbparamburstsize{YType::int32, "diffServTBParamBurstSize"},
    diffservtbparaminterval{YType::uint32, "diffServTBParamInterval"},
    diffservtbparamrate{YType::uint32, "diffServTBParamRate"},
    diffservtbparamstatus{YType::enumeration, "diffServTBParamStatus"},
    diffservtbparamstorage{YType::enumeration, "diffServTBParamStorage"},
    diffservtbparamtype{YType::str, "diffServTBParamType"}
{

    yang_name = "diffServTBParamEntry"; yang_parent_name = "diffServTBParamTable"; is_top_level_class = false; has_list_ancestor = false;
}

DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::~Diffservtbparamentry()
{
}

bool DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::has_data() const
{
    return diffservtbparamid.is_set
	|| diffservtbparamburstsize.is_set
	|| diffservtbparaminterval.is_set
	|| diffservtbparamrate.is_set
	|| diffservtbparamstatus.is_set
	|| diffservtbparamstorage.is_set
	|| diffservtbparamtype.is_set;
}

bool DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservtbparamid.yfilter)
	|| ydk::is_set(diffservtbparamburstsize.yfilter)
	|| ydk::is_set(diffservtbparaminterval.yfilter)
	|| ydk::is_set(diffservtbparamrate.yfilter)
	|| ydk::is_set(diffservtbparamstatus.yfilter)
	|| ydk::is_set(diffservtbparamstorage.yfilter)
	|| ydk::is_set(diffservtbparamtype.yfilter);
}

std::string DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServTBParamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamEntry" <<"[diffServTBParamId='" <<diffservtbparamid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamid.is_set || is_set(diffservtbparamid.yfilter)) leaf_name_data.push_back(diffservtbparamid.get_name_leafdata());
    if (diffservtbparamburstsize.is_set || is_set(diffservtbparamburstsize.yfilter)) leaf_name_data.push_back(diffservtbparamburstsize.get_name_leafdata());
    if (diffservtbparaminterval.is_set || is_set(diffservtbparaminterval.yfilter)) leaf_name_data.push_back(diffservtbparaminterval.get_name_leafdata());
    if (diffservtbparamrate.is_set || is_set(diffservtbparamrate.yfilter)) leaf_name_data.push_back(diffservtbparamrate.get_name_leafdata());
    if (diffservtbparamstatus.is_set || is_set(diffservtbparamstatus.yfilter)) leaf_name_data.push_back(diffservtbparamstatus.get_name_leafdata());
    if (diffservtbparamstorage.is_set || is_set(diffservtbparamstorage.yfilter)) leaf_name_data.push_back(diffservtbparamstorage.get_name_leafdata());
    if (diffservtbparamtype.is_set || is_set(diffservtbparamtype.yfilter)) leaf_name_data.push_back(diffservtbparamtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServTBParamId")
    {
        diffservtbparamid = value;
        diffservtbparamid.value_namespace = name_space;
        diffservtbparamid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamBurstSize")
    {
        diffservtbparamburstsize = value;
        diffservtbparamburstsize.value_namespace = name_space;
        diffservtbparamburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamInterval")
    {
        diffservtbparaminterval = value;
        diffservtbparaminterval.value_namespace = name_space;
        diffservtbparaminterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamRate")
    {
        diffservtbparamrate = value;
        diffservtbparamrate.value_namespace = name_space;
        diffservtbparamrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamStatus")
    {
        diffservtbparamstatus = value;
        diffservtbparamstatus.value_namespace = name_space;
        diffservtbparamstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamStorage")
    {
        diffservtbparamstorage = value;
        diffservtbparamstorage.value_namespace = name_space;
        diffservtbparamstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamType")
    {
        diffservtbparamtype = value;
        diffservtbparamtype.value_namespace = name_space;
        diffservtbparamtype.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServTBParamId")
    {
        diffservtbparamid.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamBurstSize")
    {
        diffservtbparamburstsize.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamInterval")
    {
        diffservtbparaminterval.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamRate")
    {
        diffservtbparamrate.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamStatus")
    {
        diffservtbparamstatus.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamStorage")
    {
        diffservtbparamstorage.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamType")
    {
        diffservtbparamtype.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamId" || name == "diffServTBParamBurstSize" || name == "diffServTBParamInterval" || name == "diffServTBParamRate" || name == "diffServTBParamStatus" || name == "diffServTBParamStorage" || name == "diffServTBParamType")
        return true;
    return false;
}

Diffservschedulerpriority::Diffservschedulerpriority()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerPriority")
{

}

Diffservschedulerpriority::~Diffservschedulerpriority()
{
}

Diffservschedulerwfq::Diffservschedulerwfq()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerWFQ")
{

}

Diffservschedulerwfq::~Diffservschedulerwfq()
{
}

Diffservschedulerwrr::Diffservschedulerwrr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerWRR")
{

}

Diffservschedulerwrr::~Diffservschedulerwrr()
{
}

Diffservtbparamavgrate::Diffservtbparamavgrate()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamAvgRate")
{

}

Diffservtbparamavgrate::~Diffservtbparamavgrate()
{
}

Diffservtbparamsimpletokenbucket::Diffservtbparamsimpletokenbucket()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSimpleTokenBucket")
{

}

Diffservtbparamsimpletokenbucket::~Diffservtbparamsimpletokenbucket()
{
}

Diffservtbparamsrtcmaware::Diffservtbparamsrtcmaware()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSrTCMAware")
{

}

Diffservtbparamsrtcmaware::~Diffservtbparamsrtcmaware()
{
}

Diffservtbparamsrtcmblind::Diffservtbparamsrtcmblind()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSrTCMBlind")
{

}

Diffservtbparamsrtcmblind::~Diffservtbparamsrtcmblind()
{
}

Diffservtbparamtrtcmaware::Diffservtbparamtrtcmaware()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTrTCMAware")
{

}

Diffservtbparamtrtcmaware::~Diffservtbparamtrtcmaware()
{
}

Diffservtbparamtrtcmblind::Diffservtbparamtrtcmblind()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTrTCMBlind")
{

}

Diffservtbparamtrtcmblind::~Diffservtbparamtrtcmblind()
{
}

Diffservtbparamtswtcm::Diffservtbparamtswtcm()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTswTCM")
{

}

Diffservtbparamtswtcm::~Diffservtbparamtswtcm()
{
}

const Enum::YLeaf IfDirection::inbound {1, "inbound"};
const Enum::YLeaf IfDirection::outbound {2, "outbound"};

const Enum::YLeaf DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype::other {1, "other"};
const Enum::YLeaf DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype::tailDrop {2, "tailDrop"};
const Enum::YLeaf DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype::headDrop {3, "headDrop"};
const Enum::YLeaf DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype::randomDrop {4, "randomDrop"};
const Enum::YLeaf DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype::alwaysDrop {5, "alwaysDrop"};


}
}

