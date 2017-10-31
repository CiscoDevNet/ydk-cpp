#ifndef _CISCO_STP_EXTENSIONS_MIB_
#define _CISCO_STP_EXTENSIONS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_STP_EXTENSIONS_MIB {

class CISCOSTPEXTENSIONSMIB : public ydk::Entity
{
    public:
        CISCOSTPEXTENSIONSMIB();
        ~CISCOSTPEXTENSIONSMIB();

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

        class Stpxuplinkfastobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects
        class Stpxbackbonefastobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects
        class Stpxspanningtreeobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects
        class Stpxmistpobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxmistpobjects
        class Stpxloopguardobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects
        class Stpxfaststartobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects
        class Stpxbpduskewingobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects
        class Stpxmstobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxmstobjects
        class Stpxrstpobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxrstpobjects
        class Stpxsmstobjects; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstobjects
        class Stpxpvstvlantable; //type: CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable
        class Stpxinconsistencytable; //type: CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable
        class Stpxrootguardconfigtable; //type: CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable
        class Stpxrootinconsistencytable; //type: CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable
        class Stpxmistpinstancetable; //type: CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable
        class Stpxloopguardconfigtable; //type: CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable
        class Stpxloopinconsistencytable; //type: CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable
        class Stpxfaststartporttable; //type: CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable
        class Stpxfaststartopermodetable; //type: CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable
        class Stpxbpduskewingtable; //type: CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable
        class Stpxmstinstancetable; //type: CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable
        class Stpxmstinstanceedittable; //type: CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable
        class Stpxmstporttable; //type: CISCOSTPEXTENSIONSMIB::Stpxmstporttable
        class Stpxmstportroletable; //type: CISCOSTPEXTENSIONSMIB::Stpxmstportroletable
        class Stpxrstpporttable; //type: CISCOSTPEXTENSIONSMIB::Stpxrstpporttable
        class Stpxrstpportroletable; //type: CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable
        class Stpxrpvstporttable; //type: CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable
        class Stpxsmstinstancetable; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable
        class Stpxsmstinstanceedittable; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable
        class Stpxsmstporttable; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstporttable

        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects> stpxuplinkfastobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects> stpxbackbonefastobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects> stpxspanningtreeobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmistpobjects> stpxmistpobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects> stpxloopguardobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects> stpxfaststartobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects> stpxbpduskewingobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstobjects> stpxmstobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrstpobjects> stpxrstpobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstobjects> stpxsmstobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable> stpxpvstvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable> stpxinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable> stpxrootguardconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable> stpxrootinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable> stpxmistpinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable> stpxloopguardconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable> stpxloopinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable> stpxfaststartporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable> stpxfaststartopermodetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable> stpxbpduskewingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable> stpxmstinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable> stpxmstinstanceedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstporttable> stpxmstporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstportroletable> stpxmstportroletable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrstpporttable> stpxrstpporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable> stpxrstpportroletable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable> stpxrpvstporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable> stpxsmstinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable> stpxsmstinstanceedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstporttable> stpxsmstporttable;
        
}; // CISCOSTPEXTENSIONSMIB


class CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects : public ydk::Entity
{
    public:
        Stpxuplinkfastobjects();
        ~Stpxuplinkfastobjects();

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

        ydk::YLeaf stpxuplinkfastenabled; //type: boolean
        ydk::YLeaf stpxuplinkfasttransitions; //type: uint32
        ydk::YLeaf stpxuplinkstationlearninggenrate; //type: int32
        ydk::YLeaf stpxuplinkstationlearningframes; //type: uint32
        ydk::YLeaf stpxuplinkfastoperenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects


class CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects : public ydk::Entity
{
    public:
        Stpxbackbonefastobjects();
        ~Stpxbackbonefastobjects();

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

        ydk::YLeaf stpxbackbonefastenabled; //type: boolean
        ydk::YLeaf stpxbackbonefastininferiorbpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoperenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects


class CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects : public ydk::Entity
{
    public:
        Stpxspanningtreeobjects();
        ~Stpxspanningtreeobjects();

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

        ydk::YLeaf stpxspanningtreetype; //type: Stpxspanningtreetype
        ydk::YLeaf stpxspanningtreepathcostmode; //type: Stpxspanningtreepathcostmode
        ydk::YLeaf stpxextendedsysidadminenabled; //type: boolean
        ydk::YLeaf stpxextendedsysidoperenabled; //type: boolean
        ydk::YLeaf stpxnotificationenable; //type: Stpxnotificationenable
        ydk::YLeaf stpxspanningtreepathcostopermode; //type: Stpxspanningtreepathcostopermode
        class Stpxspanningtreetype;
        class Stpxspanningtreepathcostmode;
        class Stpxspanningtreepathcostopermode;

}; // CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects


class CISCOSTPEXTENSIONSMIB::Stpxmistpobjects : public ydk::Entity
{
    public:
        Stpxmistpobjects();
        ~Stpxmistpobjects();

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

        ydk::YLeaf stpxmistpinstancenumber; //type: int32

}; // CISCOSTPEXTENSIONSMIB::Stpxmistpobjects


class CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects : public ydk::Entity
{
    public:
        Stpxloopguardobjects();
        ~Stpxloopguardobjects();

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

        ydk::YLeaf stpxloopguardglobaldefaultmode; //type: Stpxloopguardglobaldefaultmode
        class Stpxloopguardglobaldefaultmode;

}; // CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects


class CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects : public ydk::Entity
{
    public:
        Stpxfaststartobjects();
        ~Stpxfaststartobjects();

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

        ydk::YLeaf stpxfaststartbpduguardenable; //type: boolean
        ydk::YLeaf stpxfaststartbpdufilterenable; //type: boolean
        ydk::YLeaf stpxfaststartglobaldefaultmode; //type: Stpxfaststartglobaldefaultmode
        class Stpxfaststartglobaldefaultmode;

}; // CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects


class CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects : public ydk::Entity
{
    public:
        Stpxbpduskewingobjects();
        ~Stpxbpduskewingobjects();

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

        ydk::YLeaf stpxbpduskewingdetectionenable; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects


class CISCOSTPEXTENSIONSMIB::Stpxmstobjects : public ydk::Entity
{
    public:
        Stpxmstobjects();
        ~Stpxmstobjects();

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

        ydk::YLeaf stpxmstmaxinstancenumber; //type: int32
        ydk::YLeaf stpxmstregionname; //type: string
        ydk::YLeaf stpxmstregionrevision; //type: int32
        ydk::YLeaf stpxmstregioneditbufferstatus; //type: Stpxmstregioneditbufferstatus
        ydk::YLeaf stpxmstregioneditbufferoperation; //type: Stpxmstregioneditbufferoperation
        ydk::YLeaf stpxmstregioneditname; //type: string
        ydk::YLeaf stpxmstregioneditrevision; //type: int32
        ydk::YLeaf stpxmstmaxhopcount; //type: int32
        class Stpxmstregioneditbufferstatus;
        class Stpxmstregioneditbufferoperation;

}; // CISCOSTPEXTENSIONSMIB::Stpxmstobjects


class CISCOSTPEXTENSIONSMIB::Stpxrstpobjects : public ydk::Entity
{
    public:
        Stpxrstpobjects();
        ~Stpxrstpobjects();

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

        ydk::YLeaf stpxrstptransmitholdcount; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::Stpxrstpobjects


class CISCOSTPEXTENSIONSMIB::Stpxsmstobjects : public ydk::Entity
{
    public:
        Stpxsmstobjects();
        ~Stpxsmstobjects();

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

        ydk::YLeaf stpxsmstmaxinstances; //type: uint32
        ydk::YLeaf stpxsmstmaxinstanceid; //type: uint32
        ydk::YLeaf stpxsmstregionrevision; //type: uint32
        ydk::YLeaf stpxsmstregioneditrevision; //type: uint32
        ydk::YLeaf stpxsmstmaxhopcount; //type: uint32
        ydk::YLeaf stpxsmstconfigdigest; //type: string
        ydk::YLeaf stpxsmstconfigprestandarddigest; //type: string

}; // CISCOSTPEXTENSIONSMIB::Stpxsmstobjects


class CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable : public ydk::Entity
{
    public:
        Stpxpvstvlantable();
        ~Stpxpvstvlantable();

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

        class Stpxpvstvlanentry; //type: CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry> > stpxpvstvlanentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable


class CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry : public ydk::Entity
{
    public:
        Stpxpvstvlanentry();
        ~Stpxpvstvlanentry();

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

        ydk::YLeaf stpxpvstvlanindex; //type: int32
        ydk::YLeaf stpxpvstvlanenable; //type: Stpxpvstvlanenable
        class Stpxpvstvlanenable;

}; // CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry


class CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable : public ydk::Entity
{
    public:
        Stpxinconsistencytable();
        ~Stpxinconsistencytable();

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

        class Stpxinconsistencyentry; //type: CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry> > stpxinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable


class CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry : public ydk::Entity
{
    public:
        Stpxinconsistencyentry();
        ~Stpxinconsistencyentry();

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

        ydk::YLeaf stpxvlanindex; //type: int32
        ydk::YLeaf stpxportindex; //type: int32
        ydk::YLeaf stpxinconsistentstate; //type: Stpxinconsistentstate

}; // CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry


class CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable : public ydk::Entity
{
    public:
        Stpxrootguardconfigtable();
        ~Stpxrootguardconfigtable();

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

        class Stpxrootguardconfigentry; //type: CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry> > stpxrootguardconfigentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable


class CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry : public ydk::Entity
{
    public:
        Stpxrootguardconfigentry();
        ~Stpxrootguardconfigentry();

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

        ydk::YLeaf stpxrootguardconfigportindex; //type: int32
        ydk::YLeaf stpxrootguardconfigenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry


class CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable : public ydk::Entity
{
    public:
        Stpxrootinconsistencytable();
        ~Stpxrootinconsistencytable();

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

        class Stpxrootinconsistencyentry; //type: CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry> > stpxrootinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable


class CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry : public ydk::Entity
{
    public:
        Stpxrootinconsistencyentry();
        ~Stpxrootinconsistencyentry();

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

        ydk::YLeaf stpxrootinconsistencyindex; //type: int32
        ydk::YLeaf stpxrootinconsistencyportindex; //type: int32
        ydk::YLeaf stpxrootinconsistencystate; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry


class CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable : public ydk::Entity
{
    public:
        Stpxmistpinstancetable();
        ~Stpxmistpinstancetable();

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

        class Stpxmistpinstanceentry; //type: CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry> > stpxmistpinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable


class CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry : public ydk::Entity
{
    public:
        Stpxmistpinstanceentry();
        ~Stpxmistpinstanceentry();

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

        ydk::YLeaf stpxmistpinstanceindex; //type: int32
        ydk::YLeaf stpxmistpinstanceenable; //type: boolean
        ydk::YLeaf stpxmistpinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped4k; //type: binary

}; // CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry


class CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable : public ydk::Entity
{
    public:
        Stpxloopguardconfigtable();
        ~Stpxloopguardconfigtable();

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

        class Stpxloopguardconfigentry; //type: CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry> > stpxloopguardconfigentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable


class CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry : public ydk::Entity
{
    public:
        Stpxloopguardconfigentry();
        ~Stpxloopguardconfigentry();

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

        ydk::YLeaf stpxloopguardconfigportindex; //type: int32
        ydk::YLeaf stpxloopguardconfigenabled; //type: boolean
        ydk::YLeaf stpxloopguardconfigmode; //type: Stpxloopguardconfigmode
        class Stpxloopguardconfigmode;

}; // CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry


class CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable : public ydk::Entity
{
    public:
        Stpxloopinconsistencytable();
        ~Stpxloopinconsistencytable();

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

        class Stpxloopinconsistencyentry; //type: CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry> > stpxloopinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable


class CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry : public ydk::Entity
{
    public:
        Stpxloopinconsistencyentry();
        ~Stpxloopinconsistencyentry();

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

        ydk::YLeaf stpxloopinconsistencyindex; //type: int32
        ydk::YLeaf stpxloopinconsistencyportindex; //type: int32
        ydk::YLeaf stpxloopinconsistencystate; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry


class CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable : public ydk::Entity
{
    public:
        Stpxfaststartporttable();
        ~Stpxfaststartporttable();

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

        class Stpxfaststartportentry; //type: CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry> > stpxfaststartportentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable


class CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry : public ydk::Entity
{
    public:
        Stpxfaststartportentry();
        ~Stpxfaststartportentry();

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

        ydk::YLeaf stpxfaststartportindex; //type: int32
        ydk::YLeaf stpxfaststartportenable; //type: boolean
        ydk::YLeaf stpxfaststartportmode; //type: Stpxfaststartportmode
        ydk::YLeaf stpxfaststartportbpduguardmode; //type: Stpxfaststartportbpduguardmode
        ydk::YLeaf stpxfaststartportbpdufiltermode; //type: Stpxfaststartportbpdufiltermode
        class Stpxfaststartportmode;
        class Stpxfaststartportbpduguardmode;
        class Stpxfaststartportbpdufiltermode;

}; // CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry


class CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable : public ydk::Entity
{
    public:
        Stpxfaststartopermodetable();
        ~Stpxfaststartopermodetable();

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

        class Stpxfaststartopermodeentry; //type: CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry> > stpxfaststartopermodeentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable


class CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry : public ydk::Entity
{
    public:
        Stpxfaststartopermodeentry();
        ~Stpxfaststartopermodeentry();

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

        ydk::YLeaf stpxfaststartopermodeinstindex; //type: int32
        ydk::YLeaf stpxfaststartopermodeportindex; //type: int32
        ydk::YLeaf stpxfaststartopermode; //type: Stpxfaststartopermode
        class Stpxfaststartopermode;

}; // CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry


class CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable : public ydk::Entity
{
    public:
        Stpxbpduskewingtable();
        ~Stpxbpduskewingtable();

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

        class Stpxbpduskewingentry; //type: CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry> > stpxbpduskewingentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable


class CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry : public ydk::Entity
{
    public:
        Stpxbpduskewingentry();
        ~Stpxbpduskewingentry();

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

        ydk::YLeaf stpxbpduskewinginstanceindex; //type: int32
        ydk::YLeaf stpxbpduskewingportindex; //type: int32
        ydk::YLeaf stpxbpduskewinglastskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewtime; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry


class CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable : public ydk::Entity
{
    public:
        Stpxmstinstancetable();
        ~Stpxmstinstancetable();

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

        class Stpxmstinstanceentry; //type: CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry> > stpxmstinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable


class CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry : public ydk::Entity
{
    public:
        Stpxmstinstanceentry();
        ~Stpxmstinstanceentry();

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

        ydk::YLeaf stpxmstinstanceindex; //type: int32
        ydk::YLeaf stpxmstinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped4k; //type: binary
        ydk::YLeaf stpxmstinstanceremaininghopcount; //type: int32

}; // CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry


class CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable : public ydk::Entity
{
    public:
        Stpxmstinstanceedittable();
        ~Stpxmstinstanceedittable();

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

        class Stpxmstinstanceeditentry; //type: CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry> > stpxmstinstanceeditentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable


class CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry : public ydk::Entity
{
    public:
        Stpxmstinstanceeditentry();
        ~Stpxmstinstanceeditentry();

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

        ydk::YLeaf stpxmstinstanceeditindex; //type: int32
        ydk::YLeaf stpxmstinstanceeditvlansmap; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap2k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap3k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap4k; //type: binary

}; // CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry


class CISCOSTPEXTENSIONSMIB::Stpxmstporttable : public ydk::Entity
{
    public:
        Stpxmstporttable();
        ~Stpxmstporttable();

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

        class Stpxmstportentry; //type: CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry> > stpxmstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxmstporttable


class CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry : public ydk::Entity
{
    public:
        Stpxmstportentry();
        ~Stpxmstportentry();

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

        ydk::YLeaf stpxmstportindex; //type: int32
        ydk::YLeaf stpxmstportadminlinktype; //type: Stpxmstportadminlinktype
        ydk::YLeaf stpxmstportoperlinktype; //type: Stpxmstportoperlinktype
        ydk::YLeaf stpxmstportprotocolmigration; //type: boolean
        ydk::YLeaf stpxmstportstatus; //type: Stpxmstportstatus
        class Stpxmstportadminlinktype;
        class Stpxmstportoperlinktype;

}; // CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry


class CISCOSTPEXTENSIONSMIB::Stpxmstportroletable : public ydk::Entity
{
    public:
        Stpxmstportroletable();
        ~Stpxmstportroletable();

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

        class Stpxmstportroleentry; //type: CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry> > stpxmstportroleentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxmstportroletable


class CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry : public ydk::Entity
{
    public:
        Stpxmstportroleentry();
        ~Stpxmstportroleentry();

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

        ydk::YLeaf stpxmstportroleinstanceindex; //type: int32
        ydk::YLeaf stpxmstportroleportindex; //type: int32
        ydk::YLeaf stpxmstportrolevalue; //type: Stpxmstportrolevalue
        class Stpxmstportrolevalue;

}; // CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry


class CISCOSTPEXTENSIONSMIB::Stpxrstpporttable : public ydk::Entity
{
    public:
        Stpxrstpporttable();
        ~Stpxrstpporttable();

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

        class Stpxrstpportentry; //type: CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry> > stpxrstpportentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxrstpporttable


class CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry : public ydk::Entity
{
    public:
        Stpxrstpportentry();
        ~Stpxrstpportentry();

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

        ydk::YLeaf stpxrstpportindex; //type: int32
        ydk::YLeaf stpxrstpportadminlinktype; //type: Stpxrstpportadminlinktype
        ydk::YLeaf stpxrstpportoperlinktype; //type: Stpxrstpportoperlinktype
        ydk::YLeaf stpxrstpportprotocolmigration; //type: boolean
        class Stpxrstpportadminlinktype;
        class Stpxrstpportoperlinktype;

}; // CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry


class CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable : public ydk::Entity
{
    public:
        Stpxrstpportroletable();
        ~Stpxrstpportroletable();

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

        class Stpxrstpportroleentry; //type: CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry> > stpxrstpportroleentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable


class CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry : public ydk::Entity
{
    public:
        Stpxrstpportroleentry();
        ~Stpxrstpportroleentry();

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

        ydk::YLeaf stpxrstpportroleinstanceindex; //type: int32
        ydk::YLeaf stpxrstpportroleportindex; //type: int32
        ydk::YLeaf stpxrstpportrolevalue; //type: Stpxrstpportrolevalue
        class Stpxrstpportrolevalue;

}; // CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry


class CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable : public ydk::Entity
{
    public:
        Stpxrpvstporttable();
        ~Stpxrpvstporttable();

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

        class Stpxrpvstportentry; //type: CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry> > stpxrpvstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable


class CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry : public ydk::Entity
{
    public:
        Stpxrpvstportentry();
        ~Stpxrpvstportentry();

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

        ydk::YLeaf stpxrpvstportvlanindex; //type: int32
        ydk::YLeaf stpxrpvstportindex; //type: int32
        ydk::YLeaf stpxrpvstportstatus; //type: Stpxrpvstportstatus

}; // CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry


class CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable : public ydk::Entity
{
    public:
        Stpxsmstinstancetable();
        ~Stpxsmstinstancetable();

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

        class Stpxsmstinstanceentry; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry> > stpxsmstinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable


class CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry : public ydk::Entity
{
    public:
        Stpxsmstinstanceentry();
        ~Stpxsmstinstanceentry();

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

        ydk::YLeaf stpxsmstinstanceindex; //type: uint32
        ydk::YLeaf stpxsmstinstancevlansmapped1k2k; //type: binary
        ydk::YLeaf stpxsmstinstancevlansmapped3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceremaininghopcount; //type: int32
        ydk::YLeaf stpxsmstinstancecistregionalroot; //type: binary
        ydk::YLeaf stpxsmstinstancecistintrootcost; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry


class CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable : public ydk::Entity
{
    public:
        Stpxsmstinstanceedittable();
        ~Stpxsmstinstanceedittable();

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

        class Stpxsmstinstanceeditentry; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry> > stpxsmstinstanceeditentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable


class CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry : public ydk::Entity
{
    public:
        Stpxsmstinstanceeditentry();
        ~Stpxsmstinstanceeditentry();

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

        ydk::YLeaf stpxsmstinstanceeditindex; //type: uint32
        ydk::YLeaf stpxsmstinstanceeditvlansmap1k2k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditvlansmap3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditrowstatus; //type: RowStatus

}; // CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry


class CISCOSTPEXTENSIONSMIB::Stpxsmstporttable : public ydk::Entity
{
    public:
        Stpxsmstporttable();
        ~Stpxsmstporttable();

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

        class Stpxsmstportentry; //type: CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry> > stpxsmstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::Stpxsmstporttable


class CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry : public ydk::Entity
{
    public:
        Stpxsmstportentry();
        ~Stpxsmstportentry();

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

        ydk::YLeaf stpxsmstportindex; //type: int32
        ydk::YLeaf stpxsmstportstatus; //type: Stpxsmstportstatus
        ydk::YLeaf stpxsmstportadminhellotime; //type: uint32
        ydk::YLeaf stpxsmstportconfigedhellotime; //type: uint32
        ydk::YLeaf stpxsmstportoperhellotime; //type: int32
        ydk::YLeaf stpxsmstportadminmstmode; //type: Stpxsmstportadminmstmode
        ydk::YLeaf stpxsmstportopermstmode; //type: Stpxsmstportopermstmode
        class Stpxsmstportadminmstmode;
        class Stpxsmstportopermstmode;

}; // CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry

class CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvstPlus;
        static const ydk::Enum::YLeaf mistp;
        static const ydk::Enum::YLeaf mistpPvstPlus;
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf rapidPvstPlus;

};

class CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

};

class CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

};

class CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::Stpxloopguardglobaldefaultmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::Stpxfaststartglobaldefaultmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf released;
        static const ydk::Enum::YLeaf acquiredBySnmp;
        static const ydk::Enum::YLeaf acquiredByNonSnmp;

};

class CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf acquire;
        static const ydk::Enum::YLeaf releaseWithForce;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf rollBack;

};

class CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf notApplicable;

};

class CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enableForTrunk;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf network;

};

class CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpduguardmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpdufiltermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportadminlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

};

class CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportoperlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

};

class CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

};

class CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportadminlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

};

class CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportoperlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

};

class CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

};

class CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportadminmstmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf auto_;

};

class CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportopermstmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_STP_EXTENSIONS_MIB_ */

