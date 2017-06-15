#ifndef _DRAFT_MSDP_MIB_
#define _DRAFT_MSDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace DRAFT_MSDP_MIB {

class DraftMsdpMib : public Entity
{
    public:
        DraftMsdpMib();
        ~DraftMsdpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Msdp; //type: DraftMsdpMib::Msdp
        class Msdprequeststable; //type: DraftMsdpMib::Msdprequeststable
        class Msdppeertable; //type: DraftMsdpMib::Msdppeertable
        class Msdpsacachetable; //type: DraftMsdpMib::Msdpsacachetable

        std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdp> msdp_;
        std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdppeertable> msdppeertable_;
        std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdprequeststable> msdprequeststable_;
        std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdpsacachetable> msdpsacachetable_;
        
}; // DraftMsdpMib


class DraftMsdpMib::Msdp : public Entity
{
    public:
        Msdp();
        ~Msdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msdpenabled; //type: boolean
        YLeaf msdpcachelifetime; //type: uint32
        YLeaf msdpnumsacacheentries; //type: uint32
        YLeaf msdpsaholddownperiod; //type: int32

}; // DraftMsdpMib::Msdp


class DraftMsdpMib::Msdprequeststable : public Entity
{
    public:
        Msdprequeststable();
        ~Msdprequeststable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msdprequestsentry; //type: DraftMsdpMib::Msdprequeststable::Msdprequestsentry

        std::vector<std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdprequeststable::Msdprequestsentry> > msdprequestsentry_;
        
}; // DraftMsdpMib::Msdprequeststable


class DraftMsdpMib::Msdprequeststable::Msdprequestsentry : public Entity
{
    public:
        Msdprequestsentry();
        ~Msdprequestsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msdprequestsgroupaddress; //type: string
        YLeaf msdprequestsgroupmask; //type: string
        YLeaf msdprequestspeer; //type: string
        YLeaf msdprequestsstatus; //type: RowstatusEnum

}; // DraftMsdpMib::Msdprequeststable::Msdprequestsentry


class DraftMsdpMib::Msdppeertable : public Entity
{
    public:
        Msdppeertable();
        ~Msdppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msdppeerentry; //type: DraftMsdpMib::Msdppeertable::Msdppeerentry

        std::vector<std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdppeertable::Msdppeerentry> > msdppeerentry_;
        
}; // DraftMsdpMib::Msdppeertable


class DraftMsdpMib::Msdppeertable::Msdppeerentry : public Entity
{
    public:
        Msdppeerentry();
        ~Msdppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msdppeerremoteaddress; //type: string
        YLeaf msdppeerstate; //type: MsdppeerstateEnum
        YLeaf msdppeerrpffailures; //type: uint32
        YLeaf msdppeerinsas; //type: uint32
        YLeaf msdppeeroutsas; //type: uint32
        YLeaf msdppeerinsarequests; //type: uint32
        YLeaf msdppeeroutsarequests; //type: uint32
        YLeaf msdppeerinsaresponses; //type: uint32
        YLeaf msdppeeroutsaresponses; //type: uint32
        YLeaf msdppeerincontrolmessages; //type: uint32
        YLeaf msdppeeroutcontrolmessages; //type: uint32
        YLeaf msdppeerindatapackets; //type: uint32
        YLeaf msdppeeroutdatapackets; //type: uint32
        YLeaf msdppeerfsmestablishedtransitions; //type: uint32
        YLeaf msdppeerfsmestablishedtime; //type: uint32
        YLeaf msdppeerinmessageelapsedtime; //type: uint32
        YLeaf msdppeerlocaladdress; //type: string
        YLeaf msdppeersaadvperiod; //type: int32
        YLeaf msdppeerconnectretryinterval; //type: int32
        YLeaf msdppeerholdtimeconfigured; //type: int32
        YLeaf msdppeerkeepaliveconfigured; //type: int32
        YLeaf msdppeerdatattl; //type: int32
        YLeaf msdppeerprocessrequestsfrom; //type: boolean
        YLeaf msdppeerstatus; //type: RowstatusEnum
        YLeaf msdppeerremoteport; //type: int32
        YLeaf msdppeerlocalport; //type: int32
        YLeaf msdppeerencapsulationstate; //type: MsdppeerencapsulationstateEnum
        YLeaf msdppeerencapsulationtype; //type: MsdppeerencapsulationtypeEnum
        YLeaf msdppeerconnectionattempts; //type: uint32
        YLeaf msdppeerinnotifications; //type: uint32
        YLeaf msdppeeroutnotifications; //type: uint32
        YLeaf msdppeerlasterror; //type: binary
        class MsdppeerstateEnum;
        class MsdppeerencapsulationstateEnum;
        class MsdppeerencapsulationtypeEnum;

}; // DraftMsdpMib::Msdppeertable::Msdppeerentry


class DraftMsdpMib::Msdpsacachetable : public Entity
{
    public:
        Msdpsacachetable();
        ~Msdpsacachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Msdpsacacheentry; //type: DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry

        std::vector<std::shared_ptr<DRAFT_MSDP_MIB::DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry> > msdpsacacheentry_;
        
}; // DraftMsdpMib::Msdpsacachetable


class DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry : public Entity
{
    public:
        Msdpsacacheentry();
        ~Msdpsacacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msdpsacachegroupaddr; //type: string
        YLeaf msdpsacachesourceaddr; //type: string
        YLeaf msdpsacacheoriginrp; //type: string
        YLeaf msdpsacachepeerlearnedfrom; //type: string
        YLeaf msdpsacacherpfpeer; //type: string
        YLeaf msdpsacacheinsas; //type: uint32
        YLeaf msdpsacacheindatapackets; //type: uint32
        YLeaf msdpsacacheuptime; //type: uint32
        YLeaf msdpsacacheexpirytime; //type: uint32
        YLeaf msdpsacachestatus; //type: RowstatusEnum

}; // DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry

class DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf established;
        static const Enum::YLeaf disabled;

};

class DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf received;
        static const Enum::YLeaf advertising;
        static const Enum::YLeaf sent;
        static const Enum::YLeaf agreed;
        static const Enum::YLeaf failed;

};

class DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf gre;

};


}
}

#endif /* _DRAFT_MSDP_MIB_ */

