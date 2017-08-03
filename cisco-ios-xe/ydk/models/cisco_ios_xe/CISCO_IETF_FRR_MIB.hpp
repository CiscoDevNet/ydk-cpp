#ifndef _CISCO_IETF_FRR_MIB_
#define _CISCO_IETF_FRR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_FRR_MIB {

class CiscoIetfFrrMib : public ydk::Entity
{
    public:
        CiscoIetfFrrMib();
        ~CiscoIetfFrrMib();

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

        class Cmplsfrrscalars; //type: CiscoIetfFrrMib::Cmplsfrrscalars
        class Cmplsfrrconsttable; //type: CiscoIetfFrrMib::Cmplsfrrconsttable
        class Cmplsfrrlogtable; //type: CiscoIetfFrrMib::Cmplsfrrlogtable
        class Cmplsfrrfacroutedbtable; //type: CiscoIetfFrrMib::Cmplsfrrfacroutedbtable

        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrconsttable> cmplsfrrconsttable;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrfacroutedbtable> cmplsfrrfacroutedbtable;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrlogtable> cmplsfrrlogtable;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrscalars> cmplsfrrscalars;
        
}; // CiscoIetfFrrMib


class CiscoIetfFrrMib::Cmplsfrrscalars : public ydk::Entity
{
    public:
        Cmplsfrrscalars();
        ~Cmplsfrrscalars();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsfrrdetourincoming; //type: uint32
        ydk::YLeaf cmplsfrrdetouroutgoing; //type: uint32
        ydk::YLeaf cmplsfrrdetouroriginating; //type: uint32
        ydk::YLeaf cmplsfrrswitchover; //type: uint32
        ydk::YLeaf cmplsfrrnumofconfifs; //type: uint32
        ydk::YLeaf cmplsfrractprotectedifs; //type: uint32
        ydk::YLeaf cmplsfrrconfprotectingtuns; //type: uint32
        ydk::YLeaf cmplsfrractprotectedtuns; //type: uint32
        ydk::YLeaf cmplsfrractprotectedlsps; //type: uint32
        ydk::YLeaf cmplsfrrconstprotectionmethod; //type: Cmplsfrrconstprotectionmethod
        ydk::YLeaf cmplsfrrnotifsenabled; //type: boolean
        ydk::YLeaf cmplsfrrlogtablemaxentries; //type: uint32
        ydk::YLeaf cmplsfrrlogtablecurrentries; //type: uint32
        ydk::YLeaf cmplsfrrnotifmaxrate; //type: uint32
        class Cmplsfrrconstprotectionmethod;

}; // CiscoIetfFrrMib::Cmplsfrrscalars


class CiscoIetfFrrMib::Cmplsfrrconsttable : public ydk::Entity
{
    public:
        Cmplsfrrconsttable();
        ~Cmplsfrrconsttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsfrrconstentry; //type: CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry> > cmplsfrrconstentry;
        
}; // CiscoIetfFrrMib::Cmplsfrrconsttable


class CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry : public ydk::Entity
{
    public:
        Cmplsfrrconstentry();
        ~Cmplsfrrconstentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsfrrconstifindex; //type: int32
        ydk::YLeaf cmplsfrrconsttunnelindex; //type: uint32
        ydk::YLeaf cmplsfrrconsttunnelinstance; //type: uint32
        ydk::YLeaf cmplsfrrconstsetupprio; //type: uint32
        ydk::YLeaf cmplsfrrconstholdingprio; //type: uint32
        ydk::YLeaf cmplsfrrconstinclanyaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconstinclallaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconstexclallaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconsthoplimit; //type: uint32
        ydk::YLeaf cmplsfrrconstbandwidth; //type: uint32
        ydk::YLeaf cmplsfrrconstrowstatus; //type: Rowstatus
        ydk::YLeaf cmplsfrrconstnumprotectingtunonif; //type: uint32
        ydk::YLeaf cmplsfrrconstnumprotectedtunonif; //type: uint32

}; // CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry


class CiscoIetfFrrMib::Cmplsfrrlogtable : public ydk::Entity
{
    public:
        Cmplsfrrlogtable();
        ~Cmplsfrrlogtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsfrrlogentry; //type: CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry> > cmplsfrrlogentry;
        
}; // CiscoIetfFrrMib::Cmplsfrrlogtable


class CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry : public ydk::Entity
{
    public:
        Cmplsfrrlogentry();
        ~Cmplsfrrlogentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsfrrlogindex; //type: uint32
        ydk::YLeaf cmplsfrrlogeventtime; //type: uint32
        ydk::YLeaf cmplsfrrloginterface; //type: int32
        ydk::YLeaf cmplsfrrlogeventtype; //type: Cmplsfrrlogeventtype
        ydk::YLeaf cmplsfrrlogeventduration; //type: uint32
        ydk::YLeaf cmplsfrrlogeventreasonstring; //type: binary
        class Cmplsfrrlogeventtype;

}; // CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry


class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable : public ydk::Entity
{
    public:
        Cmplsfrrfacroutedbtable();
        ~Cmplsfrrfacroutedbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsfrrfacroutedbentry; //type: CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry> > cmplsfrrfacroutedbentry;
        
}; // CiscoIetfFrrMib::Cmplsfrrfacroutedbtable


class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry : public ydk::Entity
{
    public:
        Cmplsfrrfacroutedbentry();
        ~Cmplsfrrfacroutedbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsfrrfacrouteprotectedifindex; //type: int32
        ydk::YLeaf cmplsfrrfacrouteprotectingtunindex; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtunindex; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtuninstance; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtuningresslsrid; //type: binary
        ydk::YLeaf cmplsfrrfacrouteprotectedtunegresslsrid; //type: binary
        ydk::YLeaf cmplsfrrfacrouteprotectedtunstatus; //type: Cmplsfrrfacrouteprotectedtunstatus
        ydk::YLeaf cmplsfrrfacrouteprotectingtunresvbw; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectingtunprotectiontype; //type: Cmplsfrrfacrouteprotectingtunprotectiontype
        class Cmplsfrrfacrouteprotectedtunstatus;
        class Cmplsfrrfacrouteprotectingtunprotectiontype;

}; // CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry

class CiscoIetfFrrMib::Cmplsfrrscalars::Cmplsfrrconstprotectionmethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneToOneBackup;
        static const ydk::Enum::YLeaf facilityBackup;

};

class CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::Cmplsfrrlogeventtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf protected_;

};

class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectedtunstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf partial;

};

class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacrouteprotectingtunprotectiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf linkProtection;
        static const ydk::Enum::YLeaf nodeProtection;

};


}
}

#endif /* _CISCO_IETF_FRR_MIB_ */

