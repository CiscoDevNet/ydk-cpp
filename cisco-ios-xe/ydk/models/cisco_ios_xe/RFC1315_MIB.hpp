#ifndef _RFC1315_MIB_
#define _RFC1315_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace RFC1315_MIB {

class Rfc1315Mib : public Entity
{
    public:
        Rfc1315Mib();
        ~Rfc1315Mib();

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

        class FrameRelayGlobals; //type: Rfc1315Mib::FrameRelayGlobals
        class Frdlcmitable; //type: Rfc1315Mib::Frdlcmitable
        class Frcircuittable; //type: Rfc1315Mib::Frcircuittable
        class Frerrtable; //type: Rfc1315Mib::Frerrtable

        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::FrameRelayGlobals> frame_relay_globals;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frcircuittable> frcircuittable;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frdlcmitable> frdlcmitable;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frerrtable> frerrtable;
        
}; // Rfc1315Mib


class Rfc1315Mib::FrameRelayGlobals : public Entity
{
    public:
        FrameRelayGlobals();
        ~FrameRelayGlobals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frtrapstate; //type: FrtrapstateEnum
        class FrtrapstateEnum;

}; // Rfc1315Mib::FrameRelayGlobals


class Rfc1315Mib::Frdlcmitable : public Entity
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

        class Frdlcmientry; //type: Rfc1315Mib::Frdlcmitable::Frdlcmientry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frdlcmitable::Frdlcmientry> > frdlcmientry;
        
}; // Rfc1315Mib::Frdlcmitable


class Rfc1315Mib::Frdlcmitable::Frdlcmientry : public Entity
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
        class FrdlcmistateEnum;
        class FrdlcmiaddressEnum;
        class FrdlcmiaddresslenEnum;
        class FrdlcmimulticastEnum;

}; // Rfc1315Mib::Frdlcmitable::Frdlcmientry


class Rfc1315Mib::Frcircuittable : public Entity
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

        class Frcircuitentry; //type: Rfc1315Mib::Frcircuittable::Frcircuitentry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frcircuittable::Frcircuitentry> > frcircuitentry;
        
}; // Rfc1315Mib::Frcircuittable


class Rfc1315Mib::Frcircuittable::Frcircuitentry : public Entity
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
        class FrcircuitstateEnum;

}; // Rfc1315Mib::Frcircuittable::Frcircuitentry


class Rfc1315Mib::Frerrtable : public Entity
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

        class Frerrentry; //type: Rfc1315Mib::Frerrtable::Frerrentry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frerrtable::Frerrentry> > frerrentry;
        
}; // Rfc1315Mib::Frerrtable


class Rfc1315Mib::Frerrtable::Frerrentry : public Entity
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
        class FrerrtypeEnum;

}; // Rfc1315Mib::Frerrtable::Frerrentry

class Rfc1315Mib::FrameRelayGlobals::FrtrapstateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmistateEnum : public Enum
{
    public:
        static const Enum::YLeaf noLmiConfigured;
        static const Enum::YLeaf lmiRev1;
        static const Enum::YLeaf ansiT1_617_D;
        static const Enum::YLeaf ansiT1_617_B;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddressEnum : public Enum
{
    public:
        static const Enum::YLeaf q921;
        static const Enum::YLeaf q922March90;
        static const Enum::YLeaf q922November90;
        static const Enum::YLeaf q922;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmiaddresslenEnum : public Enum
{
    public:
        static const Enum::YLeaf two_octets;
        static const Enum::YLeaf three_octets;
        static const Enum::YLeaf four_octets;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::FrdlcmimulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf nonBroadcast;
        static const Enum::YLeaf broadcast;

};

class Rfc1315Mib::Frcircuittable::Frcircuitentry::FrcircuitstateEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf active;
        static const Enum::YLeaf inactive;

};

class Rfc1315Mib::Frerrtable::Frerrentry::FrerrtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknownError;
        static const Enum::YLeaf receiveShort;
        static const Enum::YLeaf receiveLong;
        static const Enum::YLeaf illegalDLCI;
        static const Enum::YLeaf unknownDLCI;
        static const Enum::YLeaf dlcmiProtoErr;
        static const Enum::YLeaf dlcmiUnknownIE;
        static const Enum::YLeaf dlcmiSequenceErr;
        static const Enum::YLeaf dlcmiUnknownRpt;
        static const Enum::YLeaf noErrorSinceReset;

};


}
}

#endif /* _RFC1315_MIB_ */

