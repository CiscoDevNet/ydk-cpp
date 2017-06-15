
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIFFSERV_MIB.hpp"

namespace ydk {
namespace DIFFSERV_MIB {

DiffservtbparamtrtcmblindIdentity::DiffservtbparamtrtcmblindIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamTrTCMBlind")
{
}

DiffservtbparamtrtcmblindIdentity::~DiffservtbparamtrtcmblindIdentity()
{
}

DiffservschedulerwfqIdentity::DiffservschedulerwfqIdentity()
     : Identity("DIFFSERV-MIB:diffServSchedulerWFQ")
{
}

DiffservschedulerwfqIdentity::~DiffservschedulerwfqIdentity()
{
}

DiffservtbparamtswtcmIdentity::DiffservtbparamtswtcmIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamTswTCM")
{
}

DiffservtbparamtswtcmIdentity::~DiffservtbparamtswtcmIdentity()
{
}

DiffservtbparamavgrateIdentity::DiffservtbparamavgrateIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamAvgRate")
{
}

DiffservtbparamavgrateIdentity::~DiffservtbparamavgrateIdentity()
{
}

DiffservschedulerwrrIdentity::DiffservschedulerwrrIdentity()
     : Identity("DIFFSERV-MIB:diffServSchedulerWRR")
{
}

DiffservschedulerwrrIdentity::~DiffservschedulerwrrIdentity()
{
}

DiffservtbparamsrtcmawareIdentity::DiffservtbparamsrtcmawareIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamSrTCMAware")
{
}

DiffservtbparamsrtcmawareIdentity::~DiffservtbparamsrtcmawareIdentity()
{
}

DiffservtbparamsrtcmblindIdentity::DiffservtbparamsrtcmblindIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamSrTCMBlind")
{
}

DiffservtbparamsrtcmblindIdentity::~DiffservtbparamsrtcmblindIdentity()
{
}

DiffservtbparamsimpletokenbucketIdentity::DiffservtbparamsimpletokenbucketIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamSimpleTokenBucket")
{
}

DiffservtbparamsimpletokenbucketIdentity::~DiffservtbparamsimpletokenbucketIdentity()
{
}

DiffservschedulerpriorityIdentity::DiffservschedulerpriorityIdentity()
     : Identity("DIFFSERV-MIB:diffServSchedulerPriority")
{
}

DiffservschedulerpriorityIdentity::~DiffservschedulerpriorityIdentity()
{
}

DiffservtbparamtrtcmawareIdentity::DiffservtbparamtrtcmawareIdentity()
     : Identity("DIFFSERV-MIB:diffServTBParamTrTCMAware")
{
}

DiffservtbparamtrtcmawareIdentity::~DiffservtbparamtrtcmawareIdentity()
{
}

DiffservMib::DiffservMib()
    :
    diffservaction_(std::make_shared<DiffservMib::Diffservaction>())
	,diffservactiontable_(std::make_shared<DiffservMib::Diffservactiontable>())
	,diffservalgdrop_(std::make_shared<DiffservMib::Diffservalgdrop>())
	,diffservalgdroptable_(std::make_shared<DiffservMib::Diffservalgdroptable>())
	,diffservclassifier_(std::make_shared<DiffservMib::Diffservclassifier>())
	,diffservclfrelementtable_(std::make_shared<DiffservMib::Diffservclfrelementtable>())
	,diffservclfrtable_(std::make_shared<DiffservMib::Diffservclfrtable>())
	,diffservcountacttable_(std::make_shared<DiffservMib::Diffservcountacttable>())
	,diffservdatapathtable_(std::make_shared<DiffservMib::Diffservdatapathtable>())
	,diffservdscpmarkacttable_(std::make_shared<DiffservMib::Diffservdscpmarkacttable>())
	,diffservmaxratetable_(std::make_shared<DiffservMib::Diffservmaxratetable>())
	,diffservmeter_(std::make_shared<DiffservMib::Diffservmeter>())
	,diffservmetertable_(std::make_shared<DiffservMib::Diffservmetertable>())
	,diffservminratetable_(std::make_shared<DiffservMib::Diffservminratetable>())
	,diffservmultifieldclfrtable_(std::make_shared<DiffservMib::Diffservmultifieldclfrtable>())
	,diffservqtable_(std::make_shared<DiffservMib::Diffservqtable>())
	,diffservqueue_(std::make_shared<DiffservMib::Diffservqueue>())
	,diffservrandomdroptable_(std::make_shared<DiffservMib::Diffservrandomdroptable>())
	,diffservscheduler_(std::make_shared<DiffservMib::Diffservscheduler>())
	,diffservschedulertable_(std::make_shared<DiffservMib::Diffservschedulertable>())
	,diffservtbparam_(std::make_shared<DiffservMib::Diffservtbparam>())
	,diffservtbparamtable_(std::make_shared<DiffservMib::Diffservtbparamtable>())
{
    diffservaction_->parent = this;

    diffservactiontable_->parent = this;

    diffservalgdrop_->parent = this;

    diffservalgdroptable_->parent = this;

    diffservclassifier_->parent = this;

    diffservclfrelementtable_->parent = this;

    diffservclfrtable_->parent = this;

    diffservcountacttable_->parent = this;

    diffservdatapathtable_->parent = this;

    diffservdscpmarkacttable_->parent = this;

    diffservmaxratetable_->parent = this;

    diffservmeter_->parent = this;

    diffservmetertable_->parent = this;

    diffservminratetable_->parent = this;

    diffservmultifieldclfrtable_->parent = this;

    diffservqtable_->parent = this;

    diffservqueue_->parent = this;

    diffservrandomdroptable_->parent = this;

    diffservscheduler_->parent = this;

    diffservschedulertable_->parent = this;

    diffservtbparam_->parent = this;

    diffservtbparamtable_->parent = this;

    yang_name = "DIFFSERV-MIB"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::~DiffservMib()
{
}

bool DiffservMib::has_data() const
{
    return (diffservaction_ !=  nullptr && diffservaction_->has_data())
	|| (diffservactiontable_ !=  nullptr && diffservactiontable_->has_data())
	|| (diffservalgdrop_ !=  nullptr && diffservalgdrop_->has_data())
	|| (diffservalgdroptable_ !=  nullptr && diffservalgdroptable_->has_data())
	|| (diffservclassifier_ !=  nullptr && diffservclassifier_->has_data())
	|| (diffservclfrelementtable_ !=  nullptr && diffservclfrelementtable_->has_data())
	|| (diffservclfrtable_ !=  nullptr && diffservclfrtable_->has_data())
	|| (diffservcountacttable_ !=  nullptr && diffservcountacttable_->has_data())
	|| (diffservdatapathtable_ !=  nullptr && diffservdatapathtable_->has_data())
	|| (diffservdscpmarkacttable_ !=  nullptr && diffservdscpmarkacttable_->has_data())
	|| (diffservmaxratetable_ !=  nullptr && diffservmaxratetable_->has_data())
	|| (diffservmeter_ !=  nullptr && diffservmeter_->has_data())
	|| (diffservmetertable_ !=  nullptr && diffservmetertable_->has_data())
	|| (diffservminratetable_ !=  nullptr && diffservminratetable_->has_data())
	|| (diffservmultifieldclfrtable_ !=  nullptr && diffservmultifieldclfrtable_->has_data())
	|| (diffservqtable_ !=  nullptr && diffservqtable_->has_data())
	|| (diffservqueue_ !=  nullptr && diffservqueue_->has_data())
	|| (diffservrandomdroptable_ !=  nullptr && diffservrandomdroptable_->has_data())
	|| (diffservscheduler_ !=  nullptr && diffservscheduler_->has_data())
	|| (diffservschedulertable_ !=  nullptr && diffservschedulertable_->has_data())
	|| (diffservtbparam_ !=  nullptr && diffservtbparam_->has_data())
	|| (diffservtbparamtable_ !=  nullptr && diffservtbparamtable_->has_data());
}

bool DiffservMib::has_operation() const
{
    return is_set(operation)
	|| (diffservaction_ !=  nullptr && diffservaction_->has_operation())
	|| (diffservactiontable_ !=  nullptr && diffservactiontable_->has_operation())
	|| (diffservalgdrop_ !=  nullptr && diffservalgdrop_->has_operation())
	|| (diffservalgdroptable_ !=  nullptr && diffservalgdroptable_->has_operation())
	|| (diffservclassifier_ !=  nullptr && diffservclassifier_->has_operation())
	|| (diffservclfrelementtable_ !=  nullptr && diffservclfrelementtable_->has_operation())
	|| (diffservclfrtable_ !=  nullptr && diffservclfrtable_->has_operation())
	|| (diffservcountacttable_ !=  nullptr && diffservcountacttable_->has_operation())
	|| (diffservdatapathtable_ !=  nullptr && diffservdatapathtable_->has_operation())
	|| (diffservdscpmarkacttable_ !=  nullptr && diffservdscpmarkacttable_->has_operation())
	|| (diffservmaxratetable_ !=  nullptr && diffservmaxratetable_->has_operation())
	|| (diffservmeter_ !=  nullptr && diffservmeter_->has_operation())
	|| (diffservmetertable_ !=  nullptr && diffservmetertable_->has_operation())
	|| (diffservminratetable_ !=  nullptr && diffservminratetable_->has_operation())
	|| (diffservmultifieldclfrtable_ !=  nullptr && diffservmultifieldclfrtable_->has_operation())
	|| (diffservqtable_ !=  nullptr && diffservqtable_->has_operation())
	|| (diffservqueue_ !=  nullptr && diffservqueue_->has_operation())
	|| (diffservrandomdroptable_ !=  nullptr && diffservrandomdroptable_->has_operation())
	|| (diffservscheduler_ !=  nullptr && diffservscheduler_->has_operation())
	|| (diffservschedulertable_ !=  nullptr && diffservschedulertable_->has_operation())
	|| (diffservtbparam_ !=  nullptr && diffservtbparam_->has_operation())
	|| (diffservtbparamtable_ !=  nullptr && diffservtbparamtable_->has_operation());
}

std::string DiffservMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB";

    return path_buffer.str();

}

const EntityPath DiffservMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DiffservMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServAction")
    {
        if(diffservaction_ == nullptr)
        {
            diffservaction_ = std::make_shared<DiffservMib::Diffservaction>();
        }
        return diffservaction_;
    }

    if(child_yang_name == "diffServActionTable")
    {
        if(diffservactiontable_ == nullptr)
        {
            diffservactiontable_ = std::make_shared<DiffservMib::Diffservactiontable>();
        }
        return diffservactiontable_;
    }

    if(child_yang_name == "diffServAlgDrop")
    {
        if(diffservalgdrop_ == nullptr)
        {
            diffservalgdrop_ = std::make_shared<DiffservMib::Diffservalgdrop>();
        }
        return diffservalgdrop_;
    }

    if(child_yang_name == "diffServAlgDropTable")
    {
        if(diffservalgdroptable_ == nullptr)
        {
            diffservalgdroptable_ = std::make_shared<DiffservMib::Diffservalgdroptable>();
        }
        return diffservalgdroptable_;
    }

    if(child_yang_name == "diffServClassifier")
    {
        if(diffservclassifier_ == nullptr)
        {
            diffservclassifier_ = std::make_shared<DiffservMib::Diffservclassifier>();
        }
        return diffservclassifier_;
    }

    if(child_yang_name == "diffServClfrElementTable")
    {
        if(diffservclfrelementtable_ == nullptr)
        {
            diffservclfrelementtable_ = std::make_shared<DiffservMib::Diffservclfrelementtable>();
        }
        return diffservclfrelementtable_;
    }

    if(child_yang_name == "diffServClfrTable")
    {
        if(diffservclfrtable_ == nullptr)
        {
            diffservclfrtable_ = std::make_shared<DiffservMib::Diffservclfrtable>();
        }
        return diffservclfrtable_;
    }

    if(child_yang_name == "diffServCountActTable")
    {
        if(diffservcountacttable_ == nullptr)
        {
            diffservcountacttable_ = std::make_shared<DiffservMib::Diffservcountacttable>();
        }
        return diffservcountacttable_;
    }

    if(child_yang_name == "diffServDataPathTable")
    {
        if(diffservdatapathtable_ == nullptr)
        {
            diffservdatapathtable_ = std::make_shared<DiffservMib::Diffservdatapathtable>();
        }
        return diffservdatapathtable_;
    }

    if(child_yang_name == "diffServDscpMarkActTable")
    {
        if(diffservdscpmarkacttable_ == nullptr)
        {
            diffservdscpmarkacttable_ = std::make_shared<DiffservMib::Diffservdscpmarkacttable>();
        }
        return diffservdscpmarkacttable_;
    }

    if(child_yang_name == "diffServMaxRateTable")
    {
        if(diffservmaxratetable_ == nullptr)
        {
            diffservmaxratetable_ = std::make_shared<DiffservMib::Diffservmaxratetable>();
        }
        return diffservmaxratetable_;
    }

    if(child_yang_name == "diffServMeter")
    {
        if(diffservmeter_ == nullptr)
        {
            diffservmeter_ = std::make_shared<DiffservMib::Diffservmeter>();
        }
        return diffservmeter_;
    }

    if(child_yang_name == "diffServMeterTable")
    {
        if(diffservmetertable_ == nullptr)
        {
            diffservmetertable_ = std::make_shared<DiffservMib::Diffservmetertable>();
        }
        return diffservmetertable_;
    }

    if(child_yang_name == "diffServMinRateTable")
    {
        if(diffservminratetable_ == nullptr)
        {
            diffservminratetable_ = std::make_shared<DiffservMib::Diffservminratetable>();
        }
        return diffservminratetable_;
    }

    if(child_yang_name == "diffServMultiFieldClfrTable")
    {
        if(diffservmultifieldclfrtable_ == nullptr)
        {
            diffservmultifieldclfrtable_ = std::make_shared<DiffservMib::Diffservmultifieldclfrtable>();
        }
        return diffservmultifieldclfrtable_;
    }

    if(child_yang_name == "diffServQTable")
    {
        if(diffservqtable_ == nullptr)
        {
            diffservqtable_ = std::make_shared<DiffservMib::Diffservqtable>();
        }
        return diffservqtable_;
    }

    if(child_yang_name == "diffServQueue")
    {
        if(diffservqueue_ == nullptr)
        {
            diffservqueue_ = std::make_shared<DiffservMib::Diffservqueue>();
        }
        return diffservqueue_;
    }

    if(child_yang_name == "diffServRandomDropTable")
    {
        if(diffservrandomdroptable_ == nullptr)
        {
            diffservrandomdroptable_ = std::make_shared<DiffservMib::Diffservrandomdroptable>();
        }
        return diffservrandomdroptable_;
    }

    if(child_yang_name == "diffServScheduler")
    {
        if(diffservscheduler_ == nullptr)
        {
            diffservscheduler_ = std::make_shared<DiffservMib::Diffservscheduler>();
        }
        return diffservscheduler_;
    }

    if(child_yang_name == "diffServSchedulerTable")
    {
        if(diffservschedulertable_ == nullptr)
        {
            diffservschedulertable_ = std::make_shared<DiffservMib::Diffservschedulertable>();
        }
        return diffservschedulertable_;
    }

    if(child_yang_name == "diffServTBParam")
    {
        if(diffservtbparam_ == nullptr)
        {
            diffservtbparam_ = std::make_shared<DiffservMib::Diffservtbparam>();
        }
        return diffservtbparam_;
    }

    if(child_yang_name == "diffServTBParamTable")
    {
        if(diffservtbparamtable_ == nullptr)
        {
            diffservtbparamtable_ = std::make_shared<DiffservMib::Diffservtbparamtable>();
        }
        return diffservtbparamtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(diffservaction_ != nullptr)
    {
        children["diffServAction"] = diffservaction_;
    }

    if(diffservactiontable_ != nullptr)
    {
        children["diffServActionTable"] = diffservactiontable_;
    }

    if(diffservalgdrop_ != nullptr)
    {
        children["diffServAlgDrop"] = diffservalgdrop_;
    }

    if(diffservalgdroptable_ != nullptr)
    {
        children["diffServAlgDropTable"] = diffservalgdroptable_;
    }

    if(diffservclassifier_ != nullptr)
    {
        children["diffServClassifier"] = diffservclassifier_;
    }

    if(diffservclfrelementtable_ != nullptr)
    {
        children["diffServClfrElementTable"] = diffservclfrelementtable_;
    }

    if(diffservclfrtable_ != nullptr)
    {
        children["diffServClfrTable"] = diffservclfrtable_;
    }

    if(diffservcountacttable_ != nullptr)
    {
        children["diffServCountActTable"] = diffservcountacttable_;
    }

    if(diffservdatapathtable_ != nullptr)
    {
        children["diffServDataPathTable"] = diffservdatapathtable_;
    }

    if(diffservdscpmarkacttable_ != nullptr)
    {
        children["diffServDscpMarkActTable"] = diffservdscpmarkacttable_;
    }

    if(diffservmaxratetable_ != nullptr)
    {
        children["diffServMaxRateTable"] = diffservmaxratetable_;
    }

    if(diffservmeter_ != nullptr)
    {
        children["diffServMeter"] = diffservmeter_;
    }

    if(diffservmetertable_ != nullptr)
    {
        children["diffServMeterTable"] = diffservmetertable_;
    }

    if(diffservminratetable_ != nullptr)
    {
        children["diffServMinRateTable"] = diffservminratetable_;
    }

    if(diffservmultifieldclfrtable_ != nullptr)
    {
        children["diffServMultiFieldClfrTable"] = diffservmultifieldclfrtable_;
    }

    if(diffservqtable_ != nullptr)
    {
        children["diffServQTable"] = diffservqtable_;
    }

    if(diffservqueue_ != nullptr)
    {
        children["diffServQueue"] = diffservqueue_;
    }

    if(diffservrandomdroptable_ != nullptr)
    {
        children["diffServRandomDropTable"] = diffservrandomdroptable_;
    }

    if(diffservscheduler_ != nullptr)
    {
        children["diffServScheduler"] = diffservscheduler_;
    }

    if(diffservschedulertable_ != nullptr)
    {
        children["diffServSchedulerTable"] = diffservschedulertable_;
    }

    if(diffservtbparam_ != nullptr)
    {
        children["diffServTBParam"] = diffservtbparam_;
    }

    if(diffservtbparamtable_ != nullptr)
    {
        children["diffServTBParamTable"] = diffservtbparamtable_;
    }

    return children;
}

void DiffservMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DiffservMib::clone_ptr() const
{
    return std::make_shared<DiffservMib>();
}

std::string DiffservMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DiffservMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DiffservMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

DiffservMib::Diffservclassifier::Diffservclassifier()
    :
    diffservclfrelementnextfree{YType::uint32, "diffServClfrElementNextFree"},
    diffservclfrnextfree{YType::uint32, "diffServClfrNextFree"},
    diffservmultifieldclfrnextfree{YType::uint32, "diffServMultiFieldClfrNextFree"}
{
    yang_name = "diffServClassifier"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservclassifier::~Diffservclassifier()
{
}

bool DiffservMib::Diffservclassifier::has_data() const
{
    return diffservclfrelementnextfree.is_set
	|| diffservclfrnextfree.is_set
	|| diffservmultifieldclfrnextfree.is_set;
}

bool DiffservMib::Diffservclassifier::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservclfrelementnextfree.operation)
	|| is_set(diffservclfrnextfree.operation)
	|| is_set(diffservmultifieldclfrnextfree.operation);
}

std::string DiffservMib::Diffservclassifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClassifier";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservclassifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrelementnextfree.is_set || is_set(diffservclfrelementnextfree.operation)) leaf_name_data.push_back(diffservclfrelementnextfree.get_name_leafdata());
    if (diffservclfrnextfree.is_set || is_set(diffservclfrnextfree.operation)) leaf_name_data.push_back(diffservclfrnextfree.get_name_leafdata());
    if (diffservmultifieldclfrnextfree.is_set || is_set(diffservmultifieldclfrnextfree.operation)) leaf_name_data.push_back(diffservmultifieldclfrnextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservclassifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservclassifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservclassifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServClfrElementNextFree")
    {
        diffservclfrelementnextfree = value;
    }
    if(value_path == "diffServClfrNextFree")
    {
        diffservclfrnextfree = value;
    }
    if(value_path == "diffServMultiFieldClfrNextFree")
    {
        diffservmultifieldclfrnextfree = value;
    }
}

DiffservMib::Diffservmeter::Diffservmeter()
    :
    diffservmeternextfree{YType::uint32, "diffServMeterNextFree"}
{
    yang_name = "diffServMeter"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservmeter::~Diffservmeter()
{
}

bool DiffservMib::Diffservmeter::has_data() const
{
    return diffservmeternextfree.is_set;
}

bool DiffservMib::Diffservmeter::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmeternextfree.operation);
}

std::string DiffservMib::Diffservmeter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeter";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmeter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeternextfree.is_set || is_set(diffservmeternextfree.operation)) leaf_name_data.push_back(diffservmeternextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmeter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmeter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservmeter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMeterNextFree")
    {
        diffservmeternextfree = value;
    }
}

DiffservMib::Diffservtbparam::Diffservtbparam()
    :
    diffservtbparamnextfree{YType::uint32, "diffServTBParamNextFree"}
{
    yang_name = "diffServTBParam"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservtbparam::~Diffservtbparam()
{
}

bool DiffservMib::Diffservtbparam::has_data() const
{
    return diffservtbparamnextfree.is_set;
}

bool DiffservMib::Diffservtbparam::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservtbparamnextfree.operation);
}

std::string DiffservMib::Diffservtbparam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParam";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservtbparam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamnextfree.is_set || is_set(diffservtbparamnextfree.operation)) leaf_name_data.push_back(diffservtbparamnextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservtbparam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservtbparam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservtbparam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServTBParamNextFree")
    {
        diffservtbparamnextfree = value;
    }
}

DiffservMib::Diffservaction::Diffservaction()
    :
    diffservactionnextfree{YType::uint32, "diffServActionNextFree"},
    diffservcountactnextfree{YType::uint32, "diffServCountActNextFree"}
{
    yang_name = "diffServAction"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservaction::~Diffservaction()
{
}

bool DiffservMib::Diffservaction::has_data() const
{
    return diffservactionnextfree.is_set
	|| diffservcountactnextfree.is_set;
}

bool DiffservMib::Diffservaction::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservactionnextfree.operation)
	|| is_set(diffservcountactnextfree.operation);
}

std::string DiffservMib::Diffservaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAction";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservaction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionnextfree.is_set || is_set(diffservactionnextfree.operation)) leaf_name_data.push_back(diffservactionnextfree.get_name_leafdata());
    if (diffservcountactnextfree.is_set || is_set(diffservcountactnextfree.operation)) leaf_name_data.push_back(diffservcountactnextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservaction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServActionNextFree")
    {
        diffservactionnextfree = value;
    }
    if(value_path == "diffServCountActNextFree")
    {
        diffservcountactnextfree = value;
    }
}

DiffservMib::Diffservalgdrop::Diffservalgdrop()
    :
    diffservalgdropnextfree{YType::uint32, "diffServAlgDropNextFree"},
    diffservrandomdropnextfree{YType::uint32, "diffServRandomDropNextFree"}
{
    yang_name = "diffServAlgDrop"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservalgdrop::~Diffservalgdrop()
{
}

bool DiffservMib::Diffservalgdrop::has_data() const
{
    return diffservalgdropnextfree.is_set
	|| diffservrandomdropnextfree.is_set;
}

bool DiffservMib::Diffservalgdrop::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservalgdropnextfree.operation)
	|| is_set(diffservrandomdropnextfree.operation);
}

std::string DiffservMib::Diffservalgdrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDrop";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservalgdrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropnextfree.is_set || is_set(diffservalgdropnextfree.operation)) leaf_name_data.push_back(diffservalgdropnextfree.get_name_leafdata());
    if (diffservrandomdropnextfree.is_set || is_set(diffservrandomdropnextfree.operation)) leaf_name_data.push_back(diffservrandomdropnextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservalgdrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservalgdrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservalgdrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServAlgDropNextFree")
    {
        diffservalgdropnextfree = value;
    }
    if(value_path == "diffServRandomDropNextFree")
    {
        diffservrandomdropnextfree = value;
    }
}

DiffservMib::Diffservqueue::Diffservqueue()
    :
    diffservqnextfree{YType::uint32, "diffServQNextFree"}
{
    yang_name = "diffServQueue"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservqueue::~Diffservqueue()
{
}

bool DiffservMib::Diffservqueue::has_data() const
{
    return diffservqnextfree.is_set;
}

bool DiffservMib::Diffservqueue::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservqnextfree.operation);
}

std::string DiffservMib::Diffservqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQueue";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservqueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqnextfree.is_set || is_set(diffservqnextfree.operation)) leaf_name_data.push_back(diffservqnextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservqueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServQNextFree")
    {
        diffservqnextfree = value;
    }
}

DiffservMib::Diffservscheduler::Diffservscheduler()
    :
    diffservmaxratenextfree{YType::uint32, "diffServMaxRateNextFree"},
    diffservminratenextfree{YType::uint32, "diffServMinRateNextFree"},
    diffservschedulernextfree{YType::uint32, "diffServSchedulerNextFree"}
{
    yang_name = "diffServScheduler"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservscheduler::~Diffservscheduler()
{
}

bool DiffservMib::Diffservscheduler::has_data() const
{
    return diffservmaxratenextfree.is_set
	|| diffservminratenextfree.is_set
	|| diffservschedulernextfree.is_set;
}

bool DiffservMib::Diffservscheduler::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmaxratenextfree.operation)
	|| is_set(diffservminratenextfree.operation)
	|| is_set(diffservschedulernextfree.operation);
}

std::string DiffservMib::Diffservscheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServScheduler";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservscheduler::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmaxratenextfree.is_set || is_set(diffservmaxratenextfree.operation)) leaf_name_data.push_back(diffservmaxratenextfree.get_name_leafdata());
    if (diffservminratenextfree.is_set || is_set(diffservminratenextfree.operation)) leaf_name_data.push_back(diffservminratenextfree.get_name_leafdata());
    if (diffservschedulernextfree.is_set || is_set(diffservschedulernextfree.operation)) leaf_name_data.push_back(diffservschedulernextfree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservscheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservscheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservscheduler::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMaxRateNextFree")
    {
        diffservmaxratenextfree = value;
    }
    if(value_path == "diffServMinRateNextFree")
    {
        diffservminratenextfree = value;
    }
    if(value_path == "diffServSchedulerNextFree")
    {
        diffservschedulernextfree = value;
    }
}

DiffservMib::Diffservdatapathtable::Diffservdatapathtable()
{
    yang_name = "diffServDataPathTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservdatapathtable::~Diffservdatapathtable()
{
}

bool DiffservMib::Diffservdatapathtable::has_data() const
{
    for (std::size_t index=0; index<diffservdatapathentry_.size(); index++)
    {
        if(diffservdatapathentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservdatapathtable::has_operation() const
{
    for (std::size_t index=0; index<diffservdatapathentry_.size(); index++)
    {
        if(diffservdatapathentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservdatapathtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservdatapathtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservdatapathtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDataPathEntry")
    {
        for(auto const & c : diffservdatapathentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservdatapathtable::Diffservdatapathentry>();
        c->parent = this;
        diffservdatapathentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservdatapathtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservdatapathentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservdatapathtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservdatapathtable::Diffservdatapathentry::Diffservdatapathentry()
    :
    ifindex{YType::str, "ifIndex"},
    diffservdatapathifdirection{YType::enumeration, "diffServDataPathIfDirection"},
    diffservdatapathstart{YType::str, "diffServDataPathStart"},
    diffservdatapathstatus{YType::enumeration, "diffServDataPathStatus"},
    diffservdatapathstorage{YType::enumeration, "diffServDataPathStorage"}
{
    yang_name = "diffServDataPathEntry"; yang_parent_name = "diffServDataPathTable";
}

DiffservMib::Diffservdatapathtable::Diffservdatapathentry::~Diffservdatapathentry()
{
}

bool DiffservMib::Diffservdatapathtable::Diffservdatapathentry::has_data() const
{
    return ifindex.is_set
	|| diffservdatapathifdirection.is_set
	|| diffservdatapathstart.is_set
	|| diffservdatapathstatus.is_set
	|| diffservdatapathstorage.is_set;
}

bool DiffservMib::Diffservdatapathtable::Diffservdatapathentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(diffservdatapathifdirection.operation)
	|| is_set(diffservdatapathstart.operation)
	|| is_set(diffservdatapathstatus.operation)
	|| is_set(diffservdatapathstorage.operation);
}

std::string DiffservMib::Diffservdatapathtable::Diffservdatapathentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDataPathEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[diffServDataPathIfDirection='" <<diffservdatapathifdirection <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservdatapathtable::Diffservdatapathentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDataPathTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (diffservdatapathifdirection.is_set || is_set(diffservdatapathifdirection.operation)) leaf_name_data.push_back(diffservdatapathifdirection.get_name_leafdata());
    if (diffservdatapathstart.is_set || is_set(diffservdatapathstart.operation)) leaf_name_data.push_back(diffservdatapathstart.get_name_leafdata());
    if (diffservdatapathstatus.is_set || is_set(diffservdatapathstatus.operation)) leaf_name_data.push_back(diffservdatapathstatus.get_name_leafdata());
    if (diffservdatapathstorage.is_set || is_set(diffservdatapathstorage.operation)) leaf_name_data.push_back(diffservdatapathstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservdatapathtable::Diffservdatapathentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservdatapathtable::Diffservdatapathentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservdatapathtable::Diffservdatapathentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "diffServDataPathIfDirection")
    {
        diffservdatapathifdirection = value;
    }
    if(value_path == "diffServDataPathStart")
    {
        diffservdatapathstart = value;
    }
    if(value_path == "diffServDataPathStatus")
    {
        diffservdatapathstatus = value;
    }
    if(value_path == "diffServDataPathStorage")
    {
        diffservdatapathstorage = value;
    }
}

DiffservMib::Diffservclfrtable::Diffservclfrtable()
{
    yang_name = "diffServClfrTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservclfrtable::~Diffservclfrtable()
{
}

bool DiffservMib::Diffservclfrtable::has_data() const
{
    for (std::size_t index=0; index<diffservclfrentry_.size(); index++)
    {
        if(diffservclfrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservclfrtable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrentry_.size(); index++)
    {
        if(diffservclfrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservclfrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservclfrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservclfrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrEntry")
    {
        for(auto const & c : diffservclfrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservclfrtable::Diffservclfrentry>();
        c->parent = this;
        diffservclfrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservclfrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservclfrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservclfrtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservclfrtable::Diffservclfrentry::Diffservclfrentry()
    :
    diffservclfrid{YType::uint32, "diffServClfrId"},
    diffservclfrstatus{YType::enumeration, "diffServClfrStatus"},
    diffservclfrstorage{YType::enumeration, "diffServClfrStorage"}
{
    yang_name = "diffServClfrEntry"; yang_parent_name = "diffServClfrTable";
}

DiffservMib::Diffservclfrtable::Diffservclfrentry::~Diffservclfrentry()
{
}

bool DiffservMib::Diffservclfrtable::Diffservclfrentry::has_data() const
{
    return diffservclfrid.is_set
	|| diffservclfrstatus.is_set
	|| diffservclfrstorage.is_set;
}

bool DiffservMib::Diffservclfrtable::Diffservclfrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservclfrid.operation)
	|| is_set(diffservclfrstatus.operation)
	|| is_set(diffservclfrstorage.operation);
}

std::string DiffservMib::Diffservclfrtable::Diffservclfrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrEntry" <<"[diffServClfrId='" <<diffservclfrid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservclfrtable::Diffservclfrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.operation)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrstatus.is_set || is_set(diffservclfrstatus.operation)) leaf_name_data.push_back(diffservclfrstatus.get_name_leafdata());
    if (diffservclfrstorage.is_set || is_set(diffservclfrstorage.operation)) leaf_name_data.push_back(diffservclfrstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservclfrtable::Diffservclfrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservclfrtable::Diffservclfrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservclfrtable::Diffservclfrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid = value;
    }
    if(value_path == "diffServClfrStatus")
    {
        diffservclfrstatus = value;
    }
    if(value_path == "diffServClfrStorage")
    {
        diffservclfrstorage = value;
    }
}

DiffservMib::Diffservclfrelementtable::Diffservclfrelementtable()
{
    yang_name = "diffServClfrElementTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservclfrelementtable::~Diffservclfrelementtable()
{
}

bool DiffservMib::Diffservclfrelementtable::has_data() const
{
    for (std::size_t index=0; index<diffservclfrelemententry_.size(); index++)
    {
        if(diffservclfrelemententry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservclfrelementtable::has_operation() const
{
    for (std::size_t index=0; index<diffservclfrelemententry_.size(); index++)
    {
        if(diffservclfrelemententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservclfrelementtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservclfrelementtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservclfrelementtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServClfrElementEntry")
    {
        for(auto const & c : diffservclfrelemententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry>();
        c->parent = this;
        diffservclfrelemententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservclfrelementtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservclfrelemententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservclfrelementtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::Diffservclfrelemententry()
    :
    diffservclfrid{YType::str, "diffServClfrId"},
    diffservclfrelementid{YType::uint32, "diffServClfrElementId"},
    diffservclfrelementnext{YType::str, "diffServClfrElementNext"},
    diffservclfrelementprecedence{YType::uint32, "diffServClfrElementPrecedence"},
    diffservclfrelementspecific{YType::str, "diffServClfrElementSpecific"},
    diffservclfrelementstatus{YType::enumeration, "diffServClfrElementStatus"},
    diffservclfrelementstorage{YType::enumeration, "diffServClfrElementStorage"}
{
    yang_name = "diffServClfrElementEntry"; yang_parent_name = "diffServClfrElementTable";
}

DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::~Diffservclfrelemententry()
{
}

bool DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::has_data() const
{
    return diffservclfrid.is_set
	|| diffservclfrelementid.is_set
	|| diffservclfrelementnext.is_set
	|| diffservclfrelementprecedence.is_set
	|| diffservclfrelementspecific.is_set
	|| diffservclfrelementstatus.is_set
	|| diffservclfrelementstorage.is_set;
}

bool DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservclfrid.operation)
	|| is_set(diffservclfrelementid.operation)
	|| is_set(diffservclfrelementnext.operation)
	|| is_set(diffservclfrelementprecedence.operation)
	|| is_set(diffservclfrelementspecific.operation)
	|| is_set(diffservclfrelementstatus.operation)
	|| is_set(diffservclfrelementstorage.operation);
}

std::string DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServClfrElementEntry" <<"[diffServClfrId='" <<diffservclfrid <<"']" <<"[diffServClfrElementId='" <<diffservclfrelementid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServClfrElementTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservclfrid.is_set || is_set(diffservclfrid.operation)) leaf_name_data.push_back(diffservclfrid.get_name_leafdata());
    if (diffservclfrelementid.is_set || is_set(diffservclfrelementid.operation)) leaf_name_data.push_back(diffservclfrelementid.get_name_leafdata());
    if (diffservclfrelementnext.is_set || is_set(diffservclfrelementnext.operation)) leaf_name_data.push_back(diffservclfrelementnext.get_name_leafdata());
    if (diffservclfrelementprecedence.is_set || is_set(diffservclfrelementprecedence.operation)) leaf_name_data.push_back(diffservclfrelementprecedence.get_name_leafdata());
    if (diffservclfrelementspecific.is_set || is_set(diffservclfrelementspecific.operation)) leaf_name_data.push_back(diffservclfrelementspecific.get_name_leafdata());
    if (diffservclfrelementstatus.is_set || is_set(diffservclfrelementstatus.operation)) leaf_name_data.push_back(diffservclfrelementstatus.get_name_leafdata());
    if (diffservclfrelementstorage.is_set || is_set(diffservclfrelementstorage.operation)) leaf_name_data.push_back(diffservclfrelementstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServClfrId")
    {
        diffservclfrid = value;
    }
    if(value_path == "diffServClfrElementId")
    {
        diffservclfrelementid = value;
    }
    if(value_path == "diffServClfrElementNext")
    {
        diffservclfrelementnext = value;
    }
    if(value_path == "diffServClfrElementPrecedence")
    {
        diffservclfrelementprecedence = value;
    }
    if(value_path == "diffServClfrElementSpecific")
    {
        diffservclfrelementspecific = value;
    }
    if(value_path == "diffServClfrElementStatus")
    {
        diffservclfrelementstatus = value;
    }
    if(value_path == "diffServClfrElementStorage")
    {
        diffservclfrelementstorage = value;
    }
}

DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrtable()
{
    yang_name = "diffServMultiFieldClfrTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservmultifieldclfrtable::~Diffservmultifieldclfrtable()
{
}

bool DiffservMib::Diffservmultifieldclfrtable::has_data() const
{
    for (std::size_t index=0; index<diffservmultifieldclfrentry_.size(); index++)
    {
        if(diffservmultifieldclfrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservmultifieldclfrtable::has_operation() const
{
    for (std::size_t index=0; index<diffservmultifieldclfrentry_.size(); index++)
    {
        if(diffservmultifieldclfrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservmultifieldclfrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmultifieldclfrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmultifieldclfrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMultiFieldClfrEntry")
    {
        for(auto const & c : diffservmultifieldclfrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry>();
        c->parent = this;
        diffservmultifieldclfrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmultifieldclfrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmultifieldclfrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservmultifieldclfrtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::Diffservmultifieldclfrentry()
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
    yang_name = "diffServMultiFieldClfrEntry"; yang_parent_name = "diffServMultiFieldClfrTable";
}

DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::~Diffservmultifieldclfrentry()
{
}

bool DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::has_data() const
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

bool DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmultifieldclfrid.operation)
	|| is_set(diffservmultifieldclfraddrtype.operation)
	|| is_set(diffservmultifieldclfrdscp.operation)
	|| is_set(diffservmultifieldclfrdstaddr.operation)
	|| is_set(diffservmultifieldclfrdstl4portmax.operation)
	|| is_set(diffservmultifieldclfrdstl4portmin.operation)
	|| is_set(diffservmultifieldclfrdstprefixlength.operation)
	|| is_set(diffservmultifieldclfrflowid.operation)
	|| is_set(diffservmultifieldclfrprotocol.operation)
	|| is_set(diffservmultifieldclfrsrcaddr.operation)
	|| is_set(diffservmultifieldclfrsrcl4portmax.operation)
	|| is_set(diffservmultifieldclfrsrcl4portmin.operation)
	|| is_set(diffservmultifieldclfrsrcprefixlength.operation)
	|| is_set(diffservmultifieldclfrstatus.operation)
	|| is_set(diffservmultifieldclfrstorage.operation);
}

std::string DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMultiFieldClfrEntry" <<"[diffServMultiFieldClfrId='" <<diffservmultifieldclfrid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMultiFieldClfrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmultifieldclfrid.is_set || is_set(diffservmultifieldclfrid.operation)) leaf_name_data.push_back(diffservmultifieldclfrid.get_name_leafdata());
    if (diffservmultifieldclfraddrtype.is_set || is_set(diffservmultifieldclfraddrtype.operation)) leaf_name_data.push_back(diffservmultifieldclfraddrtype.get_name_leafdata());
    if (diffservmultifieldclfrdscp.is_set || is_set(diffservmultifieldclfrdscp.operation)) leaf_name_data.push_back(diffservmultifieldclfrdscp.get_name_leafdata());
    if (diffservmultifieldclfrdstaddr.is_set || is_set(diffservmultifieldclfrdstaddr.operation)) leaf_name_data.push_back(diffservmultifieldclfrdstaddr.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmax.is_set || is_set(diffservmultifieldclfrdstl4portmax.operation)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrdstl4portmin.is_set || is_set(diffservmultifieldclfrdstl4portmin.operation)) leaf_name_data.push_back(diffservmultifieldclfrdstl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrdstprefixlength.is_set || is_set(diffservmultifieldclfrdstprefixlength.operation)) leaf_name_data.push_back(diffservmultifieldclfrdstprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrflowid.is_set || is_set(diffservmultifieldclfrflowid.operation)) leaf_name_data.push_back(diffservmultifieldclfrflowid.get_name_leafdata());
    if (diffservmultifieldclfrprotocol.is_set || is_set(diffservmultifieldclfrprotocol.operation)) leaf_name_data.push_back(diffservmultifieldclfrprotocol.get_name_leafdata());
    if (diffservmultifieldclfrsrcaddr.is_set || is_set(diffservmultifieldclfrsrcaddr.operation)) leaf_name_data.push_back(diffservmultifieldclfrsrcaddr.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmax.is_set || is_set(diffservmultifieldclfrsrcl4portmax.operation)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmax.get_name_leafdata());
    if (diffservmultifieldclfrsrcl4portmin.is_set || is_set(diffservmultifieldclfrsrcl4portmin.operation)) leaf_name_data.push_back(diffservmultifieldclfrsrcl4portmin.get_name_leafdata());
    if (diffservmultifieldclfrsrcprefixlength.is_set || is_set(diffservmultifieldclfrsrcprefixlength.operation)) leaf_name_data.push_back(diffservmultifieldclfrsrcprefixlength.get_name_leafdata());
    if (diffservmultifieldclfrstatus.is_set || is_set(diffservmultifieldclfrstatus.operation)) leaf_name_data.push_back(diffservmultifieldclfrstatus.get_name_leafdata());
    if (diffservmultifieldclfrstorage.is_set || is_set(diffservmultifieldclfrstorage.operation)) leaf_name_data.push_back(diffservmultifieldclfrstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMultiFieldClfrId")
    {
        diffservmultifieldclfrid = value;
    }
    if(value_path == "diffServMultiFieldClfrAddrType")
    {
        diffservmultifieldclfraddrtype = value;
    }
    if(value_path == "diffServMultiFieldClfrDscp")
    {
        diffservmultifieldclfrdscp = value;
    }
    if(value_path == "diffServMultiFieldClfrDstAddr")
    {
        diffservmultifieldclfrdstaddr = value;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMax")
    {
        diffservmultifieldclfrdstl4portmax = value;
    }
    if(value_path == "diffServMultiFieldClfrDstL4PortMin")
    {
        diffservmultifieldclfrdstl4portmin = value;
    }
    if(value_path == "diffServMultiFieldClfrDstPrefixLength")
    {
        diffservmultifieldclfrdstprefixlength = value;
    }
    if(value_path == "diffServMultiFieldClfrFlowId")
    {
        diffservmultifieldclfrflowid = value;
    }
    if(value_path == "diffServMultiFieldClfrProtocol")
    {
        diffservmultifieldclfrprotocol = value;
    }
    if(value_path == "diffServMultiFieldClfrSrcAddr")
    {
        diffservmultifieldclfrsrcaddr = value;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMax")
    {
        diffservmultifieldclfrsrcl4portmax = value;
    }
    if(value_path == "diffServMultiFieldClfrSrcL4PortMin")
    {
        diffservmultifieldclfrsrcl4portmin = value;
    }
    if(value_path == "diffServMultiFieldClfrSrcPrefixLength")
    {
        diffservmultifieldclfrsrcprefixlength = value;
    }
    if(value_path == "diffServMultiFieldClfrStatus")
    {
        diffservmultifieldclfrstatus = value;
    }
    if(value_path == "diffServMultiFieldClfrStorage")
    {
        diffservmultifieldclfrstorage = value;
    }
}

DiffservMib::Diffservmetertable::Diffservmetertable()
{
    yang_name = "diffServMeterTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservmetertable::~Diffservmetertable()
{
}

bool DiffservMib::Diffservmetertable::has_data() const
{
    for (std::size_t index=0; index<diffservmeterentry_.size(); index++)
    {
        if(diffservmeterentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservmetertable::has_operation() const
{
    for (std::size_t index=0; index<diffservmeterentry_.size(); index++)
    {
        if(diffservmeterentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservmetertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmetertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmetertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMeterEntry")
    {
        for(auto const & c : diffservmeterentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservmetertable::Diffservmeterentry>();
        c->parent = this;
        diffservmeterentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmetertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmeterentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservmetertable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservmetertable::Diffservmeterentry::Diffservmeterentry()
    :
    diffservmeterid{YType::uint32, "diffServMeterId"},
    diffservmeterfailnext{YType::str, "diffServMeterFailNext"},
    diffservmeterspecific{YType::str, "diffServMeterSpecific"},
    diffservmeterstatus{YType::enumeration, "diffServMeterStatus"},
    diffservmeterstorage{YType::enumeration, "diffServMeterStorage"},
    diffservmetersucceednext{YType::str, "diffServMeterSucceedNext"}
{
    yang_name = "diffServMeterEntry"; yang_parent_name = "diffServMeterTable";
}

DiffservMib::Diffservmetertable::Diffservmeterentry::~Diffservmeterentry()
{
}

bool DiffservMib::Diffservmetertable::Diffservmeterentry::has_data() const
{
    return diffservmeterid.is_set
	|| diffservmeterfailnext.is_set
	|| diffservmeterspecific.is_set
	|| diffservmeterstatus.is_set
	|| diffservmeterstorage.is_set
	|| diffservmetersucceednext.is_set;
}

bool DiffservMib::Diffservmetertable::Diffservmeterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmeterid.operation)
	|| is_set(diffservmeterfailnext.operation)
	|| is_set(diffservmeterspecific.operation)
	|| is_set(diffservmeterstatus.operation)
	|| is_set(diffservmeterstorage.operation)
	|| is_set(diffservmetersucceednext.operation);
}

std::string DiffservMib::Diffservmetertable::Diffservmeterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMeterEntry" <<"[diffServMeterId='" <<diffservmeterid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmetertable::Diffservmeterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMeterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmeterid.is_set || is_set(diffservmeterid.operation)) leaf_name_data.push_back(diffservmeterid.get_name_leafdata());
    if (diffservmeterfailnext.is_set || is_set(diffservmeterfailnext.operation)) leaf_name_data.push_back(diffservmeterfailnext.get_name_leafdata());
    if (diffservmeterspecific.is_set || is_set(diffservmeterspecific.operation)) leaf_name_data.push_back(diffservmeterspecific.get_name_leafdata());
    if (diffservmeterstatus.is_set || is_set(diffservmeterstatus.operation)) leaf_name_data.push_back(diffservmeterstatus.get_name_leafdata());
    if (diffservmeterstorage.is_set || is_set(diffservmeterstorage.operation)) leaf_name_data.push_back(diffservmeterstorage.get_name_leafdata());
    if (diffservmetersucceednext.is_set || is_set(diffservmetersucceednext.operation)) leaf_name_data.push_back(diffservmetersucceednext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmetertable::Diffservmeterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmetertable::Diffservmeterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservmetertable::Diffservmeterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMeterId")
    {
        diffservmeterid = value;
    }
    if(value_path == "diffServMeterFailNext")
    {
        diffservmeterfailnext = value;
    }
    if(value_path == "diffServMeterSpecific")
    {
        diffservmeterspecific = value;
    }
    if(value_path == "diffServMeterStatus")
    {
        diffservmeterstatus = value;
    }
    if(value_path == "diffServMeterStorage")
    {
        diffservmeterstorage = value;
    }
    if(value_path == "diffServMeterSucceedNext")
    {
        diffservmetersucceednext = value;
    }
}

DiffservMib::Diffservtbparamtable::Diffservtbparamtable()
{
    yang_name = "diffServTBParamTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservtbparamtable::~Diffservtbparamtable()
{
}

bool DiffservMib::Diffservtbparamtable::has_data() const
{
    for (std::size_t index=0; index<diffservtbparamentry_.size(); index++)
    {
        if(diffservtbparamentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservtbparamtable::has_operation() const
{
    for (std::size_t index=0; index<diffservtbparamentry_.size(); index++)
    {
        if(diffservtbparamentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservtbparamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservtbparamtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservtbparamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServTBParamEntry")
    {
        for(auto const & c : diffservtbparamentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservtbparamtable::Diffservtbparamentry>();
        c->parent = this;
        diffservtbparamentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservtbparamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservtbparamentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservtbparamtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservtbparamtable::Diffservtbparamentry::Diffservtbparamentry()
    :
    diffservtbparamid{YType::uint32, "diffServTBParamId"},
    diffservtbparamburstsize{YType::int32, "diffServTBParamBurstSize"},
    diffservtbparaminterval{YType::uint32, "diffServTBParamInterval"},
    diffservtbparamrate{YType::uint32, "diffServTBParamRate"},
    diffservtbparamstatus{YType::enumeration, "diffServTBParamStatus"},
    diffservtbparamstorage{YType::enumeration, "diffServTBParamStorage"},
    diffservtbparamtype{YType::str, "diffServTBParamType"}
{
    yang_name = "diffServTBParamEntry"; yang_parent_name = "diffServTBParamTable";
}

DiffservMib::Diffservtbparamtable::Diffservtbparamentry::~Diffservtbparamentry()
{
}

bool DiffservMib::Diffservtbparamtable::Diffservtbparamentry::has_data() const
{
    return diffservtbparamid.is_set
	|| diffservtbparamburstsize.is_set
	|| diffservtbparaminterval.is_set
	|| diffservtbparamrate.is_set
	|| diffservtbparamstatus.is_set
	|| diffservtbparamstorage.is_set
	|| diffservtbparamtype.is_set;
}

bool DiffservMib::Diffservtbparamtable::Diffservtbparamentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservtbparamid.operation)
	|| is_set(diffservtbparamburstsize.operation)
	|| is_set(diffservtbparaminterval.operation)
	|| is_set(diffservtbparamrate.operation)
	|| is_set(diffservtbparamstatus.operation)
	|| is_set(diffservtbparamstorage.operation)
	|| is_set(diffservtbparamtype.operation);
}

std::string DiffservMib::Diffservtbparamtable::Diffservtbparamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServTBParamEntry" <<"[diffServTBParamId='" <<diffservtbparamid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservtbparamtable::Diffservtbparamentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServTBParamTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservtbparamid.is_set || is_set(diffservtbparamid.operation)) leaf_name_data.push_back(diffservtbparamid.get_name_leafdata());
    if (diffservtbparamburstsize.is_set || is_set(diffservtbparamburstsize.operation)) leaf_name_data.push_back(diffservtbparamburstsize.get_name_leafdata());
    if (diffservtbparaminterval.is_set || is_set(diffservtbparaminterval.operation)) leaf_name_data.push_back(diffservtbparaminterval.get_name_leafdata());
    if (diffservtbparamrate.is_set || is_set(diffservtbparamrate.operation)) leaf_name_data.push_back(diffservtbparamrate.get_name_leafdata());
    if (diffservtbparamstatus.is_set || is_set(diffservtbparamstatus.operation)) leaf_name_data.push_back(diffservtbparamstatus.get_name_leafdata());
    if (diffservtbparamstorage.is_set || is_set(diffservtbparamstorage.operation)) leaf_name_data.push_back(diffservtbparamstorage.get_name_leafdata());
    if (diffservtbparamtype.is_set || is_set(diffservtbparamtype.operation)) leaf_name_data.push_back(diffservtbparamtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservtbparamtable::Diffservtbparamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservtbparamtable::Diffservtbparamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservtbparamtable::Diffservtbparamentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServTBParamId")
    {
        diffservtbparamid = value;
    }
    if(value_path == "diffServTBParamBurstSize")
    {
        diffservtbparamburstsize = value;
    }
    if(value_path == "diffServTBParamInterval")
    {
        diffservtbparaminterval = value;
    }
    if(value_path == "diffServTBParamRate")
    {
        diffservtbparamrate = value;
    }
    if(value_path == "diffServTBParamStatus")
    {
        diffservtbparamstatus = value;
    }
    if(value_path == "diffServTBParamStorage")
    {
        diffservtbparamstorage = value;
    }
    if(value_path == "diffServTBParamType")
    {
        diffservtbparamtype = value;
    }
}

DiffservMib::Diffservactiontable::Diffservactiontable()
{
    yang_name = "diffServActionTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservactiontable::~Diffservactiontable()
{
}

bool DiffservMib::Diffservactiontable::has_data() const
{
    for (std::size_t index=0; index<diffservactionentry_.size(); index++)
    {
        if(diffservactionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservactiontable::has_operation() const
{
    for (std::size_t index=0; index<diffservactionentry_.size(); index++)
    {
        if(diffservactionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservactiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServActionEntry")
    {
        for(auto const & c : diffservactionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservactiontable::Diffservactionentry>();
        c->parent = this;
        diffservactionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservactionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservactiontable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservactiontable::Diffservactionentry::Diffservactionentry()
    :
    diffservactionid{YType::uint32, "diffServActionId"},
    diffservactioninterface{YType::int32, "diffServActionInterface"},
    diffservactionnext{YType::str, "diffServActionNext"},
    diffservactionspecific{YType::str, "diffServActionSpecific"},
    diffservactionstatus{YType::enumeration, "diffServActionStatus"},
    diffservactionstorage{YType::enumeration, "diffServActionStorage"}
{
    yang_name = "diffServActionEntry"; yang_parent_name = "diffServActionTable";
}

DiffservMib::Diffservactiontable::Diffservactionentry::~Diffservactionentry()
{
}

bool DiffservMib::Diffservactiontable::Diffservactionentry::has_data() const
{
    return diffservactionid.is_set
	|| diffservactioninterface.is_set
	|| diffservactionnext.is_set
	|| diffservactionspecific.is_set
	|| diffservactionstatus.is_set
	|| diffservactionstorage.is_set;
}

bool DiffservMib::Diffservactiontable::Diffservactionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservactionid.operation)
	|| is_set(diffservactioninterface.operation)
	|| is_set(diffservactionnext.operation)
	|| is_set(diffservactionspecific.operation)
	|| is_set(diffservactionstatus.operation)
	|| is_set(diffservactionstorage.operation);
}

std::string DiffservMib::Diffservactiontable::Diffservactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServActionEntry" <<"[diffServActionId='" <<diffservactionid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservactiontable::Diffservactionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServActionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservactionid.is_set || is_set(diffservactionid.operation)) leaf_name_data.push_back(diffservactionid.get_name_leafdata());
    if (diffservactioninterface.is_set || is_set(diffservactioninterface.operation)) leaf_name_data.push_back(diffservactioninterface.get_name_leafdata());
    if (diffservactionnext.is_set || is_set(diffservactionnext.operation)) leaf_name_data.push_back(diffservactionnext.get_name_leafdata());
    if (diffservactionspecific.is_set || is_set(diffservactionspecific.operation)) leaf_name_data.push_back(diffservactionspecific.get_name_leafdata());
    if (diffservactionstatus.is_set || is_set(diffservactionstatus.operation)) leaf_name_data.push_back(diffservactionstatus.get_name_leafdata());
    if (diffservactionstorage.is_set || is_set(diffservactionstorage.operation)) leaf_name_data.push_back(diffservactionstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservactiontable::Diffservactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservactiontable::Diffservactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservactiontable::Diffservactionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServActionId")
    {
        diffservactionid = value;
    }
    if(value_path == "diffServActionInterface")
    {
        diffservactioninterface = value;
    }
    if(value_path == "diffServActionNext")
    {
        diffservactionnext = value;
    }
    if(value_path == "diffServActionSpecific")
    {
        diffservactionspecific = value;
    }
    if(value_path == "diffServActionStatus")
    {
        diffservactionstatus = value;
    }
    if(value_path == "diffServActionStorage")
    {
        diffservactionstorage = value;
    }
}

DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkacttable()
{
    yang_name = "diffServDscpMarkActTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservdscpmarkacttable::~Diffservdscpmarkacttable()
{
}

bool DiffservMib::Diffservdscpmarkacttable::has_data() const
{
    for (std::size_t index=0; index<diffservdscpmarkactentry_.size(); index++)
    {
        if(diffservdscpmarkactentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservdscpmarkacttable::has_operation() const
{
    for (std::size_t index=0; index<diffservdscpmarkactentry_.size(); index++)
    {
        if(diffservdscpmarkactentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservdscpmarkacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservdscpmarkacttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservdscpmarkacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServDscpMarkActEntry")
    {
        for(auto const & c : diffservdscpmarkactentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry>();
        c->parent = this;
        diffservdscpmarkactentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservdscpmarkacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservdscpmarkactentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservdscpmarkacttable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::Diffservdscpmarkactentry()
    :
    diffservdscpmarkactdscp{YType::uint8, "diffServDscpMarkActDscp"}
{
    yang_name = "diffServDscpMarkActEntry"; yang_parent_name = "diffServDscpMarkActTable";
}

DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::~Diffservdscpmarkactentry()
{
}

bool DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::has_data() const
{
    return diffservdscpmarkactdscp.is_set;
}

bool DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservdscpmarkactdscp.operation);
}

std::string DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServDscpMarkActEntry" <<"[diffServDscpMarkActDscp='" <<diffservdscpmarkactdscp <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServDscpMarkActTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservdscpmarkactdscp.is_set || is_set(diffservdscpmarkactdscp.operation)) leaf_name_data.push_back(diffservdscpmarkactdscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServDscpMarkActDscp")
    {
        diffservdscpmarkactdscp = value;
    }
}

DiffservMib::Diffservcountacttable::Diffservcountacttable()
{
    yang_name = "diffServCountActTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservcountacttable::~Diffservcountacttable()
{
}

bool DiffservMib::Diffservcountacttable::has_data() const
{
    for (std::size_t index=0; index<diffservcountactentry_.size(); index++)
    {
        if(diffservcountactentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservcountacttable::has_operation() const
{
    for (std::size_t index=0; index<diffservcountactentry_.size(); index++)
    {
        if(diffservcountactentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservcountacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservcountacttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservcountacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServCountActEntry")
    {
        for(auto const & c : diffservcountactentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservcountacttable::Diffservcountactentry>();
        c->parent = this;
        diffservcountactentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservcountacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservcountactentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservcountacttable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservcountacttable::Diffservcountactentry::Diffservcountactentry()
    :
    diffservcountactid{YType::uint32, "diffServCountActId"},
    diffservcountactoctets{YType::uint64, "diffServCountActOctets"},
    diffservcountactpkts{YType::uint64, "diffServCountActPkts"},
    diffservcountactstatus{YType::enumeration, "diffServCountActStatus"},
    diffservcountactstorage{YType::enumeration, "diffServCountActStorage"}
{
    yang_name = "diffServCountActEntry"; yang_parent_name = "diffServCountActTable";
}

DiffservMib::Diffservcountacttable::Diffservcountactentry::~Diffservcountactentry()
{
}

bool DiffservMib::Diffservcountacttable::Diffservcountactentry::has_data() const
{
    return diffservcountactid.is_set
	|| diffservcountactoctets.is_set
	|| diffservcountactpkts.is_set
	|| diffservcountactstatus.is_set
	|| diffservcountactstorage.is_set;
}

bool DiffservMib::Diffservcountacttable::Diffservcountactentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservcountactid.operation)
	|| is_set(diffservcountactoctets.operation)
	|| is_set(diffservcountactpkts.operation)
	|| is_set(diffservcountactstatus.operation)
	|| is_set(diffservcountactstorage.operation);
}

std::string DiffservMib::Diffservcountacttable::Diffservcountactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServCountActEntry" <<"[diffServCountActId='" <<diffservcountactid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservcountacttable::Diffservcountactentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServCountActTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservcountactid.is_set || is_set(diffservcountactid.operation)) leaf_name_data.push_back(diffservcountactid.get_name_leafdata());
    if (diffservcountactoctets.is_set || is_set(diffservcountactoctets.operation)) leaf_name_data.push_back(diffservcountactoctets.get_name_leafdata());
    if (diffservcountactpkts.is_set || is_set(diffservcountactpkts.operation)) leaf_name_data.push_back(diffservcountactpkts.get_name_leafdata());
    if (diffservcountactstatus.is_set || is_set(diffservcountactstatus.operation)) leaf_name_data.push_back(diffservcountactstatus.get_name_leafdata());
    if (diffservcountactstorage.is_set || is_set(diffservcountactstorage.operation)) leaf_name_data.push_back(diffservcountactstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservcountacttable::Diffservcountactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservcountacttable::Diffservcountactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservcountacttable::Diffservcountactentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServCountActId")
    {
        diffservcountactid = value;
    }
    if(value_path == "diffServCountActOctets")
    {
        diffservcountactoctets = value;
    }
    if(value_path == "diffServCountActPkts")
    {
        diffservcountactpkts = value;
    }
    if(value_path == "diffServCountActStatus")
    {
        diffservcountactstatus = value;
    }
    if(value_path == "diffServCountActStorage")
    {
        diffservcountactstorage = value;
    }
}

DiffservMib::Diffservalgdroptable::Diffservalgdroptable()
{
    yang_name = "diffServAlgDropTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservalgdroptable::~Diffservalgdroptable()
{
}

bool DiffservMib::Diffservalgdroptable::has_data() const
{
    for (std::size_t index=0; index<diffservalgdropentry_.size(); index++)
    {
        if(diffservalgdropentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservalgdroptable::has_operation() const
{
    for (std::size_t index=0; index<diffservalgdropentry_.size(); index++)
    {
        if(diffservalgdropentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservalgdroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservalgdroptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservalgdroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServAlgDropEntry")
    {
        for(auto const & c : diffservalgdropentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservalgdroptable::Diffservalgdropentry>();
        c->parent = this;
        diffservalgdropentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservalgdroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservalgdropentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservalgdroptable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdropentry()
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
    yang_name = "diffServAlgDropEntry"; yang_parent_name = "diffServAlgDropTable";
}

DiffservMib::Diffservalgdroptable::Diffservalgdropentry::~Diffservalgdropentry()
{
}

bool DiffservMib::Diffservalgdroptable::Diffservalgdropentry::has_data() const
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

bool DiffservMib::Diffservalgdroptable::Diffservalgdropentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservalgdropid.operation)
	|| is_set(diffservalgdropnext.operation)
	|| is_set(diffservalgdropoctets.operation)
	|| is_set(diffservalgdroppkts.operation)
	|| is_set(diffservalgdropqmeasure.operation)
	|| is_set(diffservalgdropqthreshold.operation)
	|| is_set(diffservalgdropspecific.operation)
	|| is_set(diffservalgdropstatus.operation)
	|| is_set(diffservalgdropstorage.operation)
	|| is_set(diffservalgdroptype.operation)
	|| is_set(diffservalgrandomdropoctets.operation)
	|| is_set(diffservalgrandomdroppkts.operation);
}

std::string DiffservMib::Diffservalgdroptable::Diffservalgdropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServAlgDropEntry" <<"[diffServAlgDropId='" <<diffservalgdropid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservalgdroptable::Diffservalgdropentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServAlgDropTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservalgdropid.is_set || is_set(diffservalgdropid.operation)) leaf_name_data.push_back(diffservalgdropid.get_name_leafdata());
    if (diffservalgdropnext.is_set || is_set(diffservalgdropnext.operation)) leaf_name_data.push_back(diffservalgdropnext.get_name_leafdata());
    if (diffservalgdropoctets.is_set || is_set(diffservalgdropoctets.operation)) leaf_name_data.push_back(diffservalgdropoctets.get_name_leafdata());
    if (diffservalgdroppkts.is_set || is_set(diffservalgdroppkts.operation)) leaf_name_data.push_back(diffservalgdroppkts.get_name_leafdata());
    if (diffservalgdropqmeasure.is_set || is_set(diffservalgdropqmeasure.operation)) leaf_name_data.push_back(diffservalgdropqmeasure.get_name_leafdata());
    if (diffservalgdropqthreshold.is_set || is_set(diffservalgdropqthreshold.operation)) leaf_name_data.push_back(diffservalgdropqthreshold.get_name_leafdata());
    if (diffservalgdropspecific.is_set || is_set(diffservalgdropspecific.operation)) leaf_name_data.push_back(diffservalgdropspecific.get_name_leafdata());
    if (diffservalgdropstatus.is_set || is_set(diffservalgdropstatus.operation)) leaf_name_data.push_back(diffservalgdropstatus.get_name_leafdata());
    if (diffservalgdropstorage.is_set || is_set(diffservalgdropstorage.operation)) leaf_name_data.push_back(diffservalgdropstorage.get_name_leafdata());
    if (diffservalgdroptype.is_set || is_set(diffservalgdroptype.operation)) leaf_name_data.push_back(diffservalgdroptype.get_name_leafdata());
    if (diffservalgrandomdropoctets.is_set || is_set(diffservalgrandomdropoctets.operation)) leaf_name_data.push_back(diffservalgrandomdropoctets.get_name_leafdata());
    if (diffservalgrandomdroppkts.is_set || is_set(diffservalgrandomdroppkts.operation)) leaf_name_data.push_back(diffservalgrandomdroppkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservalgdroptable::Diffservalgdropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservalgdroptable::Diffservalgdropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservalgdroptable::Diffservalgdropentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServAlgDropId")
    {
        diffservalgdropid = value;
    }
    if(value_path == "diffServAlgDropNext")
    {
        diffservalgdropnext = value;
    }
    if(value_path == "diffServAlgDropOctets")
    {
        diffservalgdropoctets = value;
    }
    if(value_path == "diffServAlgDropPkts")
    {
        diffservalgdroppkts = value;
    }
    if(value_path == "diffServAlgDropQMeasure")
    {
        diffservalgdropqmeasure = value;
    }
    if(value_path == "diffServAlgDropQThreshold")
    {
        diffservalgdropqthreshold = value;
    }
    if(value_path == "diffServAlgDropSpecific")
    {
        diffservalgdropspecific = value;
    }
    if(value_path == "diffServAlgDropStatus")
    {
        diffservalgdropstatus = value;
    }
    if(value_path == "diffServAlgDropStorage")
    {
        diffservalgdropstorage = value;
    }
    if(value_path == "diffServAlgDropType")
    {
        diffservalgdroptype = value;
    }
    if(value_path == "diffServAlgRandomDropOctets")
    {
        diffservalgrandomdropoctets = value;
    }
    if(value_path == "diffServAlgRandomDropPkts")
    {
        diffservalgrandomdroppkts = value;
    }
}

DiffservMib::Diffservrandomdroptable::Diffservrandomdroptable()
{
    yang_name = "diffServRandomDropTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservrandomdroptable::~Diffservrandomdroptable()
{
}

bool DiffservMib::Diffservrandomdroptable::has_data() const
{
    for (std::size_t index=0; index<diffservrandomdropentry_.size(); index++)
    {
        if(diffservrandomdropentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservrandomdroptable::has_operation() const
{
    for (std::size_t index=0; index<diffservrandomdropentry_.size(); index++)
    {
        if(diffservrandomdropentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservrandomdroptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservrandomdroptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservrandomdroptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServRandomDropEntry")
    {
        for(auto const & c : diffservrandomdropentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry>();
        c->parent = this;
        diffservrandomdropentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservrandomdroptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservrandomdropentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservrandomdroptable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::Diffservrandomdropentry()
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
    yang_name = "diffServRandomDropEntry"; yang_parent_name = "diffServRandomDropTable";
}

DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::~Diffservrandomdropentry()
{
}

bool DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::has_data() const
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

bool DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservrandomdropid.operation)
	|| is_set(diffservrandomdropmaxthreshbytes.operation)
	|| is_set(diffservrandomdropmaxthreshpkts.operation)
	|| is_set(diffservrandomdropminthreshbytes.operation)
	|| is_set(diffservrandomdropminthreshpkts.operation)
	|| is_set(diffservrandomdropprobmax.operation)
	|| is_set(diffservrandomdropsamplingrate.operation)
	|| is_set(diffservrandomdropstatus.operation)
	|| is_set(diffservrandomdropstorage.operation)
	|| is_set(diffservrandomdropweight.operation);
}

std::string DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServRandomDropEntry" <<"[diffServRandomDropId='" <<diffservrandomdropid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServRandomDropTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservrandomdropid.is_set || is_set(diffservrandomdropid.operation)) leaf_name_data.push_back(diffservrandomdropid.get_name_leafdata());
    if (diffservrandomdropmaxthreshbytes.is_set || is_set(diffservrandomdropmaxthreshbytes.operation)) leaf_name_data.push_back(diffservrandomdropmaxthreshbytes.get_name_leafdata());
    if (diffservrandomdropmaxthreshpkts.is_set || is_set(diffservrandomdropmaxthreshpkts.operation)) leaf_name_data.push_back(diffservrandomdropmaxthreshpkts.get_name_leafdata());
    if (diffservrandomdropminthreshbytes.is_set || is_set(diffservrandomdropminthreshbytes.operation)) leaf_name_data.push_back(diffservrandomdropminthreshbytes.get_name_leafdata());
    if (diffservrandomdropminthreshpkts.is_set || is_set(diffservrandomdropminthreshpkts.operation)) leaf_name_data.push_back(diffservrandomdropminthreshpkts.get_name_leafdata());
    if (diffservrandomdropprobmax.is_set || is_set(diffservrandomdropprobmax.operation)) leaf_name_data.push_back(diffservrandomdropprobmax.get_name_leafdata());
    if (diffservrandomdropsamplingrate.is_set || is_set(diffservrandomdropsamplingrate.operation)) leaf_name_data.push_back(diffservrandomdropsamplingrate.get_name_leafdata());
    if (diffservrandomdropstatus.is_set || is_set(diffservrandomdropstatus.operation)) leaf_name_data.push_back(diffservrandomdropstatus.get_name_leafdata());
    if (diffservrandomdropstorage.is_set || is_set(diffservrandomdropstorage.operation)) leaf_name_data.push_back(diffservrandomdropstorage.get_name_leafdata());
    if (diffservrandomdropweight.is_set || is_set(diffservrandomdropweight.operation)) leaf_name_data.push_back(diffservrandomdropweight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServRandomDropId")
    {
        diffservrandomdropid = value;
    }
    if(value_path == "diffServRandomDropMaxThreshBytes")
    {
        diffservrandomdropmaxthreshbytes = value;
    }
    if(value_path == "diffServRandomDropMaxThreshPkts")
    {
        diffservrandomdropmaxthreshpkts = value;
    }
    if(value_path == "diffServRandomDropMinThreshBytes")
    {
        diffservrandomdropminthreshbytes = value;
    }
    if(value_path == "diffServRandomDropMinThreshPkts")
    {
        diffservrandomdropminthreshpkts = value;
    }
    if(value_path == "diffServRandomDropProbMax")
    {
        diffservrandomdropprobmax = value;
    }
    if(value_path == "diffServRandomDropSamplingRate")
    {
        diffservrandomdropsamplingrate = value;
    }
    if(value_path == "diffServRandomDropStatus")
    {
        diffservrandomdropstatus = value;
    }
    if(value_path == "diffServRandomDropStorage")
    {
        diffservrandomdropstorage = value;
    }
    if(value_path == "diffServRandomDropWeight")
    {
        diffservrandomdropweight = value;
    }
}

DiffservMib::Diffservqtable::Diffservqtable()
{
    yang_name = "diffServQTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservqtable::~Diffservqtable()
{
}

bool DiffservMib::Diffservqtable::has_data() const
{
    for (std::size_t index=0; index<diffservqentry_.size(); index++)
    {
        if(diffservqentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservqtable::has_operation() const
{
    for (std::size_t index=0; index<diffservqentry_.size(); index++)
    {
        if(diffservqentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservqtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservqtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservqtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServQEntry")
    {
        for(auto const & c : diffservqentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservqtable::Diffservqentry>();
        c->parent = this;
        diffservqentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservqtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservqentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservqtable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservqtable::Diffservqentry::Diffservqentry()
    :
    diffservqid{YType::uint32, "diffServQId"},
    diffservqmaxrate{YType::str, "diffServQMaxRate"},
    diffservqminrate{YType::str, "diffServQMinRate"},
    diffservqnext{YType::str, "diffServQNext"},
    diffservqstatus{YType::enumeration, "diffServQStatus"},
    diffservqstorage{YType::enumeration, "diffServQStorage"}
{
    yang_name = "diffServQEntry"; yang_parent_name = "diffServQTable";
}

DiffservMib::Diffservqtable::Diffservqentry::~Diffservqentry()
{
}

bool DiffservMib::Diffservqtable::Diffservqentry::has_data() const
{
    return diffservqid.is_set
	|| diffservqmaxrate.is_set
	|| diffservqminrate.is_set
	|| diffservqnext.is_set
	|| diffservqstatus.is_set
	|| diffservqstorage.is_set;
}

bool DiffservMib::Diffservqtable::Diffservqentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservqid.operation)
	|| is_set(diffservqmaxrate.operation)
	|| is_set(diffservqminrate.operation)
	|| is_set(diffservqnext.operation)
	|| is_set(diffservqstatus.operation)
	|| is_set(diffservqstorage.operation);
}

std::string DiffservMib::Diffservqtable::Diffservqentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServQEntry" <<"[diffServQId='" <<diffservqid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservqtable::Diffservqentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServQTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservqid.is_set || is_set(diffservqid.operation)) leaf_name_data.push_back(diffservqid.get_name_leafdata());
    if (diffservqmaxrate.is_set || is_set(diffservqmaxrate.operation)) leaf_name_data.push_back(diffservqmaxrate.get_name_leafdata());
    if (diffservqminrate.is_set || is_set(diffservqminrate.operation)) leaf_name_data.push_back(diffservqminrate.get_name_leafdata());
    if (diffservqnext.is_set || is_set(diffservqnext.operation)) leaf_name_data.push_back(diffservqnext.get_name_leafdata());
    if (diffservqstatus.is_set || is_set(diffservqstatus.operation)) leaf_name_data.push_back(diffservqstatus.get_name_leafdata());
    if (diffservqstorage.is_set || is_set(diffservqstorage.operation)) leaf_name_data.push_back(diffservqstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservqtable::Diffservqentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservqtable::Diffservqentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservqtable::Diffservqentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServQId")
    {
        diffservqid = value;
    }
    if(value_path == "diffServQMaxRate")
    {
        diffservqmaxrate = value;
    }
    if(value_path == "diffServQMinRate")
    {
        diffservqminrate = value;
    }
    if(value_path == "diffServQNext")
    {
        diffservqnext = value;
    }
    if(value_path == "diffServQStatus")
    {
        diffservqstatus = value;
    }
    if(value_path == "diffServQStorage")
    {
        diffservqstorage = value;
    }
}

DiffservMib::Diffservschedulertable::Diffservschedulertable()
{
    yang_name = "diffServSchedulerTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservschedulertable::~Diffservschedulertable()
{
}

bool DiffservMib::Diffservschedulertable::has_data() const
{
    for (std::size_t index=0; index<diffservschedulerentry_.size(); index++)
    {
        if(diffservschedulerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservschedulertable::has_operation() const
{
    for (std::size_t index=0; index<diffservschedulerentry_.size(); index++)
    {
        if(diffservschedulerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservschedulertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservschedulertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservschedulertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServSchedulerEntry")
    {
        for(auto const & c : diffservschedulerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservschedulertable::Diffservschedulerentry>();
        c->parent = this;
        diffservschedulerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservschedulertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservschedulerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservschedulertable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservschedulertable::Diffservschedulerentry::Diffservschedulerentry()
    :
    diffservschedulerid{YType::uint32, "diffServSchedulerId"},
    diffservschedulermaxrate{YType::str, "diffServSchedulerMaxRate"},
    diffservschedulermethod{YType::str, "diffServSchedulerMethod"},
    diffservschedulerminrate{YType::str, "diffServSchedulerMinRate"},
    diffservschedulernext{YType::str, "diffServSchedulerNext"},
    diffservschedulerstatus{YType::enumeration, "diffServSchedulerStatus"},
    diffservschedulerstorage{YType::enumeration, "diffServSchedulerStorage"}
{
    yang_name = "diffServSchedulerEntry"; yang_parent_name = "diffServSchedulerTable";
}

DiffservMib::Diffservschedulertable::Diffservschedulerentry::~Diffservschedulerentry()
{
}

bool DiffservMib::Diffservschedulertable::Diffservschedulerentry::has_data() const
{
    return diffservschedulerid.is_set
	|| diffservschedulermaxrate.is_set
	|| diffservschedulermethod.is_set
	|| diffservschedulerminrate.is_set
	|| diffservschedulernext.is_set
	|| diffservschedulerstatus.is_set
	|| diffservschedulerstorage.is_set;
}

bool DiffservMib::Diffservschedulertable::Diffservschedulerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservschedulerid.operation)
	|| is_set(diffservschedulermaxrate.operation)
	|| is_set(diffservschedulermethod.operation)
	|| is_set(diffservschedulerminrate.operation)
	|| is_set(diffservschedulernext.operation)
	|| is_set(diffservschedulerstatus.operation)
	|| is_set(diffservschedulerstorage.operation);
}

std::string DiffservMib::Diffservschedulertable::Diffservschedulerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServSchedulerEntry" <<"[diffServSchedulerId='" <<diffservschedulerid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservschedulertable::Diffservschedulerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServSchedulerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservschedulerid.is_set || is_set(diffservschedulerid.operation)) leaf_name_data.push_back(diffservschedulerid.get_name_leafdata());
    if (diffservschedulermaxrate.is_set || is_set(diffservschedulermaxrate.operation)) leaf_name_data.push_back(diffservschedulermaxrate.get_name_leafdata());
    if (diffservschedulermethod.is_set || is_set(diffservschedulermethod.operation)) leaf_name_data.push_back(diffservschedulermethod.get_name_leafdata());
    if (diffservschedulerminrate.is_set || is_set(diffservschedulerminrate.operation)) leaf_name_data.push_back(diffservschedulerminrate.get_name_leafdata());
    if (diffservschedulernext.is_set || is_set(diffservschedulernext.operation)) leaf_name_data.push_back(diffservschedulernext.get_name_leafdata());
    if (diffservschedulerstatus.is_set || is_set(diffservschedulerstatus.operation)) leaf_name_data.push_back(diffservschedulerstatus.get_name_leafdata());
    if (diffservschedulerstorage.is_set || is_set(diffservschedulerstorage.operation)) leaf_name_data.push_back(diffservschedulerstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservschedulertable::Diffservschedulerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservschedulertable::Diffservschedulerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservschedulertable::Diffservschedulerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServSchedulerId")
    {
        diffservschedulerid = value;
    }
    if(value_path == "diffServSchedulerMaxRate")
    {
        diffservschedulermaxrate = value;
    }
    if(value_path == "diffServSchedulerMethod")
    {
        diffservschedulermethod = value;
    }
    if(value_path == "diffServSchedulerMinRate")
    {
        diffservschedulerminrate = value;
    }
    if(value_path == "diffServSchedulerNext")
    {
        diffservschedulernext = value;
    }
    if(value_path == "diffServSchedulerStatus")
    {
        diffservschedulerstatus = value;
    }
    if(value_path == "diffServSchedulerStorage")
    {
        diffservschedulerstorage = value;
    }
}

DiffservMib::Diffservminratetable::Diffservminratetable()
{
    yang_name = "diffServMinRateTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservminratetable::~Diffservminratetable()
{
}

bool DiffservMib::Diffservminratetable::has_data() const
{
    for (std::size_t index=0; index<diffservminrateentry_.size(); index++)
    {
        if(diffservminrateentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservminratetable::has_operation() const
{
    for (std::size_t index=0; index<diffservminrateentry_.size(); index++)
    {
        if(diffservminrateentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservminratetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservminratetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservminratetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMinRateEntry")
    {
        for(auto const & c : diffservminrateentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservminratetable::Diffservminrateentry>();
        c->parent = this;
        diffservminrateentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservminratetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservminrateentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservminratetable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservminratetable::Diffservminrateentry::Diffservminrateentry()
    :
    diffservminrateid{YType::uint32, "diffServMinRateId"},
    diffservminrateabsolute{YType::uint32, "diffServMinRateAbsolute"},
    diffservminratepriority{YType::uint32, "diffServMinRatePriority"},
    diffservminraterelative{YType::uint32, "diffServMinRateRelative"},
    diffservminratestatus{YType::enumeration, "diffServMinRateStatus"},
    diffservminratestorage{YType::enumeration, "diffServMinRateStorage"}
{
    yang_name = "diffServMinRateEntry"; yang_parent_name = "diffServMinRateTable";
}

DiffservMib::Diffservminratetable::Diffservminrateentry::~Diffservminrateentry()
{
}

bool DiffservMib::Diffservminratetable::Diffservminrateentry::has_data() const
{
    return diffservminrateid.is_set
	|| diffservminrateabsolute.is_set
	|| diffservminratepriority.is_set
	|| diffservminraterelative.is_set
	|| diffservminratestatus.is_set
	|| diffservminratestorage.is_set;
}

bool DiffservMib::Diffservminratetable::Diffservminrateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservminrateid.operation)
	|| is_set(diffservminrateabsolute.operation)
	|| is_set(diffservminratepriority.operation)
	|| is_set(diffservminraterelative.operation)
	|| is_set(diffservminratestatus.operation)
	|| is_set(diffservminratestorage.operation);
}

std::string DiffservMib::Diffservminratetable::Diffservminrateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMinRateEntry" <<"[diffServMinRateId='" <<diffservminrateid <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservminratetable::Diffservminrateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMinRateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservminrateid.is_set || is_set(diffservminrateid.operation)) leaf_name_data.push_back(diffservminrateid.get_name_leafdata());
    if (diffservminrateabsolute.is_set || is_set(diffservminrateabsolute.operation)) leaf_name_data.push_back(diffservminrateabsolute.get_name_leafdata());
    if (diffservminratepriority.is_set || is_set(diffservminratepriority.operation)) leaf_name_data.push_back(diffservminratepriority.get_name_leafdata());
    if (diffservminraterelative.is_set || is_set(diffservminraterelative.operation)) leaf_name_data.push_back(diffservminraterelative.get_name_leafdata());
    if (diffservminratestatus.is_set || is_set(diffservminratestatus.operation)) leaf_name_data.push_back(diffservminratestatus.get_name_leafdata());
    if (diffservminratestorage.is_set || is_set(diffservminratestorage.operation)) leaf_name_data.push_back(diffservminratestorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservminratetable::Diffservminrateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservminratetable::Diffservminrateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservminratetable::Diffservminrateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMinRateId")
    {
        diffservminrateid = value;
    }
    if(value_path == "diffServMinRateAbsolute")
    {
        diffservminrateabsolute = value;
    }
    if(value_path == "diffServMinRatePriority")
    {
        diffservminratepriority = value;
    }
    if(value_path == "diffServMinRateRelative")
    {
        diffservminraterelative = value;
    }
    if(value_path == "diffServMinRateStatus")
    {
        diffservminratestatus = value;
    }
    if(value_path == "diffServMinRateStorage")
    {
        diffservminratestorage = value;
    }
}

DiffservMib::Diffservmaxratetable::Diffservmaxratetable()
{
    yang_name = "diffServMaxRateTable"; yang_parent_name = "DIFFSERV-MIB";
}

DiffservMib::Diffservmaxratetable::~Diffservmaxratetable()
{
}

bool DiffservMib::Diffservmaxratetable::has_data() const
{
    for (std::size_t index=0; index<diffservmaxrateentry_.size(); index++)
    {
        if(diffservmaxrateentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservMib::Diffservmaxratetable::has_operation() const
{
    for (std::size_t index=0; index<diffservmaxrateentry_.size(); index++)
    {
        if(diffservmaxrateentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservMib::Diffservmaxratetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateTable";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmaxratetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmaxratetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffServMaxRateEntry")
    {
        for(auto const & c : diffservmaxrateentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservMib::Diffservmaxratetable::Diffservmaxrateentry>();
        c->parent = this;
        diffservmaxrateentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmaxratetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffservmaxrateentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservMib::Diffservmaxratetable::set_value(const std::string & value_path, std::string value)
{
}

DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::Diffservmaxrateentry()
    :
    diffservmaxrateid{YType::uint32, "diffServMaxRateId"},
    diffservmaxratelevel{YType::uint32, "diffServMaxRateLevel"},
    diffservmaxrateabsolute{YType::uint32, "diffServMaxRateAbsolute"},
    diffservmaxraterelative{YType::uint32, "diffServMaxRateRelative"},
    diffservmaxratestatus{YType::enumeration, "diffServMaxRateStatus"},
    diffservmaxratestorage{YType::enumeration, "diffServMaxRateStorage"},
    diffservmaxratethreshold{YType::int32, "diffServMaxRateThreshold"}
{
    yang_name = "diffServMaxRateEntry"; yang_parent_name = "diffServMaxRateTable";
}

DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::~Diffservmaxrateentry()
{
}

bool DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::has_data() const
{
    return diffservmaxrateid.is_set
	|| diffservmaxratelevel.is_set
	|| diffservmaxrateabsolute.is_set
	|| diffservmaxraterelative.is_set
	|| diffservmaxratestatus.is_set
	|| diffservmaxratestorage.is_set
	|| diffservmaxratethreshold.is_set;
}

bool DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmaxrateid.operation)
	|| is_set(diffservmaxratelevel.operation)
	|| is_set(diffservmaxrateabsolute.operation)
	|| is_set(diffservmaxraterelative.operation)
	|| is_set(diffservmaxratestatus.operation)
	|| is_set(diffservmaxratestorage.operation)
	|| is_set(diffservmaxratethreshold.operation);
}

std::string DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffServMaxRateEntry" <<"[diffServMaxRateId='" <<diffservmaxrateid <<"']" <<"[diffServMaxRateLevel='" <<diffservmaxratelevel <<"']";

    return path_buffer.str();

}

const EntityPath DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIFFSERV-MIB:DIFFSERV-MIB/diffServMaxRateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmaxrateid.is_set || is_set(diffservmaxrateid.operation)) leaf_name_data.push_back(diffservmaxrateid.get_name_leafdata());
    if (diffservmaxratelevel.is_set || is_set(diffservmaxratelevel.operation)) leaf_name_data.push_back(diffservmaxratelevel.get_name_leafdata());
    if (diffservmaxrateabsolute.is_set || is_set(diffservmaxrateabsolute.operation)) leaf_name_data.push_back(diffservmaxrateabsolute.get_name_leafdata());
    if (diffservmaxraterelative.is_set || is_set(diffservmaxraterelative.operation)) leaf_name_data.push_back(diffservmaxraterelative.get_name_leafdata());
    if (diffservmaxratestatus.is_set || is_set(diffservmaxratestatus.operation)) leaf_name_data.push_back(diffservmaxratestatus.get_name_leafdata());
    if (diffservmaxratestorage.is_set || is_set(diffservmaxratestorage.operation)) leaf_name_data.push_back(diffservmaxratestorage.get_name_leafdata());
    if (diffservmaxratethreshold.is_set || is_set(diffservmaxratethreshold.operation)) leaf_name_data.push_back(diffservmaxratethreshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservMib::Diffservmaxratetable::Diffservmaxrateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffServMaxRateId")
    {
        diffservmaxrateid = value;
    }
    if(value_path == "diffServMaxRateLevel")
    {
        diffservmaxratelevel = value;
    }
    if(value_path == "diffServMaxRateAbsolute")
    {
        diffservmaxrateabsolute = value;
    }
    if(value_path == "diffServMaxRateRelative")
    {
        diffservmaxraterelative = value;
    }
    if(value_path == "diffServMaxRateStatus")
    {
        diffservmaxratestatus = value;
    }
    if(value_path == "diffServMaxRateStorage")
    {
        diffservmaxratestorage = value;
    }
    if(value_path == "diffServMaxRateThreshold")
    {
        diffservmaxratethreshold = value;
    }
}

const Enum::YLeaf IfdirectionEnum::inbound {1, "inbound"};
const Enum::YLeaf IfdirectionEnum::outbound {2, "outbound"};

const Enum::YLeaf DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum::other {1, "other"};
const Enum::YLeaf DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum::tailDrop {2, "tailDrop"};
const Enum::YLeaf DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum::headDrop {3, "headDrop"};
const Enum::YLeaf DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum::randomDrop {4, "randomDrop"};
const Enum::YLeaf DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum::alwaysDrop {5, "alwaysDrop"};


}
}

