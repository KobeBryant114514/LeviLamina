//
// Created by OEOTYAN on 2022/08/27.
//
#include "llapi/ParticleAPI.h"
#include "llapi/mc/Player.hpp"

#include "llapi/mc/ResourcePackRepository.hpp"
#include "llapi/mc/ResourcePackStack.hpp"
#include "llapi/event/LegacyEvents.h"

void InitParticle() {
    ll::event::legacy::ResourcePackInitEvent::subscribe([](const ll::event::legacy::ResourcePackInitEvent& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LiteLoader/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};