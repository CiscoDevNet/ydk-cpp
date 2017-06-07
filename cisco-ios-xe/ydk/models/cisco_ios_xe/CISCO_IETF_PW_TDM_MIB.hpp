#ifndef _CISCO_IETF_PW_TDM_MIB_
#define _CISCO_IETF_PW_TDM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_PW_TDM_MIB {

class CiscoIetfPwTdmMib : public Entity
{
    public:
        CiscoIetfPwTdmMib();
        ~CiscoIetfPwTdmMib();

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

        class Cpwctdmobjects; //type: CiscoIetfPwTdmMib::Cpwctdmobjects
        class Cpwctdmtable; //type: CiscoIetfPwTdmMib::Cpwctdmtable
        class Cpwctdmcfgtable; //type: CiscoIetfPwTdmMib::Cpwctdmcfgtable
        class Cpwctdmperfcurrenttable; //type: CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable
        class Cpwctdmperfintervaltable; //type: CiscoIetfPwTdmMib::Cpwctdmperfintervaltable
        class Cpwctdmperf1Dayintervaltable; //type: CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable

        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmcfgtable> cpwctdmcfgtable;
        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmobjects> cpwctdmobjects;
        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable> cpwctdmperf1dayintervaltable;
        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable> cpwctdmperfcurrenttable;
        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperfintervaltable> cpwctdmperfintervaltable;
        std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmtable> cpwctdmtable;
        
}; // CiscoIetfPwTdmMib


class CiscoIetfPwTdmMib::Cpwctdmobjects : public Entity
{
    public:
        Cpwctdmobjects();
        ~Cpwctdmobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwctdmcfgindexnext; //type: uint32

}; // CiscoIetfPwTdmMib::Cpwctdmobjects


class CiscoIetfPwTdmMib::Cpwctdmtable : public Entity
{
    public:
        Cpwctdmtable();
        ~Cpwctdmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwctdmentry; //type: CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry> > cpwctdmentry;
        
}; // CiscoIetfPwTdmMib::Cpwctdmtable


class CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry : public Entity
{
    public:
        Cpwctdmentry();
        ~Cpwctdmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwctdmrate; //type: int32
        YLeaf cpwctdmifindex; //type: int32
        YLeaf cpwcgentdmcfgindex; //type: uint32
        YLeaf cpwcreltdmcfgindex; //type: uint32
        YLeaf cpwctdmconfigerror; //type: Cpwctdmconfigerror
        YLeaf cpwctdmtimeelapsed; //type: int32
        YLeaf cpwctdmvalidintervals; //type: int32
        YLeaf cpwctdmvaliddayintervals; //type: int32
        YLeaf cpwctdmcurrentindications; //type: Cpwctdmcurrentindications
        YLeaf cpwctdmlatchedindications; //type: Cpwctdmlatchedindications
        YLeaf cpwctdmlastestimestamp; //type: uint32

}; // CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry


class CiscoIetfPwTdmMib::Cpwctdmcfgtable : public Entity
{
    public:
        Cpwctdmcfgtable();
        ~Cpwctdmcfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwctdmcfgentry; //type: CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry> > cpwctdmcfgentry;
        
}; // CiscoIetfPwTdmMib::Cpwctdmcfgtable


class CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry : public Entity
{
    public:
        Cpwctdmcfgentry();
        ~Cpwctdmcfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwctdmcfgindex; //type: uint32
        YLeaf cpwctdmcfgconferr; //type: Cpwctdmcfgconferr
        YLeaf cpwctdmcfgpayloadsize; //type: uint32
        YLeaf cpwctdmcfgpktreorder; //type: boolean
        YLeaf cpwctdmcfgrtphdrused; //type: boolean
        YLeaf cpwctdmcfgjtrbfrdepth; //type: uint32
        YLeaf cpwctdmcfgpayloadsuppression; //type: CpwctdmcfgpayloadsuppressionEnum
        YLeaf cpwctdmcfgconsecpktsinsynch; //type: uint32
        YLeaf cpwctdmcfgconsecmisspktsoutsynch; //type: uint32
        YLeaf cpwctdmcfgsetup2synchtimeout; //type: uint32
        YLeaf cpwctdmcfgpktreplacepolicy; //type: CpwctdmcfgpktreplacepolicyEnum
        YLeaf cpwctdmcfgavepktlosstimewindow; //type: int32
        YLeaf cpwctdmcfgexcessivepktlossthreshold; //type: uint32
        YLeaf cpwctdmcfgalarmthreshold; //type: uint32
        YLeaf cpwctdmcfgclearalarmthreshold; //type: uint32
        YLeaf cpwctdmcfgmissingpktstoses; //type: uint32
        YLeaf cpwctdmcfgtimestampmode; //type: CpwctdmcfgtimestampmodeEnum
        YLeaf cpwctdmcfgstoragetype; //type: StoragetypeEnum
        YLeaf cpwctdmcfgrowstatus; //type: RowstatusEnum
        class CpwctdmcfgpayloadsuppressionEnum;
        class CpwctdmcfgpktreplacepolicyEnum;
        class CpwctdmcfgtimestampmodeEnum;

}; // CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry


class CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable : public Entity
{
    public:
        Cpwctdmperfcurrenttable();
        ~Cpwctdmperfcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwctdmperfcurrententry; //type: CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry

        std::vector<std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry> > cpwctdmperfcurrententry;
        
}; // CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable


class CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry : public Entity
{
    public:
        Cpwctdmperfcurrententry();
        ~Cpwctdmperfcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwctdmperfcurrentmissingpkts; //type: uint32
        YLeaf cpwctdmperfcurrentpktsreorder; //type: uint32
        YLeaf cpwctdmperfcurrentjtrbfrunderruns; //type: uint32
        YLeaf cpwctdmperfcurrentmisorderdropped; //type: uint32
        YLeaf cpwctdmperfcurrentmalformedpkt; //type: uint32
        YLeaf cpwctdmperfcurrentess; //type: uint32
        YLeaf cpwctdmperfcurrentsess; //type: uint32
        YLeaf cpwctdmperfcurrentuass; //type: uint32
        YLeaf cpwctdmperfcurrentfc; //type: uint32

}; // CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry


class CiscoIetfPwTdmMib::Cpwctdmperfintervaltable : public Entity
{
    public:
        Cpwctdmperfintervaltable();
        ~Cpwctdmperfintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwctdmperfintervalentry; //type: CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry> > cpwctdmperfintervalentry;
        
}; // CiscoIetfPwTdmMib::Cpwctdmperfintervaltable


class CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry : public Entity
{
    public:
        Cpwctdmperfintervalentry();
        ~Cpwctdmperfintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwctdmperfintervalnumber; //type: uint32
        YLeaf cpwctdmperfintervalvaliddata; //type: boolean
        YLeaf cpwctdmperfintervalduration; //type: uint32
        YLeaf cpwctdmperfintervalmissingpkts; //type: uint32
        YLeaf cpwctdmperfintervalpktsreorder; //type: uint32
        YLeaf cpwctdmperfintervaljtrbfrunderruns; //type: uint32
        YLeaf cpwctdmperfintervalmisorderdropped; //type: uint32
        YLeaf cpwctdmperfintervalmalformedpkt; //type: uint32
        YLeaf cpwctdmperfintervaless; //type: uint32
        YLeaf cpwctdmperfintervalsess; //type: uint32
        YLeaf cpwctdmperfintervaluass; //type: uint32
        YLeaf cpwctdmperfintervalfc; //type: uint32

}; // CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry


class CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable : public Entity
{
    public:
        Cpwctdmperf1Dayintervaltable();
        ~Cpwctdmperf1Dayintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwctdmperf1Dayintervalentry; //type: CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_TDM_MIB::CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry> > cpwctdmperf1dayintervalentry;
        
}; // CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable


class CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry : public Entity
{
    public:
        Cpwctdmperf1Dayintervalentry();
        ~Cpwctdmperf1Dayintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwctdmperf1dayintervalnumber; //type: uint32
        YLeaf cpwctdmperf1dayintervalvaliddata; //type: boolean
        YLeaf cpwctdmperf1dayintervalduration; //type: uint32
        YLeaf cpwctdmperf1dayintervalmissingpkts; //type: uint32
        YLeaf cpwctdmperf1dayintervalpktsreorder; //type: uint32
        YLeaf cpwctdmperf1dayintervaljtrbfrunderruns; //type: uint32
        YLeaf cpwctdmperf1dayintervalmisorderdropped; //type: uint32
        YLeaf cpwctdmperf1dayintervalmalformedpkt; //type: uint32
        YLeaf cpwctdmperf1dayintervaless; //type: uint32
        YLeaf cpwctdmperf1dayintervalsess; //type: uint32
        YLeaf cpwctdmperf1dayintervaluass; //type: uint32
        YLeaf cpwctdmperf1dayintervalfc; //type: uint32

}; // CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry

class CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpayloadsuppressionEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpktreplacepolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ais;
        static const Enum::YLeaf implementationSpecific;

};

class CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgtimestampmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf differential;

};


}
}

#endif /* _CISCO_IETF_PW_TDM_MIB_ */

