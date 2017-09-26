#ifndef _CISCO_DYNAMIC_TEMPLATE_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_MIB {

class CISCODYNAMICTEMPLATEMIB : public ydk::Entity
{
    public:
        CISCODYNAMICTEMPLATEMIB();
        ~CISCODYNAMICTEMPLATEMIB();

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

        class Cdttemplatetable; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatetable
        class Cdttemplatetargettable; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable
        class Cdttemplateassociationtable; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable
        class Cdttemplateusagetable; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable
        class Cdttemplatecommontable; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable
        class Cdtiftemplatetable; //type: CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable
        class Cdtppptemplatetable; //type: CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable
        class Cdtppppeeripaddrpooltable; //type: CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable
        class Cdtethernettemplatetable; //type: CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable
        class Cdtsrvtemplatetable; //type: CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable

        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable> cdtethernettemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable> cdtiftemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable> cdtppppeeripaddrpooltable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable> cdtppptemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable> cdtsrvtemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable> cdttemplateassociationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable> cdttemplatecommontable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable> cdttemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable> cdttemplatetargettable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable> cdttemplateusagetable;
        
}; // CISCODYNAMICTEMPLATEMIB


class CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable : public ydk::Entity
{
    public:
        Cdtethernettemplatetable();
        ~Cdtethernettemplatetable();

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

        class Cdtethernettemplateentry; //type: CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable::Cdtethernettemplateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable::Cdtethernettemplateentry> > cdtethernettemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable


class CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable::Cdtethernettemplateentry : public ydk::Entity
{
    public:
        Cdtethernettemplateentry();
        ~Cdtethernettemplateentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtethernetvalid; //type: Cdtethernetvalid
        ydk::YLeaf cdtethernetbridgedomain; //type: string
        ydk::YLeaf cdtethernetpppoeenable; //type: boolean
        ydk::YLeaf cdtethernetipv4pointtopoint; //type: boolean
        ydk::YLeaf cdtethernetmacaddr; //type: string

}; // CISCODYNAMICTEMPLATEMIB::Cdtethernettemplatetable::Cdtethernettemplateentry


class CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable : public ydk::Entity
{
    public:
        Cdtiftemplatetable();
        ~Cdtiftemplatetable();

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

        class Cdtiftemplateentry; //type: CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry> > cdtiftemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable


class CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry : public ydk::Entity
{
    public:
        Cdtiftemplateentry();
        ~Cdtiftemplateentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtifvalid; //type: Cdtifvalid
        ydk::YLeaf cdtifmtu; //type: uint32
        ydk::YLeaf cdtifcdpenable; //type: boolean
        ydk::YLeaf cdtifflowmonitor; //type: string
        ydk::YLeaf cdtifipv4unnumbered; //type: int32
        ydk::YLeaf cdtifipv4subenable; //type: boolean
        ydk::YLeaf cdtifipv4mtu; //type: uint32
        ydk::YLeaf cdtifipv4tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv4verifyunirpf; //type: UnicastRpfType
        ydk::YLeaf cdtifipv4verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv4verifyunirpfopts; //type: UnicastRpfOptions
        ydk::YLeaf cdtifipv6enable; //type: boolean
        ydk::YLeaf cdtifipv6subenable; //type: boolean
        ydk::YLeaf cdtifipv6tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv6verifyunirpf; //type: UnicastRpfType
        ydk::YLeaf cdtifipv6verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv6verifyunirpfopts; //type: UnicastRpfOptions
        ydk::YLeaf cdtifipv6ndprefix; //type: string
        ydk::YLeaf cdtifipv6ndprefixlength; //type: uint32
        ydk::YLeaf cdtifipv6ndvalidlife; //type: uint32
        ydk::YLeaf cdtifipv6ndpreferredlife; //type: uint32
        ydk::YLeaf cdtifipv6ndopts; //type: Cdtifipv6Ndopts
        ydk::YLeaf cdtifipv6nddadattempts; //type: uint32
        ydk::YLeaf cdtifipv6ndnsinterval; //type: uint32
        ydk::YLeaf cdtifipv6ndreachabletime; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalunits; //type: Cdtifipv6Ndraintervalunits
        ydk::YLeaf cdtifipv6ndraintervalmax; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalmin; //type: uint32
        ydk::YLeaf cdtifipv6ndralife; //type: uint32
        ydk::YLeaf cdtifipv6ndrouterpreference; //type: Cdtifipv6Ndrouterpreference
        class Cdtifipv6Ndraintervalunits;
        class Cdtifipv6Ndrouterpreference;

}; // CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry


class CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable : public ydk::Entity
{
    public:
        Cdtppppeeripaddrpooltable();
        ~Cdtppppeeripaddrpooltable();

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

        class Cdtppppeeripaddrpoolentry; //type: CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry> > cdtppppeeripaddrpoolentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable


class CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry : public ydk::Entity
{
    public:
        Cdtppppeeripaddrpoolentry();
        ~Cdtppppeeripaddrpoolentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtppppeeripaddrpoolpriority; //type: uint32
        ydk::YLeaf cdtppppeeripaddrpoolstatus; //type: RowStatus
        ydk::YLeaf cdtppppeeripaddrpoolstorage; //type: StorageType
        ydk::YLeaf cdtppppeeripaddrpoolname; //type: string

}; // CISCODYNAMICTEMPLATEMIB::Cdtppppeeripaddrpooltable::Cdtppppeeripaddrpoolentry


class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable : public ydk::Entity
{
    public:
        Cdtppptemplatetable();
        ~Cdtppptemplatetable();

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

        class Cdtppptemplateentry; //type: CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry> > cdtppptemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable


class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry : public ydk::Entity
{
    public:
        Cdtppptemplateentry();
        ~Cdtppptemplateentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtpppvalid; //type: Cdtpppvalid
        ydk::YLeaf cdtpppaccounting; //type: boolean
        ydk::YLeaf cdtpppauthentication; //type: Cdtpppauthentication
        ydk::YLeaf cdtpppauthenticationmethods; //type: string
        ydk::YLeaf cdtpppauthorization; //type: boolean
        ydk::YLeaf cdtppploopbackignore; //type: boolean
        ydk::YLeaf cdtpppmaxbadauth; //type: uint32
        ydk::YLeaf cdtpppmaxconfigure; //type: uint32
        ydk::YLeaf cdtpppmaxfailure; //type: uint32
        ydk::YLeaf cdtpppmaxterminate; //type: uint32
        ydk::YLeaf cdtppptimeoutauthentication; //type: uint32
        ydk::YLeaf cdtppptimeoutretry; //type: uint32
        ydk::YLeaf cdtpppchapopts; //type: Cdtpppchapopts
        ydk::YLeaf cdtpppchaphostname; //type: string
        ydk::YLeaf cdtpppchappassword; //type: string
        ydk::YLeaf cdtpppmschapv1opts; //type: Cdtpppmschapv1Opts
        ydk::YLeaf cdtpppmschapv1hostname; //type: string
        ydk::YLeaf cdtpppmschapv1password; //type: string
        ydk::YLeaf cdtpppmschapv2opts; //type: Cdtpppmschapv2Opts
        ydk::YLeaf cdtpppmschapv2hostname; //type: string
        ydk::YLeaf cdtpppmschapv2password; //type: string
        ydk::YLeaf cdtppppapopts; //type: Cdtppppapopts
        ydk::YLeaf cdtppppapusername; //type: string
        ydk::YLeaf cdtppppappassword; //type: string
        ydk::YLeaf cdtpppeapopts; //type: Cdtpppeapopts
        ydk::YLeaf cdtpppeapidentity; //type: string
        ydk::YLeaf cdtpppeappassword; //type: string
        ydk::YLeaf cdtpppipcpaddroption; //type: Cdtpppipcpaddroption
        ydk::YLeaf cdtpppipcpdnsoption; //type: Cdtpppipcpdnsoption
        ydk::YLeaf cdtpppipcpdnsprimary; //type: string
        ydk::YLeaf cdtpppipcpdnssecondary; //type: string
        ydk::YLeaf cdtpppipcpwinsoption; //type: Cdtpppipcpwinsoption
        ydk::YLeaf cdtpppipcpwinsprimary; //type: string
        ydk::YLeaf cdtpppipcpwinssecondary; //type: string
        ydk::YLeaf cdtpppipcpmaskoption; //type: Cdtpppipcpmaskoption
        ydk::YLeaf cdtpppipcpmask; //type: string
        ydk::YLeaf cdtppppeerdefipaddropts; //type: Cdtppppeerdefipaddropts
        ydk::YLeaf cdtppppeerdefipaddrsrc; //type: Cdtppppeerdefipaddrsrc
        ydk::YLeaf cdtppppeerdefipaddr; //type: string
        class Cdtpppipcpaddroption;
        class Cdtpppipcpdnsoption;
        class Cdtpppipcpwinsoption;
        class Cdtpppipcpmaskoption;
        class Cdtppppeerdefipaddrsrc;

}; // CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry


class CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable : public ydk::Entity
{
    public:
        Cdtsrvtemplatetable();
        ~Cdtsrvtemplatetable();

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

        class Cdtsrvtemplateentry; //type: CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry> > cdtsrvtemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable


class CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry : public ydk::Entity
{
    public:
        Cdtsrvtemplateentry();
        ~Cdtsrvtemplateentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtsrvvalid; //type: Cdtsrvvalid
        ydk::YLeaf cdtsrvnetworksrv; //type: Cdtsrvnetworksrv
        ydk::YLeaf cdtsrvvpdngroup; //type: string
        ydk::YLeaf cdtsrvsgsrvgroup; //type: string
        ydk::YLeaf cdtsrvsgsrvtype; //type: Cdtsrvsgsrvtype
        ydk::YLeaf cdtsrvmulticast; //type: boolean
        class Cdtsrvnetworksrv;
        class Cdtsrvsgsrvtype;

}; // CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry


class CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable : public ydk::Entity
{
    public:
        Cdttemplateassociationtable();
        ~Cdttemplateassociationtable();

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

        class Cdttemplateassociationentry; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable::Cdttemplateassociationentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable::Cdttemplateassociationentry> > cdttemplateassociationentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable


class CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable::Cdttemplateassociationentry : public ydk::Entity
{
    public:
        Cdttemplateassociationentry();
        ~Cdttemplateassociationentry();

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

        ydk::YLeaf cdttemplatetargettype; //type: DynamicTemplateTargetType
        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable::Cdttemplatetargetentry::cdttemplatetargetid)
        ydk::YLeaf cdttemplatetargetid;
        ydk::YLeaf cdttemplateassociationname; //type: binary
        ydk::YLeaf cdttemplateassociationprecedence; //type: uint32

}; // CISCODYNAMICTEMPLATEMIB::Cdttemplateassociationtable::Cdttemplateassociationentry


class CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable : public ydk::Entity
{
    public:
        Cdttemplatecommontable();
        ~Cdttemplatecommontable();

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

        class Cdttemplatecommonentry; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable::Cdttemplatecommonentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable::Cdttemplatecommonentry> > cdttemplatecommonentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable


class CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable::Cdttemplatecommonentry : public ydk::Entity
{
    public:
        Cdttemplatecommonentry();
        ~Cdttemplatecommonentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtcommonvalid; //type: Cdtcommonvalid
        ydk::YLeaf cdtcommondescr; //type: string
        ydk::YLeaf cdtcommonkeepaliveint; //type: uint32
        ydk::YLeaf cdtcommonkeepaliveretries; //type: uint32
        ydk::YLeaf cdtcommonvrf; //type: binary
        ydk::YLeaf cdtcommonaddrpool; //type: string
        ydk::YLeaf cdtcommonipv4accessgroup; //type: string
        ydk::YLeaf cdtcommonipv4unreachables; //type: boolean
        ydk::YLeaf cdtcommonipv6accessgroup; //type: string
        ydk::YLeaf cdtcommonipv6unreachables; //type: boolean
        ydk::YLeaf cdtcommonsrvsubcontrol; //type: string
        ydk::YLeaf cdtcommonsrvredirect; //type: string
        ydk::YLeaf cdtcommonsrvacct; //type: string
        ydk::YLeaf cdtcommonsrvqos; //type: string
        ydk::YLeaf cdtcommonsrvnetflow; //type: string

}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatecommontable::Cdttemplatecommonentry


class CISCODYNAMICTEMPLATEMIB::Cdttemplatetable : public ydk::Entity
{
    public:
        Cdttemplatetable();
        ~Cdttemplatetable();

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

        class Cdttemplateentry; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry> > cdttemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatetable


class CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry : public ydk::Entity
{
    public:
        Cdttemplateentry();
        ~Cdttemplateentry();

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

        ydk::YLeaf cdttemplatename; //type: binary
        ydk::YLeaf cdttemplatestatus; //type: RowStatus
        ydk::YLeaf cdttemplatestorage; //type: StorageType
        ydk::YLeaf cdttemplatetype; //type: DynamicTemplateType
        ydk::YLeaf cdttemplatesrc; //type: Cdttemplatesrc
        ydk::YLeaf cdttemplateusagecount; //type: uint32
        class Cdttemplatesrc;

}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry


class CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable : public ydk::Entity
{
    public:
        Cdttemplatetargettable();
        ~Cdttemplatetargettable();

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

        class Cdttemplatetargetentry; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable::Cdttemplatetargetentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable::Cdttemplatetargetentry> > cdttemplatetargetentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable


class CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable::Cdttemplatetargetentry : public ydk::Entity
{
    public:
        Cdttemplatetargetentry();
        ~Cdttemplatetargetentry();

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

        ydk::YLeaf cdttemplatetargettype; //type: DynamicTemplateTargetType
        ydk::YLeaf cdttemplatetargetid; //type: binary
        ydk::YLeaf cdttemplatetargetstatus; //type: RowStatus
        ydk::YLeaf cdttemplatetargetstorage; //type: StorageType

}; // CISCODYNAMICTEMPLATEMIB::Cdttemplatetargettable::Cdttemplatetargetentry


class CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable : public ydk::Entity
{
    public:
        Cdttemplateusagetable();
        ~Cdttemplateusagetable();

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

        class Cdttemplateusageentry; //type: CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable::Cdttemplateusageentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable::Cdttemplateusageentry> > cdttemplateusageentry;
        
}; // CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable


class CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable::Cdttemplateusageentry : public ydk::Entity
{
    public:
        Cdttemplateusageentry();
        ~Cdttemplateusageentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdttemplateusagetargettype; //type: DynamicTemplateTargetType
        ydk::YLeaf cdttemplateusagetargetid; //type: binary

}; // CISCODYNAMICTEMPLATEMIB::Cdttemplateusagetable::Cdttemplateusageentry

class CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6Ndraintervalunits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf milliseconds;

};

class CISCODYNAMICTEMPLATEMIB::Cdtiftemplatetable::Cdtiftemplateentry::Cdtifipv6Ndrouterpreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpaddroption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf required;
        static const ydk::Enum::YLeaf unique;

};

class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpdnsoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpwinsoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry::Cdtpppipcpmaskoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

};

class CISCODYNAMICTEMPLATEMIB::Cdtppptemplatetable::Cdtppptemplateentry::Cdtppppeerdefipaddrsrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf pool;
        static const ydk::Enum::YLeaf dhcp;

};

class CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry::Cdtsrvnetworksrv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf vpdn;

};

class CISCODYNAMICTEMPLATEMIB::Cdtsrvtemplatetable::Cdtsrvtemplateentry::Cdtsrvsgsrvtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class CISCODYNAMICTEMPLATEMIB::Cdttemplatetable::Cdttemplateentry::Cdttemplatesrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf derived;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf aaaUserProfile;
        static const ydk::Enum::YLeaf aaaServiceProfile;

};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_MIB_ */

