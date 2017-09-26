#ifndef _FRAME_RELAY_DTE_MIB_
#define _FRAME_RELAY_DTE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace FRAME_RELAY_DTE_MIB {

class FRAMERELAYDTEMIB : public ydk::Entity
{
    public:
        FRAMERELAYDTEMIB();
        ~FRAMERELAYDTEMIB();

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

        class Framerelaytrapcontrol; //type: FRAMERELAYDTEMIB::Framerelaytrapcontrol
        class Frdlcmitable; //type: FRAMERELAYDTEMIB::Frdlcmitable
        class Frcircuittable; //type: FRAMERELAYDTEMIB::Frcircuittable
        class Frerrtable; //type: FRAMERELAYDTEMIB::Frerrtable

        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Framerelaytrapcontrol> framerelaytrapcontrol;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frcircuittable> frcircuittable;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frdlcmitable> frdlcmitable;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frerrtable> frerrtable;
        
}; // FRAMERELAYDTEMIB


class FRAMERELAYDTEMIB::Framerelaytrapcontrol : public ydk::Entity
{
    public:
        Framerelaytrapcontrol();
        ~Framerelaytrapcontrol();

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

        ydk::YLeaf frtrapstate; //type: Frtrapstate
        ydk::YLeaf frtrapmaxrate; //type: int32
        class Frtrapstate;

}; // FRAMERELAYDTEMIB::Framerelaytrapcontrol


class FRAMERELAYDTEMIB::Frcircuittable : public ydk::Entity
{
    public:
        Frcircuittable();
        ~Frcircuittable();

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

        class Frcircuitentry; //type: FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry

        std::vector<std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry> > frcircuitentry;
        
}; // FRAMERELAYDTEMIB::Frcircuittable


class FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry : public ydk::Entity
{
    public:
        Frcircuitentry();
        ~Frcircuitentry();

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
        ydk::YLeaf frcircuitmulticast; //type: Frcircuitmulticast
        ydk::YLeaf frcircuittype; //type: Frcircuittype
        ydk::YLeaf frcircuitdiscards; //type: uint32
        ydk::YLeaf frcircuitreceiveddes; //type: uint32
        ydk::YLeaf frcircuitsentdes; //type: uint32
        ydk::YLeaf frcircuitlogicalifindex; //type: int32
        ydk::YLeaf frcircuitrowstatus; //type: RowStatus
        class Frcircuitstate;
        class Frcircuitmulticast;
        class Frcircuittype;

}; // FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry


class FRAMERELAYDTEMIB::Frdlcmitable : public ydk::Entity
{
    public:
        Frdlcmitable();
        ~Frdlcmitable();

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

        class Frdlcmientry; //type: FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry

        std::vector<std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry> > frdlcmientry;
        
}; // FRAMERELAYDTEMIB::Frdlcmitable


class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry : public ydk::Entity
{
    public:
        Frdlcmientry();
        ~Frdlcmientry();

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
        ydk::YLeaf frdlcmistatus; //type: Frdlcmistatus
        ydk::YLeaf frdlcmirowstatus; //type: RowStatus
        class Frdlcmistate;
        class Frdlcmiaddress;
        class Frdlcmiaddresslen;
        class Frdlcmimulticast;
        class Frdlcmistatus;

}; // FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry


class FRAMERELAYDTEMIB::Frerrtable : public ydk::Entity
{
    public:
        Frerrtable();
        ~Frerrtable();

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

        class Frerrentry; //type: FRAMERELAYDTEMIB::Frerrtable::Frerrentry

        std::vector<std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::Frerrtable::Frerrentry> > frerrentry;
        
}; // FRAMERELAYDTEMIB::Frerrtable


class FRAMERELAYDTEMIB::Frerrtable::Frerrentry : public ydk::Entity
{
    public:
        Frerrentry();
        ~Frerrentry();

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

        ydk::YLeaf frerrifindex; //type: int32
        ydk::YLeaf frerrtype; //type: Frerrtype
        ydk::YLeaf frerrdata; //type: binary
        ydk::YLeaf frerrtime; //type: uint32
        ydk::YLeaf frerrfaults; //type: uint32
        ydk::YLeaf frerrfaulttime; //type: uint32
        class Frerrtype;

}; // FRAMERELAYDTEMIB::Frerrtable::Frerrentry

class FRAMERELAYDTEMIB::Framerelaytrapcontrol::Frtrapstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry::Frcircuitstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry::Frcircuitmulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf oneWay;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf nWay;

};

class FRAMERELAYDTEMIB::Frcircuittable::Frcircuitentry::Frcircuittype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};

class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry::Frdlcmistate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLmiConfigured;
        static const ydk::Enum::YLeaf lmiRev1;
        static const ydk::Enum::YLeaf ansiT1617D;
        static const ydk::Enum::YLeaf ansiT1617B;
        static const ydk::Enum::YLeaf itut933A;
        static const ydk::Enum::YLeaf ansiT1617D1994;

};

class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry::Frdlcmiaddress : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf q921;
        static const ydk::Enum::YLeaf q922March90;
        static const ydk::Enum::YLeaf q922November90;
        static const ydk::Enum::YLeaf q922;

};

class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry::Frdlcmiaddresslen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf twoOctets;
        static const ydk::Enum::YLeaf threeOctets;
        static const ydk::Enum::YLeaf fourOctets;

};

class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry::Frdlcmimulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonBroadcast;
        static const ydk::Enum::YLeaf broadcast;

};

class FRAMERELAYDTEMIB::Frdlcmitable::Frdlcmientry::Frdlcmistatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf fault;
        static const ydk::Enum::YLeaf initializing;

};

class FRAMERELAYDTEMIB::Frerrtable::Frerrentry::Frerrtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf receiveShort;
        static const ydk::Enum::YLeaf receiveLong;
        static const ydk::Enum::YLeaf illegalAddress;
        static const ydk::Enum::YLeaf unknownAddress;
        static const ydk::Enum::YLeaf dlcmiProtoErr;
        static const ydk::Enum::YLeaf dlcmiUnknownIE;
        static const ydk::Enum::YLeaf dlcmiSequenceErr;
        static const ydk::Enum::YLeaf dlcmiUnknownRpt;
        static const ydk::Enum::YLeaf noErrorSinceReset;

};


}
}

#endif /* _FRAME_RELAY_DTE_MIB_ */

