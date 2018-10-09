#ifndef _CISCO_CABLE_SPECTRUM_MIB_
#define _CISCO_CABLE_SPECTRUM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CABLE_SPECTRUM_MIB {

class CISCOCABLESPECTRUMMIB : public ydk::Entity
{
    public:
        CISCOCABLESPECTRUMMIB();
        ~CISCOCABLESPECTRUMMIB();

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

        class CcsFlapObjects; //type: CISCOCABLESPECTRUMMIB::CcsFlapObjects
        class CcsFlapTable; //type: CISCOCABLESPECTRUMMIB::CcsFlapTable
        class CcsCmFlapTable; //type: CISCOCABLESPECTRUMMIB::CcsCmFlapTable
        class CcsSpectrumRequestTable; //type: CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable
        class CcsSpectrumDataTable; //type: CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable
        class CcsSNRRequestTable; //type: CISCOCABLESPECTRUMMIB::CcsSNRRequestTable
        class CcsUpInSpecGroupTable; //type: CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable
        class CcsUpInFiberNodeTable; //type: CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable
        class CcsUpSpecMgmtTable; //type: CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable
        class CcsSpecGroupFreqTable; //type: CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable

        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsFlapObjects> ccsflapobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsFlapTable> ccsflaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsCmFlapTable> ccscmflaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable> ccsspectrumrequesttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable> ccsspectrumdatatable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsSNRRequestTable> ccssnrrequesttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable> ccsupinspecgrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable> ccsupinfibernodetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable> ccsupspecmgmttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable> ccsspecgroupfreqtable;
        
}; // CISCOCABLESPECTRUMMIB


class CISCOCABLESPECTRUMMIB::CcsFlapObjects : public ydk::Entity
{
    public:
        CcsFlapObjects();
        ~CcsFlapObjects();

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

        ydk::YLeaf ccsflaplistmaxsize; //type: int32
        ydk::YLeaf ccsflaplistcurrentsize; //type: uint32
        ydk::YLeaf ccsflapaging; //type: int32
        ydk::YLeaf ccsflapinsertiontime; //type: int32
        ydk::YLeaf ccsflappoweradjustthreshold; //type: int32
        ydk::YLeaf ccsflapmissthreshold; //type: uint32
        ydk::YLeaf ccsflapresetall; //type: boolean
        ydk::YLeaf ccsflapclearall; //type: boolean
        ydk::YLeaf ccsflaplastcleartime; //type: string

}; // CISCOCABLESPECTRUMMIB::CcsFlapObjects


class CISCOCABLESPECTRUMMIB::CcsFlapTable : public ydk::Entity
{
    public:
        CcsFlapTable();
        ~CcsFlapTable();

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

        class CcsFlapEntry; //type: CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry

        ydk::YList ccsflapentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsFlapTable


class CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry : public ydk::Entity
{
    public:
        CcsFlapEntry();
        ~CcsFlapEntry();

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

        ydk::YLeaf ccsflapmacaddr; //type: string
        ydk::YLeaf ccsflapupstreamifindex; //type: int32
        ydk::YLeaf ccsflapdownstreamifindex; //type: int32
        ydk::YLeaf ccsflapinsertionfails; //type: uint32
        ydk::YLeaf ccsflaphits; //type: uint32
        ydk::YLeaf ccsflapmisses; //type: uint32
        ydk::YLeaf ccsflapcrcerrors; //type: uint32
        ydk::YLeaf ccsflappoweradjustments; //type: uint32
        ydk::YLeaf ccsflaptotal; //type: uint32
        ydk::YLeaf ccsflaplastflaptime; //type: string
        ydk::YLeaf ccsflapcreatetime; //type: string
        ydk::YLeaf ccsflaprowstatus; //type: RowStatus
        ydk::YLeaf ccsflapinsertionfailnum; //type: uint32
        ydk::YLeaf ccsflaphitnum; //type: uint32
        ydk::YLeaf ccsflapmissnum; //type: uint32
        ydk::YLeaf ccsflapcrcerrornum; //type: uint32
        ydk::YLeaf ccsflappoweradjustmentnum; //type: uint32
        ydk::YLeaf ccsflaptotalnum; //type: uint32
        ydk::YLeaf ccsflapresetnow; //type: boolean
        ydk::YLeaf ccsflaplastresettime; //type: string

}; // CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry


class CISCOCABLESPECTRUMMIB::CcsCmFlapTable : public ydk::Entity
{
    public:
        CcsCmFlapTable();
        ~CcsCmFlapTable();

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

        class CcsCmFlapEntry; //type: CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry

        ydk::YList ccscmflapentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsCmFlapTable


class CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry : public ydk::Entity
{
    public:
        CcsCmFlapEntry();
        ~CcsCmFlapEntry();

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

        ydk::YLeaf ccscmflapdownstreamifindex; //type: int32
        ydk::YLeaf ccscmflapupstreamifindex; //type: int32
        ydk::YLeaf ccscmflapmacaddr; //type: string
        ydk::YLeaf ccscmflaplastflaptime; //type: string
        ydk::YLeaf ccscmflapcreatetime; //type: string
        ydk::YLeaf ccscmflapinsertionfailnum; //type: uint32
        ydk::YLeaf ccscmflaphitnum; //type: uint32
        ydk::YLeaf ccscmflapmissnum; //type: uint32
        ydk::YLeaf ccscmflapcrcerrornum; //type: uint32
        ydk::YLeaf ccscmflappoweradjustmentnum; //type: uint32
        ydk::YLeaf ccscmflaptotalnum; //type: uint32
        ydk::YLeaf ccscmflapresetnow; //type: boolean
        ydk::YLeaf ccscmflaplastresettime; //type: string
        ydk::YLeaf ccscmflaprowstatus; //type: RowStatus

}; // CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry


class CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable : public ydk::Entity
{
    public:
        CcsSpectrumRequestTable();
        ~CcsSpectrumRequestTable();

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

        class CcsSpectrumRequestEntry; //type: CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry

        ydk::YList ccsspectrumrequestentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable


class CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry : public ydk::Entity
{
    public:
        CcsSpectrumRequestEntry();
        ~CcsSpectrumRequestEntry();

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

        ydk::YLeaf ccsspectrumrequestindex; //type: int32
        ydk::YLeaf ccsspectrumrequestifindex; //type: int32
        ydk::YLeaf ccsspectrumrequestmacaddr; //type: string
        ydk::YLeaf ccsspectrumrequestlowfreq; //type: int32
        ydk::YLeaf ccsspectrumrequestupperfreq; //type: int32
        ydk::YLeaf ccsspectrumrequestresolution; //type: int32
        ydk::YLeaf ccsspectrumrequestoperation; //type: CCSRequestOperation
        ydk::YLeaf ccsspectrumrequestoperstate; //type: CCSRequestOperState
        ydk::YLeaf ccsspectrumrequeststarttime; //type: uint32
        ydk::YLeaf ccsspectrumrequeststoppedtime; //type: uint32
        ydk::YLeaf ccsspectrumrequeststatus; //type: RowStatus

}; // CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry


class CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable : public ydk::Entity
{
    public:
        CcsSpectrumDataTable();
        ~CcsSpectrumDataTable();

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

        class CcsSpectrumDataEntry; //type: CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry

        ydk::YList ccsspectrumdataentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable


class CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry : public ydk::Entity
{
    public:
        CcsSpectrumDataEntry();
        ~CcsSpectrumDataEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::ccsspectrumrequestindex)
        ydk::YLeaf ccsspectrumrequestindex;
        ydk::YLeaf ccsspectrumdatafreq; //type: int32
        ydk::YLeaf ccsspectrumdatapower; //type: int32

}; // CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry


class CISCOCABLESPECTRUMMIB::CcsSNRRequestTable : public ydk::Entity
{
    public:
        CcsSNRRequestTable();
        ~CcsSNRRequestTable();

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

        class CcsSNRRequestEntry; //type: CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry

        ydk::YList ccssnrrequestentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsSNRRequestTable


class CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry : public ydk::Entity
{
    public:
        CcsSNRRequestEntry();
        ~CcsSNRRequestEntry();

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

        ydk::YLeaf ccssnrrequestindex; //type: int32
        ydk::YLeaf ccssnrrequestmacaddr; //type: string
        ydk::YLeaf ccssnrrequestsnr; //type: int32
        ydk::YLeaf ccssnrrequestoperation; //type: CCSRequestOperation
        ydk::YLeaf ccssnrrequestoperstate; //type: CCSRequestOperState
        ydk::YLeaf ccssnrrequeststarttime; //type: uint32
        ydk::YLeaf ccssnrrequeststoppedtime; //type: uint32
        ydk::YLeaf ccssnrrequeststatus; //type: RowStatus

}; // CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry


class CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable : public ydk::Entity
{
    public:
        CcsUpInSpecGroupTable();
        ~CcsUpInSpecGroupTable();

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

        class CcsUpInSpecGroupEntry; //type: CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry

        ydk::YList ccsupinspecgroupentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable


class CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry : public ydk::Entity
{
    public:
        CcsUpInSpecGroupEntry();
        ~CcsUpInSpecGroupEntry();

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

        ydk::YLeaf ccsspecgroupnumber; //type: uint32
        ydk::YLeaf ccsspecgroupupstreamifindex; //type: int32
        ydk::YLeaf ccsspecgroupupstreamstorage; //type: StorageType
        ydk::YLeaf ccsspecgroupupstreamrowstatus; //type: RowStatus

}; // CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry


class CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable : public ydk::Entity
{
    public:
        CcsUpInFiberNodeTable();
        ~CcsUpInFiberNodeTable();

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

        class CcsUpInFiberNodeEntry; //type: CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry

        ydk::YList ccsupinfibernodeentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable


class CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry : public ydk::Entity
{
    public:
        CcsUpInFiberNodeEntry();
        ~CcsUpInFiberNodeEntry();

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

        ydk::YLeaf ccsfibernodenumber; //type: uint32
        ydk::YLeaf ccsfibernodeupstreamifindex; //type: int32
        ydk::YLeaf ccsfibernodeupstreamstorage; //type: StorageType
        ydk::YLeaf ccsfibernodeupstreamrowstatus; //type: RowStatus

}; // CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry


class CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable : public ydk::Entity
{
    public:
        CcsUpSpecMgmtTable();
        ~CcsUpSpecMgmtTable();

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

        class CcsUpSpecMgmtEntry; //type: CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry

        ydk::YList ccsupspecmgmtentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable


class CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry : public ydk::Entity
{
    public:
        CcsUpSpecMgmtEntry();
        ~CcsUpSpecMgmtEntry();

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
        ydk::YLeaf ccsupspecmgmthoppriority; //type: CcsUpSpecMgmtHopPriority
        ydk::YLeaf ccsupspecmgmtsnrthres1; //type: int32
        ydk::YLeaf ccsupspecmgmtsnrthres2; //type: int32
        ydk::YLeaf ccsupspecmgmtfeccorrectthres1; //type: int32
        ydk::YLeaf ccsupspecmgmtfeccorrectthres2; //type: int32
        ydk::YLeaf ccsupspecmgmtfecuncorrectthres1; //type: int32
        ydk::YLeaf ccsupspecmgmtfecuncorrectthres2; //type: int32
        ydk::YLeaf ccsupspecmgmtsnrpollperiod; //type: int32
        ydk::YLeaf ccsupspecmgmthopcondition; //type: CcsUpSpecMgmtHopCondition
        ydk::YLeaf ccsupspecmgmtfromcenterfreq; //type: uint32
        ydk::YLeaf ccsupspecmgmttocenterfreq; //type: uint32
        ydk::YLeaf ccsupspecmgmtfrombandwidth; //type: uint32
        ydk::YLeaf ccsupspecmgmttobandwidth; //type: uint32
        ydk::YLeaf ccsupspecmgmtfrommodprofile; //type: int32
        ydk::YLeaf ccsupspecmgmttomodprofile; //type: int32
        ydk::YLeaf ccsupspecmgmtsnr; //type: int32
        ydk::YLeaf ccsupspecmgmtupperboundfreq; //type: int32
        ydk::YLeaf ccsupspecmgmtcnrthres1; //type: int32
        ydk::YLeaf ccsupspecmgmtcnrthres2; //type: int32
        ydk::YLeaf ccsupspecmgmtcnr; //type: int32
        ydk::YLeaf ccsupspecmgmtmissedmaintmsgthres; //type: int32
        ydk::YLeaf ccsupspecmgmthopperiod; //type: int32
        ydk::YLeaf ccsupspecmgmtcriteria; //type: CcsUpSpecMgmtCriteria
        ydk::YLeaf ccsupspecmgmtspecgroup; //type: uint32
        ydk::YLeaf ccsupspecmgmtsharedspectrum; //type: uint32
        class CcsUpSpecMgmtHopPriority;
        class CcsUpSpecMgmtHopCondition;

}; // CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry


class CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable : public ydk::Entity
{
    public:
        CcsSpecGroupFreqTable();
        ~CcsSpecGroupFreqTable();

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

        class CcsSpecGroupFreqEntry; //type: CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry

        ydk::YList ccsspecgroupfreqentry;
        
}; // CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable


class CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry : public ydk::Entity
{
    public:
        CcsSpecGroupFreqEntry();
        ~CcsSpecGroupFreqEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_CABLE_SPECTRUM_MIB::CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::ccsspecgroupnumber)
        ydk::YLeaf ccsspecgroupnumber;
        ydk::YLeaf ccsspecgroupfreqindex; //type: uint32
        ydk::YLeaf ccsspecgroupfreqtype; //type: CcsSpecGroupFreqType
        ydk::YLeaf ccsspecgroupfreqlower; //type: int32
        ydk::YLeaf ccsspecgroupfrequpper; //type: int32
        ydk::YLeaf ccsspecgroupstorage; //type: StorageType
        ydk::YLeaf ccsspecgrouprowstatus; //type: RowStatus
        class CcsSpecGroupFreqType;

}; // CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry

class CCSRequestOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf abort;

};

class CCSRequestOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf noError;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf notOnLine;
        static const ydk::Enum::YLeaf invalidMac;
        static const ydk::Enum::YLeaf timeOut;
        static const ydk::Enum::YLeaf fftBusy;
        static const ydk::Enum::YLeaf fftFailed;
        static const ydk::Enum::YLeaf others;

};

class CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frqModChannel;
        static const ydk::Enum::YLeaf frqChannelMod;
        static const ydk::Enum::YLeaf modFrqChannel;
        static const ydk::Enum::YLeaf modChannelFrq;
        static const ydk::Enum::YLeaf channelFrqMod;
        static const ydk::Enum::YLeaf channelModFrq;

};

class CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopCondition : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snr;
        static const ydk::Enum::YLeaf stationMaintainenceMiss;
        static const ydk::Enum::YLeaf others;

};

class CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::CcsSpecGroupFreqType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf centerFreq;
        static const ydk::Enum::YLeaf bandFreq;

};


}
}

#endif /* _CISCO_CABLE_SPECTRUM_MIB_ */

