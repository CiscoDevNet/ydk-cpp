#ifndef _CISCO_IETF_FRR_MIB_
#define _CISCO_IETF_FRR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_FRR_MIB {

class CiscoIetfFrrMib : public Entity
{
    public:
        CiscoIetfFrrMib();
        ~CiscoIetfFrrMib();

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

        class Cmplsfrrscalars; //type: CiscoIetfFrrMib::Cmplsfrrscalars
        class Cmplsfrrconsttable; //type: CiscoIetfFrrMib::Cmplsfrrconsttable
        class Cmplsfrrlogtable; //type: CiscoIetfFrrMib::Cmplsfrrlogtable
        class Cmplsfrrfacroutedbtable; //type: CiscoIetfFrrMib::Cmplsfrrfacroutedbtable

        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrconsttable> cmplsfrrconsttable_;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrfacroutedbtable> cmplsfrrfacroutedbtable_;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrlogtable> cmplsfrrlogtable_;
        std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrscalars> cmplsfrrscalars_;
        
}; // CiscoIetfFrrMib


class CiscoIetfFrrMib::Cmplsfrrscalars : public Entity
{
    public:
        Cmplsfrrscalars();
        ~Cmplsfrrscalars();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmplsfrrdetourincoming; //type: uint32
        YLeaf cmplsfrrdetouroutgoing; //type: uint32
        YLeaf cmplsfrrdetouroriginating; //type: uint32
        YLeaf cmplsfrrswitchover; //type: uint32
        YLeaf cmplsfrrnumofconfifs; //type: uint32
        YLeaf cmplsfrractprotectedifs; //type: uint32
        YLeaf cmplsfrrconfprotectingtuns; //type: uint32
        YLeaf cmplsfrractprotectedtuns; //type: uint32
        YLeaf cmplsfrractprotectedlsps; //type: uint32
        YLeaf cmplsfrrconstprotectionmethod; //type: CmplsfrrconstprotectionmethodEnum
        YLeaf cmplsfrrnotifsenabled; //type: boolean
        YLeaf cmplsfrrlogtablemaxentries; //type: uint32
        YLeaf cmplsfrrlogtablecurrentries; //type: uint32
        YLeaf cmplsfrrnotifmaxrate; //type: uint32
        class CmplsfrrconstprotectionmethodEnum;

}; // CiscoIetfFrrMib::Cmplsfrrscalars


class CiscoIetfFrrMib::Cmplsfrrconsttable : public Entity
{
    public:
        Cmplsfrrconsttable();
        ~Cmplsfrrconsttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmplsfrrconstentry; //type: CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry> > cmplsfrrconstentry_;
        
}; // CiscoIetfFrrMib::Cmplsfrrconsttable


class CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry : public Entity
{
    public:
        Cmplsfrrconstentry();
        ~Cmplsfrrconstentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmplsfrrconstifindex; //type: int32
        YLeaf cmplsfrrconsttunnelindex; //type: uint32
        YLeaf cmplsfrrconsttunnelinstance; //type: uint32
        YLeaf cmplsfrrconstsetupprio; //type: uint32
        YLeaf cmplsfrrconstholdingprio; //type: uint32
        YLeaf cmplsfrrconstinclanyaffinity; //type: uint32
        YLeaf cmplsfrrconstinclallaffinity; //type: uint32
        YLeaf cmplsfrrconstexclallaffinity; //type: uint32
        YLeaf cmplsfrrconsthoplimit; //type: uint32
        YLeaf cmplsfrrconstbandwidth; //type: uint32
        YLeaf cmplsfrrconstrowstatus; //type: RowstatusEnum
        YLeaf cmplsfrrconstnumprotectingtunonif; //type: uint32
        YLeaf cmplsfrrconstnumprotectedtunonif; //type: uint32

}; // CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry


class CiscoIetfFrrMib::Cmplsfrrlogtable : public Entity
{
    public:
        Cmplsfrrlogtable();
        ~Cmplsfrrlogtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmplsfrrlogentry; //type: CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry> > cmplsfrrlogentry_;
        
}; // CiscoIetfFrrMib::Cmplsfrrlogtable


class CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry : public Entity
{
    public:
        Cmplsfrrlogentry();
        ~Cmplsfrrlogentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmplsfrrlogindex; //type: uint32
        YLeaf cmplsfrrlogeventtime; //type: uint32
        YLeaf cmplsfrrloginterface; //type: int32
        YLeaf cmplsfrrlogeventtype; //type: CmplsfrrlogeventtypeEnum
        YLeaf cmplsfrrlogeventduration; //type: uint32
        YLeaf cmplsfrrlogeventreasonstring; //type: binary
        class CmplsfrrlogeventtypeEnum;

}; // CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry


class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable : public Entity
{
    public:
        Cmplsfrrfacroutedbtable();
        ~Cmplsfrrfacroutedbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmplsfrrfacroutedbentry; //type: CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry

        std::vector<std::shared_ptr<CISCO_IETF_FRR_MIB::CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry> > cmplsfrrfacroutedbentry_;
        
}; // CiscoIetfFrrMib::Cmplsfrrfacroutedbtable


class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry : public Entity
{
    public:
        Cmplsfrrfacroutedbentry();
        ~Cmplsfrrfacroutedbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmplsfrrfacrouteprotectedifindex; //type: int32
        YLeaf cmplsfrrfacrouteprotectingtunindex; //type: uint32
        YLeaf cmplsfrrfacrouteprotectedtunindex; //type: uint32
        YLeaf cmplsfrrfacrouteprotectedtuninstance; //type: uint32
        YLeaf cmplsfrrfacrouteprotectedtuningresslsrid; //type: binary
        YLeaf cmplsfrrfacrouteprotectedtunegresslsrid; //type: binary
        YLeaf cmplsfrrfacrouteprotectedtunstatus; //type: CmplsfrrfacrouteprotectedtunstatusEnum
        YLeaf cmplsfrrfacrouteprotectingtunresvbw; //type: uint32
        YLeaf cmplsfrrfacrouteprotectingtunprotectiontype; //type: CmplsfrrfacrouteprotectingtunprotectiontypeEnum
        class CmplsfrrfacrouteprotectedtunstatusEnum;
        class CmplsfrrfacrouteprotectingtunprotectiontypeEnum;

}; // CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry

class CiscoIetfFrrMib::Cmplsfrrscalars::CmplsfrrconstprotectionmethodEnum : public Enum
{
    public:
        static const Enum::YLeaf oneToOneBackup;
        static const Enum::YLeaf facilityBackup;

};

class CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::CmplsfrrlogeventtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf protected_;

};

class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectedtunstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf partial;

};

class CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectingtunprotectiontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf linkProtection;
        static const Enum::YLeaf nodeProtection;

};


}
}

#endif /* _CISCO_IETF_FRR_MIB_ */

