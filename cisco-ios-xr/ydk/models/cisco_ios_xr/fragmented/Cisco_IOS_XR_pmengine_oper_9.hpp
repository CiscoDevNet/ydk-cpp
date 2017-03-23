#ifndef _CISCO_IOS_XR_PMENGINE_OPER_9_
#define _CISCO_IOS_XR_PMENGINE_OPER_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_5.hpp"
#include "Cisco_IOS_XR_pmengine_oper_8.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory : public Entity
{
    public:
        OtuHistory();
        ~OtuHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories> otu_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories : public Entity
{
    public:
        OtuPortHistories();
        ~OtuPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory> > otu_port_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory : public Entity
{
    public:
        OtuPortHistory();
        ~OtuPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class OtuSecond30History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History
        class OtuMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History
        class OtuHour24History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History> otu_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History> otu_minute15_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History> otu_second30_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History : public Entity
{
    public:
        OtuSecond30History();
        ~OtuSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuSecond30FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories
        class OtuSecond30OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories> otu_second30fec_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories> otu_second30otn_histories;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories : public Entity
{
    public:
        OtuSecond30FecHistories();
        ~OtuSecond30FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuSecond30FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory> > otu_second30fec_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory : public Entity
{
    public:
        OtuSecond30FecHistory();
        ~OtuSecond30FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuSecond30FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances> otu_second30fec_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances : public Entity
{
    public:
        OtuSecond30FecTimeLineInstances();
        ~OtuSecond30FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuSecond30FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance> > otu_second30fec_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance : public Entity
{
    public:
        OtuSecond30FecTimeLineInstance();
        ~OtuSecond30FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords> uc_words;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories : public Entity
{
    public:
        OtuSecond30OtnHistories();
        ~OtuSecond30OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuSecond30OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory> > otu_second30otn_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory : public Entity
{
    public:
        OtuSecond30OtnHistory();
        ~OtuSecond30OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuSecond30OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances> otu_second30otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances : public Entity
{
    public:
        OtuSecond30OtnTimeLineInstances();
        ~OtuSecond30OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuSecond30OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance> > otu_second30otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance : public Entity
{
    public:
        OtuSecond30OtnTimeLineInstance();
        ~OtuSecond30OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History : public Entity
{
    public:
        OtuMinute15History();
        ~OtuMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuMinute15FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories
        class OtuMinute15OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories> otu_minute15fec_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories> otu_minute15otn_histories;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories : public Entity
{
    public:
        OtuMinute15FecHistories();
        ~OtuMinute15FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuMinute15FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory> > otu_minute15fec_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory : public Entity
{
    public:
        OtuMinute15FecHistory();
        ~OtuMinute15FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuMinute15FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances> otu_minute15fec_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances : public Entity
{
    public:
        OtuMinute15FecTimeLineInstances();
        ~OtuMinute15FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuMinute15FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance> > otu_minute15fec_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance : public Entity
{
    public:
        OtuMinute15FecTimeLineInstance();
        ~OtuMinute15FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords> uc_words;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories : public Entity
{
    public:
        OtuMinute15OtnHistories();
        ~OtuMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory> > otu_minute15otn_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory : public Entity
{
    public:
        OtuMinute15OtnHistory();
        ~OtuMinute15OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances> otu_minute15otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances : public Entity
{
    public:
        OtuMinute15OtnTimeLineInstances();
        ~OtuMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance> > otu_minute15otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance : public Entity
{
    public:
        OtuMinute15OtnTimeLineInstance();
        ~OtuMinute15OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History : public Entity
{
    public:
        OtuHour24History();
        ~OtuHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories
        class OtuHour24FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories> otu_hour24fec_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories> otu_hour24otn_histories;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories : public Entity
{
    public:
        OtuHour24OtnHistories();
        ~OtuHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory> > otu_hour24otn_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory : public Entity
{
    public:
        OtuHour24OtnHistory();
        ~OtuHour24OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances> otu_hour24otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances : public Entity
{
    public:
        OtuHour24OtnTimeLineInstances();
        ~OtuHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance> > otu_hour24otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance : public Entity
{
    public:
        OtuHour24OtnTimeLineInstance();
        ~OtuHour24OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories : public Entity
{
    public:
        OtuHour24FecHistories();
        ~OtuHour24FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuHour24FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory> > otu_hour24fec_history;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory : public Entity
{
    public:
        OtuHour24FecHistory();
        ~OtuHour24FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OtuHour24FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances> otu_hour24fec_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances : public Entity
{
    public:
        OtuHour24FecTimeLineInstances();
        ~OtuHour24FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtuHour24FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance> > otu_hour24fec_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance : public Entity
{
    public:
        OtuHour24FecTimeLineInstance();
        ~OtuHour24FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords> uc_words;


}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::HoVcHistory : public Entity
{
    public:
        HoVcHistory();
        ~HoVcHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcPortHistories; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories> ho_vc_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories : public Entity
{
    public:
        HoVcPortHistories();
        ~HoVcPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcPortHistory; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory> > ho_vc_port_history;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory : public Entity
{
    public:
        HoVcPortHistory();
        ~HoVcPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class HoVcMinute15History; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History
        class HoVcHour24History; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History> ho_vc_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History> ho_vc_minute15_history;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History : public Entity
{
    public:
        HoVcMinute15History();
        ~HoVcMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15PathHistories; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories> ho_vc_minute15_path_histories;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories : public Entity
{
    public:
        HoVcMinute15PathHistories();
        ~HoVcMinute15PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15PathHistory; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory> > ho_vc_minute15_path_history;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory : public Entity
{
    public:
        HoVcMinute15PathHistory();
        ~HoVcMinute15PathHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class HoVcMinute15PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances> ho_vc_minute15_path_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances : public Entity
{
    public:
        HoVcMinute15PathTimeLineInstances();
        ~HoVcMinute15PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance> > ho_vc_minute15_path_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance : public Entity
{
    public:
        HoVcMinute15PathTimeLineInstance();
        ~HoVcMinute15PathTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Path; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path> path;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_status; //type: int32

        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs
        class PathEsRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs
        class PathEBs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs> path_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs> path_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs> path_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs> path_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs : public Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs : public Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs : public Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs : public Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs : public Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs : public Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs : public Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs : public Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath : public Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf far_end_path_e_ss; //type: uint32
        YLeaf far_end_path_se_ss; //type: uint32
        YLeaf far_end_path_c_vs; //type: uint32
        YLeaf far_end_path_ua_ss; //type: uint32



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History : public Entity
{
    public:
        HoVcHour24History();
        ~HoVcHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24PathHistories; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories> ho_vc_hour24_path_histories;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories : public Entity
{
    public:
        HoVcHour24PathHistories();
        ~HoVcHour24PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24PathHistory; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory> > ho_vc_hour24_path_history;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory : public Entity
{
    public:
        HoVcHour24PathHistory();
        ~HoVcHour24PathHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class HoVcHour24PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances> ho_vc_hour24_path_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances : public Entity
{
    public:
        HoVcHour24PathTimeLineInstances();
        ~HoVcHour24PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance> > ho_vc_hour24_path_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance : public Entity
{
    public:
        HoVcHour24PathTimeLineInstance();
        ~HoVcHour24PathTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Path; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path> path;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_status; //type: int32

        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs
        class PathEsRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs
        class PathEBs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs> path_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs> path_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs> path_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs> path_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs> path_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs : public Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs : public Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs : public Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs : public Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs : public Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs : public Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs : public Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs : public Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath : public Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf far_end_path_e_ss; //type: uint32
        YLeaf far_end_path_se_ss; //type: uint32
        YLeaf far_end_path_c_vs; //type: uint32
        YLeaf far_end_path_ua_ss; //type: uint32



}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::OpticsHistory : public Entity
{
    public:
        OpticsHistory();
        ~OpticsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticsPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories> optics_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories : public Entity
{
    public:
        OpticsPortHistories();
        ~OpticsPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OpticsPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory> > optics_port_history;


}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory : public Entity
{
    public:
        OpticsPortHistory();
        ~OpticsPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class OpticsHour24History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History
        class OpticsSecond30History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History
        class OpticsMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History> optics_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History> optics_minute15_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History> optics_second30_history;


}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_9_ */

