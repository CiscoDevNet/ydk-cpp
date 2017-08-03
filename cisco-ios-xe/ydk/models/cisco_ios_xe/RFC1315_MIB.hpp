#ifndef _RFC1315_MIB_
#define _RFC1315_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace RFC1315_MIB {

class Rfc1315Mib : public ydk::Entity
{
    public:
        Rfc1315Mib();
        ~Rfc1315Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class FrameRelayGlobals; //type: Rfc1315Mib::FrameRelayGlobals
        class Frdlcmitable; //type: Rfc1315Mib::Frdlcmitable
        class Frcircuittable; //type: Rfc1315Mib::Frcircuittable
        class Frerrtable; //type: Rfc1315Mib::Frerrtable

        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::FrameRelayGlobals> frame_relay_globals;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frcircuittable> frcircuittable;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frdlcmitable> frdlcmitable;
        std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frerrtable> frerrtable;
        
}; // Rfc1315Mib


class Rfc1315Mib::FrameRelayGlobals : public ydk::Entity
{
    public:
        FrameRelayGlobals();
        ~FrameRelayGlobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frtrapstate; //type: Frtrapstate
        class Frtrapstate;

}; // Rfc1315Mib::FrameRelayGlobals


class Rfc1315Mib::Frdlcmitable : public ydk::Entity
{
    public:
        Frdlcmitable();
        ~Frdlcmitable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Frdlcmientry; //type: Rfc1315Mib::Frdlcmitable::Frdlcmientry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frdlcmitable::Frdlcmientry> > frdlcmientry;
        
}; // Rfc1315Mib::Frdlcmitable


class Rfc1315Mib::Frdlcmitable::Frdlcmientry : public ydk::Entity
{
    public:
        Frdlcmientry();
        ~Frdlcmientry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frdlcmiifindex; //type: int32
        ydk::YLeaf frdlcmistate; //type: Frdlcmistate
        ydk::YLeaf frdlcmiaddress; //type: Frdlcmiaddress
        ydk::YLeaf frdlcmiaddresslen; //type: Frdlcmiaddresslen
        ydk::YLeaf frdlcmipollinginterval; //type: int32
        ydk::YLeaf frdlcmifullenquiryinterval; //type: int32
        ydk::YLeaf frdlcmierrorthreshold; //type: int32
        ydk::YLeaf frdlcmimonitoredevents; //type: int32
        ydk::YLeaf frdlcmimaxsupportedvcs; //type: int32
        ydk::YLeaf frdlcmimulticast; //type: Frdlcmimulticast
        class Frdlcmistate;
        class Frdlcmiaddress;
        class Frdlcmiaddresslen;
        class Frdlcmimulticast;

}; // Rfc1315Mib::Frdlcmitable::Frdlcmientry


class Rfc1315Mib::Frcircuittable : public ydk::Entity
{
    public:
        Frcircuittable();
        ~Frcircuittable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Frcircuitentry; //type: Rfc1315Mib::Frcircuittable::Frcircuitentry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frcircuittable::Frcircuitentry> > frcircuitentry;
        
}; // Rfc1315Mib::Frcircuittable


class Rfc1315Mib::Frcircuittable::Frcircuitentry : public ydk::Entity
{
    public:
        Frcircuitentry();
        ~Frcircuitentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frcircuitifindex; //type: int32
        ydk::YLeaf frcircuitdlci; //type: int32
        ydk::YLeaf frcircuitstate; //type: Frcircuitstate
        ydk::YLeaf frcircuitreceivedfecns; //type: uint32
        ydk::YLeaf frcircuitreceivedbecns; //type: uint32
        ydk::YLeaf frcircuitsentframes; //type: uint32
        ydk::YLeaf frcircuitsentoctets; //type: uint32
        ydk::YLeaf frcircuitreceivedframes; //type: uint32
        ydk::YLeaf frcircuitreceivedoctets; //type: uint32
        ydk::YLeaf frcircuitcreationtime; //type: uint32
        ydk::YLeaf frcircuitlasttimechange; //type: uint32
        ydk::YLeaf frcircuitcommittedburst; //type: int32
        ydk::YLeaf frcircuitexcessburst; //type: int32
        ydk::YLeaf frcircuitthroughput; //type: int32
        class Frcircuitstate;

}; // Rfc1315Mib::Frcircuittable::Frcircuitentry


class Rfc1315Mib::Frerrtable : public ydk::Entity
{
    public:
        Frerrtable();
        ~Frerrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Frerrentry; //type: Rfc1315Mib::Frerrtable::Frerrentry

        std::vector<std::shared_ptr<RFC1315_MIB::Rfc1315Mib::Frerrtable::Frerrentry> > frerrentry;
        
}; // Rfc1315Mib::Frerrtable


class Rfc1315Mib::Frerrtable::Frerrentry : public ydk::Entity
{
    public:
        Frerrentry();
        ~Frerrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frerrifindex; //type: int32
        ydk::YLeaf frerrtype; //type: Frerrtype
        ydk::YLeaf frerrdata; //type: binary
        ydk::YLeaf frerrtime; //type: uint32
        class Frerrtype;

}; // Rfc1315Mib::Frerrtable::Frerrentry

class Rfc1315Mib::FrameRelayGlobals::Frtrapstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmistate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLmiConfigured;
        static const ydk::Enum::YLeaf lmiRev1;
        static const ydk::Enum::YLeaf ansiT1_617_D;
        static const ydk::Enum::YLeaf ansiT1_617_B;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddress : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf q921;
        static const ydk::Enum::YLeaf q922March90;
        static const ydk::Enum::YLeaf q922November90;
        static const ydk::Enum::YLeaf q922;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_octets;
        static const ydk::Enum::YLeaf three_octets;
        static const ydk::Enum::YLeaf four_octets;

};

class Rfc1315Mib::Frdlcmitable::Frdlcmientry::Frdlcmimulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonBroadcast;
        static const ydk::Enum::YLeaf broadcast;

};

class Rfc1315Mib::Frcircuittable::Frcircuitentry::Frcircuitstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class Rfc1315Mib::Frerrtable::Frerrentry::Frerrtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf receiveShort;
        static const ydk::Enum::YLeaf receiveLong;
        static const ydk::Enum::YLeaf illegalDLCI;
        static const ydk::Enum::YLeaf unknownDLCI;
        static const ydk::Enum::YLeaf dlcmiProtoErr;
        static const ydk::Enum::YLeaf dlcmiUnknownIE;
        static const ydk::Enum::YLeaf dlcmiSequenceErr;
        static const ydk::Enum::YLeaf dlcmiUnknownRpt;
        static const ydk::Enum::YLeaf noErrorSinceReset;

};


}
}

#endif /* _RFC1315_MIB_ */

