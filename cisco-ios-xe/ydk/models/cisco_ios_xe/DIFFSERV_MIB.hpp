#ifndef _DIFFSERV_MIB_
#define _DIFFSERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace DIFFSERV_MIB {

class DiffServTBParamTrTCMBlind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamTrTCMBlind();
        ~DiffServTBParamTrTCMBlind();


}; // DiffServTBParamTrTCMBlind

class DiffServSchedulerWFQ : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServSchedulerWFQ();
        ~DiffServSchedulerWFQ();


}; // DiffServSchedulerWFQ

class DiffServTBParamTswTCM : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamTswTCM();
        ~DiffServTBParamTswTCM();


}; // DiffServTBParamTswTCM

class DiffServTBParamAvgRate : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamAvgRate();
        ~DiffServTBParamAvgRate();


}; // DiffServTBParamAvgRate

class DiffServSchedulerWRR : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServSchedulerWRR();
        ~DiffServSchedulerWRR();


}; // DiffServSchedulerWRR

class DiffServTBParamSrTCMAware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamSrTCMAware();
        ~DiffServTBParamSrTCMAware();


}; // DiffServTBParamSrTCMAware

class DiffServTBParamSrTCMBlind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamSrTCMBlind();
        ~DiffServTBParamSrTCMBlind();


}; // DiffServTBParamSrTCMBlind

class DiffServTBParamSimpleTokenBucket : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamSimpleTokenBucket();
        ~DiffServTBParamSimpleTokenBucket();


}; // DiffServTBParamSimpleTokenBucket

class DiffServSchedulerPriority : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServSchedulerPriority();
        ~DiffServSchedulerPriority();


}; // DiffServSchedulerPriority

class DiffServTBParamTrTCMAware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        DiffServTBParamTrTCMAware();
        ~DiffServTBParamTrTCMAware();


}; // DiffServTBParamTrTCMAware

class DIFFSERVMIB : public ydk::Entity
{
    public:
        DIFFSERVMIB();
        ~DIFFSERVMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class DiffServClassifier; //type: DIFFSERVMIB::DiffServClassifier
        class DiffServMeter; //type: DIFFSERVMIB::DiffServMeter
        class DiffServTBParam; //type: DIFFSERVMIB::DiffServTBParam
        class DiffServAction; //type: DIFFSERVMIB::DiffServAction
        class DiffServAlgDrop; //type: DIFFSERVMIB::DiffServAlgDrop
        class DiffServQueue; //type: DIFFSERVMIB::DiffServQueue
        class DiffServScheduler; //type: DIFFSERVMIB::DiffServScheduler
        class DiffServDataPathTable; //type: DIFFSERVMIB::DiffServDataPathTable
        class DiffServClfrTable; //type: DIFFSERVMIB::DiffServClfrTable
        class DiffServClfrElementTable; //type: DIFFSERVMIB::DiffServClfrElementTable
        class DiffServMultiFieldClfrTable; //type: DIFFSERVMIB::DiffServMultiFieldClfrTable
        class DiffServMeterTable; //type: DIFFSERVMIB::DiffServMeterTable
        class DiffServTBParamTable; //type: DIFFSERVMIB::DiffServTBParamTable
        class DiffServActionTable; //type: DIFFSERVMIB::DiffServActionTable
        class DiffServDscpMarkActTable; //type: DIFFSERVMIB::DiffServDscpMarkActTable
        class DiffServCountActTable; //type: DIFFSERVMIB::DiffServCountActTable
        class DiffServAlgDropTable; //type: DIFFSERVMIB::DiffServAlgDropTable
        class DiffServRandomDropTable; //type: DIFFSERVMIB::DiffServRandomDropTable
        class DiffServQTable; //type: DIFFSERVMIB::DiffServQTable
        class DiffServSchedulerTable; //type: DIFFSERVMIB::DiffServSchedulerTable
        class DiffServMinRateTable; //type: DIFFSERVMIB::DiffServMinRateTable
        class DiffServMaxRateTable; //type: DIFFSERVMIB::DiffServMaxRateTable

        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServClassifier> diffservclassifier;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServMeter> diffservmeter;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServTBParam> diffservtbparam;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServAction> diffservaction;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServAlgDrop> diffservalgdrop;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServQueue> diffservqueue;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServScheduler> diffservscheduler;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServDataPathTable> diffservdatapathtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServClfrTable> diffservclfrtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServClfrElementTable> diffservclfrelementtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServMultiFieldClfrTable> diffservmultifieldclfrtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServMeterTable> diffservmetertable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServTBParamTable> diffservtbparamtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServActionTable> diffservactiontable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServDscpMarkActTable> diffservdscpmarkacttable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServCountActTable> diffservcountacttable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServAlgDropTable> diffservalgdroptable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServRandomDropTable> diffservrandomdroptable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServQTable> diffservqtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServSchedulerTable> diffservschedulertable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServMinRateTable> diffservminratetable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServMaxRateTable> diffservmaxratetable;
        
}; // DIFFSERVMIB


class DIFFSERVMIB::DiffServClassifier : public ydk::Entity
{
    public:
        DiffServClassifier();
        ~DiffServClassifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservclfrnextfree; //type: uint32
        ydk::YLeaf diffservclfrelementnextfree; //type: uint32
        ydk::YLeaf diffservmultifieldclfrnextfree; //type: uint32

}; // DIFFSERVMIB::DiffServClassifier


class DIFFSERVMIB::DiffServMeter : public ydk::Entity
{
    public:
        DiffServMeter();
        ~DiffServMeter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmeternextfree; //type: uint32

}; // DIFFSERVMIB::DiffServMeter


class DIFFSERVMIB::DiffServTBParam : public ydk::Entity
{
    public:
        DiffServTBParam();
        ~DiffServTBParam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservtbparamnextfree; //type: uint32

}; // DIFFSERVMIB::DiffServTBParam


class DIFFSERVMIB::DiffServAction : public ydk::Entity
{
    public:
        DiffServAction();
        ~DiffServAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservactionnextfree; //type: uint32
        ydk::YLeaf diffservcountactnextfree; //type: uint32

}; // DIFFSERVMIB::DiffServAction


class DIFFSERVMIB::DiffServAlgDrop : public ydk::Entity
{
    public:
        DiffServAlgDrop();
        ~DiffServAlgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservalgdropnextfree; //type: uint32
        ydk::YLeaf diffservrandomdropnextfree; //type: uint32

}; // DIFFSERVMIB::DiffServAlgDrop


class DIFFSERVMIB::DiffServQueue : public ydk::Entity
{
    public:
        DiffServQueue();
        ~DiffServQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservqnextfree; //type: uint32

}; // DIFFSERVMIB::DiffServQueue


class DIFFSERVMIB::DiffServScheduler : public ydk::Entity
{
    public:
        DiffServScheduler();
        ~DiffServScheduler();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservschedulernextfree; //type: uint32
        ydk::YLeaf diffservminratenextfree; //type: uint32
        ydk::YLeaf diffservmaxratenextfree; //type: uint32

}; // DIFFSERVMIB::DiffServScheduler


class DIFFSERVMIB::DiffServDataPathTable : public ydk::Entity
{
    public:
        DiffServDataPathTable();
        ~DiffServDataPathTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServDataPathEntry; //type: DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry

        ydk::YList diffservdatapathentry;
        
}; // DIFFSERVMIB::DiffServDataPathTable


class DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry : public ydk::Entity
{
    public:
        DiffServDataPathEntry();
        ~DiffServDataPathEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf diffservdatapathifdirection; //type: IfDirection
        ydk::YLeaf diffservdatapathstart; //type: string
        ydk::YLeaf diffservdatapathstorage; //type: StorageType
        ydk::YLeaf diffservdatapathstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServDataPathTable::DiffServDataPathEntry


class DIFFSERVMIB::DiffServClfrTable : public ydk::Entity
{
    public:
        DiffServClfrTable();
        ~DiffServClfrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServClfrEntry; //type: DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry

        ydk::YList diffservclfrentry;
        
}; // DIFFSERVMIB::DiffServClfrTable


class DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry : public ydk::Entity
{
    public:
        DiffServClfrEntry();
        ~DiffServClfrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservclfrid; //type: uint32
        ydk::YLeaf diffservclfrstorage; //type: StorageType
        ydk::YLeaf diffservclfrstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry


class DIFFSERVMIB::DiffServClfrElementTable : public ydk::Entity
{
    public:
        DiffServClfrElementTable();
        ~DiffServClfrElementTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServClfrElementEntry; //type: DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry

        ydk::YList diffservclfrelemententry;
        
}; // DIFFSERVMIB::DiffServClfrElementTable


class DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry : public ydk::Entity
{
    public:
        DiffServClfrElementEntry();
        ~DiffServClfrElementEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::DiffServClfrTable::DiffServClfrEntry::diffservclfrid)
        ydk::YLeaf diffservclfrid;
        ydk::YLeaf diffservclfrelementid; //type: uint32
        ydk::YLeaf diffservclfrelementprecedence; //type: uint32
        ydk::YLeaf diffservclfrelementnext; //type: string
        ydk::YLeaf diffservclfrelementspecific; //type: string
        ydk::YLeaf diffservclfrelementstorage; //type: StorageType
        ydk::YLeaf diffservclfrelementstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServClfrElementTable::DiffServClfrElementEntry


class DIFFSERVMIB::DiffServMultiFieldClfrTable : public ydk::Entity
{
    public:
        DiffServMultiFieldClfrTable();
        ~DiffServMultiFieldClfrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServMultiFieldClfrEntry; //type: DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry

        ydk::YList diffservmultifieldclfrentry;
        
}; // DIFFSERVMIB::DiffServMultiFieldClfrTable


class DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry : public ydk::Entity
{
    public:
        DiffServMultiFieldClfrEntry();
        ~DiffServMultiFieldClfrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmultifieldclfrid; //type: uint32
        ydk::YLeaf diffservmultifieldclfraddrtype; //type: InetAddressType
        ydk::YLeaf diffservmultifieldclfrdstaddr; //type: binary
        ydk::YLeaf diffservmultifieldclfrdstprefixlength; //type: uint32
        ydk::YLeaf diffservmultifieldclfrsrcaddr; //type: binary
        ydk::YLeaf diffservmultifieldclfrsrcprefixlength; //type: uint32
        ydk::YLeaf diffservmultifieldclfrdscp; //type: int32
        ydk::YLeaf diffservmultifieldclfrflowid; //type: uint32
        ydk::YLeaf diffservmultifieldclfrprotocol; //type: uint32
        ydk::YLeaf diffservmultifieldclfrdstl4portmin; //type: uint16
        ydk::YLeaf diffservmultifieldclfrdstl4portmax; //type: uint16
        ydk::YLeaf diffservmultifieldclfrsrcl4portmin; //type: uint16
        ydk::YLeaf diffservmultifieldclfrsrcl4portmax; //type: uint16
        ydk::YLeaf diffservmultifieldclfrstorage; //type: StorageType
        ydk::YLeaf diffservmultifieldclfrstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServMultiFieldClfrTable::DiffServMultiFieldClfrEntry


class DIFFSERVMIB::DiffServMeterTable : public ydk::Entity
{
    public:
        DiffServMeterTable();
        ~DiffServMeterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServMeterEntry; //type: DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry

        ydk::YList diffservmeterentry;
        
}; // DIFFSERVMIB::DiffServMeterTable


class DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry : public ydk::Entity
{
    public:
        DiffServMeterEntry();
        ~DiffServMeterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmeterid; //type: uint32
        ydk::YLeaf diffservmetersucceednext; //type: string
        ydk::YLeaf diffservmeterfailnext; //type: string
        ydk::YLeaf diffservmeterspecific; //type: string
        ydk::YLeaf diffservmeterstorage; //type: StorageType
        ydk::YLeaf diffservmeterstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServMeterTable::DiffServMeterEntry


class DIFFSERVMIB::DiffServTBParamTable : public ydk::Entity
{
    public:
        DiffServTBParamTable();
        ~DiffServTBParamTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServTBParamEntry; //type: DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry

        ydk::YList diffservtbparamentry;
        
}; // DIFFSERVMIB::DiffServTBParamTable


class DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry : public ydk::Entity
{
    public:
        DiffServTBParamEntry();
        ~DiffServTBParamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservtbparamid; //type: uint32
        ydk::YLeaf diffservtbparamtype; //type: string
        ydk::YLeaf diffservtbparamrate; //type: uint32
        ydk::YLeaf diffservtbparamburstsize; //type: int32
        ydk::YLeaf diffservtbparaminterval; //type: uint32
        ydk::YLeaf diffservtbparamstorage; //type: StorageType
        ydk::YLeaf diffservtbparamstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServTBParamTable::DiffServTBParamEntry


class DIFFSERVMIB::DiffServActionTable : public ydk::Entity
{
    public:
        DiffServActionTable();
        ~DiffServActionTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServActionEntry; //type: DIFFSERVMIB::DiffServActionTable::DiffServActionEntry

        ydk::YList diffservactionentry;
        
}; // DIFFSERVMIB::DiffServActionTable


class DIFFSERVMIB::DiffServActionTable::DiffServActionEntry : public ydk::Entity
{
    public:
        DiffServActionEntry();
        ~DiffServActionEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservactionid; //type: uint32
        ydk::YLeaf diffservactioninterface; //type: int32
        ydk::YLeaf diffservactionnext; //type: string
        ydk::YLeaf diffservactionspecific; //type: string
        ydk::YLeaf diffservactionstorage; //type: StorageType
        ydk::YLeaf diffservactionstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServActionTable::DiffServActionEntry


class DIFFSERVMIB::DiffServDscpMarkActTable : public ydk::Entity
{
    public:
        DiffServDscpMarkActTable();
        ~DiffServDscpMarkActTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServDscpMarkActEntry; //type: DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry

        ydk::YList diffservdscpmarkactentry;
        
}; // DIFFSERVMIB::DiffServDscpMarkActTable


class DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry : public ydk::Entity
{
    public:
        DiffServDscpMarkActEntry();
        ~DiffServDscpMarkActEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservdscpmarkactdscp; //type: uint8

}; // DIFFSERVMIB::DiffServDscpMarkActTable::DiffServDscpMarkActEntry


class DIFFSERVMIB::DiffServCountActTable : public ydk::Entity
{
    public:
        DiffServCountActTable();
        ~DiffServCountActTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServCountActEntry; //type: DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry

        ydk::YList diffservcountactentry;
        
}; // DIFFSERVMIB::DiffServCountActTable


class DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry : public ydk::Entity
{
    public:
        DiffServCountActEntry();
        ~DiffServCountActEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservcountactid; //type: uint32
        ydk::YLeaf diffservcountactoctets; //type: uint64
        ydk::YLeaf diffservcountactpkts; //type: uint64
        ydk::YLeaf diffservcountactstorage; //type: StorageType
        ydk::YLeaf diffservcountactstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServCountActTable::DiffServCountActEntry


class DIFFSERVMIB::DiffServAlgDropTable : public ydk::Entity
{
    public:
        DiffServAlgDropTable();
        ~DiffServAlgDropTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServAlgDropEntry; //type: DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry

        ydk::YList diffservalgdropentry;
        
}; // DIFFSERVMIB::DiffServAlgDropTable


class DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry : public ydk::Entity
{
    public:
        DiffServAlgDropEntry();
        ~DiffServAlgDropEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservalgdropid; //type: uint32
        ydk::YLeaf diffservalgdroptype; //type: DiffServAlgDropType
        ydk::YLeaf diffservalgdropnext; //type: string
        ydk::YLeaf diffservalgdropqmeasure; //type: string
        ydk::YLeaf diffservalgdropqthreshold; //type: uint32
        ydk::YLeaf diffservalgdropspecific; //type: string
        ydk::YLeaf diffservalgdropoctets; //type: uint64
        ydk::YLeaf diffservalgdroppkts; //type: uint64
        ydk::YLeaf diffservalgrandomdropoctets; //type: uint64
        ydk::YLeaf diffservalgrandomdroppkts; //type: uint64
        ydk::YLeaf diffservalgdropstorage; //type: StorageType
        ydk::YLeaf diffservalgdropstatus; //type: RowStatus
        class DiffServAlgDropType;

}; // DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry


class DIFFSERVMIB::DiffServRandomDropTable : public ydk::Entity
{
    public:
        DiffServRandomDropTable();
        ~DiffServRandomDropTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServRandomDropEntry; //type: DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry

        ydk::YList diffservrandomdropentry;
        
}; // DIFFSERVMIB::DiffServRandomDropTable


class DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry : public ydk::Entity
{
    public:
        DiffServRandomDropEntry();
        ~DiffServRandomDropEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservrandomdropid; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropprobmax; //type: uint32
        ydk::YLeaf diffservrandomdropweight; //type: uint32
        ydk::YLeaf diffservrandomdropsamplingrate; //type: uint32
        ydk::YLeaf diffservrandomdropstorage; //type: StorageType
        ydk::YLeaf diffservrandomdropstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServRandomDropTable::DiffServRandomDropEntry


class DIFFSERVMIB::DiffServQTable : public ydk::Entity
{
    public:
        DiffServQTable();
        ~DiffServQTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServQEntry; //type: DIFFSERVMIB::DiffServQTable::DiffServQEntry

        ydk::YList diffservqentry;
        
}; // DIFFSERVMIB::DiffServQTable


class DIFFSERVMIB::DiffServQTable::DiffServQEntry : public ydk::Entity
{
    public:
        DiffServQEntry();
        ~DiffServQEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservqid; //type: uint32
        ydk::YLeaf diffservqnext; //type: string
        ydk::YLeaf diffservqminrate; //type: string
        ydk::YLeaf diffservqmaxrate; //type: string
        ydk::YLeaf diffservqstorage; //type: StorageType
        ydk::YLeaf diffservqstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServQTable::DiffServQEntry


class DIFFSERVMIB::DiffServSchedulerTable : public ydk::Entity
{
    public:
        DiffServSchedulerTable();
        ~DiffServSchedulerTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServSchedulerEntry; //type: DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry

        ydk::YList diffservschedulerentry;
        
}; // DIFFSERVMIB::DiffServSchedulerTable


class DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry : public ydk::Entity
{
    public:
        DiffServSchedulerEntry();
        ~DiffServSchedulerEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservschedulerid; //type: uint32
        ydk::YLeaf diffservschedulernext; //type: string
        ydk::YLeaf diffservschedulermethod; //type: string
        ydk::YLeaf diffservschedulerminrate; //type: string
        ydk::YLeaf diffservschedulermaxrate; //type: string
        ydk::YLeaf diffservschedulerstorage; //type: StorageType
        ydk::YLeaf diffservschedulerstatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServSchedulerTable::DiffServSchedulerEntry


class DIFFSERVMIB::DiffServMinRateTable : public ydk::Entity
{
    public:
        DiffServMinRateTable();
        ~DiffServMinRateTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServMinRateEntry; //type: DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry

        ydk::YList diffservminrateentry;
        
}; // DIFFSERVMIB::DiffServMinRateTable


class DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry : public ydk::Entity
{
    public:
        DiffServMinRateEntry();
        ~DiffServMinRateEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservminrateid; //type: uint32
        ydk::YLeaf diffservminratepriority; //type: uint32
        ydk::YLeaf diffservminrateabsolute; //type: uint32
        ydk::YLeaf diffservminraterelative; //type: uint32
        ydk::YLeaf diffservminratestorage; //type: StorageType
        ydk::YLeaf diffservminratestatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServMinRateTable::DiffServMinRateEntry


class DIFFSERVMIB::DiffServMaxRateTable : public ydk::Entity
{
    public:
        DiffServMaxRateTable();
        ~DiffServMaxRateTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DiffServMaxRateEntry; //type: DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry

        ydk::YList diffservmaxrateentry;
        
}; // DIFFSERVMIB::DiffServMaxRateTable


class DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry : public ydk::Entity
{
    public:
        DiffServMaxRateEntry();
        ~DiffServMaxRateEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmaxrateid; //type: uint32
        ydk::YLeaf diffservmaxratelevel; //type: uint32
        ydk::YLeaf diffservmaxrateabsolute; //type: uint32
        ydk::YLeaf diffservmaxraterelative; //type: uint32
        ydk::YLeaf diffservmaxratethreshold; //type: int32
        ydk::YLeaf diffservmaxratestorage; //type: StorageType
        ydk::YLeaf diffservmaxratestatus; //type: RowStatus

}; // DIFFSERVMIB::DiffServMaxRateTable::DiffServMaxRateEntry

class IfDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

class DIFFSERVMIB::DiffServAlgDropTable::DiffServAlgDropEntry::DiffServAlgDropType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf tailDrop;
        static const ydk::Enum::YLeaf headDrop;
        static const ydk::Enum::YLeaf randomDrop;
        static const ydk::Enum::YLeaf alwaysDrop;

};


}
}

#endif /* _DIFFSERV_MIB_ */

