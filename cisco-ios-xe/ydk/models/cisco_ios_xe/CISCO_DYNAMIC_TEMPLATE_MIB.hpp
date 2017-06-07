#ifndef _CISCO_DYNAMIC_TEMPLATE_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_DYNAMIC_TEMPLATE_MIB {

class CiscoDynamicTemplateMib : public Entity
{
    public:
        CiscoDynamicTemplateMib();
        ~CiscoDynamicTemplateMib();

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

        class Cdttemplatetable; //type: CiscoDynamicTemplateMib::Cdttemplatetable
        class Cdttemplatetargettable; //type: CiscoDynamicTemplateMib::Cdttemplatetargettable
        class Cdttemplateassociationtable; //type: CiscoDynamicTemplateMib::Cdttemplateassociationtable
        class Cdttemplateusagetable; //type: CiscoDynamicTemplateMib::Cdttemplateusagetable
        class Cdttemplatecommontable; //type: CiscoDynamicTemplateMib::Cdttemplatecommontable
        class Cdtiftemplatetable; //type: CiscoDynamicTemplateMib::Cdtiftemplatetable
        class Cdtppptemplatetable; //type: CiscoDynamicTemplateMib::Cdtppptemplatetable
        class Cdtppppeeripaddrpooltable; //type: CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable
        class Cdtethernettemplatetable; //type: CiscoDynamicTemplateMib::Cdtethernettemplatetable
        class Cdtsrvtemplatetable; //type: CiscoDynamicTemplateMib::Cdtsrvtemplatetable

        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtethernettemplatetable> cdtethernettemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtiftemplatetable> cdtiftemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable> cdtppppeeripaddrpooltable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppptemplatetable> cdtppptemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtsrvtemplatetable> cdtsrvtemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateassociationtable> cdttemplateassociationtable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatecommontable> cdttemplatecommontable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable> cdttemplatetable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable> cdttemplatetargettable;
        std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateusagetable> cdttemplateusagetable;
        
}; // CiscoDynamicTemplateMib


class CiscoDynamicTemplateMib::Cdttemplatetable : public Entity
{
    public:
        Cdttemplatetable();
        ~Cdttemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdttemplateentry; //type: CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry> > cdttemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatetable


class CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry : public Entity
{
    public:
        Cdttemplateentry();
        ~Cdttemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdttemplatename; //type: binary
        YLeaf cdttemplatestatus; //type: RowstatusEnum
        YLeaf cdttemplatestorage; //type: StoragetypeEnum
        YLeaf cdttemplatetype; //type: DynamictemplatetypeEnum
        YLeaf cdttemplatesrc; //type: CdttemplatesrcEnum
        YLeaf cdttemplateusagecount; //type: uint32
        class CdttemplatesrcEnum;

}; // CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry


class CiscoDynamicTemplateMib::Cdttemplatetargettable : public Entity
{
    public:
        Cdttemplatetargettable();
        ~Cdttemplatetargettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdttemplatetargetentry; //type: CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry> > cdttemplatetargetentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatetargettable


class CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry : public Entity
{
    public:
        Cdttemplatetargetentry();
        ~Cdttemplatetargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdttemplatetargettype; //type: DynamictemplatetargettypeEnum
        YLeaf cdttemplatetargetid; //type: binary
        YLeaf cdttemplatetargetstatus; //type: RowstatusEnum
        YLeaf cdttemplatetargetstorage; //type: StoragetypeEnum

}; // CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry


class CiscoDynamicTemplateMib::Cdttemplateassociationtable : public Entity
{
    public:
        Cdttemplateassociationtable();
        ~Cdttemplateassociationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdttemplateassociationentry; //type: CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry> > cdttemplateassociationentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplateassociationtable


class CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry : public Entity
{
    public:
        Cdttemplateassociationentry();
        ~Cdttemplateassociationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdttemplatetargettype; //type: DynamictemplatetargettypeEnum
        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetargettable::Cdttemplatetargetentry::cdttemplatetargetid)
        YLeaf cdttemplatetargetid;
        YLeaf cdttemplateassociationname; //type: binary
        YLeaf cdttemplateassociationprecedence; //type: uint32

}; // CiscoDynamicTemplateMib::Cdttemplateassociationtable::Cdttemplateassociationentry


class CiscoDynamicTemplateMib::Cdttemplateusagetable : public Entity
{
    public:
        Cdttemplateusagetable();
        ~Cdttemplateusagetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdttemplateusageentry; //type: CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry> > cdttemplateusageentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplateusagetable


class CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry : public Entity
{
    public:
        Cdttemplateusageentry();
        ~Cdttemplateusageentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdttemplateusagetargettype; //type: DynamictemplatetargettypeEnum
        YLeaf cdttemplateusagetargetid; //type: binary

}; // CiscoDynamicTemplateMib::Cdttemplateusagetable::Cdttemplateusageentry


class CiscoDynamicTemplateMib::Cdttemplatecommontable : public Entity
{
    public:
        Cdttemplatecommontable();
        ~Cdttemplatecommontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdttemplatecommonentry; //type: CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry> > cdttemplatecommonentry;
        
}; // CiscoDynamicTemplateMib::Cdttemplatecommontable


class CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry : public Entity
{
    public:
        Cdttemplatecommonentry();
        ~Cdttemplatecommonentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtcommonvalid; //type: Cdtcommonvalid
        YLeaf cdtcommondescr; //type: string
        YLeaf cdtcommonkeepaliveint; //type: uint32
        YLeaf cdtcommonkeepaliveretries; //type: uint32
        YLeaf cdtcommonvrf; //type: binary
        YLeaf cdtcommonaddrpool; //type: string
        YLeaf cdtcommonipv4accessgroup; //type: string
        YLeaf cdtcommonipv4unreachables; //type: boolean
        YLeaf cdtcommonipv6accessgroup; //type: string
        YLeaf cdtcommonipv6unreachables; //type: boolean
        YLeaf cdtcommonsrvsubcontrol; //type: string
        YLeaf cdtcommonsrvredirect; //type: string
        YLeaf cdtcommonsrvacct; //type: string
        YLeaf cdtcommonsrvqos; //type: string
        YLeaf cdtcommonsrvnetflow; //type: string

}; // CiscoDynamicTemplateMib::Cdttemplatecommontable::Cdttemplatecommonentry


class CiscoDynamicTemplateMib::Cdtiftemplatetable : public Entity
{
    public:
        Cdtiftemplatetable();
        ~Cdtiftemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdtiftemplateentry; //type: CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry> > cdtiftemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtiftemplatetable


class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry : public Entity
{
    public:
        Cdtiftemplateentry();
        ~Cdtiftemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtifvalid; //type: Cdtifvalid
        YLeaf cdtifmtu; //type: uint32
        YLeaf cdtifcdpenable; //type: boolean
        YLeaf cdtifflowmonitor; //type: string
        YLeaf cdtifipv4unnumbered; //type: int32
        YLeaf cdtifipv4subenable; //type: boolean
        YLeaf cdtifipv4mtu; //type: uint32
        YLeaf cdtifipv4tcpmssadjust; //type: uint32
        YLeaf cdtifipv4verifyunirpf; //type: UnicastrpftypeEnum
        YLeaf cdtifipv4verifyunirpfacl; //type: string
        YLeaf cdtifipv4verifyunirpfopts; //type: Unicastrpfoptions
        YLeaf cdtifipv6enable; //type: boolean
        YLeaf cdtifipv6subenable; //type: boolean
        YLeaf cdtifipv6tcpmssadjust; //type: uint32
        YLeaf cdtifipv6verifyunirpf; //type: UnicastrpftypeEnum
        YLeaf cdtifipv6verifyunirpfacl; //type: string
        YLeaf cdtifipv6verifyunirpfopts; //type: Unicastrpfoptions
        YLeaf cdtifipv6ndprefix; //type: string
        YLeaf cdtifipv6ndprefixlength; //type: uint32
        YLeaf cdtifipv6ndvalidlife; //type: uint32
        YLeaf cdtifipv6ndpreferredlife; //type: uint32
        YLeaf cdtifipv6ndopts; //type: Cdtifipv6Ndopts
        YLeaf cdtifipv6nddadattempts; //type: uint32
        YLeaf cdtifipv6ndnsinterval; //type: uint32
        YLeaf cdtifipv6ndreachabletime; //type: uint32
        YLeaf cdtifipv6ndraintervalunits; //type: Cdtifipv6NdraintervalunitsEnum
        YLeaf cdtifipv6ndraintervalmax; //type: uint32
        YLeaf cdtifipv6ndraintervalmin; //type: uint32
        YLeaf cdtifipv6ndralife; //type: uint32
        YLeaf cdtifipv6ndrouterpreference; //type: Cdtifipv6NdrouterpreferenceEnum
        class Cdtifipv6NdraintervalunitsEnum;
        class Cdtifipv6NdrouterpreferenceEnum;

}; // CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry


class CiscoDynamicTemplateMib::Cdtppptemplatetable : public Entity
{
    public:
        Cdtppptemplatetable();
        ~Cdtppptemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdtppptemplateentry; //type: CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry> > cdtppptemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtppptemplatetable


class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry : public Entity
{
    public:
        Cdtppptemplateentry();
        ~Cdtppptemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtpppvalid; //type: Cdtpppvalid
        YLeaf cdtpppaccounting; //type: boolean
        YLeaf cdtpppauthentication; //type: Cdtpppauthentication
        YLeaf cdtpppauthenticationmethods; //type: string
        YLeaf cdtpppauthorization; //type: boolean
        YLeaf cdtppploopbackignore; //type: boolean
        YLeaf cdtpppmaxbadauth; //type: uint32
        YLeaf cdtpppmaxconfigure; //type: uint32
        YLeaf cdtpppmaxfailure; //type: uint32
        YLeaf cdtpppmaxterminate; //type: uint32
        YLeaf cdtppptimeoutauthentication; //type: uint32
        YLeaf cdtppptimeoutretry; //type: uint32
        YLeaf cdtpppchapopts; //type: Cdtpppchapopts
        YLeaf cdtpppchaphostname; //type: string
        YLeaf cdtpppchappassword; //type: string
        YLeaf cdtpppmschapv1opts; //type: Cdtpppmschapv1Opts
        YLeaf cdtpppmschapv1hostname; //type: string
        YLeaf cdtpppmschapv1password; //type: string
        YLeaf cdtpppmschapv2opts; //type: Cdtpppmschapv2Opts
        YLeaf cdtpppmschapv2hostname; //type: string
        YLeaf cdtpppmschapv2password; //type: string
        YLeaf cdtppppapopts; //type: Cdtppppapopts
        YLeaf cdtppppapusername; //type: string
        YLeaf cdtppppappassword; //type: string
        YLeaf cdtpppeapopts; //type: Cdtpppeapopts
        YLeaf cdtpppeapidentity; //type: string
        YLeaf cdtpppeappassword; //type: string
        YLeaf cdtpppipcpaddroption; //type: CdtpppipcpaddroptionEnum
        YLeaf cdtpppipcpdnsoption; //type: CdtpppipcpdnsoptionEnum
        YLeaf cdtpppipcpdnsprimary; //type: string
        YLeaf cdtpppipcpdnssecondary; //type: string
        YLeaf cdtpppipcpwinsoption; //type: CdtpppipcpwinsoptionEnum
        YLeaf cdtpppipcpwinsprimary; //type: string
        YLeaf cdtpppipcpwinssecondary; //type: string
        YLeaf cdtpppipcpmaskoption; //type: CdtpppipcpmaskoptionEnum
        YLeaf cdtpppipcpmask; //type: string
        YLeaf cdtppppeerdefipaddropts; //type: Cdtppppeerdefipaddropts
        YLeaf cdtppppeerdefipaddrsrc; //type: CdtppppeerdefipaddrsrcEnum
        YLeaf cdtppppeerdefipaddr; //type: string
        class CdtpppipcpaddroptionEnum;
        class CdtpppipcpdnsoptionEnum;
        class CdtpppipcpwinsoptionEnum;
        class CdtpppipcpmaskoptionEnum;
        class CdtppppeerdefipaddrsrcEnum;

}; // CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry


class CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable : public Entity
{
    public:
        Cdtppppeeripaddrpooltable();
        ~Cdtppppeeripaddrpooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdtppppeeripaddrpoolentry; //type: CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry> > cdtppppeeripaddrpoolentry;
        
}; // CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable


class CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry : public Entity
{
    public:
        Cdtppppeeripaddrpoolentry();
        ~Cdtppppeeripaddrpoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtppppeeripaddrpoolpriority; //type: uint32
        YLeaf cdtppppeeripaddrpoolstatus; //type: RowstatusEnum
        YLeaf cdtppppeeripaddrpoolstorage; //type: StoragetypeEnum
        YLeaf cdtppppeeripaddrpoolname; //type: string

}; // CiscoDynamicTemplateMib::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry


class CiscoDynamicTemplateMib::Cdtethernettemplatetable : public Entity
{
    public:
        Cdtethernettemplatetable();
        ~Cdtethernettemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdtethernettemplateentry; //type: CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry> > cdtethernettemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtethernettemplatetable


class CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry : public Entity
{
    public:
        Cdtethernettemplateentry();
        ~Cdtethernettemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtethernetvalid; //type: Cdtethernetvalid
        YLeaf cdtethernetbridgedomain; //type: string
        YLeaf cdtethernetpppoeenable; //type: boolean
        YLeaf cdtethernetipv4pointtopoint; //type: boolean
        YLeaf cdtethernetmacaddr; //type: string

}; // CiscoDynamicTemplateMib::Cdtethernettemplatetable::Cdtethernettemplateentry


class CiscoDynamicTemplateMib::Cdtsrvtemplatetable : public Entity
{
    public:
        Cdtsrvtemplatetable();
        ~Cdtsrvtemplatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdtsrvtemplateentry; //type: CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry

        std::vector<std::shared_ptr<CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry> > cdtsrvtemplateentry;
        
}; // CiscoDynamicTemplateMib::Cdtsrvtemplatetable


class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry : public Entity
{
    public:
        Cdtsrvtemplateentry();
        ~Cdtsrvtemplateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_DYNAMIC_TEMPLATE_MIB::CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        YLeaf cdttemplatename;
        YLeaf cdtsrvvalid; //type: Cdtsrvvalid
        YLeaf cdtsrvnetworksrv; //type: CdtsrvnetworksrvEnum
        YLeaf cdtsrvvpdngroup; //type: string
        YLeaf cdtsrvsgsrvgroup; //type: string
        YLeaf cdtsrvsgsrvtype; //type: CdtsrvsgsrvtypeEnum
        YLeaf cdtsrvmulticast; //type: boolean
        class CdtsrvnetworksrvEnum;
        class CdtsrvsgsrvtypeEnum;

}; // CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry

class CiscoDynamicTemplateMib::Cdttemplatetable::Cdttemplateentry::CdttemplatesrcEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf derived;
        static const Enum::YLeaf local;
        static const Enum::YLeaf aaaUserProfile;
        static const Enum::YLeaf aaaServiceProfile;

};

class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6NdraintervalunitsEnum : public Enum
{
    public:
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf milliseconds;

};

class CiscoDynamicTemplateMib::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6NdrouterpreferenceEnum : public Enum
{
    public:
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::CdtpppipcpaddroptionEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf accept;
        static const Enum::YLeaf required;
        static const Enum::YLeaf unique;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::CdtpppipcpdnsoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf accept;
        static const Enum::YLeaf request;
        static const Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::CdtpppipcpwinsoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf accept;
        static const Enum::YLeaf request;
        static const Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::CdtpppipcpmaskoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf request;
        static const Enum::YLeaf reject;

};

class CiscoDynamicTemplateMib::Cdtppptemplatetable::Cdtppptemplateentry::CdtppppeerdefipaddrsrcEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf pool;
        static const Enum::YLeaf dhcp;

};

class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry::CdtsrvnetworksrvEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf vpdn;

};

class CiscoDynamicTemplateMib::Cdtsrvtemplatetable::Cdtsrvtemplateentry::CdtsrvsgsrvtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf secondary;

};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_MIB_ */

