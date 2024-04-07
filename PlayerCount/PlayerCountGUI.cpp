#include "pch.h"
#include "PlayerCount.h"

std::string PlayerCount::GetPluginName() {
	return "PlayerCount";
}

void PlayerCount::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> PlayerCount
void PlayerCount::RenderSettings() {
	std::string playercount = "Player Count: " + std::to_string(*players.get());
	ImGui::TextUnformatted(playercount.c_str());
}


/*
// Do ImGui rendering here
void PlayerCount::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string PlayerCount::GetMenuName()
{
	return "PlayerCount";
}

// Title to give the menu
std::string PlayerCount::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void PlayerCount::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool PlayerCount::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool PlayerCount::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void PlayerCount::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void PlayerCount::OnClose()
{
	isWindowOpen_ = false;
}
*/
