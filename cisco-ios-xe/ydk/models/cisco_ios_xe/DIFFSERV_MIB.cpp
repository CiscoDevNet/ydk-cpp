
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIFFSERV_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DIFFSERV_MIB {

DiffServTBParamSimpleTokenBucket::DiffServTBParamSimpleTokenBucket()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSimpleTokenBucket")
{

}

DiffServTBParamSimpleTokenBucket::~DiffServTBParamSimpleTokenBucket()
{
}

DiffServTBParamAvgRate::DiffServTBParamAvgRate()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamAvgRate")
{

}

DiffServTBParamAvgRate::~DiffServTBParamAvgRate()
{
}

DiffServTBParamSrTCMBlind::DiffServTBParamSrTCMBlind()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSrTCMBlind")
{

}

DiffServTBParamSrTCMBlind::~DiffServTBParamSrTCMBlind()
{
}

DiffServTBParamSrTCMAware::DiffServTBParamSrTCMAware()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamSrTCMAware")
{

}

DiffServTBParamSrTCMAware::~DiffServTBParamSrTCMAware()
{
}

DiffServTBParamTrTCMBlind::DiffServTBParamTrTCMBlind()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTrTCMBlind")
{

}

DiffServTBParamTrTCMBlind::~DiffServTBParamTrTCMBlind()
{
}

DiffServTBParamTrTCMAware::DiffServTBParamTrTCMAware()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTrTCMAware")
{

}

DiffServTBParamTrTCMAware::~DiffServTBParamTrTCMAware()
{
}

DiffServTBParamTswTCM::DiffServTBParamTswTCM()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServTBParamTswTCM")
{

}

DiffServTBParamTswTCM::~DiffServTBParamTswTCM()
{
}

DiffServSchedulerPriority::DiffServSchedulerPriority()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerPriority")
{

}

DiffServSchedulerPriority::~DiffServSchedulerPriority()
{
}

DiffServSchedulerWRR::DiffServSchedulerWRR()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerWRR")
{

}

DiffServSchedulerWRR::~DiffServSchedulerWRR()
{
}

DiffServSchedulerWFQ::DiffServSchedulerWFQ()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB", "DIFFSERV-MIB", "DIFFSERV-MIB:diffServSchedulerWFQ")
{

}

DiffServSchedulerWFQ::~DiffServSchedulerWFQ()
{
}

DIFFSERVMIB::DIFFSERVMIB()
    :
    diffservclassifier(std::make_shared<DIFFSERVMIB::DiffServClassifier>())
    , diffservmeter(std::make_shared<DIFFSERVMIB::DiffServMeter>())
    , diffservtbparam(std::make_shared<DIFFSERVMIB::DiffServTBParam>())
    , diffservaction(std::make_shared<DIFFSERVMIB::DiffServAction>())
    , diffservalgdrop(std::make_shared<DIFFSERVMIB::DiffServAlgDrop>())
    , diffservqueue(std::make_shared<DIFFSERVMIB::DiffServQueue>())
    , diffservscheduler(std::make_shared<DIFFSERVMIB::DiffServScheduler>())
    , diffservdatapathtable(std::make_shared<DIFFSERVMIB::DiffServDataPathTable>())
    , diffservclfrtable(std::make_shared<DIFFSERVMIB::DiffServClfrTable>())
    , diffservclfrelementtable(std::make_shared<DIFFSERVMIB::DiffServClfrElementTable>())
    , diffservmultifieldclfrtable(std::make_shared<DIFFSERVMIB::DiffServMultiFieldClfrTable>())
    , diffservmetertable(std::make_shared<DIFFSERVMIB::DiffServMeterTable>())
    , diffservtbparamtable(std::make_shared<DIFFSERVMIB::DiffServTBParamTable>())
    , diffservactiontable(std::make_shared<DIFFSERVMIB::DiffServActionTable>())
    , diffservdscpmarkacttable(std::make_shared<DIFFSERVMIB::DiffServDscpMarkActTable>())
    , diffservcountacttable(std::make_shared<DIFFSERVMIB::DiffServCountActTable>())
    , diffservalgdroptable(std::make_shared<DIFFSERVMIB::DiffServAlgDropTable>())
    , diffservrandomdroptable(std::make_shared<DIFFSERVMIB::DiffServRandomDropTable>())
    , diffservqtable(std::make_shared<DIFFSERVMIB::DiffServQTable>())
    , diffservschedulertable(std::make_shared<DIFFSERVMIB::DiffServSchedulerTable>())
    , diffservminratetable(std::make_shared<DIFFSERVMIB::DiffServMinRateTable>())
    , diffservmaxratetable(std::make_shared<DIFFSERVMIB::DiffServMaxRateTable>())
{
    diffservclassifier->parent = this;
    diffservmeter->parent = this;
    diffservtbparam->parent = this;
    diffservaction->parent = this;
    diffservalgdrop->parent = this;
    diffservqueue->parent = this;
    diffservscheduler->parent = this;
    diffservdatapathtable->parent = this;
    diffservclfrtable->parent = this;
    diffservclfrelementtable->parent = this;
    diffservmultifieldclfrtable->parent = this;
    diffservmetertable->parent = this;
    diffservtbparamtable->parent = this;
    diffservactiontable->parent = this;
    diffservdscpmarkacttable->parent = this;
    diffservcountacttable->parent = this;
    diffservalgdroptable->parent = this;
    diffservrandomdroptable->parent = this;
    diffservqtable->parent = this;
    diffservschedulertable->parent = this;
    diffservminratetable->parent = this;
    diffservmaxratetable->parent = this;

    yang_name = "DIFFSERV-MIB"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DIFFSERVMIB::~DIFFSERVMIB()
{
}

bool DIFFSERVMIB::has_data() const
{
    if (is_presence_container) return true;
    return (diffservclassifier !=  nullptr && diffservclassifier->has_data())
	|| (diffservmeter !=  nullptr && diffservmeter->has_data())
	|| (diffservtbparam !=  nullptr && diffservtbparam->has_data())
	|| (diffservaction !=  nullptr && diffservaction->has_data())
	|| (diffservalgdrop !=  nullptr && diffservalgdrop->has_data())
	|| (diffservqueue !=  nullptr && diffservqueue->has_data())
	|| (diffservscheduler !=  nullptr && diffservscheduler->has_data())
	|| (diffservdatapathtable !=  nullptr && diffservdatapathtable->has_data())
	|| (diffservclfrtable !=  nullptr && diffservclfrtable->has_data())
	|| (diffservclfrelementtable !=  nullptr && diffservclfrelementtable->has_data())
	|| (diffservmultifieldclfrtable !=  nullptr && diffservmultifieldclfrtable->has_data())
	|| (diffservmetertable !=  nullptr && diffservmetertable->has_data())
	|| (diffservtbparamtable !=  nullptr && diffservtbparamtable->has_data())
	|| (diffservactiontable !=  nullptr && diffservactiontable->has_data())
	|| (diffservdscpmarkacttable !=  nullptr && diffservdscpmarkacttable->has_data())
	|| (diffservcountacttable !=  nullptr && diffservcountacttable->has_data())
	|| (diffservalgdroptable !=  nullptr && diffservalgdroptable->has_data())
	|| (diffservrandomdroptable !=  nullptr && diffservrandomdroptable->has_data())
	|| (diffservqtable !=  nullptr && diffservqtable->has_data())
	|| (diffservschedulertable !=  nullptr && diffservschedulertable->has_data())
	|| (diffservminratetable !=  nullptr && diffservminratetable->has_data())
	|| (diffservmaxratetable !=  nullptr && diffservmaxratetable->has_data());
}

bool DIFFSERVMIB::has_operation() const
{
    return is_set(yfilter)
	|| (diffservclassifier !=  nullptr && diffservclassifier->has_operation())
	|| (diffservmeter !=  nullptr && diffservmeter->has_operation())
	|| (diffservtbparam !=  nullptr && diffservtbparam->has_operation())
	|| (diffservaction !=  nullptr && diffservaction->has_operation())
	|| (diffservalgdrop !=  nullptr && diffservalgdrop->has_operation())
	|| (diffservqueue !=  nullptr && diffservqueue->has_operation())
	|| (diffservscheduler !=  nullptr && diffservscheduler->has_operation())
	|| (diffservdatapathtable !=  nullptr && diffservdatapathtable->has_operation())
	|| (diffservclfrtable !=  nullptr && diffservclfrtable->has_operation())
	|| (diffservclfrelementtable !=  nullptr && diffservclfrelementtable->has_operation())
	|| (diffservmultifieldclfrtable !=  nullptr && diffservmultifieldclfrtable->has_operation())
	|| (diffservmetertable !=  nullptr && diffservmetertable->has_operation())
	|| (diffservtbparamtable !=  nullptr && diffservtbparamtable->has_operation())
	|| (diffservactiontable !=  nullptr && diffservactiontable->has_operation())
	|| (diffservdscpmarkacttable !=  nullptr && diffservdscpmarkacttable->has_operation())
	|| (diffservcountacttable !=  nullptr && diffservcountacttable->has_operation())
	|| (diffservalgdroptable !=  nullptr && diffservalgdroptable->has_operation())
	|| (diffservrandomdroptable !=  nullptr && diffservrandomdroptable->has_operation())
	|| (diffservqtable !=  nullptr && diffservqtable->has_operation())
	|| (diffservschedulertable !=  nullptr && diffservschedulertable->has_operation())
	|| (diffservminratetable !=  nullptr && diffservminratetable->has_operation())
	|| (diffservmaxratetable !=  nullptr && diffservmaxratetable->has_operation());
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

std::shared_ptr<ydk::Entity> DIFFSERVMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClassifier")
    {
        if(diffservclassifier == nullptr)
        {
            diffservclassifier = std::make_shared<DIFFSERVMIB::DiffServClassifier>();
        }
        return diffservclassifier;
    }

    if(child_yang_name == "diffServMeter")
    {
        if(diffservmeter == nullptr)
        {
            diffservmeter = std::make_shared<DIFFSERVMIB::DiffServMeter>();
        }
        return diffservmeter;
    }

    if(child_yang_name == "diffServTBParam")
    {
        if(diffservtbparam == nullptr)
        {
            diffservtbparam = std::make_shared<DIFFSERVMIB::DiffServTBParam>();
        }
        return diffservtbparam;
    }

    if(child_yang_name == "diffServAction")
    {
        if(diffservaction == nullptr)
        {
            diffservaction = std::make_shared<DIFFSERVMIB::DiffServAction>();
        }
        return diffservaction;
    }

    if(child_yang_name == "diffServAlgDrop")
    {
        if(diffservalgdrop == nullptr)
        {
            diffservalgdrop = std::make_shared<DIFFSERVMIB::DiffServAlgDrop>();
        }
        return diffservalgdrop;
    }

    if(child_yang_name == "diffServQueue")
    {
        if(diffservqueue == nullptr)
        {
            diffservqueue = std::make_shared<DIFFSERVMIB::DiffServQueue>();
        }
        return diffservqueue;
    }

    if(child_yang_name == "diffServScheduler")
    {
        if(diffservscheduler == nullptr)
        {
            diffservscheduler = std::make_shared<DIFFSERVMIB::DiffServScheduler>();
        }
        return diffservscheduler;
    }

    if(child_yang_name == "diffServDataPathTable")
    {
        if(diffservdatapathtable == nullptr)
        {
            diffservdatapathtable = std::make_shared<DIFFSERVMIB::DiffServDataPathTable>();
        }
        return diffservdatapathtable;
    }

    if(child_yang_name == "diffServClfrTable")
    {
        if(diffservclfrtable == nullptr)
        {
            diffservclfrtable = std::make_shared<DIFFSERVMIB::DiffServClfrTable>();
        }
        return diffservclfrtable;
    }

    if(child_yang_name == "diffServClfrElementTable")
    {
        if(diffservclfrelementtable == nullptr)
        {
            diffservclfrelementtable = std::make_shared<DIFFSERVMIB::DiffServClfrElementTable>();
        }
        return diffservclfrelementtable;
    }

    if(child_yang_name == "diffServMultiFieldClfrTable")
    {
        if(diffservmultifieldclfrtable == nullptr)
        {
            diffservmultifieldclfrtable = std::make_shared<DIFFSERVMIB::DiffServMultiFieldClfrTable>();
        }
        return diffservmultifieldclfrtable;
    }

    if(child_yang_name == "diffServMeterTable")
    {
        if(diffservmetertable == nullptr)
        {
            diffservmetertable = std::make_shared<DIFFSERVMIB::DiffServMeterTable>();
        }
        return diffservmetertable;
    }

    if(child_yang_name == "diffServTBParamTable")
    {
        if(diffservtbparamtable == nullptr)
        {
            diffservtbparamtable = std::make_shared<DIFFSERVMIB::DiffServTBParamTable>();
        }
        return diffservtbparamtable;
    }

    if(child_yang_name == "diffServActionTable")
    {
        if(diffservactiontable == nullptr)
        {
            diffservactiontable = std::make_shared<DIFFSERVMIB::DiffServActionTable>();
        }
        return diffservactiontable;
    }

    if(child_yang_name == "diffServDscpMarkActTable")
    {
        if(diffservdscpmarkacttable == nullptr)
        {
            diffservdscpmarkacttable = std::make_shared<DIFFSERVMIB::DiffServDscpMarkActTable>();
        }
        return diffservdscpmarkacttable;
    }

    if(child_yang_name == "diffServCountActTable")
    {
        if(diffservcountacttable == nullptr)
        {
            diffservcountacttable = std::make_shared<DIFFSERVMIB::DiffServCountActTable>();
        }
        return diffservcountacttable;
    }

    if(child_yang_name == "diffServAlgDropTable")
    {
        if(diffservalgdroptable == nullptr)
        {
            diffservalgdroptable = std::make_shared<DIFFSERVMIB::DiffServAlgDropTable>();
        }
        return diffservalgdroptable;
    }

    if(child_yang_name == "diffServRandomDropTable")
    {
        if(diffservrandomdroptable == nullptr)
        {
            diffservrandomdroptable = std::make_shared<DIFFSERVMIB::DiffServRandomDropTable>();
        }
        return diffservrandomdroptable;
    }

    if(child_yang_name == "diffServQTable")
    {
        if(diffservqtable == nullptr)
        {
            diffservqtable = std::make_shared<DIFFSERVMIB::DiffServQTable>();
        }
        return diffservqtable;
    }

    if(child_yang_name == "diffServSchedulerTable")
    {
        if(diffservschedulertable == nullptr)
        {
            diffservschedulertable = std::make_shared<DIFFSERVMIB::DiffServSchedulerTable>();
        }
        return diffservschedulertable;
    }

    if(child_yang_name == "diffServMinRateTable")
    {
        if(diffservminratetable == nullptr)
        {
            diffservminratetable = std::make_shared<DIFFSERVMIB::DiffServMinRateTable>();
        }
        return diffservminratetable;
    }

    if(child_yang_name == "diffServMaxRateTable")
    {
        if(diffservmaxratetable == nullptr)
        {
            diffservmaxratetable = std::make_shared<DIFFSERVMIB::DiffServMaxRateTable>();
        }
        return diffservmaxratetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(diffservclassifier != nullptr)
    {
        _children["diffServClassifier"] = diffservclassifier;
    }

    if(diffservmeter != nullptr)
    {
        _children["diffServMeter"] = diffservmeter;
    }

    if(diffservtbparam != nullptr)
    {
        _children["diffServTBParam"] = diffservtbparam;
    }

    if(diffservaction != nullptr)
    {
        _children["diffServAction"] = diffservaction;
    }

    if(diffservalgdrop != nullptr)
    {
        _children["diffServAlgDrop"] = diffservalgdrop;
    }

    if(diffservqueue != nullptr)
    {
        _children["diffServQueue"] = diffservqueue;
    }

    if(diffservscheduler != nullptr)
    {
        _children["diffServScheduler"] = diffservscheduler;
    }

    if(diffservdatapathtable != nullptr)
    {
        _children["diffServDataPathTable"] = diffservdatapathtable;
    }

    if(diffservclfrtable != nullptr)
    {
        _children["diffServClfrTable"] = diffservclfrtable;
    }

    if(diffservclfrelementtable != nullptr)
    {
        _children["diffServClfrElementTable"] = diffservclfrelementtable;
    }

    if(diffservmultifieldclfrtable != nullptr)
    {
        _children["diffServMultiFieldClfrTable"] = diffservmultifieldclfrtable;
    }

    if(diffservmetertable != nullptr)
    {
        _children["diffServMeterTable"] = diffservmetertable;
    }

    if(diffservtbparamtable != nullptr)
    {
        _children["diffServTBParamTable"] = diffservtbparamtable;
    }

    if(diffservactiontable != nullptr)
    {
        _children["diffServActionTable"] = diffservactiontable;
    }

    if(diffservdscpmarkacttable != nullptr)
    {
        _children["diffServDscpMarkActTable"] = diffservdscpmarkacttable;
    }

    if(diffservcountacttable != nullptr)
    {
        _children["diffServCountActTable"] = diffservcountacttable;
    }

    if(diffservalgdroptable != nullptr)
    {
        _children["diffServAlgDropTable"] = diffservalgdroptable;
    }

    if(diffservrandomdroptable != nullptr)
    {
        _children["diffServRandomDropTable"] = diffservrandomdroptable;
    }

    if(diffservqtable != nullptr)
    {
        _children["diffServQTable"] = diffservqtable;
    }

    if(diffservschedulertable != nullptr)
    {
        _children["diffServSchedulerTable"] = diffservschedulertable;
    }

    if(diffservminratetable != nullptr)
    {
        _children["diffServMinRateTable"] = diffservminratetable;
    }

    if(diffservmaxratetable != nullptr)
    {
        _children["diffServMaxRateTable"] = diffservmaxratetable;
    }

    return _children;
}

void DIFFSERVMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::clone_ptr() const
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
    if(name == "diffServClassifier" || name == "diffServMeter" || name == "diffServTBParam" || name == "diffServAction" || name == "diffServAlgDrop" || name == "diffServQueue" || name == "diffServScheduler" || name == "diffServDataPathTable" || name == "diffServClfrTable" || name == "diffServClfrElementTable" || name == "diffServMultiFieldClfrTable" || name == "diffServMeterTable" || name == "diffServTBParamTable" || name == "diffServActionTable" || name == "diffServDscpMarkActTable" || name == "diffServCountActTable" || name == "diffServAlgDropTable" || name == "diffServRandomDropTable" || name == "diffServQTable" || name == "diffServSchedulerTable" || name == "diffServMinRateTable" || name == "diffServMaxRateTable")
        return true;
    return false;
}

DIFFSERVMIB::DiffServClassifier::DiffServClassifier()
    :
    diffservclfrnextfree{YType::uint32, "diffServClfrNextFree"},
    diffservclfrelementnextfree{YType::uint32, "diffServClfrElementNextFree"},
    diffservmultifieldclfrnextfree{YType::uint32, "diffServMultiFieldClfrNextFree"}
{

    yang_name = "diffServClassifier"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServClassifier::~DiffServClassifier()
{
}

bool DIFFSERVMIB::DiffServClassifier::has_data() const
{
    if (is_presence_container) return true;
    return diffservclfrnextfree.is_set
	|| diffservclfrelementnextfree.is_set
	|| diffservmultifieldclfrnextfree.is_set;
}

bool DIFFSERVMIB::DiffServClassifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrnextfree.yfilter)
	|| ydk::is_set(diffservclfrelementnextfree.yfilter)
	|| ydk::is_set(diffservmultifieldclfrnextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServClassifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServClassifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClassifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServClassifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrnextfree.is_set || is_set(diffservclfrnextfree.yfilter)) leaf_name_data.push_back(diffservclfrnextfree.get_name_leafdata());
    if (diffservclfrelementnextfree.is_set || is_set(diffservclfrelementnextfree.yfilter)) leaf_name_data.push_back(diffservclfrelementnextfree.get_name_leafdata());
    if (diffservmultifieldclfrnextfree.is_set || is_set(diffservmultifieldclfrnextfree.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServClassifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServClassifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServClassifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServClfrNextFree")
    {
        diffservclfrnextfree = value;
        diffservclfrnextfree.value_namespace = name_space;
        diffservclfrnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementNextFree")
    {
        diffservclfrelementnextfree = value;
        diffservclfrelementnextfree.value_namespace = name_space;
        diffservclfrelementnextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrNextFree")
    {
        diffservmultifieldclfrnextfree = value;
        diffservmultifieldclfrnextfree.value_namespace = name_space;
        diffservmultifieldclfrnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServClassifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrNextFree")
    {
        diffservclfrnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementNextFree")
    {
        diffservclfrelementnextfree.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrNextFree")
    {
        diffservmultifieldclfrnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServClassifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrNextFree" || name == "diffServClfrElementNextFree" || name == "diffServMultiFieldClfrNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMeter::DiffServMeter()
    :
    diffservmeternextfree{YType::uint32, "diffServMeterNextFree"}
{

    yang_name = "diffServMeter"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMeter::~DiffServMeter()
{
}

bool DIFFSERVMIB::DiffServMeter::has_data() const
{
    if (is_presence_container) return true;
    return diffservmeternextfree.is_set;
}

bool DIFFSERVMIB::DiffServMeter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmeternextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServMeter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMeter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMeter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeternextfree.is_set || is_set(diffservmeternextfree.yfilter)) leaf_name_data.push_back(diffservmeternextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMeter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMeter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServMeter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMeterNextFree")
    {
        diffservmeternextfree = value;
        diffservmeternextfree.value_namespace = name_space;
        diffservmeternextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServMeter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMeterNextFree")
    {
        diffservmeternextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServMeter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServTBParam::DiffServTBParam()
    :
    diffservtbparamnextfree{YType::uint32, "diffServTBParamNextFree"}
{

    yang_name = "diffServTBParam"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServTBParam::~DiffServTBParam()
{
}

bool DIFFSERVMIB::DiffServTBParam::has_data() const
{
    if (is_presence_container) return true;
    return diffservtbparamnextfree.is_set;
}

bool DIFFSERVMIB::DiffServTBParam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservtbparamnextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServTBParam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServTBParam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServTBParam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamnextfree.is_set || is_set(diffservtbparamnextfree.yfilter)) leaf_name_data.push_back(diffservtbparamnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServTBParam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServTBParam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServTBParam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServTBParamNextFree")
    {
        diffservtbparamnextfree = value;
        diffservtbparamnextfree.value_namespace = name_space;
        diffservtbparamnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServTBParam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServTBParamNextFree")
    {
        diffservtbparamnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServTBParam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServAction::DiffServAction()
    :
    diffservactionnextfree{YType::uint32, "diffServActionNextFree"},
    diffservcountactnextfree{YType::uint32, "diffServCountActNextFree"}
{

    yang_name = "diffServAction"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServAction::~DiffServAction()
{
}

bool DIFFSERVMIB::DiffServAction::has_data() const
{
    if (is_presence_container) return true;
    return diffservactionnextfree.is_set
	|| diffservcountactnextfree.is_set;
}

bool DIFFSERVMIB::DiffServAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservactionnextfree.yfilter)
	|| ydk::is_set(diffservcountactnextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionnextfree.is_set || is_set(diffservactionnextfree.yfilter)) leaf_name_data.push_back(diffservactionnextfree.get_name_leafdata());
    if (diffservcountactnextfree.is_set || is_set(diffservcountactnextfree.yfilter)) leaf_name_data.push_back(diffservcountactnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DIFFSERVMIB::DiffServAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DIFFSERVMIB::DiffServAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionNextFree" || name == "diffServCountActNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServAlgDrop::DiffServAlgDrop()
    :
    diffservalgdropnextfree{YType::uint32, "diffServAlgDropNextFree"},
    diffservrandomdropnextfree{YType::uint32, "diffServRandomDropNextFree"}
{

    yang_name = "diffServAlgDrop"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServAlgDrop::~DiffServAlgDrop()
{
}

bool DIFFSERVMIB::DiffServAlgDrop::has_data() const
{
    if (is_presence_container) return true;
    return diffservalgdropnextfree.is_set
	|| diffservrandomdropnextfree.is_set;
}

bool DIFFSERVMIB::DiffServAlgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservalgdropnextfree.yfilter)
	|| ydk::is_set(diffservrandomdropnextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServAlgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServAlgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDrop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServAlgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropnextfree.is_set || is_set(diffservalgdropnextfree.yfilter)) leaf_name_data.push_back(diffservalgdropnextfree.get_name_leafdata());
    if (diffservrandomdropnextfree.is_set || is_set(diffservrandomdropnextfree.yfilter)) leaf_name_data.push_back(diffservrandomdropnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServAlgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServAlgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServAlgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DIFFSERVMIB::DiffServAlgDrop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DIFFSERVMIB::DiffServAlgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropNextFree" || name == "diffServRandomDropNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServQueue::DiffServQueue()
    :
    diffservqnextfree{YType::uint32, "diffServQNextFree"}
{

    yang_name = "diffServQueue"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServQueue::~DiffServQueue()
{
}

bool DIFFSERVMIB::DiffServQueue::has_data() const
{
    if (is_presence_container) return true;
    return diffservqnextfree.is_set;
}

bool DIFFSERVMIB::DiffServQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservqnextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServQueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqnextfree.is_set || is_set(diffservqnextfree.yfilter)) leaf_name_data.push_back(diffservqnextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServQNextFree")
    {
        diffservqnextfree = value;
        diffservqnextfree.value_namespace = name_space;
        diffservqnextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServQNextFree")
    {
        diffservqnextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServScheduler::DiffServScheduler()
    :
    diffservschedulernextfree{YType::uint32, "diffServSchedulerNextFree"},
    diffservminratenextfree{YType::uint32, "diffServMinRateNextFree"},
    diffservmaxratenextfree{YType::uint32, "diffServMaxRateNextFree"}
{

    yang_name = "diffServScheduler"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServScheduler::~DiffServScheduler()
{
}

bool DIFFSERVMIB::DiffServScheduler::has_data() const
{
    if (is_presence_container) return true;
    return diffservschedulernextfree.is_set
	|| diffservminratenextfree.is_set
	|| diffservmaxratenextfree.is_set;
}

bool DIFFSERVMIB::DiffServScheduler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservschedulernextfree.yfilter)
	|| ydk::is_set(diffservminratenextfree.yfilter)
	|| ydk::is_set(diffservmaxratenextfree.yfilter);
}

std::string DIFFSERVMIB::DiffServScheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServScheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServScheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServScheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservschedulernextfree.is_set || is_set(diffservschedulernextfree.yfilter)) leaf_name_data.push_back(diffservschedulernextfree.get_name_leafdata());
    if (diffservminratenextfree.is_set || is_set(diffservminratenextfree.yfilter)) leaf_name_data.push_back(diffservminratenextfree.get_name_leafdata());
    if (diffservmaxratenextfree.is_set || is_set(diffservmaxratenextfree.yfilter)) leaf_name_data.push_back(diffservmaxratenextfree.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServScheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServScheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServScheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServSchedulerNextFree")
    {
        diffservschedulernextfree = value;
        diffservschedulernextfree.value_namespace = name_space;
        diffservschedulernextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateNextFree")
    {
        diffservminratenextfree = value;
        diffservminratenextfree.value_namespace = name_space;
        diffservminratenextfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateNextFree")
    {
        diffservmaxratenextfree = value;
        diffservmaxratenextfree.value_namespace = name_space;
        diffservmaxratenextfree.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServScheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServSchedulerNextFree")
    {
        diffservschedulernextfree.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateNextFree")
    {
        diffservminratenextfree.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateNextFree")
    {
        diffservmaxratenextfree.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServScheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServSchedulerNextFree" || name == "diffServMinRateNextFree" || name == "diffServMaxRateNextFree")
        return true;
    return false;
}

DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathTable()
    :
    diffservdatapathentry(this, {"ifindex", "diffservdatapathifdirection"})
{

    yang_name = "diffServDataPathTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServDataPathTable::~DiffServDataPathTable()
{
}

bool DIFFSERVMIB::DiffServDataPathTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservdatapathentry.len(); index++)
    {
        if(diffservdatapathentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServDataPathTable::has_operation() const
{
    for (std::size_t index=0; index<diffservdatapathentry.len(); index++)
    {
        if(diffservdatapathentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServDataPathTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServDataPathTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServDataPathTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServDataPathTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDataPathEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry>();
        ent_->parent = this;
        diffservdatapathentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServDataPathTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservdatapathentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServDataPathTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServDataPathTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServDataPathTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDataPathEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::DiffServDataPathEntry()
    :
    ifindex{YType::str, "ifIndex"},
    diffservdatapathifdirection{YType::enumeration, "diffServDataPathIfDirection"},
    diffservdatapathstart{YType::str, "diffServDataPathStart"},
    diffservdatapathstorage{YType::enumeration, "diffServDataPathStorage"},
    diffservdatapathstatus{YType::enumeration, "diffServDataPathStatus"}
{

    yang_name = "diffServDataPathEntry"; yang_parent_name = "diffServDataPathTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::~DiffServDataPathEntry()
{
}

bool DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| diffservdatapathifdirection.is_set
	|| diffservdatapathstart.is_set
	|| diffservdatapathstorage.is_set
	|| diffservdatapathstatus.is_set;
}

bool DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(diffservdatapathifdirection.yfilter)
	|| ydk::is_set(diffservdatapathstart.yfilter)
	|| ydk::is_set(diffservdatapathstorage.yfilter)
	|| ydk::is_set(diffservdatapathstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDataPathTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(diffservdatapathifdirection, "diffServDataPathIfDirection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (diffservdatapathifdirection.is_set || is_set(diffservdatapathifdirection.yfilter)) leaf_name_data.push_back(diffservdatapathifdirection.get_name_leafdata());
    if (diffservdatapathstart.is_set || is_set(diffservdatapathstart.yfilter)) leaf_name_data.push_back(diffservdatapathstart.get_name_leafdata());
    if (diffservdatapathstorage.is_set || is_set(diffservdatapathstorage.yfilter)) leaf_name_data.push_back(diffservdatapathstorage.get_name_leafdata());
    if (diffservdatapathstatus.is_set || is_set(diffservdatapathstatus.yfilter)) leaf_name_data.push_back(diffservdatapathstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServDataPathStorage")
    {
        diffservdatapathstorage = value;
        diffservdatapathstorage.value_namespace = name_space;
        diffservdatapathstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServDataPathStatus")
    {
        diffservdatapathstatus = value;
        diffservdatapathstatus.value_namespace = name_space;
        diffservdatapathstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "diffServDataPathStorage")
    {
        diffservdatapathstorage.yfilter = yfilter;
    }
    if(value_path == "diffServDataPathStatus")
    {
        diffservdatapathstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "diffServDataPathIfDirection" || name == "diffServDataPathStart" || name == "diffServDataPathStorage" || name == "diffServDataPathStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServClfrTable::DiffServClfrTable()
    :
    diffservclfrentry(this, {"diffservclfrid"})
{

    yang_name = "diffServClfrTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServClfrTable::~DiffServClfrTable()
{
}

bool DIFFSERVMIB::DiffServClfrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservclfrentry.len(); index++)
    {
        if(diffservclfrentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServClfrTable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrentry.len(); index++)
    {
        if(diffservclfrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServClfrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServClfrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServClfrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServClfrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry>();
        ent_->parent = this;
        diffservclfrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServClfrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservclfrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServClfrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServClfrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServClfrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::DiffServClfrEntry()
    :
    diffservclfrid{YType::uint32, "diffServClfrId"},
    diffservclfrstorage{YType::enumeration, "diffServClfrStorage"},
    diffservclfrstatus{YType::enumeration, "diffServClfrStatus"}
{

    yang_name = "diffServClfrEntry"; yang_parent_name = "diffServClfrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::~DiffServClfrEntry()
{
}

bool DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservclfrid.is_set
	|| diffservclfrstorage.is_set
	|| diffservclfrstatus.is_set;
}

bool DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrid.yfilter)
	|| ydk::is_set(diffservclfrstorage.yfilter)
	|| ydk::is_set(diffservclfrstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrEntry";
    ADD_KEY_TOKEN(diffservclfrid, "diffServClfrId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.yfilter)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrstorage.is_set || is_set(diffservclfrstorage.yfilter)) leaf_name_data.push_back(diffservclfrstorage.get_name_leafdata());
    if (diffservclfrstatus.is_set || is_set(diffservclfrstatus.yfilter)) leaf_name_data.push_back(diffservclfrstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid = value;
        diffservclfrid.value_namespace = name_space;
        diffservclfrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrStorage")
    {
        diffservclfrstorage = value;
        diffservclfrstorage.value_namespace = name_space;
        diffservclfrstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrStatus")
    {
        diffservclfrstatus = value;
        diffservclfrstatus.value_namespace = name_space;
        diffservclfrstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrStorage")
    {
        diffservclfrstorage.yfilter = yfilter;
    }
    if(value_path == "diffServClfrStatus")
    {
        diffservclfrstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrId" || name == "diffServClfrStorage" || name == "diffServClfrStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementTable()
    :
    diffservclfrelemententry(this, {"diffservclfrid", "diffservclfrelementid"})
{

    yang_name = "diffServClfrElementTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServClfrElementTable::~DiffServClfrElementTable()
{
}

bool DIFFSERVMIB::DiffServClfrElementTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservclfrelemententry.len(); index++)
    {
        if(diffservclfrelemententry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServClfrElementTable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrelemententry.len(); index++)
    {
        if(diffservclfrelemententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServClfrElementTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServClfrElementTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServClfrElementTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServClfrElementTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrElementEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry>();
        ent_->parent = this;
        diffservclfrelemententry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServClfrElementTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservclfrelemententry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServClfrElementTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServClfrElementTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServClfrElementTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrElementEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::DiffServClfrElementEntry()
    :
    diffservclfrid{YType::str, "diffServClfrId"},
    diffservclfrelementid{YType::uint32, "diffServClfrElementId"},
    diffservclfrelementprecedence{YType::uint32, "diffServClfrElementPrecedence"},
    diffservclfrelementnext{YType::str, "diffServClfrElementNext"},
    diffservclfrelementspecific{YType::str, "diffServClfrElementSpecific"},
    diffservclfrelementstorage{YType::enumeration, "diffServClfrElementStorage"},
    diffservclfrelementstatus{YType::enumeration, "diffServClfrElementStatus"}
{

    yang_name = "diffServClfrElementEntry"; yang_parent_name = "diffServClfrElementTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::~DiffServClfrElementEntry()
{
}

bool DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservclfrid.is_set
	|| diffservclfrelementid.is_set
	|| diffservclfrelementprecedence.is_set
	|| diffservclfrelementnext.is_set
	|| diffservclfrelementspecific.is_set
	|| diffservclfrelementstorage.is_set
	|| diffservclfrelementstatus.is_set;
}

bool DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservclfrid.yfilter)
	|| ydk::is_set(diffservclfrelementid.yfilter)
	|| ydk::is_set(diffservclfrelementprecedence.yfilter)
	|| ydk::is_set(diffservclfrelementnext.yfilter)
	|| ydk::is_set(diffservclfrelementspecific.yfilter)
	|| ydk::is_set(diffservclfrelementstorage.yfilter)
	|| ydk::is_set(diffservclfrelementstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrElementTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementEntry";
    ADD_KEY_TOKEN(diffservclfrid, "diffServClfrId");
    ADD_KEY_TOKEN(diffservclfrelementid, "diffServClfrElementId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.yfilter)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrelementid.is_set || is_set(diffservclfrelementid.yfilter)) leaf_name_data.push_back(diffservclfrelementid.get_name_leafdata());
    if (diffservclfrelementprecedence.is_set || is_set(diffservclfrelementprecedence.yfilter)) leaf_name_data.push_back(diffservclfrelementprecedence.get_name_leafdata());
    if (diffservclfrelementnext.is_set || is_set(diffservclfrelementnext.yfilter)) leaf_name_data.push_back(diffservclfrelementnext.get_name_leafdata());
    if (diffservclfrelementspecific.is_set || is_set(diffservclfrelementspecific.yfilter)) leaf_name_data.push_back(diffservclfrelementspecific.get_name_leafdata());
    if (diffservclfrelementstorage.is_set || is_set(diffservclfrelementstorage.yfilter)) leaf_name_data.push_back(diffservclfrelementstorage.get_name_leafdata());
    if (diffservclfrelementstatus.is_set || is_set(diffservclfrelementstatus.yfilter)) leaf_name_data.push_back(diffservclfrelementstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServClfrElementPrecedence")
    {
        diffservclfrelementprecedence = value;
        diffservclfrelementprecedence.value_namespace = name_space;
        diffservclfrelementprecedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementNext")
    {
        diffservclfrelementnext = value;
        diffservclfrelementnext.value_namespace = name_space;
        diffservclfrelementnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementSpecific")
    {
        diffservclfrelementspecific = value;
        diffservclfrelementspecific.value_namespace = name_space;
        diffservclfrelementspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementStorage")
    {
        diffservclfrelementstorage = value;
        diffservclfrelementstorage.value_namespace = name_space;
        diffservclfrelementstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServClfrElementStatus")
    {
        diffservclfrelementstatus = value;
        diffservclfrelementstatus.value_namespace = name_space;
        diffservclfrelementstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementId")
    {
        diffservclfrelementid.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementPrecedence")
    {
        diffservclfrelementprecedence.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementNext")
    {
        diffservclfrelementnext.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementSpecific")
    {
        diffservclfrelementspecific.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementStorage")
    {
        diffservclfrelementstorage.yfilter = yfilter;
    }
    if(value_path == "diffServClfrElementStatus")
    {
        diffservclfrelementstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServClfrId" || name == "diffServClfrElementId" || name == "diffServClfrElementPrecedence" || name == "diffServClfrElementNext" || name == "diffServClfrElementSpecific" || name == "diffServClfrElementStorage" || name == "diffServClfrElementStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrTable()
    :
    diffservmultifieldclfrentry(this, {"diffservmultifieldclfrid"})
{

    yang_name = "diffServMultiFieldClfrTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMultiFieldClfrTable::~DiffServMultiFieldClfrTable()
{
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservmultifieldclfrentry.len(); index++)
    {
        if(diffservmultifieldclfrentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::has_operation() const
{
    for (std::size_t index=0; index<diffservmultifieldclfrentry.len(); index++)
    {
        if(diffservmultifieldclfrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServMultiFieldClfrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMultiFieldClfrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMultiFieldClfrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMultiFieldClfrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMultiFieldClfrEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry>();
        ent_->parent = this;
        diffservmultifieldclfrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMultiFieldClfrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservmultifieldclfrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServMultiFieldClfrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServMultiFieldClfrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMultiFieldClfrEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::DiffServMultiFieldClfrEntry()
    :
    diffservmultifieldclfrid{YType::uint32, "diffServMultiFieldClfrId"},
    diffservmultifieldclfraddrtype{YType::enumeration, "diffServMultiFieldClfrAddrType"},
    diffservmultifieldclfrdstaddr{YType::str, "diffServMultiFieldClfrDstAddr"},
    diffservmultifieldclfrdstprefixlength{YType::uint32, "diffServMultiFieldClfrDstPrefixLength"},
    diffservmultifieldclfrsrcaddr{YType::str, "diffServMultiFieldClfrSrcAddr"},
    diffservmultifieldclfrsrcprefixlength{YType::uint32, "diffServMultiFieldClfrSrcPrefixLength"},
    diffservmultifieldclfrdscp{YType::int32, "diffServMultiFieldClfrDscp"},
    diffservmultifieldclfrflowid{YType::uint32, "diffServMultiFieldClfrFlowId"},
    diffservmultifieldclfrprotocol{YType::uint32, "diffServMultiFieldClfrProtocol"},
    diffservmultifieldclfrdstl4portmin{YType::uint16, "diffServMultiFieldClfrDstL4PortMin"},
    diffservmultifieldclfrdstl4portmax{YType::uint16, "diffServMultiFieldClfrDstL4PortMax"},
    diffservmultifieldclfrsrcl4portmin{YType::uint16, "diffServMultiFieldClfrSrcL4PortMin"},
    diffservmultifieldclfrsrcl4portmax{YType::uint16, "diffServMultiFieldClfrSrcL4PortMax"},
    diffservmultifieldclfrstorage{YType::enumeration, "diffServMultiFieldClfrStorage"},
    diffservmultifieldclfrstatus{YType::enumeration, "diffServMultiFieldClfrStatus"}
{

    yang_name = "diffServMultiFieldClfrEntry"; yang_parent_name = "diffServMultiFieldClfrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::~DiffServMultiFieldClfrEntry()
{
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservmultifieldclfrid.is_set
	|| diffservmultifieldclfraddrtype.is_set
	|| diffservmultifieldclfrdstaddr.is_set
	|| diffservmultifieldclfrdstprefixlength.is_set
	|| diffservmultifieldclfrsrcaddr.is_set
	|| diffservmultifieldclfrsrcprefixlength.is_set
	|| diffservmultifieldclfrdscp.is_set
	|| diffservmultifieldclfrflowid.is_set
	|| diffservmultifieldclfrprotocol.is_set
	|| diffservmultifieldclfrdstl4portmin.is_set
	|| diffservmultifieldclfrdstl4portmax.is_set
	|| diffservmultifieldclfrsrcl4portmin.is_set
	|| diffservmultifieldclfrsrcl4portmax.is_set
	|| diffservmultifieldclfrstorage.is_set
	|| diffservmultifieldclfrstatus.is_set;
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmultifieldclfrid.yfilter)
	|| ydk::is_set(diffservmultifieldclfraddrtype.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstaddr.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstprefixlength.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcaddr.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcprefixlength.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdscp.yfilter)
	|| ydk::is_set(diffservmultifieldclfrflowid.yfilter)
	|| ydk::is_set(diffservmultifieldclfrprotocol.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstl4portmin.yfilter)
	|| ydk::is_set(diffservmultifieldclfrdstl4portmax.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcl4portmin.yfilter)
	|| ydk::is_set(diffservmultifieldclfrsrcl4portmax.yfilter)
	|| ydk::is_set(diffservmultifieldclfrstorage.yfilter)
	|| ydk::is_set(diffservmultifieldclfrstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMultiFieldClfrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrEntry";
    ADD_KEY_TOKEN(diffservmultifieldclfrid, "diffServMultiFieldClfrId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmultifieldclfrid.is_set || is_set(diffservmultifieldclfrid.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrid.get_name_leafdata());
    if (diffservmultifieldclfraddrtype.is_set || is_set(diffservmultifieldclfraddrtype.yfilter)) leaf_name_data.push_back(diffservmultifieldclfraddrtype.get_name_leafdata());
    if (diffservmultifieldclfrdstaddr.is_set || is_set(diffservmultifieldclfrdstaddr.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstaddr.get_name_leafdata());
    if (diffservmultifieldclfrdstprefixlength.is_set || is_set(diffservmultifieldclfrdstprefixlength.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrsrcaddr.is_set || is_set(diffservmultifieldclfrsrcaddr.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcaddr.get_name_leafdata());
    if (diffservmultifieldclfrsrcprefixlength.is_set || is_set(diffservmultifieldclfrsrcprefixlength.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrdscp.is_set || is_set(diffservmultifieldclfrdscp.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdscp.get_name_leafdata());
    if (diffservmultifieldclfrflowid.is_set || is_set(diffservmultifieldclfrflowid.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrflowid.get_name_leafdata());
    if (diffservmultifieldclfrprotocol.is_set || is_set(diffservmultifieldclfrprotocol.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrprotocol.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmin.is_set || is_set(diffservmultifieldclfrdstl4portmin.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmax.is_set || is_set(diffservmultifieldclfrdstl4portmax.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmin.is_set || is_set(diffservmultifieldclfrsrcl4portmin.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmax.is_set || is_set(diffservmultifieldclfrsrcl4portmax.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrstorage.is_set || is_set(diffservmultifieldclfrstorage.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrstorage.get_name_leafdata());
    if (diffservmultifieldclfrstatus.is_set || is_set(diffservmultifieldclfrstatus.yfilter)) leaf_name_data.push_back(diffservmultifieldclfrstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServMultiFieldClfrDstAddr")
    {
        diffservmultifieldclfrdstaddr = value;
        diffservmultifieldclfrdstaddr.value_namespace = name_space;
        diffservmultifieldclfrdstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstPrefixLength")
    {
        diffservmultifieldclfrdstprefixlength = value;
        diffservmultifieldclfrdstprefixlength.value_namespace = name_space;
        diffservmultifieldclfrdstprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcAddr")
    {
        diffservmultifieldclfrsrcaddr = value;
        diffservmultifieldclfrsrcaddr.value_namespace = name_space;
        diffservmultifieldclfrsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcPrefixLength")
    {
        diffservmultifieldclfrsrcprefixlength = value;
        diffservmultifieldclfrsrcprefixlength.value_namespace = name_space;
        diffservmultifieldclfrsrcprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDscp")
    {
        diffservmultifieldclfrdscp = value;
        diffservmultifieldclfrdscp.value_namespace = name_space;
        diffservmultifieldclfrdscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServMultiFieldClfrDstL4PortMin")
    {
        diffservmultifieldclfrdstl4portmin = value;
        diffservmultifieldclfrdstl4portmin.value_namespace = name_space;
        diffservmultifieldclfrdstl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMax")
    {
        diffservmultifieldclfrdstl4portmax = value;
        diffservmultifieldclfrdstl4portmax.value_namespace = name_space;
        diffservmultifieldclfrdstl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMin")
    {
        diffservmultifieldclfrsrcl4portmin = value;
        diffservmultifieldclfrsrcl4portmin.value_namespace = name_space;
        diffservmultifieldclfrsrcl4portmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMax")
    {
        diffservmultifieldclfrsrcl4portmax = value;
        diffservmultifieldclfrsrcl4portmax.value_namespace = name_space;
        diffservmultifieldclfrsrcl4portmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrStorage")
    {
        diffservmultifieldclfrstorage = value;
        diffservmultifieldclfrstorage.value_namespace = name_space;
        diffservmultifieldclfrstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMultiFieldClfrStatus")
    {
        diffservmultifieldclfrstatus = value;
        diffservmultifieldclfrstatus.value_namespace = name_space;
        diffservmultifieldclfrstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMultiFieldClfrId")
    {
        diffservmultifieldclfrid.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrAddrType")
    {
        diffservmultifieldclfraddrtype.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstAddr")
    {
        diffservmultifieldclfrdstaddr.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstPrefixLength")
    {
        diffservmultifieldclfrdstprefixlength.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcAddr")
    {
        diffservmultifieldclfrsrcaddr.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcPrefixLength")
    {
        diffservmultifieldclfrsrcprefixlength.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDscp")
    {
        diffservmultifieldclfrdscp.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrFlowId")
    {
        diffservmultifieldclfrflowid.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrProtocol")
    {
        diffservmultifieldclfrprotocol.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMin")
    {
        diffservmultifieldclfrdstl4portmin.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMax")
    {
        diffservmultifieldclfrdstl4portmax.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMin")
    {
        diffservmultifieldclfrsrcl4portmin.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMax")
    {
        diffservmultifieldclfrsrcl4portmax.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrStorage")
    {
        diffservmultifieldclfrstorage.yfilter = yfilter;
    }
    if(value_path == "diffServMultiFieldClfrStatus")
    {
        diffservmultifieldclfrstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMultiFieldClfrId" || name == "diffServMultiFieldClfrAddrType" || name == "diffServMultiFieldClfrDstAddr" || name == "diffServMultiFieldClfrDstPrefixLength" || name == "diffServMultiFieldClfrSrcAddr" || name == "diffServMultiFieldClfrSrcPrefixLength" || name == "diffServMultiFieldClfrDscp" || name == "diffServMultiFieldClfrFlowId" || name == "diffServMultiFieldClfrProtocol" || name == "diffServMultiFieldClfrDstL4PortMin" || name == "diffServMultiFieldClfrDstL4PortMax" || name == "diffServMultiFieldClfrSrcL4PortMin" || name == "diffServMultiFieldClfrSrcL4PortMax" || name == "diffServMultiFieldClfrStorage" || name == "diffServMultiFieldClfrStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMeterTable::DiffServMeterTable()
    :
    diffservmeterentry(this, {"diffservmeterid"})
{

    yang_name = "diffServMeterTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMeterTable::~DiffServMeterTable()
{
}

bool DIFFSERVMIB::DiffServMeterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservmeterentry.len(); index++)
    {
        if(diffservmeterentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServMeterTable::has_operation() const
{
    for (std::size_t index=0; index<diffservmeterentry.len(); index++)
    {
        if(diffservmeterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServMeterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMeterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMeterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMeterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMeterEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry>();
        ent_->parent = this;
        diffservmeterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMeterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservmeterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServMeterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServMeterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServMeterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::DiffServMeterEntry()
    :
    diffservmeterid{YType::uint32, "diffServMeterId"},
    diffservmetersucceednext{YType::str, "diffServMeterSucceedNext"},
    diffservmeterfailnext{YType::str, "diffServMeterFailNext"},
    diffservmeterspecific{YType::str, "diffServMeterSpecific"},
    diffservmeterstorage{YType::enumeration, "diffServMeterStorage"},
    diffservmeterstatus{YType::enumeration, "diffServMeterStatus"}
{

    yang_name = "diffServMeterEntry"; yang_parent_name = "diffServMeterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::~DiffServMeterEntry()
{
}

bool DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservmeterid.is_set
	|| diffservmetersucceednext.is_set
	|| diffservmeterfailnext.is_set
	|| diffservmeterspecific.is_set
	|| diffservmeterstorage.is_set
	|| diffservmeterstatus.is_set;
}

bool DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmeterid.yfilter)
	|| ydk::is_set(diffservmetersucceednext.yfilter)
	|| ydk::is_set(diffservmeterfailnext.yfilter)
	|| ydk::is_set(diffservmeterspecific.yfilter)
	|| ydk::is_set(diffservmeterstorage.yfilter)
	|| ydk::is_set(diffservmeterstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMeterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterEntry";
    ADD_KEY_TOKEN(diffservmeterid, "diffServMeterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeterid.is_set || is_set(diffservmeterid.yfilter)) leaf_name_data.push_back(diffservmeterid.get_name_leafdata());
    if (diffservmetersucceednext.is_set || is_set(diffservmetersucceednext.yfilter)) leaf_name_data.push_back(diffservmetersucceednext.get_name_leafdata());
    if (diffservmeterfailnext.is_set || is_set(diffservmeterfailnext.yfilter)) leaf_name_data.push_back(diffservmeterfailnext.get_name_leafdata());
    if (diffservmeterspecific.is_set || is_set(diffservmeterspecific.yfilter)) leaf_name_data.push_back(diffservmeterspecific.get_name_leafdata());
    if (diffservmeterstorage.is_set || is_set(diffservmeterstorage.yfilter)) leaf_name_data.push_back(diffservmeterstorage.get_name_leafdata());
    if (diffservmeterstatus.is_set || is_set(diffservmeterstatus.yfilter)) leaf_name_data.push_back(diffservmeterstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMeterId")
    {
        diffservmeterid = value;
        diffservmeterid.value_namespace = name_space;
        diffservmeterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterSucceedNext")
    {
        diffservmetersucceednext = value;
        diffservmetersucceednext.value_namespace = name_space;
        diffservmetersucceednext.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServMeterStorage")
    {
        diffservmeterstorage = value;
        diffservmeterstorage.value_namespace = name_space;
        diffservmeterstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMeterStatus")
    {
        diffservmeterstatus = value;
        diffservmeterstatus.value_namespace = name_space;
        diffservmeterstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMeterId")
    {
        diffservmeterid.yfilter = yfilter;
    }
    if(value_path == "diffServMeterSucceedNext")
    {
        diffservmetersucceednext.yfilter = yfilter;
    }
    if(value_path == "diffServMeterFailNext")
    {
        diffservmeterfailnext.yfilter = yfilter;
    }
    if(value_path == "diffServMeterSpecific")
    {
        diffservmeterspecific.yfilter = yfilter;
    }
    if(value_path == "diffServMeterStorage")
    {
        diffservmeterstorage.yfilter = yfilter;
    }
    if(value_path == "diffServMeterStatus")
    {
        diffservmeterstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMeterId" || name == "diffServMeterSucceedNext" || name == "diffServMeterFailNext" || name == "diffServMeterSpecific" || name == "diffServMeterStorage" || name == "diffServMeterStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamTable()
    :
    diffservtbparamentry(this, {"diffservtbparamid"})
{

    yang_name = "diffServTBParamTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServTBParamTable::~DiffServTBParamTable()
{
}

bool DIFFSERVMIB::DiffServTBParamTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservtbparamentry.len(); index++)
    {
        if(diffservtbparamentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServTBParamTable::has_operation() const
{
    for (std::size_t index=0; index<diffservtbparamentry.len(); index++)
    {
        if(diffservtbparamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServTBParamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServTBParamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServTBParamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServTBParamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServTBParamEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry>();
        ent_->parent = this;
        diffservtbparamentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServTBParamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservtbparamentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServTBParamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServTBParamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServTBParamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::DiffServTBParamEntry()
    :
    diffservtbparamid{YType::uint32, "diffServTBParamId"},
    diffservtbparamtype{YType::str, "diffServTBParamType"},
    diffservtbparamrate{YType::uint32, "diffServTBParamRate"},
    diffservtbparamburstsize{YType::int32, "diffServTBParamBurstSize"},
    diffservtbparaminterval{YType::uint32, "diffServTBParamInterval"},
    diffservtbparamstorage{YType::enumeration, "diffServTBParamStorage"},
    diffservtbparamstatus{YType::enumeration, "diffServTBParamStatus"}
{

    yang_name = "diffServTBParamEntry"; yang_parent_name = "diffServTBParamTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::~DiffServTBParamEntry()
{
}

bool DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservtbparamid.is_set
	|| diffservtbparamtype.is_set
	|| diffservtbparamrate.is_set
	|| diffservtbparamburstsize.is_set
	|| diffservtbparaminterval.is_set
	|| diffservtbparamstorage.is_set
	|| diffservtbparamstatus.is_set;
}

bool DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservtbparamid.yfilter)
	|| ydk::is_set(diffservtbparamtype.yfilter)
	|| ydk::is_set(diffservtbparamrate.yfilter)
	|| ydk::is_set(diffservtbparamburstsize.yfilter)
	|| ydk::is_set(diffservtbparaminterval.yfilter)
	|| ydk::is_set(diffservtbparamstorage.yfilter)
	|| ydk::is_set(diffservtbparamstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServTBParamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamEntry";
    ADD_KEY_TOKEN(diffservtbparamid, "diffServTBParamId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamid.is_set || is_set(diffservtbparamid.yfilter)) leaf_name_data.push_back(diffservtbparamid.get_name_leafdata());
    if (diffservtbparamtype.is_set || is_set(diffservtbparamtype.yfilter)) leaf_name_data.push_back(diffservtbparamtype.get_name_leafdata());
    if (diffservtbparamrate.is_set || is_set(diffservtbparamrate.yfilter)) leaf_name_data.push_back(diffservtbparamrate.get_name_leafdata());
    if (diffservtbparamburstsize.is_set || is_set(diffservtbparamburstsize.yfilter)) leaf_name_data.push_back(diffservtbparamburstsize.get_name_leafdata());
    if (diffservtbparaminterval.is_set || is_set(diffservtbparaminterval.yfilter)) leaf_name_data.push_back(diffservtbparaminterval.get_name_leafdata());
    if (diffservtbparamstorage.is_set || is_set(diffservtbparamstorage.yfilter)) leaf_name_data.push_back(diffservtbparamstorage.get_name_leafdata());
    if (diffservtbparamstatus.is_set || is_set(diffservtbparamstatus.yfilter)) leaf_name_data.push_back(diffservtbparamstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServTBParamId")
    {
        diffservtbparamid = value;
        diffservtbparamid.value_namespace = name_space;
        diffservtbparamid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamType")
    {
        diffservtbparamtype = value;
        diffservtbparamtype.value_namespace = name_space;
        diffservtbparamtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamRate")
    {
        diffservtbparamrate = value;
        diffservtbparamrate.value_namespace = name_space;
        diffservtbparamrate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServTBParamStorage")
    {
        diffservtbparamstorage = value;
        diffservtbparamstorage.value_namespace = name_space;
        diffservtbparamstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServTBParamStatus")
    {
        diffservtbparamstatus = value;
        diffservtbparamstatus.value_namespace = name_space;
        diffservtbparamstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServTBParamId")
    {
        diffservtbparamid.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamType")
    {
        diffservtbparamtype.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamRate")
    {
        diffservtbparamrate.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamBurstSize")
    {
        diffservtbparamburstsize.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamInterval")
    {
        diffservtbparaminterval.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamStorage")
    {
        diffservtbparamstorage.yfilter = yfilter;
    }
    if(value_path == "diffServTBParamStatus")
    {
        diffservtbparamstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServTBParamId" || name == "diffServTBParamType" || name == "diffServTBParamRate" || name == "diffServTBParamBurstSize" || name == "diffServTBParamInterval" || name == "diffServTBParamStorage" || name == "diffServTBParamStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServActionTable::DiffServActionTable()
    :
    diffservactionentry(this, {"diffservactionid"})
{

    yang_name = "diffServActionTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServActionTable::~DiffServActionTable()
{
}

bool DIFFSERVMIB::DiffServActionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservactionentry.len(); index++)
    {
        if(diffservactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServActionTable::has_operation() const
{
    for (std::size_t index=0; index<diffservactionentry.len(); index++)
    {
        if(diffservactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServActionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServActionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServActionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServActionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServActionEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServActionTable::DiffServActionEntry>();
        ent_->parent = this;
        diffservactionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServActionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservactionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServActionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServActionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServActionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::DiffServActionEntry()
    :
    diffservactionid{YType::uint32, "diffServActionId"},
    diffservactioninterface{YType::int32, "diffServActionInterface"},
    diffservactionnext{YType::str, "diffServActionNext"},
    diffservactionspecific{YType::str, "diffServActionSpecific"},
    diffservactionstorage{YType::enumeration, "diffServActionStorage"},
    diffservactionstatus{YType::enumeration, "diffServActionStatus"}
{

    yang_name = "diffServActionEntry"; yang_parent_name = "diffServActionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::~DiffServActionEntry()
{
}

bool DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservactionid.is_set
	|| diffservactioninterface.is_set
	|| diffservactionnext.is_set
	|| diffservactionspecific.is_set
	|| diffservactionstorage.is_set
	|| diffservactionstatus.is_set;
}

bool DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservactionid.yfilter)
	|| ydk::is_set(diffservactioninterface.yfilter)
	|| ydk::is_set(diffservactionnext.yfilter)
	|| ydk::is_set(diffservactionspecific.yfilter)
	|| ydk::is_set(diffservactionstorage.yfilter)
	|| ydk::is_set(diffservactionstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionEntry";
    ADD_KEY_TOKEN(diffservactionid, "diffServActionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionid.is_set || is_set(diffservactionid.yfilter)) leaf_name_data.push_back(diffservactionid.get_name_leafdata());
    if (diffservactioninterface.is_set || is_set(diffservactioninterface.yfilter)) leaf_name_data.push_back(diffservactioninterface.get_name_leafdata());
    if (diffservactionnext.is_set || is_set(diffservactionnext.yfilter)) leaf_name_data.push_back(diffservactionnext.get_name_leafdata());
    if (diffservactionspecific.is_set || is_set(diffservactionspecific.yfilter)) leaf_name_data.push_back(diffservactionspecific.get_name_leafdata());
    if (diffservactionstorage.is_set || is_set(diffservactionstorage.yfilter)) leaf_name_data.push_back(diffservactionstorage.get_name_leafdata());
    if (diffservactionstatus.is_set || is_set(diffservactionstatus.yfilter)) leaf_name_data.push_back(diffservactionstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServActionStorage")
    {
        diffservactionstorage = value;
        diffservactionstorage.value_namespace = name_space;
        diffservactionstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServActionStatus")
    {
        diffservactionstatus = value;
        diffservactionstatus.value_namespace = name_space;
        diffservactionstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "diffServActionStorage")
    {
        diffservactionstorage.yfilter = yfilter;
    }
    if(value_path == "diffServActionStatus")
    {
        diffservactionstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServActionTable::DiffServActionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServActionId" || name == "diffServActionInterface" || name == "diffServActionNext" || name == "diffServActionSpecific" || name == "diffServActionStorage" || name == "diffServActionStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActTable()
    :
    diffservdscpmarkactentry(this, {"diffservdscpmarkactdscp"})
{

    yang_name = "diffServDscpMarkActTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServDscpMarkActTable::~DiffServDscpMarkActTable()
{
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservdscpmarkactentry.len(); index++)
    {
        if(diffservdscpmarkactentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::has_operation() const
{
    for (std::size_t index=0; index<diffservdscpmarkactentry.len(); index++)
    {
        if(diffservdscpmarkactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServDscpMarkActTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServDscpMarkActTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServDscpMarkActTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServDscpMarkActTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDscpMarkActEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry>();
        ent_->parent = this;
        diffservdscpmarkactentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServDscpMarkActTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservdscpmarkactentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServDscpMarkActTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServDscpMarkActTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDscpMarkActEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::DiffServDscpMarkActEntry()
    :
    diffservdscpmarkactdscp{YType::uint8, "diffServDscpMarkActDscp"}
{

    yang_name = "diffServDscpMarkActEntry"; yang_parent_name = "diffServDscpMarkActTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::~DiffServDscpMarkActEntry()
{
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservdscpmarkactdscp.is_set;
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservdscpmarkactdscp.yfilter);
}

std::string DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDscpMarkActTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActEntry";
    ADD_KEY_TOKEN(diffservdscpmarkactdscp, "diffServDscpMarkActDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservdscpmarkactdscp.is_set || is_set(diffservdscpmarkactdscp.yfilter)) leaf_name_data.push_back(diffservdscpmarkactdscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServDscpMarkActDscp")
    {
        diffservdscpmarkactdscp = value;
        diffservdscpmarkactdscp.value_namespace = name_space;
        diffservdscpmarkactdscp.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServDscpMarkActDscp")
    {
        diffservdscpmarkactdscp.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServDscpMarkActDscp")
        return true;
    return false;
}

DIFFSERVMIB::DiffServCountActTable::DiffServCountActTable()
    :
    diffservcountactentry(this, {"diffservcountactid"})
{

    yang_name = "diffServCountActTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServCountActTable::~DiffServCountActTable()
{
}

bool DIFFSERVMIB::DiffServCountActTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservcountactentry.len(); index++)
    {
        if(diffservcountactentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServCountActTable::has_operation() const
{
    for (std::size_t index=0; index<diffservcountactentry.len(); index++)
    {
        if(diffservcountactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServCountActTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServCountActTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServCountActTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServCountActTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServCountActEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry>();
        ent_->parent = this;
        diffservcountactentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServCountActTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservcountactentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServCountActTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServCountActTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServCountActTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServCountActEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::DiffServCountActEntry()
    :
    diffservcountactid{YType::uint32, "diffServCountActId"},
    diffservcountactoctets{YType::uint64, "diffServCountActOctets"},
    diffservcountactpkts{YType::uint64, "diffServCountActPkts"},
    diffservcountactstorage{YType::enumeration, "diffServCountActStorage"},
    diffservcountactstatus{YType::enumeration, "diffServCountActStatus"}
{

    yang_name = "diffServCountActEntry"; yang_parent_name = "diffServCountActTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::~DiffServCountActEntry()
{
}

bool DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservcountactid.is_set
	|| diffservcountactoctets.is_set
	|| diffservcountactpkts.is_set
	|| diffservcountactstorage.is_set
	|| diffservcountactstatus.is_set;
}

bool DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservcountactid.yfilter)
	|| ydk::is_set(diffservcountactoctets.yfilter)
	|| ydk::is_set(diffservcountactpkts.yfilter)
	|| ydk::is_set(diffservcountactstorage.yfilter)
	|| ydk::is_set(diffservcountactstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServCountActTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActEntry";
    ADD_KEY_TOKEN(diffservcountactid, "diffServCountActId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservcountactid.is_set || is_set(diffservcountactid.yfilter)) leaf_name_data.push_back(diffservcountactid.get_name_leafdata());
    if (diffservcountactoctets.is_set || is_set(diffservcountactoctets.yfilter)) leaf_name_data.push_back(diffservcountactoctets.get_name_leafdata());
    if (diffservcountactpkts.is_set || is_set(diffservcountactpkts.yfilter)) leaf_name_data.push_back(diffservcountactpkts.get_name_leafdata());
    if (diffservcountactstorage.is_set || is_set(diffservcountactstorage.yfilter)) leaf_name_data.push_back(diffservcountactstorage.get_name_leafdata());
    if (diffservcountactstatus.is_set || is_set(diffservcountactstatus.yfilter)) leaf_name_data.push_back(diffservcountactstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServCountActStorage")
    {
        diffservcountactstorage = value;
        diffservcountactstorage.value_namespace = name_space;
        diffservcountactstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServCountActStatus")
    {
        diffservcountactstatus = value;
        diffservcountactstatus.value_namespace = name_space;
        diffservcountactstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "diffServCountActStorage")
    {
        diffservcountactstorage.yfilter = yfilter;
    }
    if(value_path == "diffServCountActStatus")
    {
        diffservcountactstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServCountActId" || name == "diffServCountActOctets" || name == "diffServCountActPkts" || name == "diffServCountActStorage" || name == "diffServCountActStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropTable()
    :
    diffservalgdropentry(this, {"diffservalgdropid"})
{

    yang_name = "diffServAlgDropTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServAlgDropTable::~DiffServAlgDropTable()
{
}

bool DIFFSERVMIB::DiffServAlgDropTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservalgdropentry.len(); index++)
    {
        if(diffservalgdropentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServAlgDropTable::has_operation() const
{
    for (std::size_t index=0; index<diffservalgdropentry.len(); index++)
    {
        if(diffservalgdropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServAlgDropTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServAlgDropTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServAlgDropTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServAlgDropTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServAlgDropEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry>();
        ent_->parent = this;
        diffservalgdropentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServAlgDropTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservalgdropentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServAlgDropTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServAlgDropTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServAlgDropTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropEntry()
    :
    diffservalgdropid{YType::uint32, "diffServAlgDropId"},
    diffservalgdroptype{YType::enumeration, "diffServAlgDropType"},
    diffservalgdropnext{YType::str, "diffServAlgDropNext"},
    diffservalgdropqmeasure{YType::str, "diffServAlgDropQMeasure"},
    diffservalgdropqthreshold{YType::uint32, "diffServAlgDropQThreshold"},
    diffservalgdropspecific{YType::str, "diffServAlgDropSpecific"},
    diffservalgdropoctets{YType::uint64, "diffServAlgDropOctets"},
    diffservalgdroppkts{YType::uint64, "diffServAlgDropPkts"},
    diffservalgrandomdropoctets{YType::uint64, "diffServAlgRandomDropOctets"},
    diffservalgrandomdroppkts{YType::uint64, "diffServAlgRandomDropPkts"},
    diffservalgdropstorage{YType::enumeration, "diffServAlgDropStorage"},
    diffservalgdropstatus{YType::enumeration, "diffServAlgDropStatus"}
{

    yang_name = "diffServAlgDropEntry"; yang_parent_name = "diffServAlgDropTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::~DiffServAlgDropEntry()
{
}

bool DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservalgdropid.is_set
	|| diffservalgdroptype.is_set
	|| diffservalgdropnext.is_set
	|| diffservalgdropqmeasure.is_set
	|| diffservalgdropqthreshold.is_set
	|| diffservalgdropspecific.is_set
	|| diffservalgdropoctets.is_set
	|| diffservalgdroppkts.is_set
	|| diffservalgrandomdropoctets.is_set
	|| diffservalgrandomdroppkts.is_set
	|| diffservalgdropstorage.is_set
	|| diffservalgdropstatus.is_set;
}

bool DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservalgdropid.yfilter)
	|| ydk::is_set(diffservalgdroptype.yfilter)
	|| ydk::is_set(diffservalgdropnext.yfilter)
	|| ydk::is_set(diffservalgdropqmeasure.yfilter)
	|| ydk::is_set(diffservalgdropqthreshold.yfilter)
	|| ydk::is_set(diffservalgdropspecific.yfilter)
	|| ydk::is_set(diffservalgdropoctets.yfilter)
	|| ydk::is_set(diffservalgdroppkts.yfilter)
	|| ydk::is_set(diffservalgrandomdropoctets.yfilter)
	|| ydk::is_set(diffservalgrandomdroppkts.yfilter)
	|| ydk::is_set(diffservalgdropstorage.yfilter)
	|| ydk::is_set(diffservalgdropstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServAlgDropTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropEntry";
    ADD_KEY_TOKEN(diffservalgdropid, "diffServAlgDropId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropid.is_set || is_set(diffservalgdropid.yfilter)) leaf_name_data.push_back(diffservalgdropid.get_name_leafdata());
    if (diffservalgdroptype.is_set || is_set(diffservalgdroptype.yfilter)) leaf_name_data.push_back(diffservalgdroptype.get_name_leafdata());
    if (diffservalgdropnext.is_set || is_set(diffservalgdropnext.yfilter)) leaf_name_data.push_back(diffservalgdropnext.get_name_leafdata());
    if (diffservalgdropqmeasure.is_set || is_set(diffservalgdropqmeasure.yfilter)) leaf_name_data.push_back(diffservalgdropqmeasure.get_name_leafdata());
    if (diffservalgdropqthreshold.is_set || is_set(diffservalgdropqthreshold.yfilter)) leaf_name_data.push_back(diffservalgdropqthreshold.get_name_leafdata());
    if (diffservalgdropspecific.is_set || is_set(diffservalgdropspecific.yfilter)) leaf_name_data.push_back(diffservalgdropspecific.get_name_leafdata());
    if (diffservalgdropoctets.is_set || is_set(diffservalgdropoctets.yfilter)) leaf_name_data.push_back(diffservalgdropoctets.get_name_leafdata());
    if (diffservalgdroppkts.is_set || is_set(diffservalgdroppkts.yfilter)) leaf_name_data.push_back(diffservalgdroppkts.get_name_leafdata());
    if (diffservalgrandomdropoctets.is_set || is_set(diffservalgrandomdropoctets.yfilter)) leaf_name_data.push_back(diffservalgrandomdropoctets.get_name_leafdata());
    if (diffservalgrandomdroppkts.is_set || is_set(diffservalgrandomdroppkts.yfilter)) leaf_name_data.push_back(diffservalgrandomdroppkts.get_name_leafdata());
    if (diffservalgdropstorage.is_set || is_set(diffservalgdropstorage.yfilter)) leaf_name_data.push_back(diffservalgdropstorage.get_name_leafdata());
    if (diffservalgdropstatus.is_set || is_set(diffservalgdropstatus.yfilter)) leaf_name_data.push_back(diffservalgdropstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServAlgDropId")
    {
        diffservalgdropid = value;
        diffservalgdropid.value_namespace = name_space;
        diffservalgdropid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropType")
    {
        diffservalgdroptype = value;
        diffservalgdroptype.value_namespace = name_space;
        diffservalgdroptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropNext")
    {
        diffservalgdropnext = value;
        diffservalgdropnext.value_namespace = name_space;
        diffservalgdropnext.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServAlgDropStorage")
    {
        diffservalgdropstorage = value;
        diffservalgdropstorage.value_namespace = name_space;
        diffservalgdropstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServAlgDropStatus")
    {
        diffservalgdropstatus = value;
        diffservalgdropstatus.value_namespace = name_space;
        diffservalgdropstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServAlgDropId")
    {
        diffservalgdropid.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropType")
    {
        diffservalgdroptype.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropNext")
    {
        diffservalgdropnext.yfilter = yfilter;
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
    if(value_path == "diffServAlgDropOctets")
    {
        diffservalgdropoctets.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropPkts")
    {
        diffservalgdroppkts.yfilter = yfilter;
    }
    if(value_path == "diffServAlgRandomDropOctets")
    {
        diffservalgrandomdropoctets.yfilter = yfilter;
    }
    if(value_path == "diffServAlgRandomDropPkts")
    {
        diffservalgrandomdroppkts.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropStorage")
    {
        diffservalgdropstorage.yfilter = yfilter;
    }
    if(value_path == "diffServAlgDropStatus")
    {
        diffservalgdropstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServAlgDropId" || name == "diffServAlgDropType" || name == "diffServAlgDropNext" || name == "diffServAlgDropQMeasure" || name == "diffServAlgDropQThreshold" || name == "diffServAlgDropSpecific" || name == "diffServAlgDropOctets" || name == "diffServAlgDropPkts" || name == "diffServAlgRandomDropOctets" || name == "diffServAlgRandomDropPkts" || name == "diffServAlgDropStorage" || name == "diffServAlgDropStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropTable()
    :
    diffservrandomdropentry(this, {"diffservrandomdropid"})
{

    yang_name = "diffServRandomDropTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServRandomDropTable::~DiffServRandomDropTable()
{
}

bool DIFFSERVMIB::DiffServRandomDropTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservrandomdropentry.len(); index++)
    {
        if(diffservrandomdropentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServRandomDropTable::has_operation() const
{
    for (std::size_t index=0; index<diffservrandomdropentry.len(); index++)
    {
        if(diffservrandomdropentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServRandomDropTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServRandomDropTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServRandomDropTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServRandomDropTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServRandomDropEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry>();
        ent_->parent = this;
        diffservrandomdropentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServRandomDropTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservrandomdropentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServRandomDropTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServRandomDropTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServRandomDropTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServRandomDropEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::DiffServRandomDropEntry()
    :
    diffservrandomdropid{YType::uint32, "diffServRandomDropId"},
    diffservrandomdropminthreshbytes{YType::uint32, "diffServRandomDropMinThreshBytes"},
    diffservrandomdropminthreshpkts{YType::uint32, "diffServRandomDropMinThreshPkts"},
    diffservrandomdropmaxthreshbytes{YType::uint32, "diffServRandomDropMaxThreshBytes"},
    diffservrandomdropmaxthreshpkts{YType::uint32, "diffServRandomDropMaxThreshPkts"},
    diffservrandomdropprobmax{YType::uint32, "diffServRandomDropProbMax"},
    diffservrandomdropweight{YType::uint32, "diffServRandomDropWeight"},
    diffservrandomdropsamplingrate{YType::uint32, "diffServRandomDropSamplingRate"},
    diffservrandomdropstorage{YType::enumeration, "diffServRandomDropStorage"},
    diffservrandomdropstatus{YType::enumeration, "diffServRandomDropStatus"}
{

    yang_name = "diffServRandomDropEntry"; yang_parent_name = "diffServRandomDropTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::~DiffServRandomDropEntry()
{
}

bool DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservrandomdropid.is_set
	|| diffservrandomdropminthreshbytes.is_set
	|| diffservrandomdropminthreshpkts.is_set
	|| diffservrandomdropmaxthreshbytes.is_set
	|| diffservrandomdropmaxthreshpkts.is_set
	|| diffservrandomdropprobmax.is_set
	|| diffservrandomdropweight.is_set
	|| diffservrandomdropsamplingrate.is_set
	|| diffservrandomdropstorage.is_set
	|| diffservrandomdropstatus.is_set;
}

bool DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservrandomdropid.yfilter)
	|| ydk::is_set(diffservrandomdropminthreshbytes.yfilter)
	|| ydk::is_set(diffservrandomdropminthreshpkts.yfilter)
	|| ydk::is_set(diffservrandomdropmaxthreshbytes.yfilter)
	|| ydk::is_set(diffservrandomdropmaxthreshpkts.yfilter)
	|| ydk::is_set(diffservrandomdropprobmax.yfilter)
	|| ydk::is_set(diffservrandomdropweight.yfilter)
	|| ydk::is_set(diffservrandomdropsamplingrate.yfilter)
	|| ydk::is_set(diffservrandomdropstorage.yfilter)
	|| ydk::is_set(diffservrandomdropstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServRandomDropTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropEntry";
    ADD_KEY_TOKEN(diffservrandomdropid, "diffServRandomDropId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservrandomdropid.is_set || is_set(diffservrandomdropid.yfilter)) leaf_name_data.push_back(diffservrandomdropid.get_name_leafdata());
    if (diffservrandomdropminthreshbytes.is_set || is_set(diffservrandomdropminthreshbytes.yfilter)) leaf_name_data.push_back(diffservrandomdropminthreshbytes.get_name_leafdata());
    if (diffservrandomdropminthreshpkts.is_set || is_set(diffservrandomdropminthreshpkts.yfilter)) leaf_name_data.push_back(diffservrandomdropminthreshpkts.get_name_leafdata());
    if (diffservrandomdropmaxthreshbytes.is_set || is_set(diffservrandomdropmaxthreshbytes.yfilter)) leaf_name_data.push_back(diffservrandomdropmaxthreshbytes.get_name_leafdata());
    if (diffservrandomdropmaxthreshpkts.is_set || is_set(diffservrandomdropmaxthreshpkts.yfilter)) leaf_name_data.push_back(diffservrandomdropmaxthreshpkts.get_name_leafdata());
    if (diffservrandomdropprobmax.is_set || is_set(diffservrandomdropprobmax.yfilter)) leaf_name_data.push_back(diffservrandomdropprobmax.get_name_leafdata());
    if (diffservrandomdropweight.is_set || is_set(diffservrandomdropweight.yfilter)) leaf_name_data.push_back(diffservrandomdropweight.get_name_leafdata());
    if (diffservrandomdropsamplingrate.is_set || is_set(diffservrandomdropsamplingrate.yfilter)) leaf_name_data.push_back(diffservrandomdropsamplingrate.get_name_leafdata());
    if (diffservrandomdropstorage.is_set || is_set(diffservrandomdropstorage.yfilter)) leaf_name_data.push_back(diffservrandomdropstorage.get_name_leafdata());
    if (diffservrandomdropstatus.is_set || is_set(diffservrandomdropstatus.yfilter)) leaf_name_data.push_back(diffservrandomdropstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServRandomDropId")
    {
        diffservrandomdropid = value;
        diffservrandomdropid.value_namespace = name_space;
        diffservrandomdropid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServRandomDropProbMax")
    {
        diffservrandomdropprobmax = value;
        diffservrandomdropprobmax.value_namespace = name_space;
        diffservrandomdropprobmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropWeight")
    {
        diffservrandomdropweight = value;
        diffservrandomdropweight.value_namespace = name_space;
        diffservrandomdropweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropSamplingRate")
    {
        diffservrandomdropsamplingrate = value;
        diffservrandomdropsamplingrate.value_namespace = name_space;
        diffservrandomdropsamplingrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropStorage")
    {
        diffservrandomdropstorage = value;
        diffservrandomdropstorage.value_namespace = name_space;
        diffservrandomdropstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServRandomDropStatus")
    {
        diffservrandomdropstatus = value;
        diffservrandomdropstatus.value_namespace = name_space;
        diffservrandomdropstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServRandomDropId")
    {
        diffservrandomdropid.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMinThreshBytes")
    {
        diffservrandomdropminthreshbytes.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMinThreshPkts")
    {
        diffservrandomdropminthreshpkts.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMaxThreshBytes")
    {
        diffservrandomdropmaxthreshbytes.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropMaxThreshPkts")
    {
        diffservrandomdropmaxthreshpkts.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropProbMax")
    {
        diffservrandomdropprobmax.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropWeight")
    {
        diffservrandomdropweight.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropSamplingRate")
    {
        diffservrandomdropsamplingrate.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropStorage")
    {
        diffservrandomdropstorage.yfilter = yfilter;
    }
    if(value_path == "diffServRandomDropStatus")
    {
        diffservrandomdropstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServRandomDropId" || name == "diffServRandomDropMinThreshBytes" || name == "diffServRandomDropMinThreshPkts" || name == "diffServRandomDropMaxThreshBytes" || name == "diffServRandomDropMaxThreshPkts" || name == "diffServRandomDropProbMax" || name == "diffServRandomDropWeight" || name == "diffServRandomDropSamplingRate" || name == "diffServRandomDropStorage" || name == "diffServRandomDropStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServQTable::DiffServQTable()
    :
    diffservqentry(this, {"diffservqid"})
{

    yang_name = "diffServQTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServQTable::~DiffServQTable()
{
}

bool DIFFSERVMIB::DiffServQTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservqentry.len(); index++)
    {
        if(diffservqentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServQTable::has_operation() const
{
    for (std::size_t index=0; index<diffservqentry.len(); index++)
    {
        if(diffservqentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServQTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServQTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServQTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServQTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServQEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServQTable::DiffServQEntry>();
        ent_->parent = this;
        diffservqentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServQTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservqentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServQTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServQTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServQTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServQTable::DiffServQEntry::DiffServQEntry()
    :
    diffservqid{YType::uint32, "diffServQId"},
    diffservqnext{YType::str, "diffServQNext"},
    diffservqminrate{YType::str, "diffServQMinRate"},
    diffservqmaxrate{YType::str, "diffServQMaxRate"},
    diffservqstorage{YType::enumeration, "diffServQStorage"},
    diffservqstatus{YType::enumeration, "diffServQStatus"}
{

    yang_name = "diffServQEntry"; yang_parent_name = "diffServQTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServQTable::DiffServQEntry::~DiffServQEntry()
{
}

bool DIFFSERVMIB::DiffServQTable::DiffServQEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservqid.is_set
	|| diffservqnext.is_set
	|| diffservqminrate.is_set
	|| diffservqmaxrate.is_set
	|| diffservqstorage.is_set
	|| diffservqstatus.is_set;
}

bool DIFFSERVMIB::DiffServQTable::DiffServQEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservqid.yfilter)
	|| ydk::is_set(diffservqnext.yfilter)
	|| ydk::is_set(diffservqminrate.yfilter)
	|| ydk::is_set(diffservqmaxrate.yfilter)
	|| ydk::is_set(diffservqstorage.yfilter)
	|| ydk::is_set(diffservqstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServQTable::DiffServQEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServQTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServQTable::DiffServQEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQEntry";
    ADD_KEY_TOKEN(diffservqid, "diffServQId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServQTable::DiffServQEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqid.is_set || is_set(diffservqid.yfilter)) leaf_name_data.push_back(diffservqid.get_name_leafdata());
    if (diffservqnext.is_set || is_set(diffservqnext.yfilter)) leaf_name_data.push_back(diffservqnext.get_name_leafdata());
    if (diffservqminrate.is_set || is_set(diffservqminrate.yfilter)) leaf_name_data.push_back(diffservqminrate.get_name_leafdata());
    if (diffservqmaxrate.is_set || is_set(diffservqmaxrate.yfilter)) leaf_name_data.push_back(diffservqmaxrate.get_name_leafdata());
    if (diffservqstorage.is_set || is_set(diffservqstorage.yfilter)) leaf_name_data.push_back(diffservqstorage.get_name_leafdata());
    if (diffservqstatus.is_set || is_set(diffservqstatus.yfilter)) leaf_name_data.push_back(diffservqstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServQTable::DiffServQEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServQTable::DiffServQEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServQTable::DiffServQEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServQId")
    {
        diffservqid = value;
        diffservqid.value_namespace = name_space;
        diffservqid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQNext")
    {
        diffservqnext = value;
        diffservqnext.value_namespace = name_space;
        diffservqnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQMinRate")
    {
        diffservqminrate = value;
        diffservqminrate.value_namespace = name_space;
        diffservqminrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQMaxRate")
    {
        diffservqmaxrate = value;
        diffservqmaxrate.value_namespace = name_space;
        diffservqmaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQStorage")
    {
        diffservqstorage = value;
        diffservqstorage.value_namespace = name_space;
        diffservqstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServQStatus")
    {
        diffservqstatus = value;
        diffservqstatus.value_namespace = name_space;
        diffservqstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServQTable::DiffServQEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServQId")
    {
        diffservqid.yfilter = yfilter;
    }
    if(value_path == "diffServQNext")
    {
        diffservqnext.yfilter = yfilter;
    }
    if(value_path == "diffServQMinRate")
    {
        diffservqminrate.yfilter = yfilter;
    }
    if(value_path == "diffServQMaxRate")
    {
        diffservqmaxrate.yfilter = yfilter;
    }
    if(value_path == "diffServQStorage")
    {
        diffservqstorage.yfilter = yfilter;
    }
    if(value_path == "diffServQStatus")
    {
        diffservqstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServQTable::DiffServQEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServQId" || name == "diffServQNext" || name == "diffServQMinRate" || name == "diffServQMaxRate" || name == "diffServQStorage" || name == "diffServQStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerTable()
    :
    diffservschedulerentry(this, {"diffservschedulerid"})
{

    yang_name = "diffServSchedulerTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServSchedulerTable::~DiffServSchedulerTable()
{
}

bool DIFFSERVMIB::DiffServSchedulerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservschedulerentry.len(); index++)
    {
        if(diffservschedulerentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServSchedulerTable::has_operation() const
{
    for (std::size_t index=0; index<diffservschedulerentry.len(); index++)
    {
        if(diffservschedulerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServSchedulerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServSchedulerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServSchedulerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServSchedulerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServSchedulerEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry>();
        ent_->parent = this;
        diffservschedulerentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServSchedulerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservschedulerentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServSchedulerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServSchedulerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServSchedulerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServSchedulerEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::DiffServSchedulerEntry()
    :
    diffservschedulerid{YType::uint32, "diffServSchedulerId"},
    diffservschedulernext{YType::str, "diffServSchedulerNext"},
    diffservschedulermethod{YType::str, "diffServSchedulerMethod"},
    diffservschedulerminrate{YType::str, "diffServSchedulerMinRate"},
    diffservschedulermaxrate{YType::str, "diffServSchedulerMaxRate"},
    diffservschedulerstorage{YType::enumeration, "diffServSchedulerStorage"},
    diffservschedulerstatus{YType::enumeration, "diffServSchedulerStatus"}
{

    yang_name = "diffServSchedulerEntry"; yang_parent_name = "diffServSchedulerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::~DiffServSchedulerEntry()
{
}

bool DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservschedulerid.is_set
	|| diffservschedulernext.is_set
	|| diffservschedulermethod.is_set
	|| diffservschedulerminrate.is_set
	|| diffservschedulermaxrate.is_set
	|| diffservschedulerstorage.is_set
	|| diffservschedulerstatus.is_set;
}

bool DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservschedulerid.yfilter)
	|| ydk::is_set(diffservschedulernext.yfilter)
	|| ydk::is_set(diffservschedulermethod.yfilter)
	|| ydk::is_set(diffservschedulerminrate.yfilter)
	|| ydk::is_set(diffservschedulermaxrate.yfilter)
	|| ydk::is_set(diffservschedulerstorage.yfilter)
	|| ydk::is_set(diffservschedulerstatus.yfilter);
}

std::string DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServSchedulerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerEntry";
    ADD_KEY_TOKEN(diffservschedulerid, "diffServSchedulerId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservschedulerid.is_set || is_set(diffservschedulerid.yfilter)) leaf_name_data.push_back(diffservschedulerid.get_name_leafdata());
    if (diffservschedulernext.is_set || is_set(diffservschedulernext.yfilter)) leaf_name_data.push_back(diffservschedulernext.get_name_leafdata());
    if (diffservschedulermethod.is_set || is_set(diffservschedulermethod.yfilter)) leaf_name_data.push_back(diffservschedulermethod.get_name_leafdata());
    if (diffservschedulerminrate.is_set || is_set(diffservschedulerminrate.yfilter)) leaf_name_data.push_back(diffservschedulerminrate.get_name_leafdata());
    if (diffservschedulermaxrate.is_set || is_set(diffservschedulermaxrate.yfilter)) leaf_name_data.push_back(diffservschedulermaxrate.get_name_leafdata());
    if (diffservschedulerstorage.is_set || is_set(diffservschedulerstorage.yfilter)) leaf_name_data.push_back(diffservschedulerstorage.get_name_leafdata());
    if (diffservschedulerstatus.is_set || is_set(diffservschedulerstatus.yfilter)) leaf_name_data.push_back(diffservschedulerstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServSchedulerId")
    {
        diffservschedulerid = value;
        diffservschedulerid.value_namespace = name_space;
        diffservschedulerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerNext")
    {
        diffservschedulernext = value;
        diffservschedulernext.value_namespace = name_space;
        diffservschedulernext.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "diffServSchedulerMaxRate")
    {
        diffservschedulermaxrate = value;
        diffservschedulermaxrate.value_namespace = name_space;
        diffservschedulermaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerStorage")
    {
        diffservschedulerstorage = value;
        diffservschedulerstorage.value_namespace = name_space;
        diffservschedulerstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServSchedulerStatus")
    {
        diffservschedulerstatus = value;
        diffservschedulerstatus.value_namespace = name_space;
        diffservschedulerstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServSchedulerId")
    {
        diffservschedulerid.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerNext")
    {
        diffservschedulernext.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMethod")
    {
        diffservschedulermethod.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMinRate")
    {
        diffservschedulerminrate.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerMaxRate")
    {
        diffservschedulermaxrate.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerStorage")
    {
        diffservschedulerstorage.yfilter = yfilter;
    }
    if(value_path == "diffServSchedulerStatus")
    {
        diffservschedulerstatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServSchedulerId" || name == "diffServSchedulerNext" || name == "diffServSchedulerMethod" || name == "diffServSchedulerMinRate" || name == "diffServSchedulerMaxRate" || name == "diffServSchedulerStorage" || name == "diffServSchedulerStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateTable()
    :
    diffservminrateentry(this, {"diffservminrateid"})
{

    yang_name = "diffServMinRateTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMinRateTable::~DiffServMinRateTable()
{
}

bool DIFFSERVMIB::DiffServMinRateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservminrateentry.len(); index++)
    {
        if(diffservminrateentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServMinRateTable::has_operation() const
{
    for (std::size_t index=0; index<diffservminrateentry.len(); index++)
    {
        if(diffservminrateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServMinRateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMinRateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMinRateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMinRateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMinRateEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry>();
        ent_->parent = this;
        diffservminrateentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMinRateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservminrateentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServMinRateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServMinRateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServMinRateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMinRateEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::DiffServMinRateEntry()
    :
    diffservminrateid{YType::uint32, "diffServMinRateId"},
    diffservminratepriority{YType::uint32, "diffServMinRatePriority"},
    diffservminrateabsolute{YType::uint32, "diffServMinRateAbsolute"},
    diffservminraterelative{YType::uint32, "diffServMinRateRelative"},
    diffservminratestorage{YType::enumeration, "diffServMinRateStorage"},
    diffservminratestatus{YType::enumeration, "diffServMinRateStatus"}
{

    yang_name = "diffServMinRateEntry"; yang_parent_name = "diffServMinRateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::~DiffServMinRateEntry()
{
}

bool DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservminrateid.is_set
	|| diffservminratepriority.is_set
	|| diffservminrateabsolute.is_set
	|| diffservminraterelative.is_set
	|| diffservminratestorage.is_set
	|| diffservminratestatus.is_set;
}

bool DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservminrateid.yfilter)
	|| ydk::is_set(diffservminratepriority.yfilter)
	|| ydk::is_set(diffservminrateabsolute.yfilter)
	|| ydk::is_set(diffservminraterelative.yfilter)
	|| ydk::is_set(diffservminratestorage.yfilter)
	|| ydk::is_set(diffservminratestatus.yfilter);
}

std::string DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMinRateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateEntry";
    ADD_KEY_TOKEN(diffservminrateid, "diffServMinRateId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservminrateid.is_set || is_set(diffservminrateid.yfilter)) leaf_name_data.push_back(diffservminrateid.get_name_leafdata());
    if (diffservminratepriority.is_set || is_set(diffservminratepriority.yfilter)) leaf_name_data.push_back(diffservminratepriority.get_name_leafdata());
    if (diffservminrateabsolute.is_set || is_set(diffservminrateabsolute.yfilter)) leaf_name_data.push_back(diffservminrateabsolute.get_name_leafdata());
    if (diffservminraterelative.is_set || is_set(diffservminraterelative.yfilter)) leaf_name_data.push_back(diffservminraterelative.get_name_leafdata());
    if (diffservminratestorage.is_set || is_set(diffservminratestorage.yfilter)) leaf_name_data.push_back(diffservminratestorage.get_name_leafdata());
    if (diffservminratestatus.is_set || is_set(diffservminratestatus.yfilter)) leaf_name_data.push_back(diffservminratestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffServMinRateId")
    {
        diffservminrateid = value;
        diffservminrateid.value_namespace = name_space;
        diffservminrateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRatePriority")
    {
        diffservminratepriority = value;
        diffservminratepriority.value_namespace = name_space;
        diffservminratepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateAbsolute")
    {
        diffservminrateabsolute = value;
        diffservminrateabsolute.value_namespace = name_space;
        diffservminrateabsolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateRelative")
    {
        diffservminraterelative = value;
        diffservminraterelative.value_namespace = name_space;
        diffservminraterelative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateStorage")
    {
        diffservminratestorage = value;
        diffservminratestorage.value_namespace = name_space;
        diffservminratestorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMinRateStatus")
    {
        diffservminratestatus = value;
        diffservminratestatus.value_namespace = name_space;
        diffservminratestatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffServMinRateId")
    {
        diffservminrateid.yfilter = yfilter;
    }
    if(value_path == "diffServMinRatePriority")
    {
        diffservminratepriority.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateAbsolute")
    {
        diffservminrateabsolute.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateRelative")
    {
        diffservminraterelative.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateStorage")
    {
        diffservminratestorage.yfilter = yfilter;
    }
    if(value_path == "diffServMinRateStatus")
    {
        diffservminratestatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMinRateId" || name == "diffServMinRatePriority" || name == "diffServMinRateAbsolute" || name == "diffServMinRateRelative" || name == "diffServMinRateStorage" || name == "diffServMinRateStatus")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateTable()
    :
    diffservmaxrateentry(this, {"diffservmaxrateid", "diffservmaxratelevel"})
{

    yang_name = "diffServMaxRateTable"; yang_parent_name = "DIFFSERV-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMaxRateTable::~DiffServMaxRateTable()
{
}

bool DIFFSERVMIB::DiffServMaxRateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffservmaxrateentry.len(); index++)
    {
        if(diffservmaxrateentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIFFSERVMIB::DiffServMaxRateTable::has_operation() const
{
    for (std::size_t index=0; index<diffservmaxrateentry.len(); index++)
    {
        if(diffservmaxrateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIFFSERVMIB::DiffServMaxRateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMaxRateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMaxRateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMaxRateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMaxRateEntry")
    {
        auto ent_ = std::make_shared<DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry>();
        ent_->parent = this;
        diffservmaxrateentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMaxRateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffservmaxrateentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIFFSERVMIB::DiffServMaxRateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIFFSERVMIB::DiffServMaxRateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIFFSERVMIB::DiffServMaxRateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMaxRateEntry")
        return true;
    return false;
}

DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::DiffServMaxRateEntry()
    :
    diffservmaxrateid{YType::uint32, "diffServMaxRateId"},
    diffservmaxratelevel{YType::uint32, "diffServMaxRateLevel"},
    diffservmaxrateabsolute{YType::uint32, "diffServMaxRateAbsolute"},
    diffservmaxraterelative{YType::uint32, "diffServMaxRateRelative"},
    diffservmaxratethreshold{YType::int32, "diffServMaxRateThreshold"},
    diffservmaxratestorage{YType::enumeration, "diffServMaxRateStorage"},
    diffservmaxratestatus{YType::enumeration, "diffServMaxRateStatus"}
{

    yang_name = "diffServMaxRateEntry"; yang_parent_name = "diffServMaxRateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::~DiffServMaxRateEntry()
{
}

bool DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::has_data() const
{
    if (is_presence_container) return true;
    return diffservmaxrateid.is_set
	|| diffservmaxratelevel.is_set
	|| diffservmaxrateabsolute.is_set
	|| diffservmaxraterelative.is_set
	|| diffservmaxratethreshold.is_set
	|| diffservmaxratestorage.is_set
	|| diffservmaxratestatus.is_set;
}

bool DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmaxrateid.yfilter)
	|| ydk::is_set(diffservmaxratelevel.yfilter)
	|| ydk::is_set(diffservmaxrateabsolute.yfilter)
	|| ydk::is_set(diffservmaxraterelative.yfilter)
	|| ydk::is_set(diffservmaxratethreshold.yfilter)
	|| ydk::is_set(diffservmaxratestorage.yfilter)
	|| ydk::is_set(diffservmaxratestatus.yfilter);
}

std::string DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMaxRateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateEntry";
    ADD_KEY_TOKEN(diffservmaxrateid, "diffServMaxRateId");
    ADD_KEY_TOKEN(diffservmaxratelevel, "diffServMaxRateLevel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmaxrateid.is_set || is_set(diffservmaxrateid.yfilter)) leaf_name_data.push_back(diffservmaxrateid.get_name_leafdata());
    if (diffservmaxratelevel.is_set || is_set(diffservmaxratelevel.yfilter)) leaf_name_data.push_back(diffservmaxratelevel.get_name_leafdata());
    if (diffservmaxrateabsolute.is_set || is_set(diffservmaxrateabsolute.yfilter)) leaf_name_data.push_back(diffservmaxrateabsolute.get_name_leafdata());
    if (diffservmaxraterelative.is_set || is_set(diffservmaxraterelative.yfilter)) leaf_name_data.push_back(diffservmaxraterelative.get_name_leafdata());
    if (diffservmaxratethreshold.is_set || is_set(diffservmaxratethreshold.yfilter)) leaf_name_data.push_back(diffservmaxratethreshold.get_name_leafdata());
    if (diffservmaxratestorage.is_set || is_set(diffservmaxratestorage.yfilter)) leaf_name_data.push_back(diffservmaxratestorage.get_name_leafdata());
    if (diffservmaxratestatus.is_set || is_set(diffservmaxratestatus.yfilter)) leaf_name_data.push_back(diffservmaxratestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "diffServMaxRateThreshold")
    {
        diffservmaxratethreshold = value;
        diffservmaxratethreshold.value_namespace = name_space;
        diffservmaxratethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateStorage")
    {
        diffservmaxratestorage = value;
        diffservmaxratestorage.value_namespace = name_space;
        diffservmaxratestorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diffServMaxRateStatus")
    {
        diffservmaxratestatus = value;
        diffservmaxratestatus.value_namespace = name_space;
        diffservmaxratestatus.value_namespace_prefix = name_space_prefix;
    }
}

void DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "diffServMaxRateThreshold")
    {
        diffservmaxratethreshold.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateStorage")
    {
        diffservmaxratestorage.yfilter = yfilter;
    }
    if(value_path == "diffServMaxRateStatus")
    {
        diffservmaxratestatus.yfilter = yfilter;
    }
}

bool DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffServMaxRateId" || name == "diffServMaxRateLevel" || name == "diffServMaxRateAbsolute" || name == "diffServMaxRateRelative" || name == "diffServMaxRateThreshold" || name == "diffServMaxRateStorage" || name == "diffServMaxRateStatus")
        return true;
    return false;
}

const Enum::YLeaf IfDirection::inbound {1, "inbound"};
const Enum::YLeaf IfDirection::outbound {2, "outbound"};

const Enum::YLeaf DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType::other {1, "other"};
const Enum::YLeaf DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType::tailDrop {2, "tailDrop"};
const Enum::YLeaf DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType::headDrop {3, "headDrop"};
const Enum::YLeaf DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType::randomDrop {4, "randomDrop"};
const Enum::YLeaf DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType::alwaysDrop {5, "alwaysDrop"};


}
}

