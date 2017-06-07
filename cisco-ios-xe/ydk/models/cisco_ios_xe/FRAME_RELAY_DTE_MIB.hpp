#ifndef _FRAME_RELAY_DTE_MIB_
#define _FRAME_RELAY_DTE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace FRAME_RELAY_DTE_MIB {

class FrameRelayDteMib : public Entity
{
    public:
        FrameRelayDteMib();
        ~FrameRelayDteMib();

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

        class Framerelaytrapcontrol; //type: FrameRelayDteMib::Framerelaytrapcontrol
        class Frdlcmitable; //type: FrameRelayDteMib::Frdlcmitable
        class Frcircuittable; //type: FrameRelayDteMib::Frcircuittable
        class Frerrtable; //type: FrameRelayDteMib::Frerrtable

        std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Framerelaytrapcontrol> framerelaytrapcontrol;
        std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frcircuittable> frcircuittable;
        std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frdlcmitable> frdlcmitable;
        std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frerrtable> frerrtable;
        
}; // FrameRelayDteMib


class FrameRelayDteMib::Framerelaytrapcontrol : public Entity
{
    public:
        Framerelaytrapcontrol();
        ~Framerelaytrapcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frtrapstate; //type: FrtrapstateEnum
        YLeaf frtrapmaxrate; //type: int32
        class FrtrapstateEnum;

}; // FrameRelayDteMib::Framerelaytrapcontrol


class FrameRelayDteMib::Frdlcmitable : public Entity
{
    public:
        Frdlcmitable();
        ~Frdlcmitable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Frdlcmientry; //type: FrameRelayDteMib::Frdlcmitable::Frdlcmientry

        std::vector<std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frdlcmitable::Frdlcmientry> > frdlcmientry;
        
}; // FrameRelayDteMib::Frdlcmitable


class FrameRelayDteMib::Frdlcmitable::Frdlcmientry : public Entity
{
    public:
        Frdlcmientry();
        ~Frdlcmientry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frdlcmiifindex; //type: int32
        YLeaf frdlcmistate; //type: FrdlcmistateEnum
        YLeaf frdlcmiaddress; //type: FrdlcmiaddressEnum
        YLeaf frdlcmiaddresslen; //type: FrdlcmiaddresslenEnum
        YLeaf frdlcmipollinginterval; //type: int32
        YLeaf frdlcmifullenquiryinterval; //type: int32
        YLeaf frdlcmierrorthreshold; //type: int32
        YLeaf frdlcmimonitoredevents; //type: int32
        YLeaf frdlcmimaxsupportedvcs; //type: int32
        YLeaf frdlcmimulticast; //type: FrdlcmimulticastEnum
        YLeaf frdlcmistatus; //type: FrdlcmistatusEnum
        YLeaf frdlcmirowstatus; //type: RowstatusEnum
        class FrdlcmistateEnum;
        class FrdlcmiaddressEnum;
        class FrdlcmiaddresslenEnum;
        class FrdlcmimulticastEnum;
        class FrdlcmistatusEnum;

}; // FrameRelayDteMib::Frdlcmitable::Frdlcmientry


class FrameRelayDteMib::Frcircuittable : public Entity
{
    public:
        Frcircuittable();
        ~Frcircuittable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Frcircuitentry; //type: FrameRelayDteMib::Frcircuittable::Frcircuitentry

        std::vector<std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frcircuittable::Frcircuitentry> > frcircuitentry;
        
}; // FrameRelayDteMib::Frcircuittable


class FrameRelayDteMib::Frcircuittable::Frcircuitentry : public Entity
{
    public:
        Frcircuitentry();
        ~Frcircuitentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frcircuitifindex; //type: int32
        YLeaf frcircuitdlci; //type: int32
        YLeaf frcircuitstate; //type: FrcircuitstateEnum
        YLeaf frcircuitreceivedfecns; //type: uint32
        YLeaf frcircuitreceivedbecns; //type: uint32
        YLeaf frcircuitsentframes; //type: uint32
        YLeaf frcircuitsentoctets; //type: uint32
        YLeaf frcircuitreceivedframes; //type: uint32
        YLeaf frcircuitreceivedoctets; //type: uint32
        YLeaf frcircuitcreationtime; //type: uint32
        YLeaf frcircuitlasttimechange; //type: uint32
        YLeaf frcircuitcommittedburst; //type: int32
        YLeaf frcircuitexcessburst; //type: int32
        YLeaf frcircuitthroughput; //type: int32
        YLeaf frcircuitmulticast; //type: FrcircuitmulticastEnum
        YLeaf frcircuittype; //type: FrcircuittypeEnum
        YLeaf frcircuitdiscards; //type: uint32
        YLeaf frcircuitreceiveddes; //type: uint32
        YLeaf frcircuitsentdes; //type: uint32
        YLeaf frcircuitlogicalifindex; //type: int32
        YLeaf frcircuitrowstatus; //type: RowstatusEnum
        class FrcircuitstateEnum;
        class FrcircuitmulticastEnum;
        class FrcircuittypeEnum;

}; // FrameRelayDteMib::Frcircuittable::Frcircuitentry


class FrameRelayDteMib::Frerrtable : public Entity
{
    public:
        Frerrtable();
        ~Frerrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Frerrentry; //type: FrameRelayDteMib::Frerrtable::Frerrentry

        std::vector<std::shared_ptr<FRAME_RELAY_DTE_MIB::FrameRelayDteMib::Frerrtable::Frerrentry> > frerrentry;
        
}; // FrameRelayDteMib::Frerrtable


class FrameRelayDteMib::Frerrtable::Frerrentry : public Entity
{
    public:
        Frerrentry();
        ~Frerrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frerrifindex; //type: int32
        YLeaf frerrtype; //type: FrerrtypeEnum
        YLeaf frerrdata; //type: binary
        YLeaf frerrtime; //type: uint32
        YLeaf frerrfaults; //type: uint32
        YLeaf frerrfaulttime; //type: uint32
        class FrerrtypeEnum;

}; // FrameRelayDteMib::Frerrtable::Frerrentry

class FrameRelayDteMib::Framerelaytrapcontrol::FrtrapstateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum : public Enum
{
    public:
        static const Enum::YLeaf noLmiConfigured;
        static const Enum::YLeaf lmiRev1;
        static const Enum::YLeaf ansiT1617D;
        static const Enum::YLeaf ansiT1617B;
        static const Enum::YLeaf itut933A;
        static const Enum::YLeaf ansiT1617D1994;

};

class FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum : public Enum
{
    public:
        static const Enum::YLeaf q921;
        static const Enum::YLeaf q922March90;
        static const Enum::YLeaf q922November90;
        static const Enum::YLeaf q922;

};

class FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum : public Enum
{
    public:
        static const Enum::YLeaf twoOctets;
        static const Enum::YLeaf threeOctets;
        static const Enum::YLeaf fourOctets;

};

class FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf nonBroadcast;
        static const Enum::YLeaf broadcast;

};

class FrameRelayDteMib::Frdlcmitable::Frdlcmientry::FrdlcmistatusEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf fault;
        static const Enum::YLeaf initializing;

};

class FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf active;
        static const Enum::YLeaf inactive;

};

class FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuitmulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf oneWay;
        static const Enum::YLeaf twoWay;
        static const Enum::YLeaf nWay;

};

class FrameRelayDteMib::Frcircuittable::Frcircuitentry::FrcircuittypeEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;

};

class FrameRelayDteMib::Frerrtable::Frerrentry::FrerrtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknownError;
        static const Enum::YLeaf receiveShort;
        static const Enum::YLeaf receiveLong;
        static const Enum::YLeaf illegalAddress;
        static const Enum::YLeaf unknownAddress;
        static const Enum::YLeaf dlcmiProtoErr;
        static const Enum::YLeaf dlcmiUnknownIE;
        static const Enum::YLeaf dlcmiSequenceErr;
        static const Enum::YLeaf dlcmiUnknownRpt;
        static const Enum::YLeaf noErrorSinceReset;

};


}
}

#endif /* _FRAME_RELAY_DTE_MIB_ */

