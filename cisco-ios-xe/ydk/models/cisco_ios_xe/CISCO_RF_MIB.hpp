#ifndef _CISCO_RF_MIB_
#define _CISCO_RF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RF_MIB {

class CISCORFMIB : public ydk::Entity
{
    public:
        CISCORFMIB();
        ~CISCORFMIB();

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

        class CRFStatus; //type: CISCORFMIB::CRFStatus
        class CRFCfg; //type: CISCORFMIB::CRFCfg
        class CRFHistory; //type: CISCORFMIB::CRFHistory
        class CRFStatusRFModeCapsTable; //type: CISCORFMIB::CRFStatusRFModeCapsTable
        class CRFHistorySwitchOverTable; //type: CISCORFMIB::CRFHistorySwitchOverTable
        class CRFStatusRFClientTable; //type: CISCORFMIB::CRFStatusRFClientTable

        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFStatus> crfstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFCfg> crfcfg;
        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFHistory> crfhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFStatusRFModeCapsTable> crfstatusrfmodecapstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFHistorySwitchOverTable> crfhistoryswitchovertable;
        std::shared_ptr<cisco_ios_xe::CISCO_RF_MIB::CISCORFMIB::CRFStatusRFClientTable> crfstatusrfclienttable;
        
}; // CISCORFMIB


class CISCORFMIB::CRFStatus : public ydk::Entity
{
    public:
        CRFStatus();
        ~CRFStatus();

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

        ydk::YLeaf crfstatusunitid; //type: int32
        ydk::YLeaf crfstatusunitstate; //type: RFState
        ydk::YLeaf crfstatuspeerunitid; //type: int32
        ydk::YLeaf crfstatuspeerunitstate; //type: RFState
        ydk::YLeaf crfstatusprimarymode; //type: boolean
        ydk::YLeaf crfstatusduplexmode; //type: boolean
        ydk::YLeaf crfstatusmanualswactinhibit; //type: boolean
        ydk::YLeaf crfstatuslastswactreasoncode; //type: RFSwactReasonType
        ydk::YLeaf crfstatusfailovertime; //type: uint32
        ydk::YLeaf crfstatuspeerstandbyentrytime; //type: uint32
        ydk::YLeaf crfstatusissustate; //type: RFIssuState
        ydk::YLeaf crfstatusissustaterev1; //type: RFIssuStateRev1
        ydk::YLeaf crfstatusissufromversion; //type: string
        ydk::YLeaf crfstatusissutoversion; //type: string

}; // CISCORFMIB::CRFStatus


class CISCORFMIB::CRFCfg : public ydk::Entity
{
    public:
        CRFCfg();
        ~CRFCfg();

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

        ydk::YLeaf crfcfgsplitmode; //type: boolean
        ydk::YLeaf crfcfgkeepalivethresh; //type: uint32
        ydk::YLeaf crfcfgkeepalivethreshmin; //type: uint32
        ydk::YLeaf crfcfgkeepalivethreshmax; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimer; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimermin; //type: uint32
        ydk::YLeaf crfcfgkeepalivetimermax; //type: uint32
        ydk::YLeaf crfcfgnotiftimer; //type: uint32
        ydk::YLeaf crfcfgnotiftimermin; //type: uint32
        ydk::YLeaf crfcfgnotiftimermax; //type: uint32
        ydk::YLeaf crfcfgadminaction; //type: RFAction
        ydk::YLeaf crfcfgnotifsenabled; //type: boolean
        ydk::YLeaf crfcfgmaintenancemode; //type: boolean
        ydk::YLeaf crfcfgredundancymode; //type: RFMode
        ydk::YLeaf crfcfgredundancymodedescr; //type: string
        ydk::YLeaf crfcfgredundancyopermode; //type: RFMode

}; // CISCORFMIB::CRFCfg


class CISCORFMIB::CRFHistory : public ydk::Entity
{
    public:
        CRFHistory();
        ~CRFHistory();

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

        ydk::YLeaf crfhistorytablemaxlength; //type: uint32
        ydk::YLeaf crfhistorycoldstarts; //type: uint32
        ydk::YLeaf crfhistorystandbyavailtime; //type: int32

}; // CISCORFMIB::CRFHistory


class CISCORFMIB::CRFStatusRFModeCapsTable : public ydk::Entity
{
    public:
        CRFStatusRFModeCapsTable();
        ~CRFStatusRFModeCapsTable();

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

        class CRFStatusRFModeCapsEntry; //type: CISCORFMIB::CRFStatusRFModeCapsTable::CRFStatusRFModeCapsEntry

        ydk::YList crfstatusrfmodecapsentry;
        
}; // CISCORFMIB::CRFStatusRFModeCapsTable


class CISCORFMIB::CRFStatusRFModeCapsTable::CRFStatusRFModeCapsEntry : public ydk::Entity
{
    public:
        CRFStatusRFModeCapsEntry();
        ~CRFStatusRFModeCapsEntry();

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

        ydk::YLeaf crfstatusrfmodecapsmode; //type: RFMode
        ydk::YLeaf crfstatusrfmodecapsmodedescr; //type: string

}; // CISCORFMIB::CRFStatusRFModeCapsTable::CRFStatusRFModeCapsEntry


class CISCORFMIB::CRFHistorySwitchOverTable : public ydk::Entity
{
    public:
        CRFHistorySwitchOverTable();
        ~CRFHistorySwitchOverTable();

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

        class CRFHistorySwitchOverEntry; //type: CISCORFMIB::CRFHistorySwitchOverTable::CRFHistorySwitchOverEntry

        ydk::YList crfhistoryswitchoverentry;
        
}; // CISCORFMIB::CRFHistorySwitchOverTable


class CISCORFMIB::CRFHistorySwitchOverTable::CRFHistorySwitchOverEntry : public ydk::Entity
{
    public:
        CRFHistorySwitchOverEntry();
        ~CRFHistorySwitchOverEntry();

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

        ydk::YLeaf crfhistoryswitchoverindex; //type: uint32
        ydk::YLeaf crfhistoryprevactiveunitid; //type: int32
        ydk::YLeaf crfhistorycurractiveunitid; //type: int32
        ydk::YLeaf crfhistoryswitchoverreason; //type: RFSwactReasonType
        ydk::YLeaf crfhistoryswacttime; //type: string

}; // CISCORFMIB::CRFHistorySwitchOverTable::CRFHistorySwitchOverEntry


class CISCORFMIB::CRFStatusRFClientTable : public ydk::Entity
{
    public:
        CRFStatusRFClientTable();
        ~CRFStatusRFClientTable();

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

        class CRFStatusRFClientEntry; //type: CISCORFMIB::CRFStatusRFClientTable::CRFStatusRFClientEntry

        ydk::YList crfstatusrfcliententry;
        
}; // CISCORFMIB::CRFStatusRFClientTable


class CISCORFMIB::CRFStatusRFClientTable::CRFStatusRFClientEntry : public ydk::Entity
{
    public:
        CRFStatusRFClientEntry();
        ~CRFStatusRFClientEntry();

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

        ydk::YLeaf crfstatusrfclientid; //type: uint32
        ydk::YLeaf crfstatusrfclientdescr; //type: string
        ydk::YLeaf crfstatusrfclientseq; //type: uint32
        ydk::YLeaf crfstatusrfclientredtime; //type: uint32
        ydk::YLeaf crfstatusrfclientstatus; //type: RFClientStatus

}; // CISCORFMIB::CRFStatusRFClientTable::CRFStatusRFClientEntry

class RFState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notKnown;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf initialization;
        static const ydk::Enum::YLeaf negotiation;
        static const ydk::Enum::YLeaf standbyCold;
        static const ydk::Enum::YLeaf standbyColdConfig;
        static const ydk::Enum::YLeaf standbyColdFileSys;
        static const ydk::Enum::YLeaf standbyColdBulk;
        static const ydk::Enum::YLeaf standbyHot;
        static const ydk::Enum::YLeaf activeFast;
        static const ydk::Enum::YLeaf activeDrain;
        static const ydk::Enum::YLeaf activePreconfig;
        static const ydk::Enum::YLeaf activePostconfig;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeExtraload;
        static const ydk::Enum::YLeaf activeHandback;

};

class RFMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonRedundant;
        static const ydk::Enum::YLeaf staticLoadShareNonRedundant;
        static const ydk::Enum::YLeaf dynamicLoadShareNonRedundant;
        static const ydk::Enum::YLeaf staticLoadShareRedundant;
        static const ydk::Enum::YLeaf dynamicLoadShareRedundant;
        static const ydk::Enum::YLeaf coldStandbyRedundant;
        static const ydk::Enum::YLeaf warmStandbyRedundant;
        static const ydk::Enum::YLeaf hotStandbyRedundant;

};

class RFAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAction;
        static const ydk::Enum::YLeaf reloadPeer;
        static const ydk::Enum::YLeaf reloadShelf;
        static const ydk::Enum::YLeaf switchActivity;
        static const ydk::Enum::YLeaf forceSwitchActivity;

};

class RFSwactReasonType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notKnown;
        static const ydk::Enum::YLeaf userInitiated;
        static const ydk::Enum::YLeaf userForced;
        static const ydk::Enum::YLeaf activeUnitFailed;
        static const ydk::Enum::YLeaf activeUnitRemoved;

};

class RFIssuState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf loadVersion;
        static const ydk::Enum::YLeaf runVersion;
        static const ydk::Enum::YLeaf commitVersion;

};

class RFIssuStateRev1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf systemReset;
        static const ydk::Enum::YLeaf loadVersion;
        static const ydk::Enum::YLeaf loadVersionSwitchover;
        static const ydk::Enum::YLeaf runVersion;
        static const ydk::Enum::YLeaf runVersionSwitchover;
        static const ydk::Enum::YLeaf commitVersion;

};

class RFClientStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noStatus;
        static const ydk::Enum::YLeaf clientNotRedundant;
        static const ydk::Enum::YLeaf clientRedundancyInProgress;
        static const ydk::Enum::YLeaf clientRedundant;

};


}
}

#endif /* _CISCO_RF_MIB_ */

