#ifndef _DRAFT_MSDP_MIB_
#define _DRAFT_MSDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DRAFT_MSDP_MIB {

class DRAFTMSDPMIB : public ydk::Entity
{
    public:
        DRAFTMSDPMIB();
        ~DRAFTMSDPMIB();

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

        class Msdp; //type: DRAFTMSDPMIB::Msdp
        class MsdpRequestsTable; //type: DRAFTMSDPMIB::MsdpRequestsTable
        class MsdpPeerTable; //type: DRAFTMSDPMIB::MsdpPeerTable
        class MsdpSACacheTable; //type: DRAFTMSDPMIB::MsdpSACacheTable

        std::shared_ptr<cisco_ios_xe::DRAFT_MSDP_MIB::DRAFTMSDPMIB::Msdp> msdp;
        std::shared_ptr<cisco_ios_xe::DRAFT_MSDP_MIB::DRAFTMSDPMIB::MsdpRequestsTable> msdprequeststable;
        std::shared_ptr<cisco_ios_xe::DRAFT_MSDP_MIB::DRAFTMSDPMIB::MsdpPeerTable> msdppeertable;
        std::shared_ptr<cisco_ios_xe::DRAFT_MSDP_MIB::DRAFTMSDPMIB::MsdpSACacheTable> msdpsacachetable;
        
}; // DRAFTMSDPMIB


class DRAFTMSDPMIB::Msdp : public ydk::Entity
{
    public:
        Msdp();
        ~Msdp();

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

        ydk::YLeaf msdpenabled; //type: boolean
        ydk::YLeaf msdpcachelifetime; //type: uint32
        ydk::YLeaf msdpnumsacacheentries; //type: uint32
        ydk::YLeaf msdpsaholddownperiod; //type: int32

}; // DRAFTMSDPMIB::Msdp


class DRAFTMSDPMIB::MsdpRequestsTable : public ydk::Entity
{
    public:
        MsdpRequestsTable();
        ~MsdpRequestsTable();

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

        class MsdpRequestsEntry; //type: DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry

        ydk::YList msdprequestsentry;
        
}; // DRAFTMSDPMIB::MsdpRequestsTable


class DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry : public ydk::Entity
{
    public:
        MsdpRequestsEntry();
        ~MsdpRequestsEntry();

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

        ydk::YLeaf msdprequestsgroupaddress; //type: string
        ydk::YLeaf msdprequestsgroupmask; //type: string
        ydk::YLeaf msdprequestspeer; //type: string
        ydk::YLeaf msdprequestsstatus; //type: RowStatus

}; // DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry


class DRAFTMSDPMIB::MsdpPeerTable : public ydk::Entity
{
    public:
        MsdpPeerTable();
        ~MsdpPeerTable();

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

        class MsdpPeerEntry; //type: DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry

        ydk::YList msdppeerentry;
        
}; // DRAFTMSDPMIB::MsdpPeerTable


class DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry : public ydk::Entity
{
    public:
        MsdpPeerEntry();
        ~MsdpPeerEntry();

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

        ydk::YLeaf msdppeerremoteaddress; //type: string
        ydk::YLeaf msdppeerstate; //type: MsdpPeerState
        ydk::YLeaf msdppeerrpffailures; //type: uint32
        ydk::YLeaf msdppeerinsas; //type: uint32
        ydk::YLeaf msdppeeroutsas; //type: uint32
        ydk::YLeaf msdppeerinsarequests; //type: uint32
        ydk::YLeaf msdppeeroutsarequests; //type: uint32
        ydk::YLeaf msdppeerinsaresponses; //type: uint32
        ydk::YLeaf msdppeeroutsaresponses; //type: uint32
        ydk::YLeaf msdppeerincontrolmessages; //type: uint32
        ydk::YLeaf msdppeeroutcontrolmessages; //type: uint32
        ydk::YLeaf msdppeerindatapackets; //type: uint32
        ydk::YLeaf msdppeeroutdatapackets; //type: uint32
        ydk::YLeaf msdppeerfsmestablishedtransitions; //type: uint32
        ydk::YLeaf msdppeerfsmestablishedtime; //type: uint32
        ydk::YLeaf msdppeerinmessageelapsedtime; //type: uint32
        ydk::YLeaf msdppeerlocaladdress; //type: string
        ydk::YLeaf msdppeersaadvperiod; //type: int32
        ydk::YLeaf msdppeerconnectretryinterval; //type: int32
        ydk::YLeaf msdppeerholdtimeconfigured; //type: int32
        ydk::YLeaf msdppeerkeepaliveconfigured; //type: int32
        ydk::YLeaf msdppeerdatattl; //type: int32
        ydk::YLeaf msdppeerprocessrequestsfrom; //type: boolean
        ydk::YLeaf msdppeerstatus; //type: RowStatus
        ydk::YLeaf msdppeerremoteport; //type: int32
        ydk::YLeaf msdppeerlocalport; //type: int32
        ydk::YLeaf msdppeerencapsulationstate; //type: MsdpPeerEncapsulationState
        ydk::YLeaf msdppeerencapsulationtype; //type: MsdpPeerEncapsulationType
        ydk::YLeaf msdppeerconnectionattempts; //type: uint32
        ydk::YLeaf msdppeerinnotifications; //type: uint32
        ydk::YLeaf msdppeeroutnotifications; //type: uint32
        ydk::YLeaf msdppeerlasterror; //type: binary
        class MsdpPeerState;
        class MsdpPeerEncapsulationState;
        class MsdpPeerEncapsulationType;

}; // DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry


class DRAFTMSDPMIB::MsdpSACacheTable : public ydk::Entity
{
    public:
        MsdpSACacheTable();
        ~MsdpSACacheTable();

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

        class MsdpSACacheEntry; //type: DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry

        ydk::YList msdpsacacheentry;
        
}; // DRAFTMSDPMIB::MsdpSACacheTable


class DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry : public ydk::Entity
{
    public:
        MsdpSACacheEntry();
        ~MsdpSACacheEntry();

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

        ydk::YLeaf msdpsacachegroupaddr; //type: string
        ydk::YLeaf msdpsacachesourceaddr; //type: string
        ydk::YLeaf msdpsacacheoriginrp; //type: string
        ydk::YLeaf msdpsacachepeerlearnedfrom; //type: string
        ydk::YLeaf msdpsacacherpfpeer; //type: string
        ydk::YLeaf msdpsacacheinsas; //type: uint32
        ydk::YLeaf msdpsacacheindatapackets; //type: uint32
        ydk::YLeaf msdpsacacheuptime; //type: uint32
        ydk::YLeaf msdpsacacheexpirytime; //type: uint32
        ydk::YLeaf msdpsacachestatus; //type: RowStatus

}; // DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry

class DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf disabled;

};

class DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf advertising;
        static const ydk::Enum::YLeaf sent;
        static const ydk::Enum::YLeaf agreed;
        static const ydk::Enum::YLeaf failed;

};

class DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf gre;

};


}
}

#endif /* _DRAFT_MSDP_MIB_ */

